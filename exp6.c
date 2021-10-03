#include<stdio.h>

int sumation(int data[], int l)
{
    int s = 0;
    for(int i=0; i<l; i++)
        s = s + data[i];
    return s;
}

float average(int s, int l)
{
    return s/l;
}
int main()
{
    int num[100], i, len, sum;
    float avg;
    printf("How many number you want to input: ");
    scanf("%d", &len);

    for (i = 0; i<len; i++)
        scanf("%d", &num[i]);

    i = 0;
    sum = 0;
    do{
        sum = sum + num[i];
        i++;
    }while(i<len);
    avg = sum/len;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);

    sum = sumation(num, len);
    avg = average(sum, len);

    printf("Function: Sum = %d\n", sum);
    printf("Function: Average = %f\n", avg);
}
