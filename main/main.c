// Внутренние зависимости
#include <stdio.h>
#include <esp_log.h>
#include <esp_err.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// Мастер-служба. Необходима для запуска других служб и их управления
void master_task(void *pvParameters)
{

}

void app_main(void)
{
    xTaskCreate(master_task, "master_task", 1024, NULL, 5, NULL);
}