#include<stdio.h>
#include<conio.h>
int SumOfN_Num(int);
void DisplayNumbers(int);
void DisplayReverseOrder(int);
void DisplayAndSum(int,int);
int DisplayAndSum2(int);
int DisplayAndSum3(int);
int SumOfDigits(int);
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int result = SumOfN_Num(num);
    printf("Result :%d",result);
    printf("\n Display n numbers: ");
    DisplayNumbers(num);
    printf("\n Display n numbers in descending orders:");
    DisplayReverseOrder(num);
    printf("\n Display and Sum: ");
    DisplayAndSum(num,0);
    printf("\n");
    printf("0 =%d",DisplayAndSum2(num));
    printf("\n");
    printf("0 =%d",DisplayAndSum3(num));
    printf("\nSum of Digits: %d",SumOfDigits(num));

    return 0;
}
