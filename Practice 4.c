#include<stdio.h>
    void shiftingzero(int arr[], int n){
        int mark =0;
        int i;
         for(i=0; i<n; i++){
             if(arr[i] !=0) {
                 arr[mark] = arr[i];
                 mark++;
             }
         }
            for(i= mark; i<n; i++){
            	arr[i] = 0;
         }
         for(i=0; i<n; i++){
         	printf("%d ", arr[i]);
		 }
    }
    int main(){
        int n;
        printf("Enter size of array: ");
        scanf("%d", &n);
        int array[n];
        int i;
        for(i=0; i<n; i++){
            printf("Enter number: ");
            scanf("%d", &array[i]);
        }
        shiftingzero(array, n);
         return 0;
    }
