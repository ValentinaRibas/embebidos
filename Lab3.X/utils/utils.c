#include "utils.h"
#include "../mcc_generated_files/tmr2.h"


bool UT_delayms(ut_tmrDelay_t* p_timer, uint32_t p_ms) {
    

    switch (p_timer->state) {
        
        case UT_TMR_DELAY_INIT:
            p_timer->startValue = TMR2_SoftwareCounterGet();
            p_timer->state = UT_TMR_DELAY_WAIT;
            break;
            
        case UT_TMR_DELAY_WAIT:
            if (TMR2_SoftwareCounterGet() >= p_timer->startValue + p_ms) {
                p_timer->state = UT_TMR_DELAY_INIT;
                return true;
            }
            break;

    }

    return false;

}

// corregir p_timer que se pasa por parametro en funcion red LED

void turn_on_red_LED(ut_tmrDelay_t* p_timer){
    
    bool state=true;
    
    // se prende , se apaga
    while(1){
        switch(state){
            case true:
                Led_A_SetHigh();
      
                if(UT_delayms(p_timer,400) == true){
                
                    state=false;
                }
                
                break;

            case false:
                Led_A_SetLow(); 
                
                if(UT_delayms(p_timer,800) == true){
                
                    state=true;
                }
 
                break;
        }
    }
}



/* *****************************************************************************
 End of File
 */
