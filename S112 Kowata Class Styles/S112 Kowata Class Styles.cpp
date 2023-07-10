// S112 Kowata Class Styles.cpp 
//

#include "EmployeeV1.h"
#include <vector>

int main()
{
    EmployeeV1 e1("   Homer Simpson   ", 20000);
    cout << e1.stringify() << endl;

    EmployeeV1 e2("Marge Simpson", 200000);

    EmployeeV1 e3("Mr Burns", 10000000);

    vector<EmployeeV1> db;
    db.push_back(e1);
    db.push_back(e2);
    db.push_back(e3);

    db.push_back(EmployeeV1("Bart Simpson", 1));

    //Visiting the Database
    cout << "\nDatabase: " << endl;
    for (EmployeeV1 e : db) { cout << e.stringify() << endl; }

    EmployeeV1* p1 = new EmployeeV1("Lisa Simpson", 5000000);
    cout << p1->stringify() << endl;
}

