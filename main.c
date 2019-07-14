#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <wiringPi.h>

#define SHUTDOWN_PIN    20

int main() {

    printf("RetroRoot: daemon started\n");

    wiringPiSetupGpio();

    // init "shutdown" pin
    pinMode(SHUTDOWN_PIN, INPUT);
    pullUpDnControl(SHUTDOWN_PIN, PUD_DOWN);

    while (true) {
        if (digitalRead(SHUTDOWN_PIN) == 1) {
            break;
        }
        delay(1000);
    }

    printf("RetroRoot: shutting down...\n");
    system("poweroff");

    return 0;
}
