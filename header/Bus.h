#include <cstdint>
#include "olc6502.h"
#include <array>


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
    std::array<uint8_t, 64*1024> ram; // 64KB of RAM

public: // Read and Write
    void write(uint16_t addr,  uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);

};

