# 🧰 My Handmade C Libraries

> A collection of foundational C libraries built from scratch to deepen understanding of memory management, strings, and low-level programming.

---

## 💡 About

This repository contains **three base libraries** I built for future C projects at 42 and beyond:

### 🧩 libft
A custom reimplementation of the C standard library — built from scratch to fully understand memory, pointers, and core functions.

- Reimplements standard C library functions (`strlen`, `memcpy`, `atoi`, etc.)
- Includes a `bonus` part with linked list utilities (`t_list`)
- Used as a base library for all following C projects
- Continuously reinforced and improved through each new project

---

### 📜 get_next_line
**Line-by-line file reader in C**

A low-level implementation of a function that reads files line by line, managing buffers and memory efficiently.

- Handles newline placements, buffer overflows, and EOF correctly  
- Supports multiple file descriptors via the bonus version  
- Helps master buffer logic, memory allocation, and static variables

---

### 🖨️ ft_printf
**Custom implementation of `printf()`**

A functional recreation of the standard `printf()` function, using only basic `write()` calls.

- Supports format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Built to understand **variadic functions** and formatted output
- Used across other projects for formatted logging and debugging

---

## 🧱 Directory Structure



📋 Testing
I used multiple online testers to test my libft. These testers has different emphasises, covering different edge cases.
There are cases where my libft does not pass all tests, but I have reasoned it and compromised for a balanced solution.
Testers that I used include:
Tripouille/LibftTester

born2beroot	🛡️ Linux Server Hardening (Born2BeRoot)	
A project focused on system administration and cybersecurity, configuring a Linux VM with strict user permissions, firewall rules, and SSH key access.
