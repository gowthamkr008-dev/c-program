#include <stdio.h>

int main() {
	int size;
	scanf("%d",&size);


    int arr[size];
    

    for(int i=0;i<size;i++){
    
    
	    scanf("%d",&arr[i]);
    }

    int newSize = 0;                      // Tracks the count of unique elements

    // Loop through each element of the original array
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element arr[i] already exists in our unique section
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // Found a duplicate
                break;
            }
        }

        // If it's not a duplicate, shift it to the front of the array
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    // Print the unique elements
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
