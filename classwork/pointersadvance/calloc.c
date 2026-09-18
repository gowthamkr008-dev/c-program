#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#if 0
void read_array(int *arr,int size){
    for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
}
void print_array(int *arr,int size){
  for(int i=0;i<size;i++){
      printf("%d,",arr[i]);
    }
}


int main(){
    int size;
    printf("Enter the number of element : ");
    scanf("%d",&size);
   int *ptr;//[size];
    ptr = malloc(size * sizeof(int));
//  ptr =calloc(size,sizeof(int));
    if(ptr == NULL){
        perror("Error");
        return -1;
    }
    printf("Enter %d array of element: \n",size);
    read_array(ptr,size);

    printf("Array elements \n");

    print_array(ptr,size);
    free(ptr);

    return 0;


}

#endif



#if 0
int main(){
    char *ptr;
    int i;
    ptr = malloc(5);
    for(i =0;i<5;i++){
        ptr[i] = 'A' + i;
    }
   // free(ptr);
    printf("%s",ptr);
    return 0;
}

#endif

#if 1
char *my_strdup(char *s){
    char *ptr;
    ptr =malloc(strlen(s) +1);
    strcpy(ptr , s);
    return ptr;
}
int main(){
  char *ptr;
  ptr =my_strdup("gowtham");
  puts(ptr);
  free(ptr);
}
#endif


#if 1

#endif


#if 1

#endif