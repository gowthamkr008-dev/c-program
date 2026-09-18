#include<stdio.h>
void print_menu(char **menu){
  int i,option;
  for(i=0;i<5;i++){
    printf("%d. %s\n",i+1,menu[i]);
  }

  scanf("%d",&option);
  if(option > 0 && option <=5){
    printf("%s Selected \n",menu[option-1]);
  }else{
    printf("Inavlid option\n");
  }

}

int main(){
   char *menu[5] = {"File","Edit","View","Insert","Help"};
   print_menu(menu);
   return 0;
}
