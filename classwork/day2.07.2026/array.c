#include<stdio.h>
#if 0
int main(){
	int array[5]={ 10,20,30,40,50};
	int i;
	printf("Array Element: ");
	for(i =0;i<5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
//Array Element: 10 20 30 40 50

#endif

#if 0
int main(){
	int array[5]={ 10,20,30,40,50};
	int i;
	printf("Array Element: ");
	do{
		printf("%d ",array[i]);
		i++;
		}while(i<5);
	return 0;
}
//Array Element: 10 20 30 40 50

#endif


#if 0
int main(){
	int array[5]={ 10,20,30,40,50};
	int i;
	printf("Array Element: ");
	for(i =0;i<5;i++){
		printf("%d at %u\n",array[i],array[i]); //%d format specifier for integer
							//%ufor mate specifier for hexadecimal value
	}
	return 0;
}
//Array Element: 10 20 30 40 50

#endif

#if 0
int main(){
        int array[5];
        int i;


	printf("Enter 5 element : ");
	for(int j=0;j<5;j++){
		scanf("%d",&array[j]);
	}
        
        printf("Array Element: ");
        for(i =0;i<5;i++){
                printf("%d ",array[i]);
        }
        return 0;
}
//Enter 5 element : 50 95 60 85 75
//Array Element: 50 95 60 85 75

#endif



#if 0
int main(){
        int array1[5] ={1,2,3,4,5};
	int array2[5] ={ 1,2};
	int array3[] = {1,2};//is initialization is thare
//	int array4[];//during the decleration either intialition the value of size of array is manditory 
      
        printf("%lu\n ",sizeof(array1));
	 printf("%lu\n ",sizeof(array2));
	  printf("%lu\n ",sizeof(array3));
//	   printf("%lu\n ",sizeof(array4));

        return 0;
}
//output

#endif

#if 0
int main(){

	int size =5;
        int array1[size];
   int i;  
   	for(i =0;i<size;i++){
                printf("%d ",array1[i]);
        }

        return 0;
}
#endif


#if 0
int main(){

        int size;

	printf("Enter a number of elements");
       scanf("%d",&size);
       int array[size];
        int i;


        printf("Enter 5 element : ");
        for(int j=0;j<size;j++){
                scanf("%d",&array[j]);
        }

        printf("Array Element: ");
        for(i =0;i<size;i++){
                printf("%d ",array[i]);
        }
        return 0;
}


/*
 
   Enter a number of elements5
Enter 5 element : 20
50
50
03
41
Array Element: 20 50 50 3 41
 */

#endif


#if 0
int main(){

	int size;
	
        int array[size];

        scanf("%d",&size);

	int i;


        printf("Enter 5 element : ");
        for(int j=0;j<size;j++){
                scanf("%d",&array[j]);
        }

        printf("Array Element: ");
        for(i =0;i<size;i++){
                printf("%d ",array[i]);
        }
        return 0;
}
//in size can store some the garbage value
//then array get the memory in the garbage value
//then decleare
//
//
#endif




#if 0
int main(){

        int size;

        printf("Enter a number of elements");
       scanf("%d",&size);
       int array[size];
        int i;


        printf("Enter 5 element : ");
        for(int j=0;j<size;j++){
                scanf("%d",&array[j]);
        }

        printf("Array Element: ");
        for(i =0;i<size;i++){
                printf("%d ",array[i]);
        }
        return 0;
}


/*

   Enter a number of elements5
Enter 5 element : 20
50
50
03
41
Array Element: 20 50 50 3 41
 */

#endif




#if 1
int main(){
        int array[5]={ 10,20,30,40,50};
        int array_copy[5] ={0,0,0,0,0};

	int i;
        
   
      if(array == array_copy)//compare the base value of the array
      {
	   printf("Copied\n");
   }else
	   printf("not copied");
	return 0;
}
/*
 * error: assignment to expression with array type
  222 |    array_copy=array;
 */

#endif
