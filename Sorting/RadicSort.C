
#include<stdio.h>
#define MAX 100
void radixSort(int a[],int);
int getMax(int a[],int);
int main()
{
    int arr[MAX],size;
    printf("Enter size of array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    radixSort(arr,size);
    printf("Sorted Array:");
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    
    return 0;
}
int getMax (int a[], int n){
   int max = a[0];
   for (int i = 1; i < n; i++)
      if (a[i] > max)
         max = a[i];
   return max;
}
void radixSort (int a[], int n){
   int bucket[10][10], bucket_cnt[10];
   int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
   lar = getMax (a, n);
   while (lar > 0){
      NOP++;
      lar /= 10;
   }
   for (pass = 0; pass < NOP; pass++){
      for (i = 0; i < 10; i++){
         bucket_cnt[i] = 0;
      }
      for (i = 0; i < n; i++){
         r = (a[i] / divisor) % 10;
         bucket[r][bucket_cnt[r]] = a[i];
         bucket_cnt[r] += 1;
      }
      i = 0;
      for (k = 0; k < 10; k++){
         for (j = 0; j < bucket_cnt[k]; j++){
            a[i] = bucket[k][j];
            i++;
         }
      }
      divisor *= 10;
    //   printf ("After pass %d : ", pass + 1);
    //   for (i = 0; i < n; i++)
    //      printf ("%d ", a[i]);
    //   printf (" ");
   }
}
