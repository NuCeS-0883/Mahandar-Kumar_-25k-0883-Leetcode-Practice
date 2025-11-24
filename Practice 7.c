#include<stdio.h>
#include<string.h>
int vowel(char c){
	if(c=='a' || c=='e' || c=='i'||c=='o'||c=='u'||
		c=='A' || c=='E' || c=='I'||c=='O'||c=='U') return 1;
		return 0;
}
void reversevowel(char str[]){
        
	int i=0, j=strlen(str)-1;
	while(i<j){
		while(i<j && !(vowel(str[i]))) i++;
		while(i<j && !(vowel(str[j]))) j--;
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("%s", str);
}
int main(){
	char string[30];
	printf("Enter a word: ");
	scanf("%s", string);
	reversevowel(string);
	return 0;
}
