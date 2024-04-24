#include "LEERPIN.h"
#include "MKL25Z4.h"
void estadoPin(int pin, int estado){
    PTE -> PSOR|=(estado << pin);
}
char EstadoPuls(int pin){ 
    int retorno = PTE -> PDIR&(1 << pin);
    if(retorno == 1){
        return 'a';
    } else {
        return 'i';
    }
}
