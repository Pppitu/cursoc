#include "Utils.h"
#include <iostream>

void Utils::clearScreen() {
	printf("\033[2J\033[1;1H");
}
