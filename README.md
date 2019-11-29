# ESP-IDF OTA signed builds bug example

The build won't complete with Secure Features - > Require Signed App Images & Verify app signature on update enabled with ESP-IDF 3.3. I need to use 3.3 because Arduino-ESP32 doesn't support any later versions.

This example does not include the arduino-esp32 library though. It breaks as soon as esp_ota_set_boot_partition() is included, which should be required for OTA updates. 
