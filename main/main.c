// Внутренние зависимости
#include <stdio.h>
#include <esp_log.h>
#include <esp_err.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

char* MASTER_TASK_TAG = "master_task";

// Мастер-служба. Необходима для запуска других служб и управления ими
void master_task(void *pvParameters)
{
    while(1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(MASTER_TASK_TAG, "Hello from the MasterTask! New era is coming!");
    }
}

void app_main(void)
{
    xTaskCreate(master_task, MASTER_TASK_TAG, 2048, NULL, 5, NULL);
}