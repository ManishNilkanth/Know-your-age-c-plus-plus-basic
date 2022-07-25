#include<bits/stdc++.h>
using namespace std;
class age
{
    int day, month, year, dayb, monthb, yearb;
    string name;

public:
    void setdata()
    {
        cout << "hay! .\n Tell me your name please:" << endl;
        cin >> name;
        cout << "Mr./Mis. " << name << " enter today's date here(day/month/year):" << endl;
        cin >> day >> month >> year;
        cout << "Mr./Mis. " << name << " enter your date of birth here(day/month/year):" << endl;
        cin >> dayb >> monthb >> yearb;
    }
    void getdata()
    {
        if (year > yearb && month > monthb && day > dayb)
        {
            int newyear = year - yearb;
            int newmonth = month - monthb;
            int newday = day - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
        else if (year > yearb && month < monthb && day < dayb)
        {
            int newyear = year - 1 - yearb;
            int newmonth = month + 12 -1- monthb;
            int newday = day + 30 - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
        else if (year > yearb && month < monthb && day > dayb)
        {
            int newyear = year - 1 - yearb;
            int newmonth = month + 12 - monthb;
            int newday = day - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
        else if (year > yearb && month > monthb && day < dayb)
        {
            int newyear = year - yearb;
            int newmonth = month -1- monthb;
            int newday = day + 30 - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
        else if (year > yearb && month > monthb && day < dayb)
        {
            int newyear = year - yearb;
            int newmonth = month -1- monthb;
            int newday = day + 30 - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
        else if (year == yearb && month == monthb && day == dayb)
        {
            cout << "You are new born baby." << endl;
        }
        else if (year < yearb && month <= monthb && day <= dayb)
        {
            cout << "It is not posiable." << endl;
        }
        else if (year > yearb && month == monthb && day > dayb)
        {
            int newyear = year - yearb;
            int newmonth = month - monthb;
            int newday = day - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }

        else if (year > yearb && month > monthb && day == dayb)
        {
            int newyear = year - yearb;
            int newmonth = month - monthb;
            int newday = day - dayb;
            cout << "your age is: " << newyear << "/" << newmonth << "/" << newday << "year" << endl;
        }
    }
};
int main()
{
    age manish;
    manish.setdata();
    manish.getdata();
    return 0;
}