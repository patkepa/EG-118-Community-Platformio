#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include "USR_IO.h"

// SERIAL DEFINITIONS
#define DEBUG_SERIAL Serial
#define MODBUS_SERIAL Serial1


// PIN DEFINITIONS
#define MODBUS_RX_PIN GPIO_NUM_33
#define MODBUS_TX_PIN GPIO_NUM_32
#define RELOAD_WATCHDOG_PIN 3



// WATCHDOG DECLARATION

void watchdog_keep_alive(void) {
  pinMode(RELOAD_WATCHDOG_PIN, OUTPUT);
  digitalWrite(RELOAD_WATCHDOG_PIN, LOW);
  delay(50);
  digitalWrite(RELOAD_WATCHDOG_PIN, HIGH);
  delay(100);
  digitalWrite(RELOAD_WATCHDOG_PIN, LOW);
  delay(50);
}

void xTask_watchdog(void *xTask1) {
  while (1) {
    watchdog_keep_alive();
    vTaskDelay(10000);
  }
}

#endif // MAIN_H