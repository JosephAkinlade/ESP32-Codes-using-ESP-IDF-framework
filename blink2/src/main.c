#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#define LED 2

void app_main() {
    gpio_pad_select_gpio(LED);
    gpio_set_direction(LED, GPIO_MODE_OUTPUT);

    while(1)
    {
        gpio_set_level(LED, 1);
        vTaskDelay(2000/portTICK_PERIOD_MS);
        gpio_set_level(LED, 0);
        vTaskDelay(2000/portTICK_PERIOD_MS);

    }
    
    
}