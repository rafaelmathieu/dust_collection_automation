using std::vector;
#include <Arduino.h>

class Tool {      
  public:
    String name;
    boolean isOn;
    vector<Gate> gates;
};

class Gate {      
  public:
    String name;
    boolean isOpen;
    int position;
};