#include <iostream>
#include <iomanip>

using namespace std;

void calculateExpenses(int* branding, int* travel, int* food, int* logistics) {
    int totalExpenses = *branding + *travel + *food + *logistics;
    
    double brandingPercentage = static_cast<double>(*branding) / totalExpenses * 100;
    double travelPercentage = static_cast<double>(*travel) / totalExpenses * 100;
    double foodPercentage = static_cast<double>(*food) / totalExpenses * 100;
    double logisticsPercentage = static_cast<double>(*logistics) / totalExpenses * 100;
    
    cout << fixed << setprecision(2);
    cout << "Total expenses: Rs." << totalExpenses << ".00" << endl;
    cout << "Branding expenses percentage: " << brandingPercentage << endl;
    cout << "Travel expenses percentage: " << travelPercentage << endl;
    cout << "Food expenses percentage: " << foodPercentage << endl;
    cout << "Logistics expenses percentage: " << logisticsPercentage << endl;
}

int main() {
    int branding, travel, food, logistics;
    
    cin >> branding;
    cin >> travel;
    cin >> food;
    cin >> logistics;
    
    calculateExpenses(&branding, &travel, &food, &logistics);
    
    return 0;
}
