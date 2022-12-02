 /******************************************************************************
 *
 * Module: LED
 *
 * File Name: led.c
 *
 * Description: Source file for the LED driver
 *
 * Author: Mohamed Khaled
 *
 *******************************************************************************/

#include <util/delay.h> /* For the delay functions */
#include "common_macros.h" /* For GET_BIT Macro */
#include "led.h"
#include "gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/*
 * Description :
 * Initialize the LED:
 * 1. Setup the LED pin direction by use the GPIO driver.
 */

void LED_init(void)
{
	GPIO_setupPinDirection(LED_PORT,LED_PIN,PIN_OUTPUT);
}

/*
 * Description :
 * Function to enable the led.
 */

void LED_ON(void)
{
#if(CONNECTION_TYPE == POSITIVE_LOGIC)
	SET_BIT(LED_PORT,LED_PIN);
#elif (CONNECTION_TYPE == NEGATIVE_LOGIC)
	CLEAR_BIT(LED_PORT,LED_PIN);
#endif
}

/*
 * Description :
 * Function to disable the led.
 */

void LED_OFF(void)
{
#if(CONNECTION_TYPE == POSITIVE_LOGIC)
	CLEAR_BIT(LED_PORT,LED_PIN);
#elif (CONNECTION_TYPE == NEGATIVE_LOGIC)
	SIT_BIT(LED_PORT,LED_PIN);
#endif
}
