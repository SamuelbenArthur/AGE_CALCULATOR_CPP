#include <iostream>
using namespace std;

int main()
{
    int bDay, bMonth, bYear;
    int cDay, cMonth, cYear;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    cout << "=========================================\n";
    cout << "         AGE CALCULATION PROGRAM\n";
    cout << "=========================================\n\n";

    // Input birth date
    cout << "Enter your birth date:\n";
    cout << "Day: ";
    cin >> bDay;
    cout << "Month: ";
    cin >> bMonth;
    cout << "Year: ";
    cin >> bYear;

    cout << "\nEnter the current date:\n";
    cout << "Day: ";
    cin >> cDay;
    cout << "Month: ";
    cin >> cMonth;
    cout << "Year: ";
    cin >> cYear;

    // Borrow days if needed
    if (cDay < bDay)
    {
        cMonth--;

        if (cMonth == 0)
        {
            cMonth = 12;
            cYear--;
        }

        cDay += daysInMonth[cMonth - 1];
    }

    // Borrow months if needed
    if (cMonth < bMonth)
    {
        cMonth += 12;
        cYear--;
    }

    int ageYears = cYear - bYear;
    int ageMonths = cMonth - bMonth;
    int ageDays = cDay - bDay;

    cout << "\n=========================================\n";
    cout << "Your Age is:\n";
    cout << ageYears << " Years, "
         << ageMonths << " Months, "
         << ageDays << " Days\n";
    cout << "=========================================\n";

    return 0;
}
