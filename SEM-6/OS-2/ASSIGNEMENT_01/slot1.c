#include<stdio.h>

void main()
{
     int n,i,p[10],r,a[10][10],j,max[10][10],av[10],need[10][10];
     
     char res;
     
     printf("Enter the No. of Processes : ");
     scanf("%d",&n);
     
     printf("\nEnter the No. of Resources : ");
     scanf("%d",&r);
     
     printf("Enter the Allocation Matrix : ");
     for (i=0;i<n;i++)
         for (j=0;j<r;j++)
             scanf("%d",&a[i][j]);
     
     printf("\n Enter Max Allocation Matrix : ");
     for (i=0;i<n;i++)
         for (j=0;j<r;j++)
             scanf("%d",&max[i][j]);
     
     printf("\n Enter Available : ");
     for (i=0;i<r;i++)
         scanf("%d",&av[i]);
     
     printf("\nAllocation Matrix : ");
     for (i=0;i<n;i++)
     {
         printf("\n");
         for (j=0;j<r;j++)
             printf("%d\t",a[i][j]);
     }
     
     printf("\n Max Allocation Matrix");
    for ( i=0;i<n;i++)
    {
        printf("\np%d\t",i);
        for(j=0;j<r;j++)
            printf("%d\t",max[i][j]);
    }
     
     printf("\nNeed : ");
     for (i=0;i<n;i++)
     {
         printf("\n%d\t",i);
         for (j=0;j<r;j++)
         {
             need[i][j]=max[i][j]-a[i][j];
             printf("%d\t",need[i][j]);
         }
     }
     
     printf("\n Available : ");
     for (i=0;i<n;i++)
         if (i==0)
            for (j=0;j<r;j++)
                printf("%d\t",av[j]);
}

/*
Output 

ty28@pc56:~/TY28/SEM-6/OS-2/ASSIGNEMENT_01$ cc slot1.c
ty28@pc56:~/TY28/SEM-6/OS-2/ASSIGNEMENT_01$ ./a.out
Enter the No. of Processes : 5

Enter the No. of Resources : 3
Enter the Allocation Matrix : 0 1 0
2 0 0 
3 0 2
2 1 1
0 0 2

 Enter Max Allocation Matrix : 7 5 3
3 2 2
9 0 2
2 2 2
4 3 3 

 Enter Available : 3 4 1

Allocation Matrix : 
0	1	0	
2	0	0	
3	0	2	
2	1	1	
0	0	2	
 Max Allocation Matrix
p0	7	5	3	
p1	3	2	2	
p2	9	0	2	
p3	2	2	2	
p4	4	3	3	
Need : 
0	7	4	3	
1	1	2	2	
2	6	0	0	
3	0	1	1	
4	4	3	1	
 Available : 3	4	1	
 
*/
