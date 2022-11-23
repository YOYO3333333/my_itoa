#include <stddef.h>
#include <stdio.h>
size_t my_strlen(const char *s)
{
    const char *st;
    for (st = s; *st; ++st)
    {
        continue;
    }
    return (st - s);
}
void renverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = my_strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
char *my_itoa(int value, char *s)
{
    int i, sign;

    if ((sign = value) < 0)
        value = -value;
    i = 0;
    do
    {
        s[i++] = value % 10 + '0';
    } while ((value /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    renverse(s);
    return s;
}
