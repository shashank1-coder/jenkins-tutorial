#include <stdio.h>
#include "temperature_control.h"

static int temperature = 22; // Default temperature 22°C

void set_temperature(int temp) {
    temperature = temp;
    printf("Temperature set to %d°C\n", temperature);
}

int get_temperature(void) {
    return temperature;
}
