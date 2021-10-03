#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

void numberGenerate(char lastDigit, int *num)
{
    *num = *num*10 + (int)lastDigit-48;
}

float calculate(int a, int b, char s)
{
    switch(s)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return a/b;
    case '%':
        return a%b;
    }

}
int main()
{
    char *data;
    int num1=0, num2=0, flag=0;
    char d, sign;
    for(d = getch(); d != '='; d = getch())
    {
       printf("%c", d);
       if (d == '+' || d == '-'|| d == '*' || d == '/' || d == '%')
       {
           flag = 1;
           sign = d;
           continue;
       }
       if(flag == 0)
       {
           numberGenerate(d, &num1);
       }
       else
       {
           numberGenerate(d, &num2);
       }
    }
    printf("\n%d %c %d = %.2f", num1, sign, num2, calculate(num1,num2, sign));
    return 0;
}
