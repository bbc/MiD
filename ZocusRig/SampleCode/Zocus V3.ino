/*
!!!Zero points in Centre of Zoom and Focus travel!!!
Red Bear Lab Bled Micro firmware for Zocus
Written by Ross Atkin, based on Red bear Lab's 'Simple Chat' example
Designed for the 'Zocus Rig', by Jude Pullen
 */
//"services.h/spi.h/boards.h" is needed in every new project
#include <SPI.h>
#include <boards.h>
#include <Keyboard.h>
#include <RBL_nRF8001.h>
#include <Servo.h> 
int go = 0;
int nogo = 0;
long message = 0;
int val = 90; //Set zero point for Zoom - keep at 90
int val2 = 59; //Set zero point for Focus - original 57 // best to date 59
Servo myservo;
Servo myservo2;
String string;
void setup()
{  
  
  // Set your BLE Shield name here, max. length 10
  ble_set_name("Trigger");
  Keyboard.begin();
  Serial.println("hello");
  myservo.attach(11);
  myservo2.attach(10);
  myservo.write(val);
  myservo2.write(val2);
  
  pinMode(13, OUTPUT);
        
  
  // Init. and start BLE library.
  ble_begin();
  string = String("0");
  
  // Enable serial debug
  Serial.begin(57600);
}
unsigned char buf[16] = {0};
unsigned char len = 0;
void loop()
{
  if ( ble_available() )
  {
    while ( ble_available() )
      
      message = ble_read();
      
      //Serial.print(message);
      
      if( message > 0){
        
      if( message < 101){
      val = map(message, 0, 100, 179, 0); //last two numbers adjust original 177 and 2 // best to date 179, 0
      myservo.write(val);
      Serial.print(" Zoom ");
      Serial.println(val);
      }
        
      if( message > 155){
      val2 = map(message, 155, 255, 3, 117); // last two numbers original 2 and 114 // best to date 2, 117
      myservo2.write(val2);
      Serial.print(" Focus ");
      Serial.println(val2);
      
      }
      }
      
    Serial.println();
  }
  
  
  if ( Serial.available() )
  {
    delay(5);
    
    while ( Serial.available() )
        ble_write( Serial.read() );
  }
  
  ble_do_events();
}

