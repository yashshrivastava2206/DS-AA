void insertionSort(int A[],int *size)
{
int i,j,s;
printf("Enter size:");
scanf("%d",&s);
*size=s;
for(i=0;i<s;i++){
scanf("%d",&A[i]);
for(j=0;j<i;j++){
if(A[i]<A[j]){
shift(A,i,j,A[i]);
}
}
}
}
void shift(int A[],int size,int target,int data)
{
int i;
for(i=size;i>target;i--){
A[i]=A[i-1];
}
A[target]=data;
}
