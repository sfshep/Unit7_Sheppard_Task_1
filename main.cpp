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
  b.month = 8;  //"08" will see it as a string and cause an error.
  b.year = 1964;
  cout << "\nBirthday: " << endl;
  cout << b.month << "/" << b.dayOfMonth << "/" << b.year << endl;

  event eOne;
  eOne.eventName = "Retirement Celebration";
  eOne.isUrgent = false;
  //set the event day
  eOne.eventDate.dayOfMonth = 24; // instance.memberStruct.memberVariable
  eOne.eventDate.month = 2;
  eOne.eventDate.year = 2020;
  //set the event time
  eOne.eventTime = t; //use data from t to populate
  //Print all elements of the even, eOne, to the screen

  cout << "\nElements in the event eOne: " << endl;
  cout << "\nEvent name: " << eOne.eventName << endl;

  string status = "";

  status = (eOne.isUrgent) ? "yes": "no";
  cout << "Is the event Urgent ? : " << status << endl;

  cout << "Day: " << eOne.eventDate.month << "/"
                  << eOne.eventDate.dayOfMonth << "/"
                  << eOne.eventDate.year;

  cout << "\nTime: " << eOne.eventTime.Hour << ":"
                   << eOne.eventTime.Minute << ":"
                   << eOne.eventTime.Second;

  //cout << eOne.eventDate.month << "/" << eOne.eventDate << "/" << eOne.eventDate.year << endl;
  //cout << eOne.eventTime;


  return 0;
}