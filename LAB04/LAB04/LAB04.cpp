#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string decideAction(const string &sensor)
{
    // normalize input to lowercase
    string s;
    for (char c : sensor) s += tolower(c);

    if (s.find("left") != string::npos || s == "l")
        return "Turn left";
    if (s.find("right") != string::npos || s == "r")
        return "Turn right";
    if (s.find("center") != string::npos || s == "c" || s == "middle" || s == "mid")
        return "Go straight";

    return "Unknown sensor reading";
}

int main()
{
    srand((unsigned)time(nullptr));

    cout << "Line follower demo (black line on white)." << endl;
    cout << "Enter sensor reading: 'L'/'left', 'R'/'right', 'C'/'center', or 'Q' to quit." << endl;
    cout << "Or enter 'S' to run a random simulation." << endl;

    string input;
    while (true)
    {
        cout << "\n> ";
        if (! (cin >> input)) break;

        // quit
        if (input == "Q" || input == "q") break;

        // simulation mode
        if (input == "S" || input == "s")
        {
            // generate random: 0=left,1=center,2=right
            int r = rand() % 3;
            string sim = (r == 0) ? "L" : (r == 1) ? "C" : "R";
            cout << "Sensor: " << sim << " -> " << decideAction(sim) << endl;
            continue;
        }

        cout << "Sensor: " << input << " -> " << decideAction(input) << endl;
    }

    cout << "Exit." << endl;
    return 0;
}