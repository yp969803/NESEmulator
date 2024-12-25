#include "Cartridge.h"
#include <string>
#include <fstream>

Cartridge::Cartridge(const std::string& sFileName)
{
    // iNES Format Header
    struct sHeader
    {
       char name[4];
       uint8_t prg_rom_chunks;
       uint8_t chr_rom_chunks;
       uint8_t mapper1;
       uint8_t mapper2;
       uint8_t prg_ram_size;
       uint8_t tv_system1;
       uint8_t tv_system2;
       char unused[5];
    } header;

    std::ifstream ifs;
    ifs.open(sFileName, std::ifstream::binary);
    if(ifs.is_open())
    {
        // Read file header
        ifs.read((char*)&header, sizeof(sHeader));

        if(header.mapper1 && 0x04)
        {
             ifs.seekg(512, std::ios_base::cur);
        }

        // Discover File format
        uint8_t nFileType=1;
        if(nFileType==0)
        {

        }
        
        if(nFileType==1)
        {
            nPRGBanks= header.prg_rom_chunks;
            vPRGMemory.resize(nPRGBanks * 16384);
            ifs.read((char*)vPRGMemory.data(), vPRGMemory.size());

            nCHRBanks = header.chr_rom_chunks;
            vCHRMemory.resize(nCHRBanks * 8192);
            ifs.read((char*)vCHRMemory.data(), vCHRMemory.size());
        }

        if(nFileType==2)
        {

        }

        ifs.close();

    }
}
Cartridge::~Cartridge()
{
}


bool Cartridge :: cpuWrite(uint16_t addr, uint8_t data){
    return false;
}

bool Cartridge :: cpuRead(uint16_t addr, bool bReadOnly){
    return false;
}

bool Cartridge :: ppuWrite(uint16_t addr, uint8_t data){
    return false;
}

bool Cartridge :: ppuRead(uint16_t addr, bool bReadOnly){
    return false;
}