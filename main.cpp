//*
/* Title: Math Tutor V3
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
#include <algorithm>


using namespace std;

void clear_input() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


int main() {

 std::srand(std::time(0));


   string name = "?"; // Gets the users name
   string userChoice = "?"; // Gets the users choice to continue or not

    const int MAX_ATTEMPTS = 3; // How many attempts the user has.
    const int LEVEL_CHANGE = 10; // Level of increase in the problem.
    const int NUMROW_LENGTH = 3;
    const int MAX_LEVEL = 3;

    int leftn = 0; // left number of the problem
    int rightn = 0; // right number of problem
    int product = 0; // used to make all division problems have whole numbers
    int tempVar = 0; // used to make sure subtraction problems dont give negatives
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.
    int totalCorrect = 0; // The total number of answers the user gets correct
    int totalIncorrect = 0; // The total number of answers the user gets incorrect
    int mathLevel = 1; // The level of difficult of the math problem
    int currentRange = LEVEL_CHANGE; // Assigns the difficulty of the problem
    int attemptsRemaining = MAX_ATTEMPTS;
    int numberCorrectRow = 0;
    int numberIncorrectRow = 0;


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

    do {
        currentRange = LEVEL_CHANGE * mathLevel;

        leftn = rand() % currentRange + 1;
        rightn = rand() % currentRange + 1;
        mathType = static_cast<MathType>(rand() % 4);

        switch (mathType) {
            case MT_ADD:
                correctAnswer = leftn + rightn;
                break;

            case MT_SUB:

                if (leftn < rightn) {
                    tempVar = leftn;
                    leftn  = rightn;
                    rightn = tempVar;
                }
                correctAnswer = leftn - rightn;
                break;

            case MT_MUL:
                correctAnswer = leftn * rightn;
                break;

            case MT_DIV:
                product = leftn * rightn;
                correctAnswer = product / rightn;
                leftn = product;
                break;

            default:
                cout << "Display error -1" << endl;
                userChoice = "n";
                continue;
        }

        for (int i = 0; i < 1; i++) {
            char op = ' ';
            switch (mathType) {
                case MT_ADD: op = '+'; break;
                case MT_SUB: op = '-'; break;
                case MT_MUL: op = '*'; break;
                case MT_DIV: op = '/'; break;
            }

            // Output the current question prompt
            cout << "[Level #" << mathLevel << " | Attempts Left: " << attemptsRemaining
                 << " | Correct Streak: " << numberCorrectRow << "] "
                 << name << ", what does " << leftn << op << rightn << " = ";


            while (!(cin >> userAnswer)) {
                clear_input();
                cout << "\tInvalid input!" << endl;
                cout << "\tPlease enter a number: ";
            }

            clear_input();

            if (userAnswer == correctAnswer) {
                cout << endl << "Great job! That was correct." << endl;
                totalCorrect++;
                numberCorrectRow++;
                numberIncorrectRow = 0;

            } else {
                cout << endl << "That is incorrect. The correct answer is " << correctAnswer << "." << endl;
                totalIncorrect++;
                numberIncorrectRow++;
                numberCorrectRow= 0;
                attemptsRemaining--;

                if (attemptsRemaining <= 0) {
                    cout << endl << "You are out of attempts. " << endl;
                    userChoice = "n";
                }

            }

            if (numberCorrectRow == NUMROW_LENGTH && mathLevel < MAX_LEVEL) {
                mathLevel++;
                numberCorrectRow = 0;
                cout << "Congratulations you have leveled up. You are now at Level " << mathLevel << "." << endl;
            } else if (numberIncorrectRow == NUMROW_LENGTH && mathLevel > 1) {
                mathLevel--;
                numberIncorrectRow = 0;
                cout << "Oh no you have leveled down. You are now at Level " << mathLevel << "." << endl;
            }
        }while (false); // Loop only runs once per game


        if (attemptsRemaining > 0 && userChoice != "n") {
            do {
                cout << endl << "Do you want to continue (y/n)? ";
                getline(cin, userChoice);

                if (!userChoice.empty()) {
                    userChoice[0] = tolower(userChoice[0]);
                }

                if (userChoice.size() >= 1 && (userChoice[0] == 'y' || userChoice[0] == 'n')) {
                    break;
                } else {
                    cout << "Invalid input, please enter 'y' or 'n'." << endl;
                }
            } while (true);
        } else {
            // Force the loop to end if attempts are zero
            userChoice = "n";
        }

    } while (userChoice[0] == 'y');

    cout << "Thank you for using Math Tutor V3, " << name << "!" << endl;

    return 0;
}

