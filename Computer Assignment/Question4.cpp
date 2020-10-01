#include <stdio.h>
#include <math.h>
main()
{
    int a[6],b[6],sum=0,i,dot=0,cross[3];
    printf("Enter the x,y,z of first vector:\n");
    scanf("%d %d %d", &a[0],&a[1],&a[2]);
    printf("Enter the x,y,z of second vector:\n");
    scanf("%d %d %d", &b[0],&b[1],&b[2]);
    a[3] = a[0];
    a[4] = a[1];
    a[5] = a[2];
    b[3] = b[0];
    b[4] = b[1];
    b[5] = b[2];

    for (i = 0; i < 3;i++){
        dot = dot + a[i] * b[i];
        cross[i] = a[i + 1] * b[i + 2] - b[i + 1] * a[i + 2];
    }

    printf("The dot product is: %d\n", dot);
    printf("The cross product is: (%d i,%d j,%d k)", cross[0],cross[1],cross[2]);
}
