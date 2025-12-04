#include <iostream>
using namespace std;

int main() {
    char openseats[3][3] = { {'u','u','u'}, {'u','u','u'}, {'u','u','u'} };
    string arrangments[3][3] = { {"1-1","1-2","1-3"}, {"2-1","2-2","2-3"}, {"3-1","3-2","3-3"} };

    cout << "Welcome to the movie hall\nSeat layout:\n";
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            cout << arrangments[x][y] << " " << openseats[x][y] << "  ";
        }
        cout << endl;
    }

    bool go = true;
    int rows, col;

    while(go){
        cout << "Enter the row (0-2): ";
        cin >> rows;
        cout << "Enter the column (0-2): ";
        cin >> col;

        if(rows < 0 || rows > 2 || col < 0 || col > 2){
            cout << "You entered invalid seat number.\n";
            continue;
        }

        if(openseats[rows][col] == 'u'){
            openseats[rows][col] = 'z';
            cout << "Your seat is reserved: " << arrangments[rows][col] << endl;
        } else {
            cout << "Please select another seat. This seat is already booked.\n";
        }

        char choice;
        cout << "Do you want to reserve another seat? (y/n): ";
        cin >> choice;
        if(choice == 'n' || choice == 'N'){
            go = false;
        }
    }

    cout << "Final seat layout:\n";
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            cout << arrangments[x][y] << " " << openseats[x][y] << "  ";
        }
        cout << endl;
    }

    return 0;
}
