#include<stdio.h>
#include<string.h>
void palindrome(int size, char str[][20]){
	int flag,i,j,k;
	char original[30];
	for(i=0; i<size; i++){
		strcpy(original, str[i]);
		for(j=0,k=strlen(str[i])-1; j<k; j++,k--){
			char temp= str[i][j];
			str[i][j] = str[i][k];
			str[i][k] = temp;
		}
		if(strcmp(original, str[i]) == 0){
		printf("%s is the first palindromic string.\n", str[i]);
		return;
	}
	}
	printf("No palindromic string found.\n");
}
int main(){
	int size,i;
	printf("Enter number of words: ");
	scanf("%d", &size);
	char string[size][20];
	for(i=0; i<size; i++){
		printf("Enter a word: ");
		scanf("%s", string[i]);
	}
	palindrome(size,string);
	return 0;
}
