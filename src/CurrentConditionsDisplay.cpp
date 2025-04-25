#include "../include/IObserver.hpp"
#include "../include/DisplayElement.hpp"
#include "../include/WeatherData.hpp"
#include <iostream>

class CurrentConditionsDisplay : public IObserver, public DisplayElement {
private:
    float temperature;
    float humidity;

public:
    void update(float temp, float hum, float pressure) override {
        temperature = temp;
        humidity = hum;
        display();
    }

    void display() override {
        std::cout << "Current conditions: " << temperature 
                  << "°C and " << humidity << "% humidity\n";
    }
};
