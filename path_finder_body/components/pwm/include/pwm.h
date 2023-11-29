#include "driver/ledc.h"
#include "esp_err.h"
#include "esp_log.h"


#define LEDC_TIMER              LEDC_TIMER_0
#define LEDC_MODE               LEDC_LOW_SPEED_MODE
#define LEDC_DUTY_RES           LEDC_TIMER_13_BIT // Set duty resolution to 13 bits
#define LEDC_FREQUENCY          (4000) // Frequency in Hertz. Set frequency at 4 kHz

static const char *PWM_TAG = "pwm";

void pwm_init_timer_0(void);

void pwm_init_channel(uint32_t channel_num, uint32_t gpio_pin);

void pwm_update_duty(uint32_t channel_num, float duty_cycle_percentage);

