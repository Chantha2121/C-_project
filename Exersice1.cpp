#include <iostream>
using namespace std;

int howFarCanYouGo(int mainTank, int secondaryTank) {
    int total_distance = 0;
    while (mainTank > 0) {
        total_distance += mainTank * 10;
        int transferred_fuel = mainTank / 5;
        if (transferred_fuel > 0) {
            transferred_fuel = min(transferred_fuel, secondaryTank);
            mainTank += transferred_fuel;
            secondaryTank -= transferred_fuel;
        }
        mainTank -= 1;
    }
    return total_distance;
}

int main() {
    cout << howFarCanYouGo(5, 10) << endl;
    cout << howFarCanYouGo(1, 2) << endl;
    return 0;
}
