#include<stdio.h>


int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n",avg);

    return 0;
}