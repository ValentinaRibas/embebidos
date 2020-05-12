

/**
  Section: Included Files
*/
#include <xc.h>
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/system.h"
#include "utils/utils.h"
#include "platform/button.h"
#include "mcc_generated_files/usb/usb.h"

#include <stdio.h>



/*
                         Main application
 */
    
int main(void)
{
    uint8_t dato;
            
    uint8_t buffer[64];
    bool flagUSB;
    SYSTEM_Initialize();
    
   
    
    while(1){
        
        CDCTxService();
        if((USBGetDeviceState()< CONFIGURED_STATE) && (USBIsDeviceSuspended() == false)){
            continue;
            
        } else{
            flagUSB=true;
            
            dato = getsUSBUSART(buffer,sizeof(buffer));
            if(dato!=0){
                putUSBUSART(buffer, dato);
            }
        }
        
        
    }
    return 1;
    
    
    
//    
//    TMR2_Initialize();
//    
//    BTN2_SetInterruptHandler(&BTN2_set);
//    BTN1_SetInterruptHandler(&BTN1_set);
//    TMR2_SetInterruptHandler(&contador);
//
//    while (1)
//    {
//        if (BTN1_read_values()==true){
//
//            Led_A_SetHigh();
//            UT_delayms(2000);
//            Led_A_SetLow();
//            BTN1_reset();
//        }
////        
//        
//
//        if (BTN2_read_values() == true){
//
//            Led_B_SetHigh();
//            UT_delayms(2000);
//            Led_B_SetLow();
//            BTN2_reset();
//        }
//    }
//
//    return 0;
   
        
    }
    

/**
 End of File
*/

