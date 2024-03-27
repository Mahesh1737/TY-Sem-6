#include<stdio.h>

int main()
{
    int tc,ip,n;

    printf("\nEnter the total no. of cylinders in HDD:\n");
    scanf("%d",&tc);
    if(tc<= 0)
    {
        printf("Total Cylinders must be greater than 0");
        exit(0);
    }
    printf("\nEnter the no. of cylinders to enter in Request queue:\n");
    scanf("%d",&n);

    int req[n];

    printf("\nEnter the cylinders no. in Request queue :\n");
    for(int i=0; i<n; i++)
        scanf("%d",&req[i]);
    printf("\nEnter the initial Position of RW head: ");
    scanf("%d",&ip);
    
    int total=0;
    printf("\n*****Sequence is*****\n\n");
    for(int i=0;i<n;i++)
    {
         total+=abs(ip-req[i]);
         ip = req[i];
         int cp=req[i];
         printf("%d\t",cp);
         
         
    }
     printf("\n");
     printf("\n Total Movement : ");   
     printf("%d",(total));
     float f=total/n;
     printf("\n Average TM : %f \n",f);

    
}

/*
Output :


Enter the total no. of cylinders in HDD:
200

Enter the no. of cylinders to enter in Request queue:
8

Enter the cylinders no. in Request queue :
98 183 41 122 14 124 65 67 

Enter the initial Position of RW head: 53

*****Sequence is*****

98	183	41	122	14	124	65	67	

 Total Movement : 632
 Average TM : 79.000000
 
*/
