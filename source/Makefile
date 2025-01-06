buildPixelGame:
	@g++ -o ./bin/cpu  Bus.cpp olc6502.cpp  Cartridge.cpp  Mapper_000.cpp olc2C02.cpp  olcNes_Video2_2C02.cpp Mapper.cpp   -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17

runPixelGame: buildPixelGame
	@vblank_mode=0 ./bin/cpu