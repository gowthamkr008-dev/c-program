#include<stdio.h>
int
main ()
{
int size;//size of array
printf("Enter the size of the array: ");
scanf("%d",&size);//get the size from the user
getchar;
int arr[size];//decleare the array
int i;
printf("\nEnter the array element: ");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);//read the array element
}
getchar;
printf("\nbefore left to all 0: ");
for(i=0;i<size;i++){
printf("%d ",arr[i]);//print the array element befor left to zero
}

int temp,count =0;
for(int i = 0;i<size;i++){//when the value is zero get into left
if(arr[i] == 0){
count++;
for(int j= i;j>0;j--){
temp =arr[j];
arr[j] = arr[j-1];
arr[j-1] = temp;

}
}

}
printf("\n count %d\n",count);

int j;
printf("\nAfter left to all 0: ");
for(int i=0;i<size;i++){
printf("%d ",arr[i]);
}

 for(i =0;i<size;i++){
                for(j =0;j<size-1;j++){
                if(arr[j] == 0)
                	continue;
                        if(arr[j] < arr[j+1]){
                                temp = arr[j+1];
                                arr[j+1] =arr[j];
                                arr[j] = temp;
                        }
                }
}

printf("\nAfter bubble short 0: ");
for(int i=0;i<size;i++){
printf("%d ",arr[i]);
}


return 0;

}

