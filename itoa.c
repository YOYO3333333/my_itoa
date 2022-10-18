#include <stdio.h>
void inverse(char *, char *);
int len_str(char *);
char *my_itoa(int value, char *s);
void decal(char*);
void decal_min(char* s)
{

int i=len_str(s);
while(i)
{
    s[i+1]=s[i];
	i--;
}
s[1]=s[0];
s[0]='-';
}
char *my_itoa(int value, char *s)
{
    int r, i,min;
    r = i =min= 0;

    if (!value)
	{   s[i]=0+'0';
        s[i+1] = '\0';
		return s;
	} 
	if(min<0)
	{
     min++;
	 value=-value;
	}
    while (value)
    {
        r = value % 10;
        s[i] = r + '0';
        value = value / 10;
        i++;
    }
    s[i] = '\0';
    inverse(s, s + len_str(s) - 1);
	if(min)
     decal_min(s);
    return s;
}
void inverse(char *begin, char *end)
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
{   char s[]="";
    printf("%s \n", my_itoa(-123,s));

    return 0;
}
