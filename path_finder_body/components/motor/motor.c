#include "motor.h"

void motor_init(void){
    pwm_init_timer_0();
    pwm_init_channel(CHANNEL_0,A1_IN_PIN);
    pwm_init_channel(CHANNEL_1,A2_IN_PIN);
    pwm_init_channel(CHANNEL_2,B1_IN_PIN);
    pwm_init_channel(CHANNEL_3,B2_IN_PIN);
}

void motor_move(int command){
    switch(command) {
        case STOP: 
            pwm_update_duty(CHANNEL_0, 0);
            pwm_update_duty(CHANNEL_1, 0);
            pwm_update_duty(CHANNEL_2, 0);
            pwm_update_duty(CHANNEL_3, 0);
            break;
        case FORWARD:
            pwm_update_duty(CHANNEL_0, 0.75);
            pwm_update_duty(CHANNEL_1, 0);
            pwm_update_duty(CHANNEL_2, 0.75);
            pwm_update_duty(CHANNEL_3, 0);
            break;
        case LEFT:
            pwm_update_duty(CHANNEL_0, 0.75);
            pwm_update_duty(CHANNEL_1, 0);
            pwm_update_duty(CHANNEL_2, 0);
            pwm_update_duty(CHANNEL_3, 0.75);
            break;
        case RIGHT:
            pwm_update_duty(CHANNEL_0, 0);
            pwm_update_duty(CHANNEL_1, 0.75);
            pwm_update_duty(CHANNEL_2, 0.75);
            pwm_update_duty(CHANNEL_3, 0);
            break;
        case BACKWARD:
            pwm_update_duty(CHANNEL_0, 0);
            pwm_update_duty(CHANNEL_1, 0.75);
            pwm_update_duty(CHANNEL_2, 0);
            pwm_update_duty(CHANNEL_3, 0.75);
            break;
        default:
            ESP_LOGW(MOTOR_TAG, "default case in motor_move");
            break;
    }
}

