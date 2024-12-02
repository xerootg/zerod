#ifndef USER_CONF_H
#define USER_CONF_H

// Display options.
#define PRINTER_NAME       "voron_rev-9k+1"
#define DISPLAY_BRIGHTNESS 8

// Overlay side indicators.
#define SHOW_SIDE_ARCS     1

// Idle screen page order.
#define IDLE_PAGE_0 gcode_page
#define IDLE_PAGE_1 temp_page
#define IDLE_PAGE_2 filament_page
#define IDLE_PAGE_3 home_page
#define IDLE_PAGE_4 move_page

// Index of default idle screen page.
#define IDLE_PAGE_START 1

// All screens background color.

#define COLOR_BLACK 0x000000
#define COLOR_RED_BROWN 0x900000
#define COLOR_DARK_GRAY 0x444444
#define COLOR_BRIGHT_GREEN 0x17e01e
#define COLOR_GREEN 0x238932
#define COLOR_DARK_GREEN 0x0b5e0b
#define COLOR_BLUE 0x2b82c1
#define COLOR_MUSTARD_YELLOW 0xb8740c
#define COLOR_PALE_ORANGE 0xf26a02
#define COLOR_LIGHT_GRAY 0x808080

#ifdef STANDARD_THEME
    #define COLOR_BG       lv_color_hex(COLOR_BLACK) // black

    // Overlay colors.
    #define COLOR_STOP_BG      lv_color_hex(COLOR_RED_BROWN)
    #define COLOR_SIDE_ARC     lv_color_hex(COLOR_DARK_GRAY)
    #define COLOR_PROGRESS_ARC lv_color_hex(COLOR_GREEN) // green

    // Button colors.
    #define COLOR_BTN_BG    lv_color_hex(COLOR_BLUE) // blue
    #define COLOR_PAUSE_BG  lv_color_hex(COLOR_MUSTARD_YELLOW) // burnt orange
    #define COLOR_RESUME_BG lv_color_hex(COLOR_GREEN) // green
    #define COLOR_CANCEL_BG lv_color_hex(COLOR_RED_BROWN) // red-brown
    #define COLOR_HOMED_BG  lv_color_hex(COLOR_MUSTARD_YELLOW) // burnt orange

    // G-code screen colors.
    #define COLOR_GCODE_UNSELECTED lv_color_hex(COLOR_LIGHT_GRAY) // light gray
    #define COLOR_GCODE_HIGHLIGHT  lv_color_hex(COLOR_DARK_GRAY) // dark gray
#else // STANDARD_THEME
    #define COLOR_BG       lv_color_hex(COLOR_BLACK) // black

    // init colors
    #define COLOR_SPINNER_INDICATOR lv_color_hex(COLOR_BRIGHT_GREEN) // green

    // Overlay colors.
    #define COLOR_STOP_BG      lv_color_hex(COLOR_RED_BROWN)
    #define COLOR_SIDE_ARC     lv_color_hex(COLOR_DARK_GRAY)
    #define COLOR_PROGRESS_ARC lv_color_hex(COLOR_GREEN)

    // Button colors.
    #define COLOR_BTN_BG    lv_color_hex(COLOR_DARK_GREEN)
    #define COLOR_PAUSE_BG  lv_color_hex(COLOR_MUSTARD_YELLOW)
    #define COLOR_RESUME_BG lv_color_hex(COLOR_BRIGHT_GREEN)
    #define COLOR_CANCEL_BG lv_color_hex(COLOR_RED_BROWN)
    #define COLOR_HOMED_BG  lv_color_hex(COLOR_MUSTARD_YELLOW)

    // Filament screen colors.
    #define COLOR_LOAD_BG   lv_color_hex(COLOR_DARK_GREEN) // green to indicate continued action
    #define COLOR_UNLOAD_BG lv_color_hex(COLOR_PALE_ORANGE) // orange to indicate warning

    // G-code screen colors.
    #define COLOR_GCODE_UNSELECTED lv_color_hex(COLOR_LIGHT_GRAY)
    #define COLOR_GCODE_HIGHLIGHT  lv_color_hex(COLOR_DARK_GRAY)
#endif // STANDARD_THEME

#define SERIAL_BAUD_RATE 115200
#define SERIAL_TIMEOUT 1000

#endif
