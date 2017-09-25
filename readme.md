Now Playing! Plugin for Winamp
==============================

# Summary
- [Description](#description)
- [Compilation](#compilation-requirements)
- [Install](#install)
- [Repository information](#repository-information)

# Description
Winamp plugin that writes relevant information about the audio file currently being played to a file on disk located in the Winamp plugins
directory. The plugin could be easily modified to do other things like, for example, obtain audio file metadata using the 
IPC_GET_EXTENDED_FILE_INFO message. It is shown here as an example of intercepting the Winamp main window messages.

It's main use now is to write a file to be used as input for an OBS source input that shows what is currently being played on Winamp on a scrolling bar. 

# Compilation requirements

Winamp is a 32 bits Windows program and so are its plugins and, because of that, a compiler that produces 32 bits Windows binaries is required. 

## To build the tool:
* cross-platform build system: [CMake](http://www.cmake.org/cmake/resources/software.html).
* compiler: [Mingw32](http://sourceforge.net/projects/mingw-w64/) on Windows.

# Install
Binaries will not be provided for this repository. The code is very specific about the format of the songs I use so
probably you want to modify the source and compile it customized to your preferences.  

# Repository information
**Version**: 1.0.0

**Status**: finished

**License**: GNU General Public License 3

**cloc statistics**

| Language                     |files          |blank        |comment           |code  |
|:-----------------------------|--------------:|------------:|-----------------:|-----:|
| C++                          |    1          |   35        |     48           | 119  |
| C/C++ Header                 |    1          |    9        |     7            |  26  |
| CMake                        |    1          |    9        |     21           |  11  |
| **Total**                    |   **3**       |  **53**     |   **76**         |**156**|
