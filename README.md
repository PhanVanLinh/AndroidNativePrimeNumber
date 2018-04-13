# AndroidNativePrimeNumber

### Some note

#### When create project
Remember to tick on "Enable support C++" and "enable debug/exception" for C++

#### When create new C++ file
- Remember to add it to `CMakeList.txt` (AndroidStudio also warning about it)

#### When link java function to C++ function
- Remember to add `extern` keyword to each function (if not we will get exception `No implementation found for native`)

### Keyword
**CMake**: default build tool for native libraries
**LLDB**: The debugger Android Studio uses to debug native code.

### Reference
Follow tutorial here http://androidkt.com/android-ndk/