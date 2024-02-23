/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA1 aliases
#define PIP6_TRIS                 TRISAbits.TRISA1
#define PIP6_LAT                  LATAbits.LATA1
#define PIP6_PORT                 PORTAbits.RA1
#define PIP6_WPU                  WPUAbits.WPUA1
#define PIP6_OD                   ODCONAbits.ODCA1
#define PIP6_ANS                  ANSELAbits.ANSA1
#define PIP6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define PIP6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define PIP6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define PIP6_GetValue()           PORTAbits.RA1
#define PIP6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define PIP6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define PIP6_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define PIP6_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define PIP6_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define PIP6_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define PIP6_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define PIP6_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define PIP5_TRIS                 TRISAbits.TRISA2
#define PIP5_LAT                  LATAbits.LATA2
#define PIP5_PORT                 PORTAbits.RA2
#define PIP5_WPU                  WPUAbits.WPUA2
#define PIP5_OD                   ODCONAbits.ODCA2
#define PIP5_ANS                  ANSELAbits.ANSA2
#define PIP5_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PIP5_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PIP5_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PIP5_GetValue()           PORTAbits.RA2
#define PIP5_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PIP5_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PIP5_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PIP5_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PIP5_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PIP5_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PIP5_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define PIP5_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RB5 aliases
#define PIP4_TRIS                 TRISBbits.TRISB5
#define PIP4_LAT                  LATBbits.LATB5
#define PIP4_PORT                 PORTBbits.RB5
#define PIP4_WPU                  WPUBbits.WPUB5
#define PIP4_OD                   ODCONBbits.ODCB5
#define PIP4_ANS                  ANSELBbits.ANSB5
#define PIP4_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define PIP4_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define PIP4_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define PIP4_GetValue()           PORTBbits.RB5
#define PIP4_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define PIP4_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define PIP4_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define PIP4_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define PIP4_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define PIP4_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define PIP4_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define PIP4_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB7 aliases
#define PIP3_TRIS                 TRISBbits.TRISB7
#define PIP3_LAT                  LATBbits.LATB7
#define PIP3_PORT                 PORTBbits.RB7
#define PIP3_WPU                  WPUBbits.WPUB7
#define PIP3_OD                   ODCONBbits.ODCB7
#define PIP3_ANS                  ANSELBbits.ANSB7
#define PIP3_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define PIP3_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define PIP3_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define PIP3_GetValue()           PORTBbits.RB7
#define PIP3_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define PIP3_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define PIP3_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define PIP3_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define PIP3_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define PIP3_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define PIP3_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define PIP3_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define PIP7_TRIS                 TRISCbits.TRISC0
#define PIP7_LAT                  LATCbits.LATC0
#define PIP7_PORT                 PORTCbits.RC0
#define PIP7_WPU                  WPUCbits.WPUC0
#define PIP7_OD                   ODCONCbits.ODCC0
#define PIP7_ANS                  ANSELCbits.ANSC0
#define PIP7_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define PIP7_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define PIP7_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define PIP7_GetValue()           PORTCbits.RC0
#define PIP7_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define PIP7_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define PIP7_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define PIP7_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define PIP7_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define PIP7_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define PIP7_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define PIP7_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC2 aliases
#define LED0_TRIS                 TRISCbits.TRISC2
#define LED0_LAT                  LATCbits.LATC2
#define LED0_PORT                 PORTCbits.RC2
#define LED0_WPU                  WPUCbits.WPUC2
#define LED0_OD                   ODCONCbits.ODCC2
#define LED0_ANS                  ANSELCbits.ANSC2
#define LED0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED0_GetValue()           PORTCbits.RC2
#define LED0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define SW0_TRIS                 TRISCbits.TRISC3
#define SW0_LAT                  LATCbits.LATC3
#define SW0_PORT                 PORTCbits.RC3
#define SW0_WPU                  WPUCbits.WPUC3
#define SW0_OD                   ODCONCbits.ODCC3
#define SW0_ANS                  ANSELCbits.ANSC3
#define SW0_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SW0_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SW0_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SW0_GetValue()           PORTCbits.RC3
#define SW0_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SW0_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SW0_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SW0_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SW0_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SW0_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SW0_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SW0_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC6 aliases
#define PIP1_TRIS                 TRISCbits.TRISC6
#define PIP1_LAT                  LATCbits.LATC6
#define PIP1_PORT                 PORTCbits.RC6
#define PIP1_WPU                  WPUCbits.WPUC6
#define PIP1_OD                   ODCONCbits.ODCC6
#define PIP1_ANS                  ANSELCbits.ANSC6
#define PIP1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PIP1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PIP1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PIP1_GetValue()           PORTCbits.RC6
#define PIP1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PIP1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PIP1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PIP1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PIP1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PIP1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PIP1_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define PIP1_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define PIP2_TRIS                 TRISCbits.TRISC7
#define PIP2_LAT                  LATCbits.LATC7
#define PIP2_PORT                 PORTCbits.RC7
#define PIP2_WPU                  WPUCbits.WPUC7
#define PIP2_OD                   ODCONCbits.ODCC7
#define PIP2_ANS                  ANSELCbits.ANSC7
#define PIP2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define PIP2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define PIP2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define PIP2_GetValue()           PORTCbits.RC7
#define PIP2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define PIP2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define PIP2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define PIP2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define PIP2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define PIP2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define PIP2_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define PIP2_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/