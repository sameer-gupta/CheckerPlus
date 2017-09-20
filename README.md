				Checker++ v1.0

				All rights reserved
			Copyright (c) 2015 Sameer Gupta
		

Introduction
============

Checker++ is a free software to check C/C++ program, with the provides input and output 
files.  It can create a workspace to repeatedly evaluate if given Code produces the correct 
Output in accordance to the given output file provided by the user. Code written only in
C/C++ is acceptable by the Checker.


Requirement
============

C/C++ compiler must be installed on the system already, However IDE is not required
(I prefer DevCpp, but you can use any compiler.)


How to Use
===========

1. Checker require source code file along with input and output file to be placed in the 
   Software’s directory.

	NOTE:   source file must be named  - file.cpp
		Input file must be named   - input.txt
		Output file must be named  - output.txt

For more clarity use files in example folder, it contains program to add 2 numbers

CAUTION!!! It is very important to rename the 3 file according to the above convention.

2. Run Initiate.exe to create the workspace of carrying out checking and debugging process

3. Open	workspace.cpp and use it to edit, debug your code, do not edit the self generated
   2 lines of code. Rest use the workspace as you normally as you use your IDE, no problem
   in making/using functions, classes etc outside the main() function.  

4. Compile and Run workspace.cpp, close the black Command prompt pop up screen.

5. Run Checker.exe to check if your program works correctly or not.

6. You can view the output produce by your code after compiling and executing worspace.cpp in
   your_code.txt situated in the directory itself.

7. Repeat step 3-5 to continue editing and debugging your code in workspace.cpp.
   your original code will remain in file.cpp in the directory.
   

8. After the checking process is complete, Use Clear.exe to remove the extra file from
   Previous checking, to clean folder for fresh start

CAUTION!!!
============

1. (SUPER CAUTION!!!) Your program should contain only one main function named as "int main()"
   with no character following this in rest of the line.

2. Source file, input and output file must be given by user.
 
2. Follow the naming convention strictly as described above.

3. Checking can only be done for one program at a time. To check new program use Clear.exe to 
   delete all previous files, for new program to be checked.

4. Use Clear only after you are finished using checking process.

5. It is recommended to save a copy of source file; input and output file elsewhere before placing
 It in checker folder.


LICENSE
========


The MIT License (MIT)

Copyright (c) 2015 Sameer Gupta

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.	



CONTACT
=======

Sameer Gupta
E-mail: sameerpowercomputer@yahoo.co.in


THANK YOU FOR USING CHECKER++ V1.0!!! :)
=====================================

PS. Most difficult task in making a software is naming it.

