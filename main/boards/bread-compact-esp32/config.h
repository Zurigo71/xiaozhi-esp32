#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_METHOD_SIMPLEX

#ifdef AUDIO_I2S_METHOD_SIMPLEX
// Configurazione Microfono (4, 5, 6)
#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_6

// Configurazione Amplificatore (7, 15, 16)
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_15
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_16
#endif

#define BOOT_BUTTON_GPIO         GPIO_NUM_0
#define BUILTIN_LED_GPIO         GPIO_NUM_2

// Pin del Display (Spostati per non andare in conflitto con l'audio)
#define DISPLAY_SDA_PIN          GPIO_NUM_41 
#define DISPLAY_SCL_PIN          GPIO_NUM_42
#define DISPLAY_WIDTH            128
#define DISPLAY_HEIGHT           64

#define DISPLAY_MIRROR_X true
#define DISPLAY_MIRROR_Y true

// --- CONFIGURAZIONE BATTERIA PIN 14 ---
#define CONFIG_BAT_ADC_CHAN     ADC_CHANNEL_3
#define CONFIG_BAT_ADC_UNIT     ADC_UNIT_1
#define CONFIG_BAT_UPPER_RES    100.0
#define CONFIG_BAT_LOWER_RES    100.0

#define LAMP_GPIO               GPIO_NUM_NC

#endif // _BOARD_CONFIG_H_ 
