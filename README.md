Github repo:
https://github.com/jamelvin/SHI-Webinar-Debugging

# IACS_DebugWorkshop

Instructions for the workshop on April 13, 2019 at Institute of Advanced Computational Sciences (IACS) at Stony Brook University.

We will be using GDB (GNU Project Debugger) for all examples.  To prevent the need for everyone to have GDB installed on their computers and be familiar with unix, the examples can be completed using the web based gdb found at https://www.onlinegdb.com/.  There are instructions in the repository (OnlineGDB-Instructions.pdf) for how to take an example and get yourself to a gdb command prompt so that you can follow along interactively.

Below are some brief instructions for installing GDB (if necessary) for various OS.

**Linux:**   
- GDB should come installed as a standard package on your system.  Check to see if it is installed by typing `gdb --v`.
- If you don't already have it, you should be able to install it using your package manager or from https://www.gnu.org/software/gdb/download/.
  
**Mac:**   
- First open your terminal and install the Brew package manager by typing `/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`.
- Use Brew to install the GDB application: `brew install gdb`
- To check the installation, type `gdb --v` and you'll see the software version if the installation was successful.
  
**Windows:**   
- The simplest way to install GDB is within MinGW (Minimalist GNU for Windows). Clicking the following link will start the download: https://sourceforge.net/projects/mingw/files/latest/download
- Complete the MinGW installation in the usual Windows fashion. The default settings should be sufficient.
- A Graphical User Interface (GUI) should automatically pop up. If not, navigate to `C:\MinGW\libexec\mingw-get\guimain.exe` and execute the program. This should bring up the GUI window.
- Use the GUI to install the "mingw32-gbd bin" package. Click on the box to mark it for installation.
- To complete the installation, click on `Installation` &rarr; `Apply Changes`, then click on `Apply` in the resulting window.
- Open the Windows command prompt by searching for `cmd`
- To open the GDB program, type into the command prompt: `c:\mingw\bin\gdb.exe`
- _You may get an error if you are missing any libraries or dependencies. For example, a possible error is the lack of a gcc compiler. To fix this, simply search for a package that seems reasonable, such as "mingw32-gcc" and install it._


****Valgrind installation instructions****

Valgrind homepage: http://www.valgrind.org/ 

Valgrind source code: http://valgrind.org/downloads/


**Unix**:

sudo apt install valgrind

**Mac**:

Brew install:

brew install valgrind

Manual install:

Download source code from here: http://valgrind.org/downloads/

cd path/to/valgrind-x.x.0

Go through the file README and do the following:

./configure --prefix=/usr/local

make

sudo make install
