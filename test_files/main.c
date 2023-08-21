#include "main.h"

int main(void)
{
	char *name = "bnketia";
	char ch = 'a';
	char *name_partner = "bnketia/dasare";
	int num = 12;

    _printf("Hello, %s!\n", "world");
    _printf("testprint\n");
    _printf("hello, %s\n", name);
    _printf("one %%");
    _printf("first letter is: %c\n", ch);
    _printf("two %%%c\n", ch);
    _printf("hello %shi\n", name);
    _printf("hola %s\t", name);
    _printf("my age is: %d\n", num);
    _printf("which of the devs do u need: %s\n", name_partner);

    return 0;
}

