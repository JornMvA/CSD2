#include <iostream>

class Tweeter{
public:
  // default constructor
  Tweeter();
  // overloaded constructor
  Tweeter(float diam);

  // fields
  float diameter ;
  float conePosition;
};

Tweeter::Tweeter() {}

Tweeter::Tweeter(float diam) {
  std::cout << "Tweeter - constructor with float diam parameter\n";
  // in cm
  diameter = diam;
  // number with an f --> indicate it is a float
  conePosition = 0.0f;
}



class Woofer{
public:
  // default constructor
  Woofer();
  // overloaded constructor
  Woofer(float diam);

  // fields
  float diameter;
  float conePosition;
};

Woofer::Woofer() {
    diameter = 6.5f;
    conePosition = 0.0f;
}

Woofer::Woofer(float diam) {
    diameter = diam;
    conePosition = 0.0f;
}

class Speaker{
public:
  Speaker();
private:
  Tweeter aTweeter;
  Woofer aWoofer;
};

Speaker::Speaker() {
  std::cout << "Speaker - constructor\n";
  aTweeter.diameter = 2.4;
  aWoofer.diameter = 6.5;
  std::cout << "The diameter of the tweeter is: "
    << aTweeter.diameter << "\n";
  std::cout << "The diameter of the woofer is: "
    << aWoofer.diameter << "\n";
}

// TODO - add woofer

int main() {
  Speaker aSpeaker;
};

