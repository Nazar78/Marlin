#include "../../inc/MarlinConfig.h"

#include "../gcode.h"

void GcodeSuite::M9891() {

    const uint8_t pport = parser.byteval('P');

    const uint16_t dfreq = parser.ushortval('F');

    // Set frequency for port
    
    set_pwm_frequency((pin_t)pport, (int)dfreq);
}