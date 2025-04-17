#include <stdio.h>
#include "lights_control.h"
#include "temperature_control.h"

void check_system_status(void) {
    printf("Checking System Status...\n");
    if (get_light_status()) {
        printf("Lights are ON.\n");
    } else {
        printf("Lights are OFF.\n");
    }
    printf("Current Temperature: %d°C\n", get_temperature());
}
