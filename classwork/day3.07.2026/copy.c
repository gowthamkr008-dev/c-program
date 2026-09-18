


#include<stdio.h>
#if 0
int main(){
	int arr[5]={10,20,30,40,50};
	int bak[5];

	int i;
	printf("before : ");
	for( i=0;i<5;i++){
		printf("%d ",bak[i]);
	}

	printf("\n");
	for( i =0;i<5;i++){
		bak[i] = arr[i];
	}
	 printf("after : ");
        for( i=0;i<5;i++){
                printf("%d ",bak[i]);
        }

	return 0;

}
/*
 when the loop use the continously decleare a variable before a decleare a int i;

 before : 0 0 1258306288 31640 -1601274080
after : 10 20 30 40 50 
 */


#endif


#if 0

// average and sum
//
int main(){
	int size;

	scanf("%d",&size);

	int arr[size];

	int i;

	int sum = 0;

	float avg;
	
	for(i =0; i< size;i++){
		scanf("%d",&arr[i]);
	
		 sum += arr[i];

	}
	printf("\n");

	for(i=0;i<size;i++){

		printf("%d",arr[i]);
	}
	avg = (float)sum/size;
	printf("\n");
	printf("%d\n",sum);
	printf("%g\n",avg);

	return 0;
}



#endif


#if 0

// min and max
//
int main(){
	int size;

	scanf("%d",&size);

	int arr[size];

	int i;

	for(i =0; i< size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");

	int min = arr[0],max=arr[0];
	for(i=0;i<size;i++){

		printf("%d",arr[i]);
	}
	for(i =1;i<size;i++){
		if(min>arr[i])
			min =arr[i];
		if(max <arr[i])
			max = arr[i];
	}



	printf("\n");
	printf("min : %d\n",min);
	printf("max : %d\n",max);

	return 0;
}



#endif


#if 0

// 2nd min and 2nd max
//
int main(){
	int size;

	scanf("%d",&size);

	int arr[size];

	int i;

	for(i =0; i< size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");

	int min = arr[0],max=arr[0];
	for(i=0;i<size;i++){

		printf("%d",arr[i]);
	}
	for(i =1;i<size;i++){
		if(min>arr[i])
			min =arr[i];
		if(max <arr[i])
			max = arr[i];
	}



	printf("\n");
	printf("min : %d\n",min);
	printf("max : %d\n",max);

	return 0;
}



#endif




#if 0

// square the each element of the array
//
int main(){
        int size;

	scanf("%d",&size);
        int arr[size];
        int i;
        for(i =0; i< size;i++){
                scanf("%d",&arr[i]);
        }
        printf("before square : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }
	for(i =0;i<size;i++){
             arr[i] = arr[i]*arr[i];
        }
	printf("\n After square");
       	for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }

        return 0;
}


#endif



#if 0

// left rotate and right array without using extra array
//
int main(){
        int size;

        scanf("%d",&size);
        int arr[size];
        int i;
        for(i =0; i< size;i++){
                scanf("%d",&arr[i]);
        }
        printf("before rotate : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }

        int temp = arr[0], left,right;
        int j =size-1;
        for(i=0;i<size;i++){

        arr[i] = arr[i+1];
        }
        arr[size-1] = temp;

         printf("left : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }
}
/*
 4
1
2
3
4
before rotate : 1 2 3 4 left : 2 3 4 1
 */

#endif
        


#if 1

//right array without using extra array
//
int main(){
        int size;

        scanf("%d",&size);
        int arr[size];
        int i;
        for(i =0; i< size;i++){
                scanf("%d",&arr[i]);
        }
        printf("before rotate : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }
       
	int temp = arr[size-1], left,right;
	
	
	for(i=size-1;i>0;i--){
		
	arr[i] = arr[i-1];
	
	}
	
	arr[0] = temp;

	printf("left : ");
        
	for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }
}

/*
 5
11
22
33
44
55
before rotate : 11 22 33 44 55 left : 55 11 22 33 44 
 */
#endif
