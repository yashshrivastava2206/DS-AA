//Display number from n to 1
void DisplayReverseOrder(int num){
    if(num==0)
    return;
    printf(" %d ",num);
    DisplayReverseOrder(num-1);
}
