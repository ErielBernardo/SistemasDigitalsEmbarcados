#ifndef __I2C_SOFTWARE_
#define __I2C_SOFTWARE_

#include <inttypes.h> 


void     i2c_configura        (uint8_t pino_dados, uint8_t pino_clk);
void     i2c_start(void);
void     i2c_stop(void);


// Le e escreve apenas 1 byte
void     i2c_escreve_byte     (uint8_t dispositivo, uint8_t end, uint8_t valor);
uint8_t  i2c_le_byte          (uint8_t dispositivo, uint8_t end);



#endif
