#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int attempt, num;
    char wb = 'r';
    
    // Seed the random number generator once
    srand(static_cast<unsigned>(time(0)));

    cout << "\n ******* A NUMERICAL GAME *******" << endl;

    // Main game loop
    while (wb == 'r')
    {
        cout << "\nRule of the game:" << endl;
        cout << "I have a number between 1 and 15 in mind." << endl;
        cout << "You have three chances to guess correctly!\n" << endl;

        num = rand() % 15 + 1; // Generate new number for this round
        bool found = false;
        int count = 0;

        // Attempt loop
        while (!found && count < 3)
        {
            cout << ++count << ". attempt: ";
            if (!(cin >> attempt)) { // Basic check for non-numeric input
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a valid number." << endl;
                count--; 
                continue;
            }

            if (attempt < num)
            {
                cout << "Too small!" << endl;
            }
            else if (attempt > num)
            {
                cout << "Too big!" << endl;
            }
            else
            {
                found = true;
            }
        }

        // Round results
        if (found)
        {
            cout << "\nCongratulations! You won!" << endl;
        }
        else
        {
            cout << "\nI won! The number was: " << num << endl;
        }

        // Ask to play again
        cout << "\nRepeat -> <r>   Finish -> <f>: ";
        do
        {
            cin >> wb;
        } while (wb != 'r' && wb != 'f');
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}