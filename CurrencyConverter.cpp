#include <iostream> 
#include <cstdlib>
using namespace std;

int main(){

    cout << "----------ALL CONVERSION RATES ARE FROM 1/16/24----------" << endl;
    cout << "1. US Dollar (USD) \n" <<  "2. Euro (EUR) \n" << "3. Japanese Yen (JPY)" << endl; 
    cout << "4. Pount sterling (GBP) \n" <<  "5. Australian dollar (AUD) \n" << "6. Canadian dollar (CAD)" << endl; 
    cout << "7. Bangladeshi Taka (BDT)"<< endl;
    cout << "Select your currency by inputting 1-7 :";


    int currencyType; // Inputting currency type to convert FROM
    cin >> currencyType;
    string FromCurrency;
    switch(currencyType) {  // Displays selection to user
        case 1:
        cout << "Currency chosen is USD" << endl;
        FromCurrency = "USD";
        break;
        case 2: 
        cout << "Currency chosen is EUR" << endl;
        FromCurrency = "EUR";
        break;
        case 3:
        cout << "Currency chosen is JPY" << endl;
        FromCurrency = "JPY";
        break;
        case 4:
        cout << "Currency chosen is GBP" << endl;
        FromCurrency = "GBP";
        break;
        case 5:
        cout << "Currency chosen is AUD" << endl;
        FromCurrency = "AUD";
        break;
        case 6:
        cout << "Currency chosen is CAD" << endl;
        FromCurrency = "CAD";
        break;
        case 7:
        cout << "Currency chosen is BDT" << endl;
        FromCurrency = "BDT";
        break;
        default:
        cout << "Error" << endl;
        exit(0);
        break;
    }

    double amount;
    cout << "enter amount of currency: ";
    cin >> amount;
    cout << "Amount input: " << amount << endl;
 
    cout << "1. US Dollar (USD) \n" <<  "2. Euro (EUR) \n" << "3. Japanese Yen (JPY)" << endl; 
    cout << "4. Pount sterling (GBP) \n" <<  "5. Australian dollar (AUD) \n" << "6. Canadian dollar (CAD)" << endl;
    cout << "7. Bangladeshi Taka (BDT)"<< endl;
    cout << "Select currency to convert to by inputting 1-7: ";
    
    int conversionType; // Inputting currency to convert TO
    cin >> conversionType;
    string ToCurrency;
    
    switch(conversionType) {  // Displays selection to user
        case 1:
        cout << "Currency converting to is USD" << endl; 
        ToCurrency = "USD";
        break;
        case 2: 
        cout << "Currency converting to is EUR" << endl;
        ToCurrency = "EUR";
        break;
        case 3:
        cout << "Currency converting to is JPY" << endl;
        ToCurrency = "JPY";
        break;
        case 4:
        cout << "Currency converting to is GBP" << endl;
        ToCurrency = "GBP";
        break;
        case 5:
        cout << "Currency converting to is AUD" << endl;
        ToCurrency = "AUD";
        break;
        case 6:
        cout << "Currency converting to is CAD" << endl;
        ToCurrency = "CAD";
        case 7:
        cout << "Currency converting to is BDT" << endl;
        ToCurrency = "BDT";
        break;
        default:
        cout << "Error re-run program and input allowed values" << endl;
        exit(0);
        break;
    }

    if(currencyType == conversionType) { // stops code if same currency is picked twice
        cout << "Cannot convert, selected currencies are the same" << endl;
        exit(0);
    }

    // Conversion rates from 1/16/2024 according to google

    double conversionRates[7][7] = {    // Conversion rates of each currency to itself and other currencies in the list
        {1.0, 0.91, 145.11, 0.79, 1.50, 1.34, 109.91}, // USD 
        {1.10, 1.0, 158.90, 0.86, 1.64, 1.47, 119.56}, // EUR
        {0.0069, 0.0063, 1.0, 0.0054, 0.010, 0.0092, 0.75}, // JPY
        {1.27, 1.16, 184.83, 1.0, 1.90, 1.71, 138.93}, // GBP
        {0.67, 0.61, 97.05, 0.53, 1.0, 0.90, 72.40}, // AUD
        {0.75, 0.68, 108.25, 0.59, 1.12, 1.0, 81.49}, // CAD
        {0.0091, 0.0084, 1.34, 0.0072, 0.014, 0.012, 1.0} //BDT    // Rates from 1/16/24
    };

    // Perform the conversion calculations
    double result = amount * conversionRates[currencyType - 1][conversionType - 1]; // subtracts -1 to acquire respective exchange rates

    // Display the result after conversion
    cout << amount << " " << FromCurrency << " is equal to approximately " << result << " " << ToCurrency << "." << endl;

};