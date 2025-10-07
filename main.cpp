/*
* Title: Math Tutor V3
* Programmer (s):Jacob Diedrichsen, Dane McClary
* Date: 2025.09.22
* Github: https://github.com/comcqu02/MathTutorV2
*Description: An increasingly difficult Math Tutor to help students learn.
*Description 2:
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ios>
#include <limits>


using namespace std;

void getline(const istream & cin, int user_choice);

int main() {
    string name;

    const int MAX_ATTEMPTS = 3; // How many attempts the user has.
    const int LEVEL_CHANGE = 10; // How much to increase the difficulty of the problem through numbers.

    int leftn; // left value of the problem
    int rightn; // right value of problem
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.
    int userChoice = 0; // used to see if the user wants to continue with the program

    enum MathType {MT_ADD, MT_SUB, MT_MUL, MT_DIV};
    MathType mathType = MT_ADD;

    std::srand(std::time(nullptr));

    //   /\  Input any new values here please!
        cout << "***************************************************************" << endl;
        cout <<   " __  __       _   _       __  __       _   _                 " << endl;
        cout <<   "|  \/  | __ _| |_| |__   |  \/  | __ _| |_| |_ ___ _ __ ___  " << endl;
        cout <<   "| |\/| |/ _` | __| '_ \  | |\/| |/ _` | __| __/ _ \ '__/ __| " << endl;
        cout <<   "| |  | | (_| | |_| | | | | |  | | (_| | |_| ||  __/ |  \__ \ " << endl;
        cout <<   "|_|  |_|\__,_|\__|_| |_| |_|  |_|\__,_|\__|\__\___|_|  |___/ " << endl;
        cout <<   " _____      _              __     _______                    " << endl;
        cout <<   "|_   _|   _| |_ ___  _ __  \ \   / /___ /                    " << endl;
        cout <<   "  | || | | | __/ _ \| '__|  \ \ / /  |_ \                    " << endl;
        cout <<   "  | || |_| | || (_) | |      \ V /  ___) |                   " << endl;
        cout <<   "  |_| \__,_|\__\___/|_|       \_/  |____/                    " << endl;
    cout << endl << "***********************************************************" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;
    cout << "What is your name my pupil? :";
    getline(cin, name);
    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // This is the introduction of the program before the math. Only one string value used.

    // generating the random numbers and math type
    leftn = std::rand() % 10 +1;
    rightn = std::rand() % 10 +1;
    mathType = static_cast<MathType>(rand() % 4);

    // if statement for the math type and question
do {

 }while (userChoice == "yes" || userChoice == "y");
    {
        switch (mathType){
            case MT_ADD:
                correctAnswer = (leftn + rightn);
                cout << leftn << "+" << rightn <<"=";
                cin >> userAnswer;
                break;

            case MT_SUB:
                if (rightn > leftn) {
                    correctAnswer =(rightn - leftn);
                    cout << rightn <<"-" <<leftn <<"=";
                    cin >> userAnswer;
                }


                else {
                    correctAnswer = (leftn - rightn);
                    cout << leftn <<"-" <<rightn <<"=";
                    cin >> userAnswer;
                }
                break;

            case MT_MUL:
                correctAnswer =(rightn * leftn);
                cout << rightn <<"*" <<leftn <<"=";
                cin >> userAnswer;
                break;

            case MT_DIV:
                if (rightn > leftn) {
                    correctAnswer =(rightn / leftn);
                    cout << rightn <<"/" <<leftn <<"=";
                    cin >> userAnswer;
                }


                else {
                    correctAnswer = (leftn / rightn);
                    cout << leftn <<"/" <<rightn <<"=";
                    cin >> userAnswer;
                }
                break;

            default:
                cout << "Display error -1" << endl << "contact DaneMcClary on Github";
                break;

        }
        //loop until the user enters a number
        while (!(cin >> userAnswer)) {
            cin.clear(); // clears the cin error flag

            //!!Still need to include the limits library to use numeric_limits!!

            cin.ignore(numeric_limits<streamsize>::max(), '\n');} // ignores the max input, up to 'endl'

        cout << "\tInvalid imput!" << endl;
        cout << "\tPlease enter a number: ";
    } // end of the get userAnswer while loop

    if (userAnswer == correctAnswer) {
        cout << endl << "Your answer is correct." << endl;
    }
    else {
        cout << endl << "The correct number is " << correctAnswer << endl;
    }

while (userAnswer == correctAnswer) {
    cout << "Do you want to continue (y=yes | n=no)?";
    getline(cin, userChoice);

for (int i = 0 ; i < userChoice; i++) {

}
    if ((userChoice == "y" || userChoice == "yes") ||
        (userChoice == "n" || userChoice == "no")) {
        break;
    } else {
        cout << "Invalid input, please try again" << endl;
        cout << endl;
    }
}

  //  cout << endl << endl;
    //cout << "What is " << leftn << " + " << rightn << "?" << endl;
    // Asking the big question
   // cin >> answer;
    // Getting an answer for the question
 //   cout << "Thank you for using our beta version of Math Tutor! More is on the way." << endl;


    return 0;
}
