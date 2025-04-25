# Weather-API-Observer-s-Pattern


# 🌤️ Weather API – Observer Pattern in C++

This project demonstrates the **Observer Design Pattern** in C++ through a simple weather station simulation. It follows object-oriented principles to model a weather data source and multiple display elements that react to changes in the weather conditions.

## 🧠 Concept

The **Observer Pattern** allows an object (the *subject*) to notify other objects (the *observers*) about changes in its state, without tight coupling.

In this example:
- `WeatherData` is the **Subject**.
- `CurrentConditionsDisplay` is an **Observer** that registers with `WeatherData` and displays the latest temperature and humidity.

## 🗂️ Folder Structure


## 🛠️ Requirements

- C++17 or higher
- CMake >= 3.10
- A C++ compiler (e.g. g++, clang++)

## 🚀 Build & Run

### 1. Clone the repo

```bash
git clone https://github.com/sahanaanand04/Weather-API-Observer-s-Pattern-.git
cd Weather-API-Observer-s-Pattern-

2. Create build directory
mkdir build
cd build
cmake ..
make

3. Run the executable
./weather-api

4. Output
Current conditions: 25°C and 65% humidity
Current conditions: 27.5°C and 70% humidity
