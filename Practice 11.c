#include<stdio.h>
int tribonacci(int n) {
	if(n==0 || n==1 || n==2){
		if(n==0) return 0;
		else return 1;
	}
    int tribo = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    return tribo;
}
int main(){
	int n;
	printf("Enter term number: ");
	scanf("%d", &n);
	printf("Nth tribonacci term is %d\n",tribonacci(n));
	return 0;
	
}
