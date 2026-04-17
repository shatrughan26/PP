#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    time_t sec;
    time(&sec);

    // 1. Convert seconds to a readable string
    // ctime returns a string like: "Fri Apr 17 15:30:05 2026\n"
    string date_str = ctime(&sec);

    cout << "Date and time: " << date_str;

    // 2. Extract the hour
    // In the ctime string format, the hour starts at index 11 and is 2 digits long
    string hr = date_str.substr(11, 2);

    string greeting("Have a wonderful "); // Added a space at the end

    if (hr < "10") {
        greeting += "Morning!";
    }
    else if (hr < "17") {
        greeting += "Day!";
    }
    else {
        greeting += "Evening!";
    }

    cout << greeting << endl;

    return 0;
}