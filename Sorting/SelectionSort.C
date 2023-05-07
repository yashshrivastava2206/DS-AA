void selectionSort(int A[],int size)
{
int pass,i,temp,min;
for(pass=0;pass<size;pass++)
{
min=pass;
for(i=pass;i<size;i++){
if(A[min]>A[i]){
min=i;
}
}
temp=A[pass];
A[pass]=A[min];
A[min]=temp;
}
}
