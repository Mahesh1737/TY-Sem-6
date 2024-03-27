#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char *argv[]){
    
    int rank, size;
    MPI_Init(&argc, &argv);
    
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    int *randomNumbers=(int*)malloc(1000 * sizeof(int));
    int elements_per_process=1000/size;
    for (int i=0; i<1000; i++)
    {
        randomNumbers[i] = rand()%1000;
    }
    
    int localMin = randomNumbers[0];
    int localMax = randomNumbers[0];
    
    srand(rank);
    
    for (int i=1; i<1000; i++)
    {
        if(randomNumbers[i]< localMin)
        {
           localMin = randomNumbers[i];
        }
        if(randomNumbers[i]> localMax)
        {
           localMax = randomNumbers[i];
        }
 
    }
    
    int globalMin, globalMax;
    
    MPI_Reduce(&localMin, &globalMin,1,MPI_INT,MPI_MIN,0,MPI_COMM_WORLD);
    
    MPI_Reduce(&localMax, &globalMax,1,MPI_INT,MPI_MAX,0,MPI_COMM_WORLD);

    if (rank==0)
    { 
       printf("Minimum Number  :%d\n",globalMin);
       printf("Maximum Number  :%d\n",globalMax);    
   }
    free(randomNumbers);
    MPI_Finalize();
    
    return 0;
}
