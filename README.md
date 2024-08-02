# Libft

![Language: C](https://img.shields.io/badge/Language-C-blue.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)

## Introduction

`libft` is a custom C library that provides a collection of general-purpose functions for use in various C projects. This library includes implementations of standard functions from the C library, additional utility functions, and linked list operations. The project aims to enhance your understanding of C programming and the implementation of essential functions.

## Features

- **Standard C Library Functions**:
  - Memory manipulation functions:
    - `ft_memset`
    - `ft_bzero`
    - `ft_memcpy`
    - `ft_memmove`
    - `ft_memchr`
    - `ft_memcmp`
  - String manipulation functions:
    - `ft_strlen`
    - `ft_strchr`
    - `ft_strrchr`
    - `ft_strncmp`
    - `ft_strlcpy`
    - `ft_strlcat`
    - `ft_strnstr`
    - `ft_strdup`
  - Character checking functions:
    - `ft_isalpha`
    - `ft_isdigit`
    - `ft_isalnum`
    - `ft_isascii`
    - `ft_isprint`
  - Conversion functions:
    - `ft_atoi`
    - `ft_calloc`
    - `ft_strjoin`
    - `ft_substr`
    - `ft_strtrim`
    - `ft_itoa`
    - `ft_strmapi`
    - `ft_striteri`
  - Output functions:
    - `ft_putchar_fd`
    - `ft_putstr_fd`
    - `ft_putendl_fd`
    - `ft_putnbr_fd`

- **Bonus Functions**:
  - Linked list functions:
    - `ft_lstnew`
    - `ft_lstadd_front`
    - `ft_lstsize`
    - `ft_lstlast`
    - `ft_lstadd_back`
    - `ft_lstdelone`
    - `ft_lstclear`
    - `ft_lstiter`
    - `ft_lstmap`

- Built as a static library (`libft.a`).

## Makefile Commands

- **`make`**: Compiles the project and creates the `libft.a` library.
- **`make bonus`**: Adds bonus functions to the library.
- **`make clean`**: Removes object files, keeping only the source code.
- **`make fclean`**: Cleans the project by removing the compiled library and object files.
- **`make re`**: Performs a full recompilation by cleaning and then recompiling the project.

## Usage

Here is an example of using `libft` in a C program:

```c
#include "libft.h"

int main()
{
    // YOUR CODE
    return 0;
}
