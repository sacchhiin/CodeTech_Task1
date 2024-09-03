#include <iostream>
#include <iomanip>

class TemperatureConverter {
public:
    static double CelsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    static double CelsiusToKelvin(double celsius) {
        return celsius + 273.15;
    }

    static double FahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }

    static double FahrenheitToKelvin(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
    }

    static double KelvinToCelsius(double kelvin) {
        return kelvin - 273.15;
    }

    static double KelvinToFahrenheit(double kelvin) {
        return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
    }
};

void displayMenu() {
    std::cout << "Temperature Conversion Menu:\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Celsius to Kelvin\n";
    std::cout << "3. Fahrenheit to Celsius\n";
    std::cout << "4. Fahrenheit to Kelvin\n";
    std::cout << "5. Kelvin to Celsius\n";
    std::cout << "6. Kelvin to Fahrenheit\n";
    std::cout << "7. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    int choice;
    double inputTemp, convertedTemp;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::CelsiusToFahrenheit(inputTemp);
                std::cout << "Temperature in Fahrenheit: " << std::fixed << std::setprecision(2) << convertedTemp << " °F\n";
                break;

            case 2:
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::CelsiusToKelvin(inputTemp);
                std::cout << "Temperature in Kelvin: " << std::fixed << std::setprecision(2) << convertedTemp << " K\n";
                break;

            case 3:
                std::cout << "Enter temperature in Fahrenheit: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::FahrenheitToCelsius(inputTemp);
                std::cout << "Temperature in Celsius: " << std::fixed << std::setprecision(2) << convertedTemp << " °C\n";
                break;

            case 4:
                std::cout << "Enter temperature in Fahrenheit: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::FahrenheitToKelvin(inputTemp);
                std::cout << "Temperature in Kelvin: " << std::fixed << std::setprecision(2) << convertedTemp << " K\n";
                break;

            case 5:
                std::cout << "Enter temperature in Kelvin: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::KelvinToCelsius(inputTemp);
                std::cout << "Temperature in Celsius: " << std::fixed << std::setprecision(2) << convertedTemp << " °C\n";
                break;

            case 6:
                std::cout << "Enter temperature in Kelvin: ";
                std::cin >> inputTemp;
                convertedTemp = TemperatureConverter::KelvinToFahrenheit(inputTemp);
                std::cout << "Temperature in Fahrenheit: " << std::fixed << std::setprecision(2) << convertedTemp << " °F\n";
                break;

            case 7:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice! Please choose a valid option.\n";
        }

        std::cout << "\n";
    } while (choice != 7);

    return 0;
}
