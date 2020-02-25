//Unit7_Sheppard_Task_1 Dr_T 2-24-2020 STRUCTs C++
#include <iostream>
using namespace std;
//declare structs above int main()
struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //save space here for our toString() override
};


int main() 
{
  timeOfDay t;
  t.Hour = 7; // declare instance of the structs
  t.Minute = 11; //put data in the struct
  t.Second = 17;
  cout << "\nCurrent Time: " << endl;  //print current data in struct
  cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  appDate b;
  b.dayOfMonth = 20;
  b.month = 8;
  b.year = 1964;
  cout << "\nBirthday: " << endl;
  cout << b.month << "/" << b.dayOfMonth << "/" << b.year << endl;

  return 0;
}