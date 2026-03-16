#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
namespace rm_a0{
  double CelsiusToFahrenheit(double celsius);
  std::string FormatFahrenheit(double fahrenheit);
}
namespace rm_a0{
  double CelsiusToFahrenheit(double celsius){
    return celsius * 9.0/5.0+32.0;
  }
  std::string FormatFahrenheit(double fahrenheit){
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << fahrenheit;
    return ss.str();
  }
}
#include "rm_a0/a0_01_temperature.hpp"

int main() {
  double celsius = 0.0;
  if (!(std::cin >> celsius)) {
    return 0;
  }
  std::cout << rm_a0::FormatFahrenheit(rm_a0::CelsiusToFahrenheit(celsius));
  return 0;
}
