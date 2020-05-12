

 #include "button.h"
 #include <xc.h>   


bool BTN1_flag;  
bool BTN2_flag;




    void BTN1_set(){
        BTN1_flag = true;
    }
    void BTN1_reset(){
        BTN1_flag = false;    
    }
    bool BTN1_read_values(){
        return BTN1_flag;
    }
    
    
    void BTN2_set(){
    BTN2_flag = true;
    }
    void BTN2_reset(){
    BTN2_flag = false;
    }
    bool BTN2_read_values(){
        return BTN2_flag;
    }



/* *****************************************************************************
 End of File
 */
