#include <stdio.h>
#include <stdlib.h>
struct box
{
	int length,width,height;
};
typedef struct box box;
int get_volume(box b) {
	return b.length*b.width*b.height;
}

int is_lower_than_max_height(box b) {
	if(b.height < 41 && b.height >=1) return 1;
	else return 0;
}

int main(){
	int n,i;
	printf("Enter n: ");
	scanf("%d", &n);
	box b[n];
	for(i=1; i<=n; i++){
		printf("Enter length: ");
		scanf("%d", &b[i].length);
		printf("Enter Width: ");
		scanf("%d", &b[i].width);
		printf("Enter Height: ");
		scanf("%d", &b[i].height);
		}
	for(i=1; i<=n; i++){
		if(is_lower_than_max_height(b[i])){
			printf("Volume = %d\n", get_volume(b[i]));
		}
	}
	return 0;
}
