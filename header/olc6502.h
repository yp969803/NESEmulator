
class Bus;
class olc6502
{
private:
    /* data */
    Bus *bus=nullptr;
    uint8_t read(uint16_t a);
    void write(uint16_t a, uint8_t d);
public:
    olc6502(/* args */);
    ~olc6502();
    void ConnectBus(Bus *n) { bus = n; }
};

