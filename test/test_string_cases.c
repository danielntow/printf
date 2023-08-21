#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int main(void)
{
	char *str = "Hello, World!";
	char *emptyStr = "";
	char *specialCharsStr = "Special characters:\n\t\r\\";
	char *escapedStr = "This is an escaped quote: \"";
	char *unicodeStr = "Unicode character: é";
	char *longStr =
	    "This is a very long string that should be truncated for display.";
	char *formatSpecifierStr = "This %s contains a format specifier.";

	printf("Testing _printf function:\n");
	_printf("String: %s\n", str);
	_printf("Empty String: %s\n", emptyStr);
	_printf("String with Special Characters: %s\n", specialCharsStr);
	_printf("String with Escaped Characters: %s\n", escapedStr);
	_printf("String with Unicode Characters: %s\n", unicodeStr);
	_printf("Long String: %s\n", longStr);
	_printf("String with Format Specifier: %s\n", formatSpecifierStr);

	printf("\nTesting printf function:\n");
	printf("String: %s\n", str);
	printf("Empty String: %s\n", emptyStr);
	printf("String with Special Characters: %s\n", specialCharsStr);
	printf("String with Escaped Characters: %s\n", escapedStr);
	printf("String with Unicode Characters: %s\n", unicodeStr);
	printf("Long String: %s\n", longStr);
	printf("String with Format Specifier: %s\n", formatSpecifierStr);

	return (0);
}

