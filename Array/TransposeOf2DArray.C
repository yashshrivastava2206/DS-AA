#include<stdio.h>
#define column 100
#define row 100
void transpose(int A[][column],int ,int);
int main(){
    int A[row][column],i,j,rSize,cSize;
    printf("Enter the row size and column size:");
    scanf("%d%d",&rSize,&cSize);
    printf("Enter %d element in the Matrix:",rSize*cSize);
    for(i=0;i<rSize;i++)
        for(j=0;j<cSize;j++)
            scanf("%d",&A[i][j]);
    printf("Matrix is :\n");
    for(i=0;i<rSize;i++){
        for(j=0;j<cSize;j++)
            printf("%d ",A[i][j]);
    printf("\n");
    }
    transpose(A,rSize,cSize);
    return 0;
}
void transpose(int A[][column],int rSize,int cSize){
    int tps[rSize][column],i,j;
    for(i=0;i<rSize;i++){
        for(j=0;j<cSize;j++)
            tps[j][i]=A[i][j];
    }
    printf("Transpose of Matrix:\n");
    for(i=0;i<cSize;i++){
        for(j=0;j<rSize;j++)
            printf("%d ",tps[i][j]);
    printf("\n");
    }
}