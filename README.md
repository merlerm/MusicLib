# MusicLib
C library designed for the TI MSP432P401R microprocessor and the TI Educational Booster Pack, to easily play and control songs with the integrated Piezo Buzzer.

## Installation
We recommend using [TI's Code Composer Studio](https://www.ti.com/tool/CCSTUDIO) for your project. After installing and creating a new project, simply download the header and c files included in the repository and place them in your project's folder.

This library makes use of TI's [DriverLib](https://www.ti.com/tool/MSPDRIVERLIB): download it and link the files required for the Piezo Buzzer: go to the Project's properties, and:
- Under Arm Compiler/Include Options include the path to your DriverLib installation (\<path>\simplelink_msp432p4_sdk_3_40_01_02\source).
- Under Arm Linker/File Search Path include the DriverLib (\<path>\simplelink_msp432p4_sdk_3_40_01_02\source\ti\devices\msp432p4xx\driverlib\ccs\msp432p4xx_driverlib.lib).

After that include the musicLib.h file in your code and you should be good to go! To learn how to use the library and play your own songs, check out our [wiki](https://github.com/Merlo17/MusicLib/wiki/1.-Home) and get started!

## Credits
Library developed by [Merlo17](https://github.com/Merlo17) and [matteo-crypto](https://github.com/matteo-crypto) for the Embedded Software for the Internet of Things at the University of Trento.
