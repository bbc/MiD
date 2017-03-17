Fizzyo

If you saw episode 3 featuring the Coxhead boys, you’ll have seen the connected Physio device (which we’ve affectionately dubbed ‘Fizzyo’) turning their daily Cystic Fibrosis exercises into video game sessions. We hope this will motivate the boys to do their physio every day and potentially help other kids with CF as well!
 

If you are a game developer wanting to donate some of your spare time to create some extra games for the boys to play, it’s as easy as 1-2-3.

The Fizzyo device appears as a Joystick on the computer, so you simply need to have your game interpret joystick inputs.

We allow for 2 types of inputs:

Breath – This appears as the Horizontal axis of the joystick, (float) returns breath strength from (-1 – 1) with 0 being not breathing, > 0.7 blowing or breathing out hard and < -.5 breathing in hard

Button Press – We’ve added 1 button to the device to make game interactions a little more sophisticated. This button appears as Fire1 from a joystick control.

If you are developing in Unity, you can use the following commands:

Input.GetButtonDown("Fire1");     //(bool) Will return if the Fizzyo button is pressed or not.
Input.GetAxis("Horizontal");      //(float) returns breath strength from (-1 – 1) with 0 being not breathing, > 0.7 blowing or breathing out hard and < -.5 breathing in hard

We will be uploading a sample project soon. But this should get you started.

Keep in mind that we don’t want to force the boys to blow to a certain pressure or for a certain amount of time. This is really up to the individual doing the exercises, we just want to detect a blow.

Designing a game for these limited interactions can be challenging! A good play pattern has been to use the blow to propel the character forward (at a constant speed) and the button to jump or fire a weapon.

If you are interested in making some additional games, please connect with @haiyan on twitter (https://twitter.com/haiyan)
Thanks from Big Life Fix and the Fizzyo Team!