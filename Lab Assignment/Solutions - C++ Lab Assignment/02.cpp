#include <iostream>
using namespace std;

class Student
{
    int admno;
    char sname[20];
    float eng, math, science, total;

public:
    void takeData()
    {
        cout << "Enter admission no: ";
        cin >> admno;
        cout << "Enter surname: ";
        cin >> sname;
        cout << "Enter Marks for Englis, Maths and Science: ";
        cin >> eng >> math >> science;
    }

    float ctotal()
    {
        total = (eng + math + science);

        return total;
    }

    void showData()
    {
        cout << "\nAdmission no: " << admno << endl;
        cout << "Surname: " << sname << endl;
        cout << "\nMarks:- \n\t"
             << "English = " << eng << "\n\t"
             << "Math = " << math << "\n\t"
             << "Science = " << science << "\n";
        cout << "Total marks: " << ctotal() << endl;
    }
};

int main()
{
    Student s1;
    s1.takeData();
    s1.ctotal();
    s1.showData();
    return 0;
}