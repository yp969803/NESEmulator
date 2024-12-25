#pragma once
#include <cstdint>
#include <vector>
class Cartridge
{


public:
    Cartridge(const std::string & sFileName);
    ~Cartridge();
      // Communication with main bus
    bool cpuWrite(uint16_t addr,  uint8_t data);
    bool cpuRead(uint16_t addr, bool bReadOnly = false);

    // Communications with ppu bus
    bool ppuWrite(uint16_t addr,  uint8_t data);
    bool ppuRead(uint16_t addr, bool bReadOnly = false);

private:
    std::vector<uint8_t> vPRGMemory;
    std::vector<uint8_t> vCHRMemory;
    uint8_t nMapperID=0;
    uint8_t nPRGBanks=0;
    uint8_t nCHRBanks=0;
};

