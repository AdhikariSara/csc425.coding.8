#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size = 100000;
    array = (int *) malloc(size * sizeof(int));
    
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use memory and simulate usage
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    // Pause to observe memory usage
    printf("Memory allocated and used, check with 'free' command.\n");
    getchar();

    // Free allocated memory
    free(array);
    printf("Memory deallocated.\n");

    return 0;
}
