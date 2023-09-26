# 0x07. C - Even more pointers, arrays and strings

## Table of Contents
1. [Description](#description)
2. [Concepts](#concepts)
3. [Resources](#resources)
4. [Learning Objectives](#learning-objectives)
5. [Requirements](#requirements)
6. [Tasks](#tasks)
   - [Task 0: `_memset`](#task-0-memset)
   - [Task 1: `_memcpy`](#task-1-memcpy)
   - [Task 2: `_strchr`](#task-2-strchr)
   - [Task 3: `_strspn`](#task-3-strspn)
   - [Task 4: `_strpbrk`](#task-4-strpbrk)
   - [Task 5: `_strstr`](#task-5-strstr)
   - [Task 6: "Chess is mental torture"](#task-6-chess-is-mental-torture)
   - [Task 7: "The line of life is a ragged diagonal between duty and desire"](#task-7-the-line-of-life-is-a-ragged-diagonal-between-duty-and-desire)
   - [Task 8: "Double pointer, double fun"](#task-8-double-pointer-double-fun)
   - [Task 9: "My primary goal of hacking was the intellectual curiosity, the seduction of adventure"](#task-9-my-primary-goal-of-hacking-was-the-intellectual-curiosity-the-seduction-of-adventure)

## Description<a name="description"></a>
This repository contains C programs that serve as solutions to various tasks related to pointers, arrays, and strings. These tasks are designed to help you reinforce your understanding of these fundamental concepts in the C programming language.

## Concepts<a name="concepts"></a>
The primary concept covered in this project is **pointers and arrays**.

## Resources<a name="resources"></a>
To complete these tasks, you may find the following resources helpful:
- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C – Pointer to Pointer with Example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [Multi-dimensional Arrays in C](https://www.geeksforgeeks.org/multi-dimensional-arrays-c-cpp/)
- [Two-dimensional (2D) arrays in C programming with example](https://www.codesdope.com/c-two-dimensional-2d-arrays-in-c/)
- C Standard Library functions for manipulating strings

## Learning Objectives<a name="learning-objectives"></a>
By completing these tasks, you should be able to explain to anyone, without the help of Google:
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C Standard Library functions to manipulate strings

## Requirements<a name="requirements"></a>
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a newline
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library functions like `printf`, `puts`, etc.; they are forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, as it will be provided
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

### More Info
- You do not need to learn about pointers to functions, arrays of structures, `malloc`, and `free` for this project.

## Tasks<a name="tasks"></a>

### Task 0: `_memset`<a name="task-0-memset"></a>
Write a function that fills memory with a constant byte.

Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
- It returns a pointer to the memory area `s`.
- FYI: The standard library provides a similar function: `memset`. You can run `man memset` to learn more.

### Task 1: `_memcpy`<a name="task-1-memcpy"></a>
Write a function that copies a memory area.

Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`.
- It returns a pointer to `dest`.
- FYI: The standard library provides a similar function: `memcpy`. You can run `man memcpy` to learn more.

### Task 2: `_strchr`<a name="task-2-strchr"></a>
Write a function that locates a character in a string.

Prototype: `char *_strchr(char *s, char c);`
- The `_strchr()` function returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.
- FYI: The standard library provides a similar function: `strchr`. You can run `man strchr` to learn more.

### Task 3: `_strspn`<a name="task-3-strspn"></a>
Write a function that gets the length of a prefix substring.

Prototype: `unsigned int _strspn(char *s, char *accept);`
- The `_strspn()` function returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`.

### Task 4: `_strpbrk`<a name="task-4-strpbrk"></a>
Write a function that searches a string for any of a set of bytes.

Prototype: `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
- It returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.
- FYI: The standard library provides a similar function: `strpbrk`. You can run `man strpbrk` to learn more.

### Task 5: `_strstr`<a name="task-5-strstr"></a>
Write a function that locates a substring.

Prototype: `char *_strstr(char *haystack, char *needle);`
- The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`.
- The terminating null bytes (`\0

`) are not compared.
- It returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

### Task 6: "Chess is mental torture"<a name="task-6-chess-is-mental-torture"></a>
Write a function that prints a chessboard.

- Prototype: `void print_chessboard(char (*a)[8]);`

### Task 7: "The line of life is a ragged diagonal between duty and desire"<a name="task-7-the-line-of-life-is-a-ragged-diagonal-between-duty-and-desire"></a>
Write a function that prints the chessboard.

- Prototype: `void print_diagsums(int *a, int size);`

### Task 8: "Double pointer, double fun"<a name="task-8-double-pointer-double-fun"></a>
Write a function that sets the value of a pointer to a char.

- Prototype: `void set_string(char **s, char *to);`

### Task 9: "My primary goal of hacking was the intellectual curiosity, the seduction of adventure"<a name="task-9-my-primary-goal-of-hacking-was-the-intellectual-curiosity-the-seduction-of-adventure"></a>
Create a file that contains the password for the `crackme3` executable.

- Your file should contain only the password, followed by a new line.
- The password cannot be more than 11 characters long.
- Your solution will be considered correct if `crackme3` prints "Congratulations!" when given the correct password as an argument.
