#pragma once
#include <cstdint>

class Cartridge
{


public:
    Cartridge(const std::string & sFileName);
    ~Cartridge();
      // Communication with main bus
    void cpuWrite(uint16_t addr,  uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

    // Communications with ppu bus
    void ppuWrite(uint16_t addr,  uint8_t data);
    uint8_t ppuRead(uint16_t addr, bool bReadOnly = false);

private:
    std::vector<uint8_t> vPRGMemory;
    std::vector<uint8_t> vCHRMemory;
    uint8_t nMapperID=0;
    uint8_t nPRGBanks=0;
    uint8_t nCHRBanks=0;
};

