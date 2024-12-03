# ZeroD

## Zero-shaped display for zero-sized printers

ZeroD is an alternative firmware for the BTT Knomi V2 and other similar displays that replaces the
network-reliant Moonraker connection with a direct serial connection to the Klipper host.

This fork specifically targets the waveshare 1.28" LCD, as it fits with minimal Dremel work into a standard knomi v2 toolhead. There might even be some that don't need Dremel work, but my best efforts in tinkercad to merge a couple different designs resulted in some minor dremeling being required. I rotated mine 180° so the USB C port can be used as serial. I put a small USB hub behind the ebb sb2209 rp2040 daughter board, and run a nozzle cam and the zerod-ifyd not-quite-knomi off a single USB cable.

![image of the LCD mounted in a knomi/CPAP toolhead at the home screen](https://github.com/user-attachments/assets/02a38d5f-e2bd-4ea2-b4c0-046d5564dde9)

### Installation

ZeroD firmware can be built and flahsed using [PlatformIO](https://platformio.org/).

⚠️ NOTE: I could not get this to build  cleanly on my rp4 which runs klipper. I built the firmware with pio on my laptop. YMMV.

An additional Klipper module is needed to enable the ZeroD configuration options, which can be
installed by running the included `install.sh` script on the Klipper host.

### Klipper configuration
```ini
[zerod]
serial:  # Path to the serial port for the ZeroD device.

heater_hotend: extruder  # Name of the hotend heater.
heater_bed: heater_bed   # Name of the bed heater.

# Only one of heater_chamber and sensor_chamber should be configured.
heater_chamber:  # Name of the chamber heater.
sensor_chamber:  # Name of the chamber thermistor.

move_x: 10  # Number of millimeters to move the toolhead in the positive X direction.
move_y: 10  # Number of millimeters to move the toolhead in the positive Y direction.
move_z: 10  # Number of millimeters to move the toolhead in the positive Z direction.

speed_x: 100  # Speed to move the toolhead in the X direction.
speed_y: 100  # Speed to move the toolhead in the Y direction.
speed_z: 100  # Speed to move the toolhead in the Z direction.

gcodes:  # Comma separated G-Codes to display on the ZeroD device.
```
