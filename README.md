<div align="center">

# Drast Programming Language

![issues](https://img.shields.io/github/issues/Malvion/drast?style=flat-square)
![license](https://img.shields.io/github/license/Malvion/drast?style=flat-square)

A general-purpose language written in cpp20, that is meant to be a more modernized version of C, while still maintaining its simplicity.

[Docs](docs/docs.md) | [TODO](TODO.md)

</div>

> **NOTE:** This is still in its development phase, so expect some bugs and missing features.

## Features

- **Super Simple and Easy to learn syntax** - Similar to C++
- **Semi-Object Oriented** - Structs have functions and initializers
- **Templates** - Different Syntax than C++
- More are yet to come...

## Example

```c
import io

int :: main(int argc, string[] argv) {
    int variable = 40
    print("Hello World!", variable, "\n")
    
    return 0
}
```

## Building

When building drast, it is really similar for Windows, MacOS, and Linux

In order to build drast, you first download and install a few dependencies/apps:
    
    For Windows, download and install CMake and Visual Studio Code
    For MacOS, do `brew install cmake`
    For Linux, do `sudo apt install git cmake`
    
After downloading and installing the required dependencies/apps, do:
```batch
git clone --recursive https://github.com/Malvion/drast
cd drast
mkdir build
cd build
cmake ..
```
    
If all goes well, drast should be built and ready to run!

NOTE: For Windows, inside the build directory you will find a Visual Studio Code. Double this code, then build and run the code!

## Social

- [Discord Server](https://discord.gg/ZbmHzNmzPH)
