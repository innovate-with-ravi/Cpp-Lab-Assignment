#include <iostream>
using namespace std;

class Flight
{
    int flight_no;
    string destination;
    float distance, fuel;

    float calFuel()
    {
        if (distance <= 1000)
        {
            fuel = 500.0f;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
    }

public:
    void feedInfo(int flight_no, string destination, float distance)
    {
        this->flight_no = flight_no;
        this->destination = destination;
        this->distance = distance;

        calFuel();
    }

    void showInfo();
};

void Flight::showInfo()
{
    cout << "Flight number is: " << flight_no << endl;
    cout << "Your destination is: " << destination << endl;
    cout << "Total distance from airport to " << destination << " is: " << distance << "km" << endl;
    cout << "Total fuel required is: " << fuel << "ltr.s" << endl;
}

int main()
{
    Flight indigo_i1;
    indigo_i1.feedInfo(54, "USA", 3000);
    indigo_i1.showInfo();

    return 0;
}