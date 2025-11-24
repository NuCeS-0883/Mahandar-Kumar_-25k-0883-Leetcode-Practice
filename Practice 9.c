#include<stdio.h>
void rotate(int m, int n, int matrix[m][n]){
	int i,j,k;
	int transpose[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			transpose[i][j]= matrix[j][i];
		}
	}
	for(i=0; i<m; i++){
		j=0; k=n-1;
		while(j<k){
			int temp = transpose[i][j];
			transpose[i][j] = transpose[i][k];
			transpose[i][k] = temp;
			j++, k--;
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int row,column,i,j;
	printf("Enter row size: ");
	scanf("%d", &row);
	printf("Enter column size: ");
	scanf("%d", &column);
	int matrix[row][column];
	for(i=0; i<row; i++){
		for(j=0; j< column; j++){
			printf("Enter digit[%d][%d]: ",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	rotate(row, column, matrix);
	return 0;
}
