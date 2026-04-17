#include <iostream>
#include <string>
using namespace std;

string prompt = "Please enter two lines of text!\n", dashes(30, '-');

int main() {
    string line1, line2, key = "y";

    // Check for both lowercase and uppercase 'y'
    while (key == "y" || key == "Y") {
        cout << dashes << '\n' << prompt << dashes << endl;
        getline(cin, line1);
        getline(cin, line2);

        if (line1 == line2) {
            cout << "Both lines are exactly the same!" << endl;
        } 
        else {
            // Compare by length
            int len1 = line1.length();
            int len2 = line2.length();

            if (len1 == len2) {
                cout << "Both lines have the same length, but different content!\n";
                // Optionally show which is alphabetically first
                cout << "Alphabetically first: " << (line1 < line2 ? line1 : line2) << endl;
            } 
            else {
                cout << "The shorter line (by length) is:\n\t";
                cout << (len1 < len2 ? line1 : line2) << endl;
            }
        }

        cout << "\nRepeat? (y/n) ";
        do {
            getline(cin, key);
        } while (key != "y" && key != "Y" && key != "n" && key != "N");
    }
    return 0;
}