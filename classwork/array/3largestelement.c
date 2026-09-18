#include <stdio.h>
#if 0
int third_largest(int arr[], int size) {
    int max1, max2, max3;

    if(size < 3) {
        printf("Array must have at least 3 elements\n");
        return -1;
    }

    // Initialize all three with arr[0] as per PDF
    max1 = arr[0];
    max2 = arr[0];
    max3 = arr[0];

    for(int i = 1; i < size; i++) {
        // Case 1: New largest found
        if(arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        // Case 2: Between max1 and max2
        else if(arr[i] > max2 && arr[i] < max1) {
            max3 = max2;
            max2 = arr[i];
        }
        // Case 3: Between max2 and max3
        else if(arr[i] > max3 && arr[i] < max2) {
            max3 = arr[i];
        }
        // Otherwise → continue
    }

    return max3;
}

int main() {
    int size, ret;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    ret = third_largest(arr, size);
    if(ret != -1)
        printf("Third largest element = %d\n", ret);

    return 0;
}
#endif
#if 1

int third_largest(int arr[], int size) {
    int max1, max2, max3;

    if(size < 3) {
        printf("Array must have at least 3 elements\n");
        return -1;
    }

    // Initialize with first three elements
    max1 = arr[0];
    max2 = arr[1];
    max3 = arr[2];

    // Arrange them in descending order
    if(max1 < max2) { int t = max1; max1 = max2; max2 = t; }
    if(max1 < max3) { int t = max1; max1 = max3; max3 = t; }
    if(max2 < max3) { int t = max2; max2 = max3; max3 = t; }

    // Process remaining elements
    for(int i = 3; i < size; i++) {
        if(arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1) {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i] > max3 && arr[i] < max2) {
            max3 = arr[i];
        }
    }

    return max3;
}

int main() {
    int size, ret;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    ret = third_largest(arr, size);
    if(ret != -1)
        printf("Third largest element = %d\n", ret);

    return 0;
}


#endif
























