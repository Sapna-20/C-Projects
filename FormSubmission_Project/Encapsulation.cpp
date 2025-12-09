#include <iostream>
using namespace std;

class WaterTank {
private:
    int waterLevel;            // hidden data
    int maxCapacity = 100;     // hidden data

public:
    WaterTank() {              // constructor
        waterLevel = 50;       // tank half-filled by default
    }

    // Public function to fill water
    void fillWater(int amount) {
        if (waterLevel + amount > maxCapacity) {
            cout << "Tank overflow prevented! Filling only till max capacity.\n";
            waterLevel = maxCapacity;
        } else {
            waterLevel += amount;
        }
    }

    // Public function to use water
    void useWater(int amount) {
        if (waterLevel - amount < 0) {
            cout << "Not enough water! Tank is empty.\n";
            waterLevel = 0;
        } else {
            waterLevel -= amount;
        }
    }

    // Public function to check water level
    int getWaterLevel() {
        return waterLevel;
    }
};

int main() {
    WaterTank tank;

    cout << "Initial Water Level: " << tank.getWaterLevel() << "%\n";

    tank.fillWater(40);
    cout << "After Filling: " << tank.getWaterLevel() << "%\n";

    tank.useWater(70);
    cout << "After Using Water: " << tank.getWaterLevel() << "%\n";

    return 0;
}
