/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "esp_ota_ops.h"
#include "esp_image_format.h"



extern "C" void app_main()
{
    //initArduino();
    //pinMode(4, OUTPUT);
    //digitalWrite(4, HIGH);
    //do your own thing

    //int contentLength = 1000;
    //bool enoughSpace = Update.begin(contentLength); 

    //Update.end();
    const esp_partition_t* _partition;
    _partition = new esp_partition_t;
    esp_ota_set_boot_partition(_partition);
}