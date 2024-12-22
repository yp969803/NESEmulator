#pragma once

class olc2C02
{
private:
    uint8_t tblName[2][1024];
    uint8_t tblPalette[32];
    uint8_t tblPattern[2][4096];
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

private:
    std::shared_ptr<Cartridge> cart;

public:
// Interface
    void ConnectCartridge(const std::shared_ptr<Cartridge>& cartridge);
    void clock();

};


