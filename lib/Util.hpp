#include <Arduino.h>

class Util {
public:
	/// @brief Converts an array of bytes to a readable MAC address and prints it
	/// @param mac 
	/// @return MAC address as string
	static const char* macToString(uint8_t mac[6]);
};
