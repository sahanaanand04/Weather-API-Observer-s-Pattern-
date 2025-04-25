#include "WeatherData.hpp"

void WeatherData::registerObserver(IObserver* o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(IObserver* o) {
    observers.erase(std::remove(observers.begin(), observers.end(), o), observers.end());
}

void WeatherData::notifyObservers() {
    for (auto* o : observers) {
        o->update(temperature, humidity, pressure);
    }
}

void WeatherData::setMeasurements(float temp, float hum, float press) {
    temperature = temp;
    humidity = hum;
    pressure = press;
    notifyObservers();
}
