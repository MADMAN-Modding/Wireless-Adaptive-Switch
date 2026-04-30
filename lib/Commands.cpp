#include "Commands.hpp"
#include "Arduino.h"
const char* commandName(Commands::command code) {
  Serial.println(code);

  switch (code) {
    case Commands::PAIR: return "PAIR";
    case Commands::ON:   return "ON";
    case Commands::OFF:  return "OFF";
    default:             return "UNKNOWN";
  }
}
