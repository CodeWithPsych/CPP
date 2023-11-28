// Temperature Converter Class
#include <iostream>
using namespace std;

class TemperatureConverter {
private:
    double celsius;

public:
    TemperatureConverter() {
        celsius = 0.0;
    }

    void setTemperature(double tempCelsius) {
        celsius = tempCelsius;
    }

    double toFahrenheit() {
        return (celsius * 9.0/5.0) + 32.0;
    }

    double toKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    TemperatureConverter converter;
    converter.setTemperature(25.0);

    cout << "Celsius: 25.0" << endl;
    cout << "Fahrenheit: " << converter.toFahrenheit() << endl;
    cout << "Kelvin: " << converter.toKelvin() << endl;

    return 0;
}
