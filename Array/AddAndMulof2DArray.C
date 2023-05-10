#include<stdio.h>
#define row 20
#define column 20
void addArray(int A[][column],int B[][column],int C[][column],int ,int);
void multiplicationArray(int A[][column], int B[][column],int C[][column], int ,int );
int main(){
    int A[row][column],B[row][column],C[row][column],D[row][column],rowSize,columnSize,i,j;
    printf("Enter the row and column size:");
    scanf("%d%d",&rowSize,&columnSize);
    printf("Enter %d elements in Array:",rowSize*columnSize);
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter %d elements in Array:",rowSize*columnSize);
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            scanf("%d",&B[i][j]);
        }
    }
    addArray(A,B,C,rowSize,columnSize);
    printf("Addition of Matrix\n");
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of Matrix:\n");
    multiplicationArray(A,B,C,rowSize,columnSize);
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void addArray(int A[][column],int B[][column],int C[][column],int rSize,int cSize){
    for(int i=0;i<rSize;i++){
        for(int j=0;j<cSize;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}
void multiplicationArray(int A[][column],int B[][column],int C[][column],int rSize, int cSize){
    int i,j;
    for(i=0;i<rSize;i++){
        for(j=0;j<cSize;j++){
            C[i][j]=0;
            for(int k=0;k<cSize;k++)
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
}