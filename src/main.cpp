#include "main.h"
USR_IO usr_io;


void setup() {
    xTaskCreate(xTask_watchdog, "xTask_watchdog", 4096, NULL, 1, NULL);  
    
    DEBUG_SERIAL.begin(115200);
    Serial.println("Hello World!");
    
    // For some odd reason, it starts printing weird stuff suddenly. Not confirmed if it works
    // usr_io.init(); 
    
}

void loop() {
    Serial.println("Loop");
    delay(1000);    
}
