buildPixelGame:
	@g++ -o ./bin/cpu ./source/Bus.cpp ./source/olc6502.cpp ./source/olcNes_Video1_6502.cpp  -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17

runPixelGame: buildPixelGame
	@vblank_mode=0 ./bin/cpu