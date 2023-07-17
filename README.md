# 0x16. C - Simple Shell

## Project Details
- Project: Simple Shell
- Language: C
- Project Type: Group project
- Syscall
- Project Lead: Julien Barbier
- Weight: 10
- Team: Gideon Bature, Wright OGUNDIYA
- Start Date: Jul 12, 2023 6:00 AM
- End Date: Jul 27, 2023 6:00 AM
- Checker Release Date: Jul 26, 2023 1:12 AM
- Auto review will be launched at the deadline

## Concepts
For this project, you are expected to be familiar with the following concepts:
- Everything you need to know to start coding your own shell
- Approaching a Project
- Background Context
- Write a simple UNIX command interpreter
- "The Gates of Shell" by Spencer Cheng, featuring Julien Barbier

## Important message from Julien
Julien emphasizes the importance and challenge of the Simple Shell project. He reminds students of the following key points:
- Basics of programming, C, thinking like an engineer, group work, and learning how to learn.
- Copying code or looking at solutions is strictly prohibited.
- Never copy code, look at solutions, or give solutions to friends.
- Always write code alone from scratch after getting help to ensure understanding.
- Sharing resources or using AI tools like ChatGPT for coding solutions is not allowed.
- The project provides all the necessary knowledge, and using external resources or shortcuts undermines learning.
- Group projects require collaboration, responsibility, and mutual understanding of the code pushed to the repository.
- Plagiarism and cheating will not be tolerated.

## Resources
Students are advised to read or watch the following materials:
- Unix shell
- Thompson shell
- Ken Thompson
- Everything you need to know to start coding your own shell concept page
- Man or help: sh (Run sh as well)

## Learning Objectives
By the end of this project, students should be able to explain the following topics without using Google:
- General knowledge about the design and implementation of the original Unix operating system
- The first version of the UNIX shell was written by
- The inventor of the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How a shell works
- The meaning of pid and ppid
- How to manipulate the environment of the current process
- The difference between a function and a system call
- How to create processes
- The three prototypes of the main function
- How the shell uses the PATH to find programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- The meaning of EOF (end-of-file)

## Copyright - Plagiarism
Students are reminded of the strict guidelines regarding plagiarism:
- All solutions for the tasks should be developed by the students themselves.
- Copying and pasting someone else's work is strictly forbidden.
- Publishing any content of this project is not allowed.
- Plagiarism will result in removal from the program.

## Requirements
General requirements for the project include:
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- The project should include a README.md file at the root of the folder
- Code should follow the Betty style, which will be checked using betty-style.pl and betty-doc.pl
- The shell should not have any memory leaks
- Each file should contain no more than 5 functions
- All header files should be include guarded
- System calls should be used only when necessary
- A README file should be included with a description of the project
- An AUTHORS file should be created at the root of the repository, listing all individuals who contributed to the repository

## GitHub Repository
The project should be organized in a GitHub repository with the name "simple_shell". It is important to ensure that both partners have a repository with the same name to avoid a 0% score. Collaborators should be added to the repository to facilitate collaboration.

## More Information
- The output of the shell should be the same as the sh (/bin/sh) shell, including error output.
- Allowed functions and system calls include access, chdir, close, closedir, execve, exit, _exit, fflush, fork, free, getpid, isatty, kill, malloc, open, opendir, perror, read, readdir, signal, stat (__xstat), lstat (__lxstat), fstat (__fxstat), strtok, wait, waitpid, wait3, wait4, and write.
- Compilation of the shell should follow the command: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh.
- Testing the shell should include interactive
- Testing the shell should include interactive tests, scripts tests, and edge case tests.
- Interactive tests should be similar to a shell session and include the shell prompt ($), user commands, and expected outputs.
- Script tests should include various scripts with different commands and expected outputs.
- Edge case tests should consider unconventional scenarios and verify the behavior of the shell.

## General Structure
The project should follow this general structure:
- A main.c file that contains the main function
- A shell.h header file that includes all the function prototypes and struct declarations
- A shell.c file that contains the shell loop and shell-related functions
- Additional C files as needed for specific functions

## Compilation
To compile the shell, use the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


## Testing

Your shell should work in both interactive and non-interactive modes. Here are examples of usage:

Interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($) exit
$


Non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_script.sh
$



## How to Use
To use the shell, follow these steps:
1. Compile the shell using the compilation command mentioned above.
2. Run the compiled program using `./hsh`.

## Example Usage
Here's an example usage of the shell:

## Tasks

The project consists of the following tasks:

1. **Betty would be proud**

   Write a beautiful code that passes the Betty checks.

2. **Simple shell 0.1**

   Write a UNIX command line interpreter that displays a prompt and waits for the user to enter a command. Handle basic commands without arguments and display the prompt again after executing a command. Print an error message if an executable is not found.

3. **Simple shell 0.2**

   Extend the shell to handle command lines with arguments.

4. **Simple shell 0.3**

   Enhance the shell to handle the PATH variable and only call fork if the command exists.

5. **Simple shell 0.4**

   Implement the exit built-in command that exits the shell. The command should be interpreted as "exit" without any arguments.

6. **Simple shell 1.0**

   Implement the env built-in command that prints the current environment. Handle variables and replacements. Handle the `$?` and `$$` variables.

7. **Simple shell 0.1.1** (Advanced)

   Write your own `getline` function, using a buffer to read many characters at once and minimize the use of the `read` system call.

8. **Simple shell 0.2.1** (Advanced)

   Implement the shell without using `strtok`.
### Tasks

9. **Simple shell 0.4.1** (Advanced)

   Enhance the exit built-in command to handle an optional status argument. The command should be interpreted as "exit" followed by an integer status.

10. **setenv, unsetenv** (Advanced)

    Implement the setenv and unsetenv built-in commands. The setenv command initializes a new environment variable or modifies an existing one. The unsetenv command removes an environment variable.

11. **cd** (Advanced)

    Implement the cd built-in command, which changes the current directory of the shell process. The command should support both absolute and relative directory paths.

12. **;** (Advanced)

    Handle the semicolon (;) as a command separator. Commands separated by semicolons should be executed sequentially.

13. **&& and ||** (Advanced)

    Handle the logical operators && and ||. The commands separated by these operators


## Authors
- Gideon Bature
- Wright OGUNDIYA

## License
This project is licensed under the MIT License - see the LICENSE file for details.


