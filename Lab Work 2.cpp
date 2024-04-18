#include <iostream>
using namespace std;


// Function prototypes
double celsiusToFahrenheit (double celsius);
double fahrenheitToCelsius (double fahrenheit);


int main() {
	
    double temperature;
    char scale;
    double convertedTemp; // Declare convertedTemp outside if-else blocks to access it later
    
    cout << "Enter temperature: ";
    cin >> temperature;
    
    cout << "Enter scale (C for Celsius, F for Fahrenheit) : ";
    cin >> scale;
    
    // Fix indentation for proper if-else structure
    if (scale == 'C' || scale == 'c') {
        convertedTemp = celsiusToFahrenheit (temperature); 
    // Call celsiusToFahrenheit with temperature argument
        cout << "Converted temperature: " << convertedTemp << " F" << endl;
    } 
	else if (scale == 'F' || scale == 'f') {
        convertedTemp = fahrenheitToCelsius (temperature); 
    // Call fahrenheitToCelsius with temperature argument
        cout << "Converted temperature: " << convertedTemp << " C" << endl; 
    } 
    // Correct the output operator from < to <<
	else {
        cout << "Invalid scale entered." << endl; // Handle invalid scale input
    }
    
    return 0;
}


// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit (double celsius) {
    return (celsius * 9 / 5) + 32;
}


// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius (double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

