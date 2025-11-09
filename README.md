My hand-make C-library

💡 About
There is three basic library I made for future C projects

libft - custom C library that I make from scratch.
The point is to understand memory, pointer and string functions in C standard library.
The workflow is the check the definition of each c funtion from the manual, understand it and re-implement it myself.
The library is used for all my following  C projects, and I keep reimforce it and make it more robust with the projects going on.

get_next_line - Line-by-Line File Reader in C	
A low-level implementation of a function to read a file line-by-line, managing buffers and memory efficiently. Handles edge cases like newline placement and buffer overflow.

ft_printf - Custom printf() from basic write()
A fully functional recreation of the C printf() function, supporting various format specifiers (%d, %s, %x, etc.) and flags. Built to deepen understanding of variadic functions.

🛠️ Usage
Requirements    C compiler (like gcc)

Instructions
- Go to the library directory and run:
$ make
- Other available make commands:
$ make bonus   # Compile extra bonus functions  
$ make clean   # Delete object files  
$ make fclean  # Delete object files and the static library  
$ make re      # Recompile everything  

- Use it in your code
#include "libft.h"

📋 Testing
I used multiple online testers to test my libft. These testers has different emphasises, covering different edge cases.
There are cases where my libft does not pass all tests, but I have reasoned it and compromised for a balanced solution.
Testers that I used include:
Tripouille/LibftTester

born2beroot	🛡️ Linux Server Hardening (Born2BeRoot)	
A project focused on system administration and cybersecurity, configuring a Linux VM with strict user permissions, firewall rules, and SSH key access.
