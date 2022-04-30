#include <mpi.h>
#include <stdio.h>
#define sizeA 100
#define sizeB 2000
#define sizebuf 50000
int main (int argc, char **argv)
{
 int pid, i, j;
 int A[sizeA][sizeA];
 float B[sizeB];
 double C;
 char buf[sizebuf];
 int pos = 0;
 MPI_Status info;
 MPI_Init (&argc, &argv);
 MPI_Comm_rank (MPI_COMM_WORLD, &pid);
// P1 initialises the data
// >>> TO DO <<<
 for (i=0; i<sizeA; i++)
 for (j=0; j<sizeA; j++) A[i][j] = i*j;
 for (i=0; i<sizeB; i++) B[i] = (float)i*0.4;
 C = 2.2;
// Packing the data in P1 and sending the packet to P2
// >>> TO DO <<<
// Receiving the packet and unpacking the data in P2
// >>> TO DO <<<
 printf ("\n Received in P2: A[10][10] = %d B[33] = %3.1f C = %3.1f\n\n",
 A[10][10], B[33], C);
 MPI_Finalize ();
 return 0;
}
