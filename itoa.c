#include <stdio.h>
void reverse(char *, char *);
int len_str(char *);
char *my_itoa(int value, char *s);
char *my_itoa(int value, char *s)
{
    int r, i;
    r = i = 0;
    while (value)
    {
        r = value % 10;
        s[i] = r;
        value = value / 10;
        i++;
    }
    s[i] = '\0';
    return s;
}
void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int len_str(char *s)
{
    int l, i;
    i = l = 0;
    while (*(s + i) != '\0')
    {
        l++;
        i++;
    }

    return l;
}

int main(void)
{
    char s[] = "";
    char *temp = s;
    printf("%s \n", my_itoa(123, s));
    return 0;
}
