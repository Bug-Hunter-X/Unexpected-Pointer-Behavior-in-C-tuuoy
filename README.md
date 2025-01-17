# Unexpected Pointer Behavior in C
This repository demonstrates a potential issue with pointer usage in C where the expected value modification might not occur. The code shows a simple example, and the solution provides ways to mitigate this behavior.

## Bug Description
The main issue lies in the potential for compiler optimizations to interfere with the expected behavior of pointer assignments.

## Bug Solution
The solution focuses on using compiler flags to prevent such optimizations and ensures the intended value modification happens.