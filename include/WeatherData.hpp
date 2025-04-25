#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include "ISubject.hpp"
#include <vector>

class WeatherData : public ISubject {
private:
    std::vector<IObserver*> observers;
    float temperature;
    float humidity;
    float pressure;

public:
    void registerObserver(IObserver* o) override;
    void removeObserver(IObserver* o) override;
    void notifyObservers() override;

    void setMeasurements(float temp, float hum, float press);
};

#endif
