#ifndef _USR_IO_LIB_H_
#define _USR_IO_LIB_H_

#include "Arduino.h"

class USR_IO
{
public:
  void init();
  void do_set(char slot_num, char io_num, char level);
  char di_get(char slot_num, char io_num);
  float ai_get(char slot_num, char io_num);
  void log_on(char log);
  void print();
private:
  ;
};

#endif