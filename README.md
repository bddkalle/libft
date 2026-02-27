*This project has been created as part of the 42 curriculum by bddkalle.*

# libft — reimplementation of selected C standard library functions

## Description

libft is a small library that reimplements commonly used functions from the C standard library and provides a few additional utility functions. The project is part of the 42 curriculum and its goal is to deepen understanding of C fundamentals: pointers, memory management, string manipulation, data structures (linked lists), and low-level function implementation. The library produces a static archive (`libft.a`) that can be linked into other projects.

## Features (implemented categories)

- Memory management helpers (`memset`, `memcpy`, `memmove`, ...)
- String manipulation (`strlen`, `strchr`, `strdup`, `strjoin`, `substr`, `split`, ...)
- Character checks and conversions (`isalpha`, `isdigit`, `toupper`, `tolower`, ...)
- I/O helpers (`putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`)
- Linked list utilities (`lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstmap`, ...)
- Additional convenience helpers (as required by the 42 subject)
- Bonus functions (if implemented) — see the source for details

## Instructions

### 1. Clone the repository

```bash
git clone https://github.com/bddkalle/libft.git
cd libft
```

### 2. Build

```bash
make
```

This produces the static library `libft.a` in the repository root and compiles object files into `obj/` (or the layout used in this repository).

### 3. Use the library in your project

To compile a program that uses `libft` (assumes headers are in `includes/` and `libft.a` in repo root):

```bash
gcc -I includes -L . -lft your_program.c -o your_program
```

Or link the archive directly:

```bash
gcc -I includes your_program.c libft.a -o your_program
```

### 4. Cleaning and extra targets

- `make clean` — remove object files
- `make fclean` — remove object files and `libft.a`
- `make re` — rebuild from scratch
- `make bonus` — build with bonus functions (if the project contains a separate bonus target)

### 5. Running tests

If the repository contains a `tests/` folder or a test harness, follow the instructions in `tests/README.md` (if present). Otherwise, compile small programs that call the library functions and run them to validate behavior. Use `valgrind` or sanitizers (`-fsanitize=address,undefined`) to check memory safety.

## Project layout (short)

```
libft/
├── src/           # source .c files
├── includes/      # public headers (e.g., libft.h)
├── obj/           # object files (build output)
├── tests/         # optional tests / harness
├── Makefile
└── libft.a        # static library produced by make
```

## Technical choices & notes

- The library aims for clarity and portability rather than micro‑optimizations. Where behavior is ambiguous, POSIX or glibc conventions were taken as reference.
- Implementations avoid using forbidden functions as defined by the 42 subject (e.g., `malloc` is allowed where required; other restricted helpers are not used in forbidden contexts).
- Source files include short SPDX headers to make license status machine‑readable (if a LICENSE file is added).

## Resources

Useful references and classic documentation used while working on this project:

- The C Standard Library manual pages (`man 3 malloc`, `man 3 memcpy`, etc.)
- POSIX and system call manuals (`man 2 write`, `man 2 open`)
- *The C Programming Language* (Kernighan & Ritchie) — foundational concepts
- *Advanced Programming in the UNIX Environment* (W. Richard Stevens) — process and I/O references
- Valgrind and AddressSanitizer documentation — memory debugging

### AI usage disclosure

This README was drafted and edited with the assistance of an AI writing assistant to ensure clarity and to satisfy the 42 README requirements. The AI was used only for writing and structuring this README text (translation, phrasing, and formatting). **No source code nor implementation logic was generated or modified by AI.**

## License

This project is licensed under the **GNU General Public License v3.0 (GPL-3.0-or-later)**. The full license text is included in the `LICENSE` file at the repository root. You can also review the official GPLv3 text from the Free Software Foundation.

All original source files should include a short, machine-readable SPDX license identifier at the top. Example header to add to C source and header files:

`/* SPDX-License-Identifier: GPL-3.0-or-later
Copyright (c) 2026 Felix Steinmann felix.steinmann@mailbox.org
*/`

This GPL license applies to the code authored by contributors to this repository. Third-party components retained in the project keep their original licenses; ensure compatibility (for example, check `libft` or other submodules) before redistribution.

## Author

Felix Steinmann — GitHub: https://github.com/bddkalle
