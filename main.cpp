#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    //Augusto: 4/4/24 -> Cambié a PullUp. COnectando un pulsador entre D2 y GND puedo cambiar el estado del LED
    gasDetector.mode(PullUp);

    alarmLed = OFF;

    //Augusto: Agrego el printf.
    //Lucas: cambio contenido de printf
    printf("%s\n", "Hello we are Lucas and Augusto!");

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}
