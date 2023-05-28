//Sum Of Digits of a given number
int SumOfDigits(int n){
    if(n/10==0)
    return n;
    return (n%10)+SumOfDigits(n/10);
}
