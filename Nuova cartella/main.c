#include <unistd.h>

const char tl = 'A';
const char tr = 'B';
const char bl = 'C';
const char br = 'D';
const char lr = 'E';
const char tb = 'F';

void print(int row, int col,int maxrow,int maxcol)
{
    if(row == 0 && col == 0)
        write(1, &tl, 1);
    else if(row == 0 && col == maxcol - 1)
        write(1, &tr, 1);
    else if(row == maxrow - 1 && col == 0)
        write(1, &bl, 1);
    else if(row == maxrow -1 && col == maxcol - 1)
        write(1, &br, 1);
    else if((row == 0 || row == maxrow -1) && col > 0 && col < maxcol - 1)
        write(1, &tb, 1);
    else if((col == 0 || col == maxcol -1) && row > 0 && row < maxrow - 1)
        write(1, &lr, 1);
    else
        write(1, " ", 1);
}

void rush(int c, int r)
{
    int i;
    int j;

    i = 0;
    while(i < r)
    {
        j = 0;
        while(j < c)
        {
            print(i, j, r, c);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
}

int main()
{
    rush(5, 5);
    return (0);
}
