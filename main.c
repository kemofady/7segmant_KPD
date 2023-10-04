/* library **/
#include<util/delay.h>
#include"STD_TYPES.h"
#include"BIT_MATH.h"
/* mcal */

#include"DIO_driver/Dio_Interface.h"

/* own  drive*/

#include "KPD_driver/KPD_interface.h"

u8 Arr_DecToSeg[10] = {0b11000000,   /* 0 */
                       0b11111001,   /* 1 */
                       0b10100100,   /* 2 */
                       0b10110000,   /* 3 */
                       0b10011001,   /* 4 */
                       0b10010010,   /* 5 */
                       0b10000010,   /* 6 */
                       0b11111000,   /* 7 */
                       0b10000000,   /* 8 */
                       0b10010000    /* 9 */
					  };
void main()
{
	u8 local_u8key=0xff;   // not pressed

	KPD_voidInit();

	u8 LoopCounter;
	/* Set D1 as input and rest of pins as Output Pins */
	Dio_voidSetPortDirection(DIO_PORTD, DIO_OUTPUT);


	while(1)
	{
		do{
			local_u8key = KPD_u8GETPressedKey();

				}while(local_u8key == 0xff);
	    switch(local_u8key){
	    case'0':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[0]);
	    				break;
	    case'1':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[1]);
	    				break;
	    case'2':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[2]);
	    				break;
	    case'3':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[3]);
	    				break;
	    case'4':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[4]);
	    				break;
	    case'5':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[5]);
	    				break;
	    case'6':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[6]);
	    				break;

	    case'7':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[7]);
	    				break;
	    case'8':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[8]);
	    				break;
	    case'9':
	    	Dio_voidSetPortValue(DIO_PORTD, Arr_DecToSeg[9]);
	    				break;

	    }



	}
}
