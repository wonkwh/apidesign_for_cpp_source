apidesign_for_cpp_source
========================

## Building From The Command Line (Linux/Mac/Windows)

With the ‘cmake’ command in your path, you can simply do the following to create a set of Makefiles for your platform and then build all of the examples. This should work from a Linux shell, a Mac OS X Terminal, or a Cygwin shell on Windows (when using Cygwin you should use Cygwin’s /usr/bin/cmake version of CMake).

    % cd <source-code-root-dir>
    % mkdir build
    % cd build
    % cmake -G "Unix Makefiles" ..
    % make
  
## Building With XCode on Mac OS X

If you prefer to use the XCode IDE on the Mac rather than compile from the Terminal, then you can simply do the following:

    % cd <source-code-root-dir>
    % mkdir build
    % cd build
    % cmake -G "Xcode" ..
    % open APIBook.xcodeproj
  
You can then build, run, and debug all of the examples from within XCode.



