#include <iostream>

class Instrument {
    public:
    Instrument();
    Instrument(std::string sound);

    void play(){
        std::cout << "the instrument plays: " << sound << std::endl;
    }

    protected:
    std::string sound;
};

Instrument::Instrument() {
    std::cout << "type a sound:" << std::endl;
    std::cin >> sound;
};
Instrument::Instrument(std::string aSound) {
    sound = aSound;
};

int main () {
    Instrument gitaar;
    Instrument bass;
    gitaar.play();
    bass.play();
    return 0;
}