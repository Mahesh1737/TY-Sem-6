
#include <stdio.h>
#include<stdlib.h>

int files[10], indexBlock[50], indBlock, n,cnt=0;
char  fnm[20],f[20];

int main() {

    FILE *fp;
    static  int sb,len;
    int t;
    int op=1;



    printf("\n Enter Total Block : ");
    scanf("%d",&t);

    files[t];

    for(int i=0; i<10; i++)
        files[i]=1;

    printf("\n Bit Vector Before Allocation \n ");
    for(int i=0; i<t; i++)
        printf("%d",files[i]);

    printf("\n ");
    while(op>=1 && op<=5)
    {



      y:  printf("\n 1.Create File");
        printf("\n 2.Show bit Vector ");
        printf("\n 3.Delete File  ");
        printf("\n 4.Display  ");
        printf("\n 5.Exit");


        printf("\n Enter option :  ");
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
                printf("\n *** File is created *** \n ");




           x: printf("Enter the index block: ");
            scanf("%d", &indBlock);
            if (files[indBlock] != 0) {
                files[indBlock]=0;
                printf("\nEnter the number of blocks  needed for the index %d on the disk: ", indBlock);
                scanf("%d", &n);
            }
            else {
                printf("%d is already allocated\n", indBlock);
                goto x;
            }

        

        int flag = 0;
        cnt=0;
        //int cnt=0;

       z: printf("\nEnter block occupied by given %s File : \n ",fnm);
        for (int i=0; i<n; i++) {
            scanf("%d", &indexBlock[i]);
            cnt++;
            if (files[indexBlock[i]] == 1)
                flag++;
        }
        if (flag == n) {
            for (int j=0; j<n; j++) {
                files[indexBlock[j]] = 0;
            }
            printf("\n*****Allocated******\n");
            printf("\nFNm\tIB\tIndex\tAlloctated\n");
            for (int k=0; k<n; k++) {
                printf("%s\t%d ----> %d\t%d\n", fnm,indBlock, indexBlock[k], files[indexBlock[k]]);

            }
            goto y;
            /*printf("\n Bit Vector \n");
            for (int k=0; k<10; k++)
                 printf("%d",files[k]);*/
        }
        else {
            printf(" block is already allocated\n");
            printf("Enter another blocks\n");
            goto z;


        }

    

    break;

case 2 :
    printf("\n Bit Vector After  Allocation \n ");
    for(int i=0; i<t; i++)
        printf("%d",files[i]);

    printf("\n");
    break;

case 3:
    printf("\nEnter File name to delete : ");
    scanf("%s",&f);
    if (remove(f) == 0)
        printf("\nDeleted successfully\n");

    else
        printf("\nUnable to delete the file\n");
    break;

case 4 :
    printf("\n File Details Are : \n ");
    printf("\nF_NM\tIB\tLen\n");
    printf("%s\t%d\t%d",fnm,indBlock,cnt);
    printf("\n");
    break;

case 5 :
    exit(0);


}
if(op!=4 )
{
    printf("\nF_NM\tIB\tLen\n");
    printf("%s\t%d\t%d",fnm,indBlock,cnt);
    printf("\n");

}


}



fclose(fp);
return 0;
}

/*
Output :

ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_02$ cc slot3.c
ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_02$ ./a.out

 Enter Total Block : 10

 Bit Vector Before Allocation 
 1111111111
 
 1.Create File
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
 Enter option :  1 

Enter File name : m3.txt

 *** File is created *** 
 Enter the index block: 4

Enter the number of blocks  needed for the index 4 on the disk: 5

Enter block occupied by given m3.txt File : 
 2 3 8 9 6

*****Allocated******

FNm	IB	Index	Alloctated
m3.txt	4 ----> 2	0
m3.txt	4 ----> 3	0
m3.txt	4 ----> 8	0
m3.txt	4 ----> 9	0
m3.txt	4 ----> 6	0

 1.Create File
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
 Enter option :  2

 Bit Vector After  Allocation 
 1100010100

F_NM	IB	Len
m3.txt	4	5

 1.Create File
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
 Enter option :  4

 File Details Are : 
 
F_NM	IB	Len
m3.txt	4	5

 1.Create File
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit
 Enter option :  3

Enter File name to delete : m3.txt

Deleted successfully

F_NM	IB	Len
m3.txt	4	5

 1.Create File
 2.Show bit Vector 
 3.Delete File  
 4.Display  
 5.Exit

*/
