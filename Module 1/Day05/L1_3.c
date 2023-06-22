#include <stdio.h>

// Define a structure to store time information.
struct Time {
  int hour;
  int minute;
  int second;
};

// Function to calculate the difference between two time periods.
void difference_between_time_periods(struct Time start_time, struct Time end_time, struct Time *diff) {
  /*
  Calculates the difference between two time periods.

  Args:
    start_time: A time period in the format "HH:MM:SS".
    end_time: A time period in the format "HH:MM:SS".
    diff: A pointer to a struct Time object that will store the difference between the two time periods.
  */

  // Calculate the difference in seconds.
  diff->second = end_time.second - start_time.second;
  diff->minute = end_time.minute - start_time.minute;
  diff->hour = end_time.hour - start_time.hour;

  // If the difference in seconds is negative, then adjust the minute and hour values.
  if (diff->second < 0) {
    diff->second += 60;
    diff->minute -= 1;
  }

  if (diff->minute < 0) {
    diff->minute += 60;
    diff->hour -= 1;
  }
}

int main() {
  // Create struct Time objects for the start and end times.
  struct Time start_time = {10, 0, 0};
  struct Time end_time = {11, 0, 0};

  // Create a struct Time object to store the difference.
  struct Time diff;

  // Calculate the difference between the two time periods.
  difference_between_time_periods(start_time, end_time, &diff);

  // Print the difference in seconds.
  printf("The difference between the two time periods is %d seconds.\n", diff.second);

  return 0;
}