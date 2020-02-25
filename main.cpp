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
  t.Hour = 7;
  t.Minute = 11;
  t.Second = 17;

  return 0;
}