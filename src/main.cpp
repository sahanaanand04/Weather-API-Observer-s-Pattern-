#include "../include/WeatherData.hpp"
#include "CurrentConditionsDisplay.cpp"

int main() {
    WeatherData weatherData;

    CurrentConditionsDisplay currentDisplay;
    weatherData.registerObserver(&currentDisplay);

    weatherData.setMeasurements(25.0, 65.0, 1013.1);
    weatherData.setMeasurements(27.5, 70.0, 1012.5);

    return 0;
}
