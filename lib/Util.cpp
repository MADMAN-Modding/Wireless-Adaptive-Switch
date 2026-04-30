#include "Util.hpp"

const char* Util::macToString(uint8_t mac[6]) {
  static char result[18];
  snprintf(result, sizeof(result), "%02X:%02X:%02X:%02X:%02X:%02X",
    mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
  return result;
}
