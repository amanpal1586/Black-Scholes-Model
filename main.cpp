#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the cumulative normal distribution
double normalCDF(double x) {
    return 0.5 * erfc(-x * sqrt(0.5));
}

// Function to calculate Black-Scholes option price
void blackScholes(double S, double K, double T, double r, double sigma) {
    double d1 = (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);

    // Call Option Price
    double callPrice = S * normalCDF(d1) - K * exp(-r * T) * normalCDF(d2);

    // Put Option Price
    double putPrice = K * exp(-r * T) * normalCDF(-d2) - S * normalCDF(-d1);

    // Display results
    cout << "\n🔹 Black-Scholes Option Prices 🔹" << endl;
    cout << "----------------------------------" << endl;
    cout << "📈 Call Option Price: $" << callPrice << endl;
    cout << "📉 Put Option Price:  $" << putPrice << endl;
}

int main() {
    double S, K, T, r, sigma;

    cout << "Enter Stock Price (S): ";
    cin >> S;
    cout << "Enter Strike Price (K): ";
    cin >> K;
    cout << "Enter Time to Expiry (T in years): ";
    cin >> T;
    cout << "Enter Risk-Free Interest Rate (r as decimal): ";
    cin >> r;
    cout << "Enter Volatility (σ as decimal): ";
    cin >> sigma;

    // Compute and display Black-Scholes prices
    blackScholes(S, K, T, r, sigma);

    return 0;
}

double normalCDF(double x) {
    return 0.5 * erfc(-x * sqrt(0.5));
}

// Function to calculate Black-Scholes option price
void blackScholes(double S, double K, double T, double r, double sigma) {
    double d1 = (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);

    // Call Option Price
    double callPrice = S * normalCDF(d1) - K * exp(-r * T) * normalCDF(d2);

    // Put Option Price
    double putPrice = K * exp(-r * T) * normalCDF(-d2) - S * normalCDF(-d1);

    // Display results
    cout << "\n🔹 Black-Scholes Option Prices 🔹" << endl;
    cout << "----------------------------------" << endl;
    cout << "📈 Call Option Price: $" << callPrice << endl;
    cout << "📉 Put Option Price:  $" << putPrice << endl;
}

int main() {
    double S, K, T, r, sigma;

    cout << "Enter Stock Price (S): ";
    cin >> S;
    cout << "Enter Strike Price (K): ";
    cin >> K;
    cout << "Enter Time to Expiry (T in years): ";
    cin >> T;
    cout << "Enter Risk-Free Interest Rate (r as decimal): ";
    cin >> r;
    cout << "Enter Volatility (σ as decimal): ";
    cin >> sigma;

    // Compute and display Black-Scholes prices
    blackScholes(S, K, T, r, sigma);

    return 0;
}
