 /******************************************************************************
 *
 * Module: BUTTON
 *
 * File Name: button.c
 *
 * Description: Source file for the BUTTON driver
 *
 * Author: Mohamed Khaled
 *
 *******************************************************************************/

#include <util/delay.h> /* For the delay functions */
#include "common_macros.h" /* For GET_BIT Macro */
#include "button.h"
#include "gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/*
 * Description :
 * Initialize the BUTTON:
 * 1. Setup the BUTTON pin direction by use the GPIO driver.
 */

void BUTTON_init(void)
{
	GPIO_setupPinDirection(BUTTON_PORT, BUTTON_PIN,PIN_INPUT);
}

/*
 * Description :
 * Function to check if the button pressed.
 */

char BUTTON_IS_PRESSED (void)
{

#if(CONNECTION_TYPE == PULL_DOWN)

	return BIT_IS_SET(BUTTON_PORT,BUTTON_PIN);

#elif(CONNECTION_TYPE == PULL_UP)

	return BIT_IS_CLEAR(BUTTON_PORT,BUTTON_PIN);
#endif

}


/*
 * Description :
 * Function to check if the button released.
 */

char BUTTON_IS_RELEASED (void)
{

#if(CONNECTION_TYPE == PULL_DOWN)

	return BIT_IS_CLEAR(BUTTON_PORT,BUTTON_PIN);

#elif(CONNECTION_TYPE == PULL_UP)

	return BIT_IS_SIT(BUTTON_PORT,BUTTON_PIN);
#endif

}
