#include <stdio.h>
#include<stdlib.h>

int main() {

    FILE *fp;
    char  fnm[50], f[50];;
    static  int sb,len;
    int t;
    int flag;
    int op=1;


    printf("\n Enter Total Block : ");
    scanf("%d",&t);
    int tb[t];

    for(int i=0; i<t; i++)
        tb[i]=1;

    printf("\n Bit Vector Before Allocation \n ");
    for(int i=0; i<t; i++)
        printf("%d",tb[i]);

    printf("\n ");
    while(op>=1 && op<=5)
    {


        printf("\n 1.Creat File ");
        printf("\n 2.Show bit Vector ");
        printf("\n 3.Delete File  ");
        printf("\n 4.Display  ");
        printf("\n 5.Exit");


        printf("\nEnter option :  ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            printf("\nEnter File name : ");
            scanf("%s",fnm);
            
            fp = fopen(fnm, "w");

            if (fp == NULL) {
                printf("\nError opening the file.\n");
                return 1;
            }
            else
            {
     
                printf("\n **** File is Created *** \n ");

                printf("\nEnter Start block : ");
                scanf("%d",&sb);

                printf("\nEnter length  : ");
                scanf("%d",&len);

                int cnt=0;

                for(int i=sb; i<(sb+len); i++)
                {

                    if(tb[i]==1)
                    {
                        flag=0;
                        // len--;
                        cnt++;
                        // flag=1;
                        tb[i]=0;
                        if(cnt==len)
                        {

                            printf("\nAllocation is Successfully Done\n ");
                            break;

                        }
                  
                    }
                    else if(tb[i] == 0 )
                    {
                        printf("\nAllocation is not done (Already another file is at given start block : %d ) \n",sb);
                        
                        // flag=1;
                        break;
                    }


                }

            }
            break;
        case 2 :
            printf("\n Bit Vector After  Allocation \n ");
            for(int i=0; i<t; i++)
                printf("%d",tb[i]);

            printf("\n");
            break;

        case 3:
            
            printf("\nEnter File name : ");
            scanf("%s",&f);
            if (remove(f) == 0) {
                printf("\nThe file is deleted successfully.\n");
            } else {
                printf("\nThe file is not deleted.\n");
            }
            break;

        case 4 :
             printf("\n File Details Are : \n ");
            printf("\nF_NM\tSB\tLen\n");
            printf("%s\t%d\t%d",fnm,sb,len);
            printf("\n");
            break;

        case 5 :
            exit(0);


        }
        if(op!=4 )
        {
            printf("\n File Details Are : \n ");
            printf("\nF_NM\tSB\tLen\n");
            printf("%s\t%d\t%d",fnm,sb,len);
            printf("\n");

        }


    }

    fclose(fp); // Close the file
    return 0;
}


/*
Output :

ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_02$ cc slot1.c
ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_02$ ./a.out

 Enter Total Block : 10

 Bit Vector Before Allocation 
 1111111111
 
 1.Creat File 
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
Enter option :  1

Enter File name : m1.txt

 **** File is Created *** 
 
Enter Start block : 4

Enter length  : 5

Allocation is Successfully Done
 
 File Details Are : 
 
F_NM	SB	Len
m1.txt	4	5

 1.Creat File 
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
Enter option :  2

 Bit Vector After  Allocation 
 1111000001

 File Details Are : 
 
F_NM	SB	Len
m1.txt	4	5

 1.Creat File 
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
Enter option :  4

 File Details Are : 
 
F_NM	SB	Len
m1.txt	4	5

 1.Creat File 
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
Enter option :  3

Enter File name : m1.txt

The file is deleted successfully.

 File Details Are : 
 
F_NM	SB	Len
m1.txt	4	5

 1.Creat File 
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit

*/
