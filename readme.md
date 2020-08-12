# Bluetooth RGB Project

This project came about because I wanted to challenge myself and see if I could create a functioning system. I created a PCB for the arduino, and bluetooth module. I could have included the mosfets I needed on that same PCB but I had already created that circuit on a separate prototype board, so it wasn't needed in my case.

The schematic and layout for the PCB is probably atrocious, however, it worked when I was testing it so I don't mind. 

## Parts Used

For this project, I used very few parts, I have listed them out below:
* Arduino Nano
* HC-06 Bluetooth Module
* N-Channel Mosfets (ADA355)
* Screw Terminals (for neatening things up, realistically not needed)

## PCB

In the repo is the GERBER files that I exported from EasyEDA, and sent to JLCPCB to get manufactured. I have included a picture of the circuit board layout, the PCB schematic, and the constructed PCB. It isn't perfect by any means, however, it worked for me, and still does work for me today. 

**SCHEMATIC**
![Schematic Image](https://i.imgur.com/JJZhX2Y.png)

**PCB**

![PCB Image](https://i.imgur.com/weeETZr.png)

**Constructed PCB**

![Constructed PCB Image](https://i.imgur.com/Lc8WrYQ.jpg)

## Credits

The bluetooth connection & communication code I sourced from CodingWithMitch on Youtube, he has a wonderful 4 part series on how to send data with Bluetooth. I highly recommend you check him out:
* [Video](https://www.youtube.com/watch?v=Fz_GT7VGGaQ)
* [His Github Repo](https://github.com/mitchtabian/Sending-and-Receiving-Data-with-Bluetooth)

