#include "pwm.h"

void pwm_init_timer_0(void)
{
    ledc_timer_config_t timer_0_config = {
        .speed_mode       = LEDC_MODE,
        .duty_resolution  = LEDC_DUTY_RES,
        .timer_num        = LEDC_TIMER,
        .freq_hz          = LEDC_FREQUENCY,  
        .clk_cfg          = LEDC_AUTO_CLK
    };
    ESP_ERROR_CHECK(ledc_timer_config(&timer_0_config));

}

void pwm_init_channel(uint32_t channel_num, uint32_t gpio_pin)
{
    ledc_channel_config_t channel_config = {
        .speed_mode     = LEDC_MODE,
        .channel        = channel_num,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = gpio_pin,
        .duty           = 0, 
        .hpoint         = 0
    };
    ESP_ERROR_CHECK(ledc_channel_config(&channel_config));
}

void pwm_update_duty(uint32_t channel_num, float duty_cycle_percentage)
{   
    uint32_t duty_cycle_value = (uint32_t)(duty_cycle_percentage * 8192);
    ESP_ERROR_CHECK(ledc_set_duty(LEDC_MODE, channel_num, duty_cycle_value));
    ESP_ERROR_CHECK(ledc_update_duty(LEDC_MODE, channel_num));
}





