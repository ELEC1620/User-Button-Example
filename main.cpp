/*  Button Example
*   Test the Functionality of the on board LED
*   using the on board user button.
*
*   Board: NUCLEO L476RG
*   Author: Andrew Knowles 2021
*/

#include "mbed.h"

#define ON 1    //define 'ON' as 1
#define OFF 0   //define 'OFF' as 0
 
DigitalOut led(LED1);           //Initialise LED1 as a digital output
DigitalIn button(BUTTON1);      //Initialise BUTTON1 as a digital input

int main(){

    while(1){

        //read the status of the button, if true turn LED1 ON
        if(button.read() == true){
            led = ON;
        }else{
            led = OFF;
        };


    }
}

