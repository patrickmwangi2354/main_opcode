Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
You have to use atoi to convert the argument to an int
If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
You do not have to compile with any flags

///////////////////
Here's how it works:

First, we check that the program has been called with exactly one argument using argc. If not, we print "Error" and return with status 1.

We then use atoi to convert the argument to an integer.

If the integer is negative, we print "Error" and return with status 2.

We then create a pointer to the main function using (unsigned char*)main.

Finally, we loop over the first num_bytes bytes of the main function and print out their opcodes in hexadecimal format using printf("%02x", ...). We print each opcode on the same line, without any spaces or separators.

We then print a new line character and return with status 0.

Note that the program assumes that the size of a function pointer is the same as the size of an unsigned char pointer. This should be true on most modern architectures, but it's not guaranteed by the C standard.