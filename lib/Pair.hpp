#pragma once
#include <Arduino.h>
#include <Preferences.h>

class Pair {
  public:
    /// @brief Save the MAC addres
    /// @param macArray 6 byte unsigned int array
    static void saveMAC(uint8_t macArray[6]);
    
    /// @brief Load the MAC addres
    /// @param macArray 6 byte unsigned int array, will be overwritten
    static void loadMAC(uint8_t macArray[6]);
    
    /// @brief Clear settings stored
    static void clearSettings();
    
    /// @brief Check for saved MAC address
    /// @return true if MAC address exists
    static bool hasSavedMAC();

    static esp_err_t addPeer(uint8_t* peerMAC);
  private:
};
