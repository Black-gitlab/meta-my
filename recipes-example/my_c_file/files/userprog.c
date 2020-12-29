#include <stdio.h>
#include "userprog.h"

int main(void){

int c=0;

c = Dodaj(5,5);
printf("Wynik dodawania:%d\n",c);
printf("dupa\n");
return 0;

}


int Dodaj(int a,int b){

return a+b;


}