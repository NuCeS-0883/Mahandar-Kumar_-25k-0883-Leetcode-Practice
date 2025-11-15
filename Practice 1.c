#include <stdio.h>
void runningSum(int nums[], int n) {
	int i;
    for (i = 1; i < n; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter digit %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    runningSum(nums, n);
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
