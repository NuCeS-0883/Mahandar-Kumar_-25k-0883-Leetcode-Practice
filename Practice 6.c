#include<stdio.h>
void removedup(int arr[], int n){
	int mark=0,i;
    for(i=1; i<n; i++){
        if(arr[i] != arr[mark]){
            mark++;
            arr[mark] = arr[i];
        }
    }
    printf("Numbers left: %d\n", mark+1);
    printf("Array: ");
    for(i=0; i<=mark; i++){
            printf("%d ", arr[i]);
    }
}
int main(){
    int n,i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int array[n];
    for(i=0; i<n; i++){
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
    removedup(array, n);
    return 0;
}
