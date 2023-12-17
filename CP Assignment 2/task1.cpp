#include<iostream>
using namespace std;

int user_input_function();
void result_function(int user_input, int& result, bool& error_check);

int main() {
    int user_input, result;
    bool error_check=false;
    char user_choice;

    do {
        user_input = user_input_function();
        result_function(user_input, result, error_check);

        if (error_check == false) 
        {
            cout << "Assigned value is " << result << endl;
        }
        else
        {
            cout << "Sorry, Invalid Input" << endl;
        }
        cout << "Do you want to try again?" << endl << "Press y to continue or any other key to exit: ";
        cin >> user_choice;
    } while (user_choice == 'y' || user_choice == 'Y');
    return 0;
}

int user_input_function() 
{
    int user_input;
    cout << "Enter any number: ";
    cin >> user_input;
    return user_input;
}

void result_function(int user_input, int& result, bool& error_check) 
{
    if (user_input < 0)
        result = -1;
    else if (user_input >= 0 && user_input <= 5)
        result = 0;
    else if (user_input >= 6 && user_input <= 12)
        result = 1;
    else if (user_input >= 13 && user_input <= 19)
        result = 2;
    else if (user_input >= 20 && user_input <= 50)
        result = 3;
    else if (user_input >= 51 && user_input <= 60)
        result = 4;
    else if (user_input >= 61 && user_input <= 101)
        result = 5;
    else if (user_input > 101)
        result = -1;
    else
        error_check = true;
}