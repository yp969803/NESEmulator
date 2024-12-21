#include "olc2C02.h"
#include <cstdint>

olc2C02::olc2C02(/* args */)
{
}

olc2C02::~olc2C02()
{
}

uint8_t olc2C02::cpuRead(uint16_t addr, bool rdonly){
    uint8_t data = 0x00;
    switch (addr)
    {
    case 0x0000:
        break;
    
    case 0x0001:
        break;
    case 0x0002:
        break;
    case 0x0003:
        break;
    case 0x0004:
        break;
    case 0x0005:
        break;
    case 0x0006:
        break;
    
    case 0x0007:
        break;
    
    
    }
    return data;
}

void olc2C02::cpuWrite(uint16_t addr, uint8_t data){
    switch (addr)
    {
    case 0x0000:
        break;
    
    case 0x0001:
        break;
    case 0x0002:
        break;
    case 0x0003:
        break;
    case 0x0004:
        break;
    case 0x0005:
        break;
    case 0x0006:
        break;
    
    case 0x0007:
        break;
    
    
    }
}

uint8_t olc2C02:: ppuRead(uint16_t addr, bool rdonly){
    uint8_t data = 0x00;
    addr &= 0x3FFF;
    return data;
}

void olc2C02::ppuWrite(uint16_t addr, uint8_t data){
    addr &= 0x3FFF;
}