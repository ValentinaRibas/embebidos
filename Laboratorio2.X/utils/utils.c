

int global_data;




#include "utils.h"
#include "../mcc_generated_files/tmr2.h"


int flag;

int contador(){
    return flag++;
}

void UT_delayms (int miliseg){
    TMR2_Start();
    flag=0;
        while (flag<miliseg) {
            contador;
        }
}



/* *****************************************************************************
 End of File
 */
