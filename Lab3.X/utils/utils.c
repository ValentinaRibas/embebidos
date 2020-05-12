#include "utils.h"
#include "../mcc_generated_files/tmr2.h"

bool UT_delayms(ut_tmrDelay_t* p_timer, uint32_t p_ms) {
    
    int valorInicial;
    bool value;
    // no bloqueante para que no bloquee la ejecucion de otros threads
    switch (p_timer->state) {
        
        case UT_TMR_DELAY_INIT:
            valorInicial = p_timer->startValue;
            if (p_timer->startValue == valorInicial + p_ms) {
                value = true;
                break;
            } else {
                value = false;
                
            }
            
        case UT_TMR_DELAY_WAIT:
            if (p_timer->startValue < valorInicial + p_ms) {
                TMR2_SoftwareCounterGet();
            }
            break;
    }

    return value;

}



/* *****************************************************************************
 End of File
 */
