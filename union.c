
// wap to identify the type of entered character whether it is a
// letter,digit or other symbol using enumerate datatype

#include <stdio.h>

int main()
{
    enum month
    {
        jan,
        feb,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };
    int i;
    for (i = jan; i < december; i++)
    {
        printf("%d\n", i);
    }
}