#include <iostream>
#include <string>
#include <conio.h>
#include "myMacros.h"

using namespace std;

#define ESC 27
unsigned long delay = 1000000; // Reduced initial delay for better visibility

int main()
{
    // x, y = position | dx, dy = direction/velocity
    int x = 2, y = 2, dx = 1, dy = 1; 
    bool end = false;
    
    string floor(80, '-'),
           header = "**** BOUNCING BALL *****",
           commands = "[Esc] = Terminate   [+] = Speed up   [-] = slow down";

    COLOR(WHITE, BLUE);
    CLS;
    
    // Draw the static UI once
    LOCATE(1, 25);  cout << header;
    LOCATE(24, 1);  cout << floor;
    LOCATE(25, 10); cout << commands;

    while (!end)
    {
        // 1. Erase the old ball position
        LOCATE(y, x);
        cout << ' ';

        // 2. Update Position
        if (x <= 1 || x >= 79) dx = -dx; // Bounce off side walls
        if (y <= 2 || y >= 23) dy = -dy; // Bounce off ceiling/floor

        x += dx;
        y += dy;

        // 3. Draw the new ball
        LOCATE(y, x);
        COLOR(WHITE, RED); // Make the ball stand out
        cout << 'o';
        COLOR(WHITE, BLUE); // Reset for background

        // 4. Input Handling
        if (kbhit())
        {
            int key = getch();
            switch (key)
            {
                case '+':
                    if (delay > 100000) delay -= delay / 5;
                    break;
                case '-':
                    delay += delay / 5;
                    break;
                case ESC:
                    end = true;
                    break;
            }
        }

        // 5. Timing Delay
        for (long wait = 0; wait < delay; ++wait)
            ; 
    }

    NORMAL;
    CLS;
    return 0;
}