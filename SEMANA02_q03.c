/*
#include <stdio.h>
 int main(void){
   int a, b, c;
   scanf("%i %i %i",&a, &b, &c);
    if((a<c && b<c && a+b<=c)||(c<b && a<b && c+a<=b)|| (c<a && b<a && c+b<=a)){
       printf("Nao forma\n");
     }else{
       if((a==b && b==c && c==a)|| (b==c && c==a && a==b)|| (c==a && a==b && b==c)){
         printf("Equilatero\n");
       }else{
         if((a==b && b==a && a!=c)||( b==c && c==b && b!=a)||(c==a && a==c && c!=b)){
           printf("Isosceles\n");
         }else{
           if((a!=b && a!=c) && (b!=a && b!=c) && (c!=a && c!=b)){
             printf("Escaleno\n");
           }
         }
       }
     }
  return 0;
 }
 */