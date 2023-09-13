#ifndef BITMATH
#define BITMATH
 #define REG_SIZE        8


 /*-----------------------------------------------------*/




 #define SET_BIT(reg , pos)          reg | = (1<<pos)
 #define CLR_BIT (reg , pos)         reg & = (~ ( 1 << pos ))
 #define  READ_BIT (reg , pos)       ((reg &(1<<pos))>>pos
 #define  TOGGLE_BIT  (reg , pos)    reg ^ =(1<<pos)
 #define ROT_RIGHT   (reg , step)     reg =(reg <<(REG_SIZE - step))|(reg >> step)
 #define ROT_RIGHT   (reg , step)     reg =(reg >>(REG_SIZE - step))|(reg << step)





/*------------------------------------------------------------------------------------*/

#endif // BITMATH
