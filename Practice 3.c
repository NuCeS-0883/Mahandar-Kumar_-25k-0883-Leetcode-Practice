#include<stdio.h>
void sort(int arr[], int n){
	int i,j;
    for(i=0; i<n; i++){
        if(arr[i]%2==0) arr[i]= 0;
        else arr[i]=1;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int array[n],i;
    for(i=0; i<n; i++){
        printf("Enter digit %d: ",i+1);
        scanf("%d", &array[i]);
    }
    sort(array,n);
    return 0;
}

