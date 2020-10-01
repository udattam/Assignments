#include <stdio.h>
#include <math.h>
main()
{
    int n,sum=0,i;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum+ pow(10, i) - 1;
    }
    printf("The sum of %d digits are: %d",n,sum);
}
