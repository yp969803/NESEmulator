#pragma once
#include <cstdint>

class Cartridge
{
private:
    /* data */
public:
    Cartridge(/* args */);
    ~Cartridge();
      // Communication with main bus
    void cpuWrite(uint16_t addr,  uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

    // Communications with ppu bus
    void ppuWrite(uint16_t addr,  uint8_t data);
    uint8_t ppuRead(uint16_t addr, bool bReadOnly = false);


};

