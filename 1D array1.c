#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // 1. Read the size of the array
    if (scanf("%d", &n) != 1) return 1;

    // 2. Dynamically allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        return 1; 
    }

    int sum = 0;
    // 3. Read n integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Iterate through the array to calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // 5. Print the result
    printf("%d\n", sum);

    // 6. Free the dynamically allocated memory
    free(arr);

    return 0;
}
