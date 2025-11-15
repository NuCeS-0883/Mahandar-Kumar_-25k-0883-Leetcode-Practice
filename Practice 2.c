#include<stdio.h>
void shufflearray(int arr[], int n, int result[]){
    int i=0,j=n,k=0;
    while(i<n && j< 2*n){
        result[k++] = arr[i++];
        result[k++] = arr[j++];
    }
}
int main(){
    int n; 
    printf("Enter n: ");
    scanf("%d", &n);
    int nums[2*n];
    int i;
    for(i=0; i<2*n; i++){
        printf("Enter digit %d: ",i+1);
        scanf("%d", &nums[i]);
    }
    int result[2*n];
    shufflearray(nums,n, result);
    printf("Shuffled array:\n");
    for(i=0; i<2*n; i++){
        printf("%d ", result[i]);
    }
    return 0;
}
