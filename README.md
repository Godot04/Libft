# Libft - My First C Library

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=flat-square)

## 📖 About

**Libft** is first project at 42 School. This project involves recreating various standard C library functions from scratch, as well as implementing additional utility functions. The goal is to gain a deep understanding of how these fundamental functions work and to build a personal library that can be used in future 42 projects.

In that project I learned the basics of C programming, memory management, string manipulation, and proper code documentation.

## 🎯 Project Goals

- Understand and implement fundamental C library functions
- Learn proper memory management and avoid memory leaks
- Follow the 42 School coding standards (Norminette)
- Create a reusable static library (`libft.a`)

## 📚 Functions Implemented

### Part 1 - Libc Functions

Standard C library functions that I've recreated:

#### Character Checks & Conversions
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

#### String Functions
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Size-bounded string copy
- `ft_strlcat` - Size-bounded string concatenation
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (from the end)
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate a string

#### Memory Functions
- `ft_memset` - Fill memory with a constant byte
- `ft_bzero` - Zero out a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlapping)
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero-initialize memory

#### Conversion
- `ft_atoi` - Convert string to integer

### Part 2 - Additional Functions

Functions that are not in the standard library but are useful:

- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings (with malloc)
- `ft_strtrim` - Trim characters from start and end of string
- `ft_split` - Split string into array using delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character of string
- `ft_striteri` - Apply function to each character with index
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output integer to file descriptor

## 🛠️ Compilation

### Building the Library

To compile the library, simply run:

```bash
make
```

This creates `libft.a` - a static library containing all the functions.

### Available Commands

- `make` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and the library
- `make re` - Recompile everything from scratch

## ⚙️ Technical Details

- **Language**: C
- **Compiler**: gcc
- **Flags**: `-Wall -Wextra -Werror`
- **Norm**: 42 Norminette
- **Library Type**: Static library (`.a`)

## 📝 Notes

- All functions follow the 42 Norminette coding standards
- Memory is properly managed with no leaks
- Functions handle edge cases (NULL pointers, empty strings, etc.)
- The library is designed to be reusable in future 42 projects

## 👤 Author

**opopov** - 42 School Student
