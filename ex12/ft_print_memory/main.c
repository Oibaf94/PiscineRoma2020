#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//void *ft_print_memory(void *addr, unsigned int size); decommentare per il main

/* this function takes a memory address as int, converts it to hex,
and prints it followed by ": "*/
void ft_print_address(char *addr)
{
    int i = 0;
    char adch[16];
    long div;

    div = (long)addr;
    while (i < 16)
    {
        if (div % 16 < 10)
            adch[i] = '0' + div % 16;
        else
            adch[i] = 'a' + ((div % 16) -10 );
        div = div / 16;
        i++;
    }
    while (i > 0)
    {
        write(1, &adch[i-1],1);
        i--;
    }
    write(1, ": ", 2);
}

void ft_char_to_hex(char c)
{
    char toprint;
    if (c / 16 < 10)
        toprint = '0' + c / 16;
    else
        toprint = 'a' + ((c / 16) - 10);
    write(1,&toprint,1);
    if (c % 16 < 10)
        toprint = '0' + c % 16;
    else
        toprint = 'a' + ((c % 16) - 10);
    write(1,&toprint,1);
}

void ft_print_hex_values(char *p, int n)
{
    int i;
    char *pointer;

    pointer = (char *)p;
    i = 0;
    while (i < n)
    {
        ft_char_to_hex(*(pointer + i));
        if (i % 2 != 0)
            write(1, " ",1);
        i++;
    }
}

void ft_print_printable(char *p, int n)
{
    int i;
    char *pointer;

    pointer = (char *)p;
    i = 0;
    while (i < n)
    {

    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    return;
}

int ft_strlen(char *s)
{
    int i = 0;
    for (; s[i];i++)
        ;
    return (i);
}

int main()
{
    char str[] = "According to all known\1laws of aviation, there is\2no way a bee should\6be able to fly.\tIts wings are\ftoo small to get its fat\nlittle body off the ground.\\The bee, of course, flies anyway,\vbecause bees don't care\rwhat humans think is\aimpossible";
    //ft_print_memory(str, strlen(str));
    char *p = &str[0];
    printf("X:%d\n",p);
    ft_print_address(p);
    ft_print_hex_values(p, 16);
    write(1,"*",1);
    return 0;
}
