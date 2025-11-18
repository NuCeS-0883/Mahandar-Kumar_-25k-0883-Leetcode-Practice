#include<stdio.h>
void reverse(char arr[], int n){
	int i,j;
	for(i=0,j=n-1; i<n/2; i++,j--){
        char temp= arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
    }
    for(i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}
int main(){
    int n,i; 
    printf("Enter size of character array: ");
    scanf("%d",&n);
    char array[n];
    for(i=0; i<n; i++){
        printf("Enter character: ");
        scanf(" %c", &array[i]);
    }
    reverse(array,n);    
	return 0;
}
