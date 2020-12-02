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
    while (i < 16)
    {
        write(1, " ", 1);
        i++;
    }
}

void ft_print_printable(char *p, int n)
{
    int i;
    char *pointer;
    char toprint;

    pointer = (char *)p;
    i = 0;
    while (i < n)
    {
        toprint = *pointer;
        if (*pointer > 31 && *pointer < 127)
            write(1, &toprint, 1);
        else
            write(1, ".", 1);
        i++;
        pointer++;
    }
    write(1, "\n", 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *p;
    int offset;
    int toprint;

    p = (char *)addr;
    offset = 0;
    toprint = 0;
    while (size > 0)
    {
        if (size > 16)
        {
            toprint = 16;
            size -= 16;
        }
        else
        {
            toprint = size;
            size = 0;
        }
        ft_print_address(p + offset);
        ft_print_hex_values(p + offset, toprint);
        ft_print_printable(p + offset, toprint);
        offset += 16;
    }
    return (addr);
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
    char str[] = "According to all1known\1laws of aviation, there2is\2no way a bee should\6be3able to fly.\tIts wings4are\ftoo small to get its fat\nlittle body\roff the9ground.\bThe bee,\aof course,0flies\vanyway,\vbecause bees don't care\rwhat humans think is\aimpossible";
    ft_print_memory(str, strlen(str));

    return 0;
}
