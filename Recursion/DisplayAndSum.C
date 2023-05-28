// Display and sum of series : Method 1
void DisplayAndSum(int n,int sum){
    if(n==0){
        printf("= %d",sum);
        return;
    }
    printf("%d + ",n);
    DisplayAndSum(n-1,sum+n);
}
// Display and sum of series :Method 2
int DisplayAndSum2(int n){
    if(n==0){
        return 0;
    }
    printf("%d + ",n);
    return n+DisplayAndSum2(n-1);
}

// Display and sum of series : Method 3
int DisplayAndSum3(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    sum=n+DisplayAndSum3(n-1);
    printf("%d + ",n);
    return sum;
}
