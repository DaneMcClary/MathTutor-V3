/*
* Title: Math Tutor V3
* Programmer (s):Jacob Diedrichsen, Dane McClary
* Date: 2025.10.10
* Github: https://github.com/DaneMcClary/MathTutor-V3
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
#include <random>


using namespace std;


int main() {
    string name = "?"; // Gets the users name
    string userChoice = "?"; // Gets the users choice

    const int MAX_ATTEMPTS = 3; // How many attempts the user has.
    const int LEVEL_CHANGE = 10; // How much to increase the difficulty of the problem through numbers.

    int leftn = 0; // left value of the problem
    int rightn = 0; // right value of problem
    int tempn = 0; // temporary number for subtraction and division problems
    int product = 0; // makes it so division is always whole numbers
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.
    int totalCorrect = 0; // The total number of answers the user gets correct
    int totalIncorrect = 0; // The total number of answers the user gets incorrect;
    int mathLevel = 1; // The level of difficult of the math problem
    int remainingAttempts = MAX_ATTEMPTS;
    int finalCorrect = 0;

    srand(time(0));

    enum MathType {MT_ADD, MT_SUB, MT_MUL, MT_DIV};
    MathType mathType = MT_ADD;



    //   /\  Input any new values here please!
    cout <<   R"(****************************************************************)" << endl;
    cout <<   R"(  __  __       _   _         __  __       _   _                 )" << endl;
    cout <<   R"( |  \/  | __ _| |_| |__     |  \/  | __ _| |_| |_ ___ _ __ ___  )" << endl;
    cout <<   R"( | |\/| |/ _` | __| '_ \    | |\/| |/ _` | __| __/ _ \ '__/ __| )" << endl;
    cout <<   R"( | |  | | (_| | |_| | | |   | |  | | (_| | |_| ||  __/ |  \__ \ )" << endl;
    cout <<   R"( |_|  |_|\__,_|\__|_| |_|   |_|  |_|\__,_|\__|\__\___|_|  |___/ )" << endl;
    cout <<   R"(  _____      _                __     _______                    )" << endl;
    cout <<   R"( |_   _|   _| |_ ___  _ __    \ \   / /___ /                    )" << endl;
    cout <<   R"(   | || | | | __/ _ \| '__|    \ \ / /  |_ \                    )" << endl;
    cout <<   R"(   | || |_| | || (_) | |        \ V /  ___) |                   )" << endl;
    cout <<   R"(   |_| \__,_|\__\___/|_|         \_/  |____/                    )" << endl;
    cout <<   R"(****************************************************************)" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;
    cout << "What is your name my pupil? :";
    getline(cin, name); // gets the users name
    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // This is the introduction of the program before the math. Only one string value used.
    //
    do {
        // generating the random numbers and math type
        if (mathLevel == 1) {
            leftn = std::rand() % 10 +1; // random value for left number
            rightn = std::rand() % 10 +1; // random value for the right number

        } else if (mathLevel == 2) {
            leftn = std::rand() % 10 +11;
            rightn = std::rand() % 10 +11;
        } else if (mathLevel == 3) {
            leftn = std::rand() % 10 +21;
            rightn = std::rand() % 10 +21;
        } else {
            cout << "There has been and error." << endl;
        }

        mathType = static_cast<MathType>(rand() % 4); // random variable for math operator


        // if statement for the math type and question

        switch (mathType) {
            case MT_ADD:
                correctAnswer = leftn + rightn;
                for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                    cout << "[Level #" << mathLevel << "] " << name << ", what does " << leftn << "+" << rightn << "=";
                    break;
                }
                while (!(cin >> userAnswer)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\tInvalid input!" << endl;
                    cout << "\tPlease enter a number: ";
                }
                break;

            case MT_SUB:
                correctAnswer = leftn - rightn;
                if (leftn < rightn) {
                    tempn = leftn;
                    leftn = rightn;
                    rightn = tempn;
                }
                for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                    cout << "[Level #" << mathLevel << "] " << name << ", what does " << leftn << "-" << rightn << "=";
                    break;
                }
                while (!(cin >> userAnswer)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\tInvalid input!" << endl;
                    cout << "\tPlease enter a number: ";
                }
                break;

                if (correctAnswer = (leftn - rightn)) {
                    for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                        cout << "[Level #" << mathLevel << "] " << name << ", what does " << leftn << "-" << rightn << "=";
                        break;
                    }
                    while (!(cin >> userAnswer)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\tInvalid input!" << endl;
                        cout << "\tPlease enter a number: ";
                    }
                }
                break;

            case MT_MUL:
                correctAnswer = leftn * rightn;
                for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                    cout << "[Level #" << mathLevel << "] " << name << ", what does " << leftn << "*" << rightn << "=";
                    break;
                }
                while (!(cin >> userAnswer)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\tInvalid input!" << endl;
                    cout << "\tPlease enter a number: ";
                }
                break;

            case MT_DIV:
                product = (leftn * rightn);
                correctAnswer = (product / rightn);

                for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                    cout << "[Level #" << mathLevel << "] " << name << ", what does " << product << "/" << rightn << "=";
                    break;
                }
                while (!(cin >> userAnswer)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\tInvalid input!" << endl;
                    cout << "\tPlease enter a number: ";
                }
                break;

                if (correctAnswer = (leftn / rightn)) {
                    cout << leftn <<"/" << rightn;
                    cout << " = ";
                    while (!(cin >> userAnswer)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\tInvalid input!" << endl;
                        cout << "\tPlease enter a number: ";
                    }
                }
                break;

            default: // if the code breaks
                cout << "Display error -1" << endl << "contact DaneMcClary on Github";
                break;

        }
        // end of the get userAnswer while loop
        if (userAnswer == correctAnswer) {
            cout << endl << "Your answer is correct." << endl;
        }else {
            cout << endl << "The correct number is " << correctAnswer << endl;
        }
        getline(cin, userChoice);
        while (true) {
            cout << "Do you want to continue?(y=yes | n=no)? ";
            getline (cin, userChoice);

            for (int i = 0; i < userChoice.size(); i++) {
                userChoice[i] = tolower(userChoice[i]);

                if (userChoice == "y" || userChoice == "yes" || userChoice == "n" || userChoice == "no") {
                    break;

                }else {
                    cout << "Invaild input, please try again..." << endl;
                }

                if (userAnswer == correctAnswer) {
                    totalCorrect = totalCorrect + 1;
                    break;

                } else if (remainingAttempts == 0){
                    cout << correctAnswer << endl;
                    finalCorrect = totalCorrect - totalIncorrect;
                    cout << totalCorrect << "-" << totalIncorrect << "=" << finalCorrect << endl;
                    break;
                }
                else {
                    cout << "That is incorrect." << endl;
                    totalIncorrect = totalIncorrect + 1;
                    cout << "You have " << remainingAttempts << " left." << endl;

                }

                if (finalCorrect == 3) {
                    mathLevel = mathLevel + 1;
                    totalCorrect = 0;
                    totalIncorrect = 0;
                    mathLevel = mathLevel + 1;
                    cout << "You have leveled up to level " << mathLevel << " ." << endl;
                }
                else if ((finalCorrect == 0) && (mathLevel > 1)) {
                    mathLevel = mathLevel - 1;
                    totalCorrect = 0;
                    totalIncorrect = 0;
                    mathLevel = mathLevel - 1;
                    cout << "You have leveled down to level " << mathLevel << " ." << endl;
                }

            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }


    }

        while (userChoice == "yes" || userChoice == "y");{
            if (remainingAttempts == 0){
            cout << endl << "You are out of attempts." << endl;
            } else {
                 cout << "You have chosen to play again." << endl;
                    remainingAttempts = remainingAttempts - 1;
            }
        }
    return 0;
}


