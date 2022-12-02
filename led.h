 /******************************************************************************
 *
 * Module: LED
 *
 * File Name: led.h
 *
 * Description: Header file for the LED driver
 *
 * Author: Mohamed Khaled
 *
 *******************************************************************************/

#ifndef LED_H_
#define LED_H_


#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define LED_PORT PORTA_ID
#define LED_PIN  PIN0_ID
#define NEGATIVE_LOGIC 0
#define POSITIVE_LOGIC 1
#define CONNECTION_TYPE  POSITIVE_LOGIC

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Initialize the LED:
 * 1. Setup the LED pin direction by use the GPIO driver.
 */

void LED_init(void);

/*
 * Description :
 * Function to enable the led.
 */
void LED_ON(void);

/*
 * Description :
 * Function to disable the led.
 */
void LED_OFF(void);
#endif /* LED_H_ */
