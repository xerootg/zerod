#ifndef BOARD_CONF_H
#define BOARD_CONF_H

#define RES_H 240
#define RES_V 240

#ifdef KNOMI
    #define I2C0_SPEED   100000
    #define I2C0_SCL_PIN 1
    #define I2C0_SDA_PIN 2

    #define CST816S
    #define CST816S_IRQ_PIN 17
    #define CST816S_RST_PIN 16

    #define GC9A01_MOSI_PIN 14
    #define GC9A01_SCLK_PIN 18
    #define GC9A01_CS_PIN   20
    #define GC9A01_DC_PIN   19
    #define GC9A01_RST_PIN  21

    #define LCD_BL_PIN      12
#endif

#ifdef WAVESHARE
    #define BOOT_PIN     0

    // common i2c
    #define I2C0_SUPPORT
    #define I2C0_SPEED   100000
    #define I2C0_SCL_PIN 7
    #define I2C0_SDA_PIN 6

    // GC9A01 SPI TFT
    #define GC9A01_MISO_PIN 12
    #define GC9A01_MOSI_PIN 11
    #define GC9A01_SCLK_PIN 10
    #define GC9A01_CS_PIN   9
    #define GC9A01_DC_PIN   8
    #define GC9A01_RST_PIN  14
    // PWM
    #define LCD_BL_PIN      2

    // CST816S Touch
    #define CST816S
    #define CST816S_IRQ_PIN 5
    #define CST816S_RST_PIN 13

    #define ROTATE_KNOMI_180
#endif

#ifdef CST816S

    // generally, the address is 0x15
    #ifndef CST816S_ADDR
        #define CST816S_ADDR    0x15
    #endif
#endif

#endif