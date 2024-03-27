#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,k,req[50],mov=0,cp,index[50],min,a[50],j=0,mini,cp1;
    int total=0;
    printf("enter the current position\n");
    scanf("%d",&cp);
    printf("enter the number of requests\n");
    scanf("%d",&n);
    cp1=cp;
    printf("enter the request order\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&req[i]);
    }
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
               index[i]=abs(cp-req[i]);
              // printf("\n%d",index[i]); // calculate distance of each request from current position
        }
        // to find the nearest request
        min=index[0];
        mini=0;
        for(i=1; i<n; i++)
        {
            if(min>index[i])
            {
                min=index[i];
                mini=i;
            }
        }
        
        a[j]=req[mini];
        j++;
        cp=req[mini]; // change the current position value to next request
        req[mini]=999;
    } // the request that is processed its value is changed so that it is not processed again
    printf("Sequence is : ");
    printf("%d",cp);
    mov=mov+abs(cp1-a[0]);    // head movement
    printf(" -> %d",a[0]);
    for(i=1; i<n; i++)
    {
        mov=mov+abs(a[i]-a[i-1]); ///head movement
        printf(" -> %d",a[i]);
    }
    printf("\n");
    printf("total head movement = %d\n",mov);
}

/*
Output :

ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_03$ cc slot1b.c
ty28@pc60:~/TY28/SEM-6/OS-2/ASSIGNEMENT_03$ ./a.out
enter the current position
53
enter the number of requests
8
enter the request order
98 183 41 122 14 124 65 67
Sequence is : 14 -> 41 -> 65 -> 67 -> 98 -> 122 -> 124 -> 183 -> 14
total head movement = 323

*/

