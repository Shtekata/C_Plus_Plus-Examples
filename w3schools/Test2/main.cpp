#include <ctime>
#include <iostream>

using namespace std;

void time() {
  time_t timestamp;
  time(&timestamp);
  cout << "The current time is " << ctime(&timestamp) << endl;
}

void time2() {
  struct tm datetime;
  time_t timestamp;
  datetime.tm_year = 2023 - 1900;
  datetime.tm_mon = 12 - 1;
  datetime.tm_mday = 17;
  datetime.tm_hour = 12;
  datetime.tm_min = 30;
  datetime.tm_sec = 1;
  datetime.tm_isdst = -1;

  timestamp = mktime(&datetime);
  cout << "The time is " << ctime(&timestamp);

  string weekdays[] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};
  cout << "The date is on a " << weekdays[datetime.tm_wday] << endl;
}

void time3() {
  time_t timestamp = time(&timestamp);
  struct tm datetime = *localtime(&timestamp);

  cout << "The current hour is " << datetime.tm_hour << endl;
}

void time4() {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);

  cout << "The current time is " << asctime(&datetime) << endl;
}

void time5() {
  struct tm datetime;
  datetime.tm_year = 2022 - 1900;
  datetime.tm_mon = 0;
  datetime.tm_mday = 32;
  datetime.tm_hour = 0;
  datetime.tm_min = 0;
  datetime.tm_sec = 0;
  datetime.tm_isdst = -1;

  mktime(&datetime);
  cout << "The date is " << asctime(&datetime) << endl;
}

void time6() {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);

  char output[50];
  strftime(output, 50, "%B %e, %Y", &datetime);
  cout << "The current date is " << output << endl;

  strftime(output, 50, "%I:%M:%S %p", &datetime);
  cout << "The current date is " << output << endl;

  strftime(output, 50, "%m/%d/%y", &datetime);
  cout << "The current date is " << output << endl;

  strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
  cout << "The current date is " << output << endl;

  cout << "The current time is " << asctime(&datetime) << endl;
}

void time7() {
  time_t now;
  time_t nextyear;
  struct tm datetime;

  now = time(NULL);
  datetime = *localtime(&now);
  datetime.tm_year = datetime.tm_year + 1;
  datetime.tm_mon = 0;
  datetime.tm_mday = 1;
  datetime.tm_hour = 0;
  datetime.tm_min = 0;
  datetime.tm_sec = 0;
  datetime.tm_isdst = -1;
  nextyear = mktime(&datetime);

  int diff = difftime(nextyear, now);
  cout << diff << " seconds until next year" << endl;
}

void time8() {
  clock_t before = clock();
  int k = 0;
  for (int i = 0; i < 1000000; i++) {
    k += i;
  }
  clock_t duration = clock() - before;
  cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds"
       << endl;
}

int main() {
  cout << endl;
  // cout << "Hello World!" << endl;
  // time();
  // time2();
  // time3();
  // time4();
  // time5();
  // time6();
  // time7();
  time8();

  cout << endl;
  return 0;
}
