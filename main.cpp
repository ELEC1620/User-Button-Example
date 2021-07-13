/*  Button Example
*   Test the Functionality of the on board LED
*   using the on board user button.
*
*   Board: NUCLEO L476RG
*   Author: Andrew Knowles 2021
*/

#include "mbed.h"
 
DigitalOut led(LED1);           //set LED1 as a digital output
DigitalIn button(BUTTON1);      //set BUTTON1 as a digital input

void init_buttons();
void init_led();

int main(){
    init_buttons(); //initalise button
    init_led();     //initalise led

    while(1){

        //read the status of the button, if true turn LED1 ON
        if(button.read() == true){
            led.write(1);   //turn on led1
        }else{
            led.write(0);   //turn off led1
        };


    }
}

void init_buttons(){
    button.mode(PullNone);  //turn off internal pull up / pull down resistors
};

void init_led(){
    led.write(0);   //turn off led1
};
