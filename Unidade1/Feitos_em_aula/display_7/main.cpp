//                   lpc21isp -control -bin main.bin /dev/ttyUSB0 115200 12000

#include "LPC17xx.h"
#include <stdint.h>
#include "display.h"

int main() {
  
  SystemInit();


  display_init();

  display('2');

  while(1)
  {

  }
}
