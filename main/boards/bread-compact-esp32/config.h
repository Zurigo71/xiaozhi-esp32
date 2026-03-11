#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// Audio I2S
#define AUDIO_I2S_BCK_PIN      (GPIO_NUM_7)
#define AUDIO_I2S_WS_PIN       (GPIO_NUM_15)
#define AUDIO_I2S_DATA_OUT_PIN (GPIO_NUM_16)
#define AUDIO_I2S_DATA_IN_PIN  (GPIO_NUM_38)

// Display ST7789 (SPI)
#define LCD_SDA_PIN            (GPIO_NUM_10)
#define LCD_SCL_PIN            (GPIO_NUM_9)
#define LCD_DC_PIN             (GPIO_NUM_46)
#define LCD_RES_PIN            (GPIO_NUM_11)

// Batteria
#define BATTERY_ADC_PIN        (GPIO_NUM_14)

#endif
