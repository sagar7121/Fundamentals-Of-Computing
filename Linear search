#include <stdio.h>

int main() {

    int arr[] = {5, 2, 7, 3, 9};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }


    if (index == -1) {
        printf("Target not found\n");
    } else {
        printf("Target found at index %d\n", index);
    }

    return 0;
}
