#include <stdio.h>
int main(){
int n,un,cen,dez,mil,aux;
  scanf("%i",&n);
mil = n/1000;
dez = ((n/100) *10);
cen = (n/10) *1;
un = n%1;
switch(mil){
    case 1:  printf("Mil");break;
    case 2:  printf("dois mil");break;
    case 3:  printf("tres mil");break;
    case 4:  printf("quatro mil");break;
    case 5:  printf("cinco mil");break;
    case 6:  printf("seis mil");break;
    case 7:  printf("sete mil");break;
    case 8:  printf("oito mil");break;
    case 9:  printf("nove mil");break;
     
}
switch(dez){
    case 1:  printf("cem");break;
    case 2:  printf("duzentos");break;
    case 3:  printf("trezentos");break;
    case 4:  printf("quatrocentos");break;
    case 5:  printf("quinhentos");break;
    case 6:  printf("seicentos");break;
    case 7:  printf("setecentos");break;
    case 8:  printf("oitocentos");break;
    case 9:  printf("novecentos");break;
}
}