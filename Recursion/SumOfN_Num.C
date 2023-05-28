//Sum of numbers from 1 to n.
int SumOfN_Num(int n){
    //Base Condition
    if(n==1)
    return 1;
    else
    return n+SumOfN_Num(n-1);
}
