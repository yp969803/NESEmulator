#pragma once

class olc2C02
{
private:
    /* data */
public:
    olc2C02(/* args */);
    ~olc2C02();

public:
    // Communication with main bus
    void cpuWrite(uint16_t addr,  uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

    // Communications with ppu bus
    void ppuWrite(uint16_t addr,  uint8_t data);
    uint8_t ppuRead(uint16_t addr, bool bReadOnly = false);


};


