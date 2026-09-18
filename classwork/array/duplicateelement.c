#include <stdio.h>
#if 1
//print which number are duplicate
//Enter size of array: 8
/*
Enter 8 elements:
1 5 4 2 1 6 2 1

Duplicate elements in the array:
1
2
*/
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array:\n");
    for (int i = 0; i < size; i++) {
        int alreadyChecked = 0;

        // check if this element was already printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyChecked = 1;
                break;
            }
        }
        if (alreadyChecked==1) continue;
        // count occurrences
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
#endif

#if 0

//print how many duplicate number present 
//Enter the size of the array: 8
//1 5 4 2 1 6 2 1
//the alement 1 is present in 3 times
//the alement 2 is present in 2 times

int main(){
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	//upto this decleare the array
	
	//check duplicate array element
	int print =0;
	for(int i=0;i<size;i++){
		int flag = 0;
		for(int j = 0;j < i;j++){
			if(arr[i] == arr[j]){
				flag =1;
				break;
			}
		}
		if(flag == 1) continue ;
		    int count =0;
			for(int l =0;l<size;l++){
				if(arr[i] == arr[l]){
					count++;
				}
			}if(count > 1){
				printf("the alement %d is present in %d times \n",arr[i],count);
			
			
		}
	}
	return 0;
}


#endif




































