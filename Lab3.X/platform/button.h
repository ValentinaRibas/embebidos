

#ifndef button_h   /* Guard against multiple inclusion */
#define button_h





//#include <xc.h>  
#include <stdbool.h>


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif



    // solo si se quiere llamar desde afuera
    void BTN1_set();
    void BTN1_reset();
    bool BTN1_read_values();
    
    
    void BTN2_set();
    void BTN2_reset();
    bool BTN2_read_values();
    
    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif 

/* *****************************************************************************
 End of File
 */
