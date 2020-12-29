#include <stdio.h>
#include "function.h"

int main(void){

int c=0;

#ifdef USE_SYSCALL

c = Dodaj(5,3);
printf("Wynik dodawania:%d\n",c);

#else 

printf("dupa\n");

#endif //USE_SYSCALL

return 0;

}
