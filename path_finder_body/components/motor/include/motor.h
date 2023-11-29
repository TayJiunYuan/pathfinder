#include "pwm.h"
#include "esp_log.h"

#define A1_IN_PIN 12
#define A2_IN_PIN 13
#define B1_IN_PIN 14
#define B2_IN_PIN 15
#define STOP 0b000
#define FORWARD 0b001
#define LEFT 0b010
#define RIGHT 0b011
#define BACKWARD 0b100
#define CHANNEL_0 0 
#define CHANNEL_1 1 
#define CHANNEL_2 2 
#define CHANNEL_3 3 

static const char *MOTOR_TAG = "motor";

void motor_init(void);

void motor_move(int command);

