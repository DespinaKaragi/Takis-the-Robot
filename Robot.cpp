#include <iostream>
using namespace std;

class Robot
{
public:
    Robot(string in_callsign, int in_battery); // Constructor
    void setBattery(int in_battery); // Setter
    int getBattery() const; // Getter
    void moveForward();
    void turnLeft();
    void turnRight();
    void sayHello();
    void charge();

private:
    bool checkBattery(int cost); // Helper to check if battery is enough
    string callsign; // Private members
    int battery;
};

// Main function
int main()
{
    string name;
    cout << endl << "Please give me Takis' callsign: ";
    cin >> name;

    Robot Takis(name, 500); // Initialize Takis with callsign and battery

    // Perform the given actions in the task
    Takis.moveForward();
    Takis.turnLeft();
    Takis.moveForward();
    Takis.turnRight();
    Takis.sayHello();
    Takis.moveForward();
    Takis.turnLeft();
    Takis.sayHello();
    Takis.turnRight();
    Takis.moveForward();
    Takis.sayHello();
    Takis.moveForward();
    Takis.turnLeft();
    Takis.sayHello();

    return 0;
}

// Constructor
Robot::Robot(string in_callsign, int in_battery)
    : callsign(in_callsign), battery(in_battery) // Use initializer list
{
}

// Setter for battery
void Robot::setBattery(int in_battery)
{
    battery = in_battery;
}

// Getter for battery
int Robot::getBattery() const
{
    return battery;
}

// Helper to check if the battery is sufficient for an action
bool Robot::checkBattery(int cost)
{
    if (battery - cost > 50)
    {
        return true;
    }
    else
    {
        cout << endl << "Battery too low for this action. Sending Takis for charging.";
        charge();
        return false;
    }
}

// Move forward action
void Robot::moveForward()
{
    if (checkBattery(100))
    {
        battery -= 100;
        cout << endl << "Takis moves forward.";
        cout << "Current Battery: " << battery << endl;
    }
}

// Turn left action
void Robot::turnLeft()
{
    if (checkBattery(50))
    {
        battery -= 50;
        cout << endl << "Takis turns left.";
        cout << "Current Battery: " << battery << endl;
    }
}

// Turn right action
void Robot::turnRight()
{
    if (checkBattery(50))
    {
        battery -= 50;
        cout << endl << "Takis turns right.";
        cout << "Current Battery: " << battery << endl;
    }
}

// Say hello action
void Robot::sayHello()
{
    if (checkBattery(75))
    {
        battery -= 75;
        cout << endl << "Hello My Friend, My callsign is: " << callsign << endl;
        cout << "Current Battery: " << battery << endl;
    }
}

// Charge the battery
void Robot::charge()
{
    battery += 300;
    cout << endl << "Takis is charging...";
    cout << "Battery after charge: " << battery << endl;
}
