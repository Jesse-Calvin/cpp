// Coverting Feherenheit to celsius
#include <iostream>

using namespace std;
int main(){
int fehrenheit, celsius; // tempreture variable names decleared but undefined
cout << "Enter tempreture in °F: \n";
cin >> fehrenheit; //Takes in user input 
celsius = (fehrenheit - 32)* (5/9); // Conversion expression for converting Fehrenheit to Celsius
cout << "Tempreture in fehrenheit :" << fehrenheit << "°F"; // Output of user input in line8
cout << "Tempreture in Celsius :" << celsius << "° C"; // output for the conversion of Fehrenheit to celsius

}