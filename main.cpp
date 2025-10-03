#include <vector>
#include <string>

#include "Bridges.h"
#include "DataSource.h"
#include "data_src/Game.h"

using namespace std;
using namespace bridges;


void showMenu() {
    cout << "-------------------------------------------------------------\n";
    cout << "Choose one of the options below: \n";
    cout << "1. Show all genres of games.\n";
    cout << "2. Show all games for a specific genre. (must do option 1. first "
            "to get genres)\n";
    cout << "3. Other... you must implement this.\n";
    cout << "9. Quit this program\n";
}

int getSelection() {
    while (true) {
        cout << "Choose your option:\n";
        int choice;
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3 || choice == 9) {
            return choice;
        }
        cout << "Your choice is invalid. Try again, please.\n";
    }
}

// Add your code here.

int main(int argc, char **argv) {
    // create Bridges object
    Bridges bridges(7, argv[1], argv[2]);

    // read the IGN game data
    DataSource ds(&bridges);
    vector<Game> game_list = ds.getGameData();

    int choice;
    do {
        showMenu();
        choice = getSelection();

        switch (choice) {
            case 1: {
                // Add code here
                break;
            }
            case 2: {
                // Add code here
                break;
            }
            case 3: {
                cout << "Not implemented yet.\n";
                // Add code here
                break;
            }
        }
    } while (choice != 9);

    cout << "Thanks for using the program.\n";

    return 0;
}
