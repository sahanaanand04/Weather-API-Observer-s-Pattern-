cmake_minimum_required(VERSION 3.10)
project(WeatherAPI)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(weather-api
    src/WeatherData.cpp
    src/main.cpp
)
