printf Project
General Requirements
Allowed editors: vi, vim, emacs
Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
Code Style: All code should use the Betty style, checked using betty-style.pl and betty-doc.pl
Global Variables: Not allowed
Functions per File: No more than 5 functions per file
Header File: All function prototypes should be included in main.h
Header File Guard: All header files should be include guarded
README.md: Mandatory at the root of the project folder
Authorized Functions and Macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation
Your code will be compiled with:

sh
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
GitHub
There should be one project repository per group. Other members should not fork the project to ensure only one team member has the repository in their GitHub account; otherwise, you risk scoring 0%.

Testing
We encourage you to work together on a set of tests. If the task does not specify what to do with an edge case, do the same as printf.

Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. You are not allowed to publish any content of this project. Any form of plagiarism is strictly forbidden and will result in removal from the program.

Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Mandatory

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
Details: Write output to stdout, the standard output stream. The format string is composed of zero or more directives. See man 3 printf for more detail.
Conversion Specifiers to Handle:
c: char
s: string
%: percent sign
Repo:

GitHub repository: printf
1. Education is when you read the fine print. Experience is what you get if you don't
Mandatory

Handle the following conversion specifiers:

d: integer
i: integer
Repo:

GitHub repository: printf
2. Just because it's in print doesn't mean it's the gospel
Mandatory

Create a man page for your function.

File: man_3_printf
Repo:

GitHub repository: printf
