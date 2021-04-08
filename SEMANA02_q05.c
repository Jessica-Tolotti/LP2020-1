/*#include <stdio.h>

int main(void) {
  int a,b,i;
  for(i=0;i<5;i++){
    scanf("%i %i",&a,&b);
      if(a<b){
      if(a == b-1){
        printf("%i %i %i %i \n",a-1,a,b,b+1);
      }else{
        if(a+1 == b-1){
          printf("%i %i %i %i %i\n",a-1,a,b-1,b,b+1);
        }else{
          if(a+1 == b){
            printf("%i %i %i %i\n",a-1,a,a+1,b+1);
          }else{
            printf("%i %i %i %i %i %i\n",a-1,a,a+1,b-1,b,b+1);
          }
        }
      }
       }else{
         if(b == a-1){
        printf("%i %i %i %i \n",b-1,b,a,a+1);
      }else{
        if(b+1 == a-1){
          printf("%i %i %i %i %i\n",b-1,b,a-1,a,a+1);
        }else{
          if(b+1 == a){
            printf("%i %i %i %i\n",b-1,b,b+1,a+1);
          }else{
            printf("%i %i %i %i %i %i\n",b-1,b,b+1,a-1,a,a+1);
          }
        }
      }
       }
  }
}
*/