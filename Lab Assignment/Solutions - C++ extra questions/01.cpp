//  Define a class called Car with attributes such as make, model, and year. Include member functions to set and get these attributes. Create an object of the Car class and demonstrate the use of its member functions

#include <iostream>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;

public:
    void setData(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    void getData()
    {
        cout << "Car Details:\n";
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    // Creating objects of Car and setting data using setData()

    Car c1, c2;

    c1.setData("Hyundai", "i20", 2008);
    c2.setData("Suzuki", "Swift", 2012);

    c1.getData();
    c2.getData();

    return 0;
}
