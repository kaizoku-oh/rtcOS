/* 
 **************************************************************************************************
 *
 * @file    : RTCOSConfig.h
 * @author  : Bayrem GHARSELLAOUI
 * @version : 2.0
 * @date    : April 2021
 * @brief   : RTCOS user configuration example used to overrite os default configuration
 * 
 **************************************************************************************************
 */

#ifndef RTCOS_CONFIG_H
#define RTCOS_CONFIG_H

/*-----------------------------------------------------------------------------------------------*/
/* Includes                                                                                      */
/*-----------------------------------------------------------------------------------------------*/
#include <Arduino.h>

/*-----------------------------------------------------------------------------------------------*/
/* Defines                                                                                       */
/*-----------------------------------------------------------------------------------------------*/
#define RTCOS_MAX_TASKS_COUNT                    2
#define RTCOS_MAX_FUTURE_EVENTS_COUNT            2
#define RTCOS_MAX_MESSAGES_COUNT                 2
#define RTCOS_MAX_TIMERS_COUNT                   2

/*-----------------------------------------------------------------------------------------------*/
/* Macros                                                                                        */
/*-----------------------------------------------------------------------------------------------*/
#define ENTER_CRITICAL_SECTION()                 noInterrupts();
#define EXIT_CRITICAL_SECTION()                  interrupts();

#endif /* RTCOS_CONFIG_H */
