#include<stdio.h>

#if 0
void print_array(int arr[])//other way to use the call the array *arr and arr[]   array consider as pointer not a array
{
	int i;
	//printf("size of i %zu\n",sizeof(arr));-----------------------
	for(i=0;i<5;i++){//                                            |
		printf("index  %d has element  %d\n",i,arr[i]);//          | 
	}//                                                            |
} //                                                               |
int main(){ //                                                     |
 	int arr[5] = {10,20,30,40,50}; //                              |
	//printf(" size of array %zu\n",sizeof(arr));------------------|
	print_array(arr);//                                            |
	return 0;//                                                    |
} //                                                               |
/*                                                                 |
output                                                             |
index  0 has element  10                                           |
index  1 has element  20                                           |
index  2 has element  30                                           |
index  3 has element  40                                           |
index  4 has element  50                                           |
                                                                   |
/*

passingarraytofunction.c: In function ‘print_array’:
passingarraytofunction.c:5:40: warning: ‘sizeof’ on array function parameter ‘arr’ will return size of ‘int *’ [-Wsizeof-array-argument]
    5 |         printf("size of i %zu\n",sizeof(arr));
      |                                        ^
passingarraytofunction.c:2:22: note: declared here
    2 | void print_array(int arr[])//other way to use the call the array *arr and arr[]
      |                  ~~~~^~~~~
*/
/*

size of array 20
size of i 8
index  0 has element  10
index  1 has element  20
index  2 has element  30
index  3 has element  40
index  4 has element  50
*/

#include<stdio.h>



#endif

#if 1
void print_array(int arr[],int size)//other way to use the call the array *arr and arr[]   array consider as pointer not a array
{
	int i;
	//printf("size of i %zu\n",sizeof(arr));
	for(i=0;i<size;i++){//                                       
		printf("index  %d has element  %d\n",i,arr[i]);//           
	}//                                                            
} // 


void scan(int *arr,int size){

for(int i=0;i < size;i++){
scanf("%d",arr + i);
}
}                                                              
int main(){ // 
	int size = 5;
	                                                    
 	int arr[5];
 	scan(arr,size);                             
	
	print_array(arr,size);//                                            
	return 0;//                                                    
} 
#endif

















































