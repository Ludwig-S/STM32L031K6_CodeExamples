#if !defined(MAIN_H)
#define MAIN_H

#include "stm32l061xx.h" // device header

//______________________________________________________________
// MACROS:
#define MAX_AMOUNT_INPUT_DIGITS 10
#define ADC_REFVOLT 3.3f
#define ADC_SAMPLEPERIOD (15/90e6) // ADC stabilisation time (3 cycles) + conversion time (12 cycles) = 15 cycles

// REGISTER EDITING MACROS:
#define SET_BIT(REG, BIT)     ((REG) |= (BIT))
#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))
#define READ_BIT(REG, BIT)    ((REG) & (BIT))
#define CLEAR_REG(REG)        ((REG) = (0x0))
#define WRITE_REG(REG, VAL)   ((REG) = (VAL))
#define READ_REG(REG)         ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL)))

#endif // MAIN_H
