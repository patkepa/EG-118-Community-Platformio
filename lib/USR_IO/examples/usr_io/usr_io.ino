/*
  usr_io demo

  created 1 December 2023
  by jason
*/

#include <USR_IO.h>

/*若要使用扩展机，串口0和串口2不可外部打开使用*/
USR_IO usr_io;

void setup() {
  usr_io.init();
}

void loop() {
  DEBUG_SERIAL1.print("this is test");
  
  delay(1000);
}
