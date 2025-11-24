#include<stdio.h>
int climbStairs(int n){
	if(n==1 || n==2 ){
		if(n==1) return 1;
		else return 2;
	}
	int steps = climbStairs(n-1) + climbStairs(n-2);
	return steps;
}
int main(){
	int n;
	printf("Enter number of steps: ");
	scanf("%d", &n);
	printf("Total number of steps are: %d\n",climbStairs(n));
	return 0;
}
