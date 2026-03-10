# 🖨️ ft_printf

ft_printf is a custom implementation of the standard C `printf` function.  
This project is part of the 42 curriculum and aims to recreate the behavior of `printf` while gaining a deeper understanding of variadic functions and formatted output.

---

## 📖 About the Project

The goal of this project is to implement a simplified version of the standard `printf` function from the C standard library.

It introduces important concepts such as:

- Variadic functions
- Format specifiers
- String and number formatting
- Memory handling

The function reproduces the behavior of `printf` for a limited set of conversions.

---

## ⚙️ Supported Conversions

The following format specifiers are implemented:

- `%c` – prints a single character
- `%s` – prints a string
- `%p` – prints a pointer address
- `%d` – prints a decimal (base 10) number
- `%i` – prints an integer in base 10
- `%u` – prints an unsigned decimal number
- `%x` – prints a number in lowercase hexadecimal
- `%X` – prints a number in uppercase hexadecimal
- `%%` – prints a percent sign

---

## 📦 Installation

Clone the repository:

```bash
git clone https://github.com/Mert5558/ft_printf.git
cd ft_printf
```

Compile the project:

```bash
make
```

This will create the static library `libftprintf.a`.

---

## 📁 Usage

Include the header in your code:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello %s!\n", "world");
	return (0);
}
```

---
