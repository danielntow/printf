#include "main.h"

int _printf(const char *format, ...)
{
_printf("Name: %s, Age: %d\n", "Alice", 30);
_printf("Value: %d, Hex: %x, String: %s\n", 42, 255, "Hello");
_printf("%c%s%d\n", 'A', "BC", 123);  // Mixed characters and strings
}
