apidesign_for_cpp_source
========================

Building From The Command Line (Linux/Mac/Windows)
With the ‘cmake’ command in your path, you can simply do the following to create a set of Makefiles for your platform and then build all of the examples. This should work from a Linux shell, a Mac OS X Terminal, or a Cygwin shell on Windows (when using Cygwin you should use Cygwin’s /usr/bin/cmake version of CMake).

% cd <source-code-root-dir>
% mkdir build
% cd build
% cmake -G "Unix Makefiles" ..
% make
Note, you can also run the configure.sh script in the root directory to create the build directory and perform the cmake command for you.

Building With XCode on Mac OS X
If you prefer to use the XCode IDE on the Mac rather than compile from the Terminal, then you can simply do the following:

% cd <source-code-root-dir>
% mkdir build
% cd build
% cmake -G "Xcode" ..
% open APIBook.xcodeproj
You can then build, run, and debug all of the examples from within XCode.

Build With Visual Studio on Windows
If you’re on Windows then you can configure and build the examples using Visual Studio as follows:

Run the CMake GUI
Specify the root directory of this package as the source location
Create a ‘build’ subdirectory and specify that as the build location
Press the “Configure” button (you may have to press it twice)
Press the “Generate” button
This should generate a Visual Studio solution file called APIBook.sln in the build directory that you specified. You can open that file in Visual Studio to build, run, and debug the examples.
