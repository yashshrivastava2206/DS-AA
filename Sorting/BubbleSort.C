
//void bubbleSort(int A[],int);

void bubbleSort(int A[],int size)
{
int pass,j,temp;
for(pass=0;pass<size;pass++)
{
for(j=0;j<size-pass-1;j++)
{
if(A[j]>A[j+1])
{
 temp=A[j];
 A[j]=A[j+1];
 A[j+1]=temp;
}
}
}
}
