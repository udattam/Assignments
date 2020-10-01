#include <stdio.h>
main()
{
    int n = 50;
    int marks[n][2],b[n][2];
    for (int i = 0; i < n;i++)
    {
            printf("Enter Roll: ");
            scanf("%d", &marks[i][0]);
            b[i][0] = marks[i][0];
            printf("Enter Marks: ");
            scanf("%d", &marks[i][1]);
            b[i][1] = marks[i][1];
        }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(marks[j][1]<b[i][1])
            {
                int t;
                t=b[i][1];
                b[i][1]=b[j][1];
                b[j][1]=t;

                int k;
                k=b[i][0];
                b[i][0]=b[j][0];
                b[j][0]=k;
            }
        }
    }
    printf("Original Rank List:\n");
    printf("Roll\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", marks[i][0], marks[i][1]);
    }
    printf("Sorted Rank List:\n");
    printf("Roll\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", b[i][0], b[i][1]);
    }
}

    