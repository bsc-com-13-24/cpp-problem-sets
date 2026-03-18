#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0)); // seed the random number generator

    int daysUntilExpiration = rand() % 12; // random number from 0 to 11

    int day = 0;

    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
    {
        day = 1;
    }
    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        day = 2;
    }
    else if (daysUntilExpiration == 1)
    {
        day = 3;
    }

    else if (daysUntilExpiration == 0)
    {
        day = 4;
    }

    switch (day)
    {
    case 1:
        cout << "Your subscription will expire soon. Renew now!" << endl;
        break;

    case 2:
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%" << endl;
        break;

    case 3:
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%" << endl;
        break;

    case 4:
        cout << "Your subscription has expired" << endl;
        break;

    default:
        cout << "You have an active subscription";
        break;
    }

    return 0;
}
