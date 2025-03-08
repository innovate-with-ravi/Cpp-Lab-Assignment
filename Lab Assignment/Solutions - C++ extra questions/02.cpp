#include <iostream>
using namespace std;

// 2. Define a class called Address with attributes such as street, city, and zipCode. Create a class called Person that has an Address object as a member variable. Demonstrate composition by creating a Person object and accessing its Address attributes.

class Address
{
    string street;
    string city;
    string zipCode;

public:
    void setData(string street, string city, string zipCode)
    {
        this->street = street;
        this->city = city;
        this->zipCode = zipCode;
    }

    void showData()
    {
        cout << "street: " << street << endl;
        cout << "city: " << city << endl;
        cout << "zipCode: " << zipCode << endl;
    }
};

class Person
{
    Address adr;

public:
    void setData(string s, string c, string z)
    {
        adr.setData(s, c, z);
    }

    void showData()
    {
        adr.showData();
    }
};

int main()
{

    Person per;

    per.setData("MG Road", "Indore", "0454775");
    per.showData();

    return 0;
}