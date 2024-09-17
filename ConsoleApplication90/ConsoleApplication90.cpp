
#include <iostream>
using namespace std;
int main()
{
    int number;
    int choice;

    do {
        cout << "\nMEnu:\n";
        cout << "1. Enter your number \n";
        cout << "2. Cout of number\n";
        cout << "3. Cout of sum number\n";
        cout << "4. Cout all nums\n";
        cout << "5. Cout zero\n";
        cout << "6. Exit\n";
        cout << "Enter your choice(1-6): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter your number : ";
            cin >> number;
            break;

        case 2: {
            int count = 0;
            int temp = number;
            while (temp != 0) {
                temp /= 10;
                count++;
            }
            cout << "Cout of num: " << count << endl;
            break;
        }

        case 3: {
            int sum = 0;
          int temp = number;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            cout << "Sum of num : " << sum << endl;
            break;
        }

        case 4: {
            int sum = 0, count = 0;
            int temp = number;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
                count++;
            }
            double average = (count > 0) ? (double)sum / count : 0;
            cout << "Cout all nums : " << average << endl;
            break;
        }

        case 5: {
            int zero = 0;
           int temp = number;
            while (temp != 0) {
                if (temp % 10 == 0) {
                    zero++;
                }
                temp /= 10;
            }
            cout << "Cout of zero : " << zero << endl;
            break;
        }

        case 6:
            cout << "Exit.\n";
            break;

        default:
            cout << "Not good choice do this again.\n";
            break;
        }
    } while (choice != 6);
}




