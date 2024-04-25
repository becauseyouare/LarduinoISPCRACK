# LarduinoISPHack
hack up the lgt8x ISP code to "work"

also does software serial passing through both directions the data from the programmed board

This is very much a WIP but in its current state the workflow goes something like
  * press button so D2 is grounded. Hold button down
  * do ISP while continuing to hold the button down
  * after board is programmed, unplug and replug the programmer running this software (yes a bug that needs to be fixed. Pressing reset on the programmer is not sufficient)
  * open terminal for data passthrough of programmed board
    
this code expects both software and hardware serial at 115200,8,N,1
