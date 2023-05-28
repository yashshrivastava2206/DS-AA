//Display number from 1 to n
void DisplayNumbers(int num){
    if(num==0)
    return;
    DisplayNumbers(num-1);
    printf(" %d ",num);
}
