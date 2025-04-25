
#include <iostream>
using namespace std;

float sellingPrice = 4.5;
float costOfEachUnit = 2;
float discountedSalePrice = 1.5;
float highestProfit = 0;
int   numberOfCakesToBeBaked = 0;

void maxProfit() {
    for (int x = 10; x <= 50; x++) {

        float totalProfit = 0;

        for (int i = 0; i < 1000; i++) {
            float profit;

            int customerDemand = 10 + (rand() % (10 - 100 + 1));
            if (customerDemand >= x) {
                profit = (sellingPrice * customerDemand) - (costOfEachUnit * x);
            } else {
                float leftOverCakes = x - customerDemand;
                profit = (sellingPrice * customerDemand) + (discountedSalePrice * leftOverCakes) - (costOfEachUnit * x);
            }

            totalProfit += profit;
        }

        float averageProfit = totalProfit / 1000;

        if (averageProfit > highestProfit) {
            highestProfit = averageProfit;
            numberOfCakesToBeBaked = x;
        }
    }

    cout<< "Cakes You should bake each day to get the best profit: " << numberOfCakesToBeBaked << endl;
    cout<< "Average profit you will make: " << highestProfit << "EGP" << endl;
}





int main() {

    maxProfit();

    return 0;
}