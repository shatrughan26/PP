#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Initialize strings
    string s1("As time by ..."), s2("goes ");

    // 2. Insert "goes " at index 8
    // Result: "As time goes by ..."
    s1.insert(8, s2);

    // 3. Erase the dots at the end (starting at index 17)
    // Result: "As time goes by "
    s1.erase(17, 19);

    // 4. Find the word "time"
    int pos = s1.find("time");

    // 5. Replace the FULL length of "time" (4 characters) with s2 ("goes ")
    if (pos != string::npos) {
        s1.replace(pos, string("time").length(), s2);
    }

    // 6. Final Output
    cout << s1 << endl;

    return 0;
}