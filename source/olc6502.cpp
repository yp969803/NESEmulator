#include "olc6502.h"
#include "Bus.h"

olc6502::olc6502(/* args */)
{
}

olc6502::~olc6502()
{
}

uint8_t olc6502::read(uint16_t a)
{
	// In normal operation "read only" is set to false. This may seem odd. Some
	// devices on the bus may change state when they are read from, and this 
	// is intentional under normal circumstances. However the disassembler will
	// want to read the data at an address without changing the state of the
	// devices on the bus
	return bus->read(a, false);
}

// Writes a byte to the bus at the specified address
void olc6502::write(uint16_t a, uint8_t d)
{
	bus->write(a, d);
}
