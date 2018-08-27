#include <stdio.h>
#include <stdint.h>
#include "rpihw.h"

int main() {
	const rpi_hw_t *rpi_hw = rpi_hw_detect();
	if (rpi_hw) {
		printf("Detected %s\n", rpi_hw->desc);
	} else {
		printf("RPi not found\n");
	};
    return 0;
}
