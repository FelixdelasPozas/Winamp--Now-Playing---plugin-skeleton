Now Playing! Plugin for Winamp
==============================

# Summary
- [Description](#description)
- [Compilation](#compilation-requirements)
- [Install](#install)
- [Repository information](#repository-information)

# Description
Winamp plugin that writes relevant information about the audio file currently being played to a file on disk. The plugin could
be easily modified to do other thing like, for example, obtain audio file metadata using the IPC_GET_EXTENDED_FILE_INFO message. It is
shown here as an example of obtaning the Winamp main window messages. 

# Compilation requirements

Winamp is a 32 bits Windows program and so are its plugins, because of that a compiler that produces 32 bits Windows binaries is required. 

## To build the tool:
* cross-platform build system: [CMake](http://www.cmake.org/cmake/resources/software.html).
* compiler: [Mingw32](http://sourceforge.net/projects/mingw-w64/) on Windows.

# Install
The only current option is build from source as binaries are not provided. 

# Repository information
**Version**: 1.0.0

**Status**: finished

**cloc statistics**

| Language                     |files          |blank        |comment           |code  |
|:-----------------------------|--------------:|------------:|-----------------:|-----:|
| C++                          |    1          |   34        |     47           | 111  |
| C/C++ Header                 |    1          |    9        |     7            |  26  |
| CMake                        |    1          |    9        |     21           |  11  |
| **Total**                    |   **3**       |  **52**     |   **75**         |**148**|
