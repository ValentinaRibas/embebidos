#include <stdbool.h>
#include <stdint.h>
#include "../mcc_generated_files/pin_manager.h"

#define UT_DELAY_CYCLES 500

// no se sabe donde va esto !!!

typedef enum {
    UT_TMR_DELAY_INIT,  // estado del delay
    UT_TMR_DELAY_WAIT
} UT_TMR_DELAY_STATE;

typedef struct {
    uint32_t startValue;
    UT_TMR_DELAY_STATE state;
} ut_tmrDelay_t;



bool UT_delayms(ut_tmrDelay_t* p_timer, uint32_t p_ms);

void turn_on_red_LED();

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif




/* *****************************************************************************
 End of File
 */
