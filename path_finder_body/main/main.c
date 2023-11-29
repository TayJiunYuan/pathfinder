#include <stdio.h>
#include "motor.h"
#include "freertos/FreeRTOS.h"
#include <freertos/task.h>


void app_main(void)
{
    motor_init();
    motor_move(RIGHT);
}
