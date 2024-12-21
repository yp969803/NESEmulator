#include <cstdint>
#include "olc6502.h"
#include <array>
#include "olc2C02.h"
#include "Cartridge.h"
#include <memory>
class Bus
{
private:
    /* data */
public:
    Bus(/* args */);
    ~Bus();

public:
    // Devices on the bus

    olc6502 cpu;
    olc2C02 ppu;

    std::array<uint8_t, 2048> cpuRam; // 2KB of RAM

public: // Read and Write
    void cpuWrite(uint16_t addr,  uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

public:
    void insertCartridge(const std::shared_ptr<Cartridge>& cartridge);
    void reset();
    void clock();

};

