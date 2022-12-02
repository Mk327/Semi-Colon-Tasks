 /******************************************************************************
 *
 * Module: BUTTON
 *
 * File Name: button.h
 *
 * Description: Header file for the BUTTON driver
 *
 * Author: Mohamed Khaled
 *
 *******************************************************************************/

#ifndef BUTTON_H_
#define BUTTON_H_

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define BUTTON_PORT PORTA_ID
#define BUTTON_PIN  PIN0_ID
#define PULL_UP 0
#define PULL_DOWN 1
#define CONNECTION_TYPE  PULL_DOWN


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description :
 * Initialize the BUTTON:
 * 1. Setup the BUTTON pin direction by use the GPIO driver.
 */

void BUTTON_init(void);

/*
 * Description :
 * Function to check if the button pressed.
 */
char BUTTON_IS_PRESSED (void);

/*
 * Description :
 * Function to check if the button released.
 */

char BUTTON_IS_RELEASED (void);


#endif /* BUTTON_H_ */
