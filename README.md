
This is a Rot-N/Rot cipher, a simple character substitution based on a shift/rotation of N letters in an alphabet.
E.g. one letter is replaced by another (always the same) that is located further (exactly N letters further) in the alphabet.
This app can take any cipher value between 2 and 25. This is the basis of the famous Caesar code and its many variants modifying the shift.

The following link explains Caesar cipher in more detail:

link==> https://en.wikipedia.org/wiki/Caesar_cipher

WINDOWS INSTALLATION: 

***When you download the setup.exe file, your browser might show you a warning. Once you download the setup.exe, your computer might show
   you a warning with an option that says "don't run"; dont click that. Click on "see more" and click on "run anyway". Doing this will 
   allow you to proceed with the installation.


Method 1 (easiest): Simply install the "rot cipher setup.exe" and follow along

Method 2 (not so easy): If you like to make things difficult in your life (just like me), copy the source code from the .cpp file or simply
                        make a new c++ project and add the "Source.cpp" file. Next, create a header file and name it "colours.h". Copy the
			the code from the "colours.txt" file and paste it inside the "colours.h" header file. Then, build and run.
			
  *If you are using visual studio 2019 for compiling the code, and want to create a standalone .exe, then watch the video
   linked right below. (i didn't make this video)
			
   link==> https://www.youtube.com/watch?v=AvrjQtFBJvk 


  *If you are using visual studio 2019 for compiling the code, and want to add an icon to the .exe file, watch the video
   linked right below. (i didn't make this video as well)
			
   link==> https://www.youtube.com/watch?v=5XI2SflPh78
			 
   You can use the "rot icon.ico" file as your icon or you can use a custom picture, convert it to .png or .ico and use that as your icon.


   note: In method 2, the instructions that have an asterisk before them are not mandatory for the program to run. If a standalone .exe
   of the program is not made, it would still run perfectly, but would be dependant on the project components to run.



LINUX INSTALLATION:

Method 1: (using wine to run .exe file)

**works only on debian based systems

**must have wine installed on your system

To install wine on kali or debian: https://computingforgeeks.com/how-to-install-wine-on-kali-linux-and-debian-64-bit/

Open your terminal and type the following commands in order:

	cd ~/

	sudo apt-get install git

	git clone https://github.com/axelbozic/rot-cipher

	cd ~/rot-cipher

	sudo bash installer.sh

	cd ~/
	
	
To run the program, simply type the following command in your terminal:

	rot


Method 2: (using g++ to build and run .cpp file)


**works only on debian based systems.


Open your terminal and type the following commands in order:

	cd ~/

	sudo apt-get install git

	git clone https://github.com/axelbozic/rot-cipher

	cd ~/rot-cipher

	sudo bash ./g++install.sh
	
	cd ~/


To run the program, simply type the following command in your terminal:

	rot


			 


**If you want to run this program on any distro that does not use the apt package manager, you would need
  to customize the .sh installation files. Otherwise, you can simply translate each command in the .sh files 
  according to your package managers.
