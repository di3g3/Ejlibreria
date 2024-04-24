#include "LEERPIN.h"
#include "MKL25Z4.h"
int main(){
    SIM -> SCGC5|= SIM_SCGC5_PORTE_MASK;
    PORTE -> PCR[0] = PORT_PCR_MUX(0);
    PORTE -> PCR[1] = PORT_PCR_MUX(0);
    PORTE -> PCR[2] = PORT_PCR_MUX(1);
    PORTE -> PCR[3] = PORT_PCR_MUX(1);
    PORTE -> PCR[4] = PORT_PCR_MUX(1);
    PORTE -> PCR[5] = PORT_PCR_MUX(1);
        while(1){
            char estPul1 = EstadoPuls(0);
            char estpul2 = EstadoPuls(1);
            if((estPul1 == 'i') && estpul2 == 'i' ){
                estadoPin(2,1);
                estadoPin(3,0);
                estadoPin(4,0);
                estadoPin(5,0);
            }else if(estPul1 == 'a' && estpul2 == 'i' ){
                    estadoPin(2,0);
                    estadoPin(3,1);
                    estadoPin(4,0);
                    estadoPin(5,0);
                }else if(estPul1 == 'i' && estpul2 == 'a' ){
                        estadoPin(2,0);
                        estadoPin(3,0);
                        estadoPin(4,1);
                        estadoPin(5,0);
                    }else if(estPul1 == 'a' && estpul2 == 'a' )  
                            estadoPin(2,0);
                            estadoPin(3,0);
                            estadoPin(4,0);
                            estadoPin(5,1);
            }
    }
        