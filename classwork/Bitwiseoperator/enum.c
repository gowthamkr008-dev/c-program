#include<stdio.h>

#if 0
enum bool{//if not work use another like bool_1
  e_false,  // e_false =0
  e_true   //e_false++
};


//e true is incremental value of before values e_false
int main(){
    printf("%d\n",e_false);
    printf("%d\n",e_true);

    return 0;
}

#endif

#if 0
typedef enum{
  red =1,
  blue =4,
  green

}color;
int main(){
  color white =0,black ;  //white asign but blackis garbage value
  printf("%d\n",red);
    printf("%d\n",blue);
      printf("%d\n",green);
        printf("%d\n",white);
          printf("%d\n",black);

            printf("size %zu\n",sizeof(color) );
              printf("size %zu\n",sizeof(blue) );
                printf("size %zu\n",sizeof(green) );


}
#endif

#if 0
int main(){
    typedef enum{
      red =1,
      blue = 4,
      green


    }color;
    // int blue;//redecleare

    printf("%d\n",blue);
        printf("%d\n",blue);
}


#endif

#if 0
typedef enum{
      red =1,
      blue = 4,
      green


    }color;
int main(){
    
     int blue;//local variable has highest priority print garbage value

    printf("%d\n",blue);
        printf("%d\n",blue);
}

#endif


#if 0
typedef enum{
      red =1,
      blue = 4,
      green


    }color;
    int blue; //error redecleare error
int main(){
    
     
    printf("%d\n",blue);
        printf("%d\n",blue);
}

#endif

#if 0
enum bool{
  e_false,e_true
};

enum bool foo(){
  return e_false;
}

enum bool foo1(){
  return e_true;
}

int main(){
    printf("%d\n",foo());
    printf("%d\n",foo1());

}


#endif


#if 1
enum bool{
 TEN =10,TWENTY = 20
};


int main(){
  int option;
  printf("Enter option: ");
  scanf("%d",&option);
  switch(option){
    case TEN: 
     printf("u enter\n");
     break;
     case TWENTY:
     printf("You entr\n");
     break;
     default :
      printf("Try again\n");
      break;
  }

}


#endif




























































































