#include "main.h"
#include <stdio.h>

int main(void)
{
	char *name = "bnketia";
	char ch = 'a';
	char *name_partner = "bnketia/dasare";
	int num = 12;

    _printf("1. Hello, %s!\n", "world");
    printf("Hello, %s!\n", "world");

    _printf("2. Hello World\n");
    printf("Hello world\n");

    _printf("3. Hello,\n world\t\n");
    printf("Hello,\n world\t\n");

    _printf("4. testprint\n");
    printf("testprint\n");

    _printf("5. hello, %s\n", name);
    printf("hello, %s\n", name);

    _printf("6. one %%");
    _printf("one %%");

    _printf("7. first letter is: %c\n", ch);
    printf("first letter is: %c\n", ch);

    _printf("8. two %%%c\n", ch);
    printf("two %%%c\n", ch);

    _printf("9. hello %shi\n", name);
    printf("hello %shi\n", name);

    _printf("10. hola %s\n", name);
    printf("hola %s\n", name);

    _printf("11. my age is: %d\n", num);
    printf("my age is: %d\n", num);

    _printf("12. which of the devs do u need: %s\n", name_partner);
    printf("which of the devs do u need: %s\n", name_partner);

    return (0);
}

