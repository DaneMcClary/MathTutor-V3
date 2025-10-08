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
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.
    int totalCorrect = 0; // The total number of answers the user gets correct
    int totalIncorrect = 0; // The total number of answers the user gets incorrect;
    int mathLevel = 1; // The level of difficult of the math problem
    int currentRange = LEVEL_CHANGE; // Assigns the difficulty of the problem
    int remainingAttempts = MAX_ATTEMPTS;
    int finalCorrect = 0;

    srand(time(0));

    enum MathType {MT_ADD, MT_SUB, MT_MUL, MT_DIV};
    MathType mathType = MT_ADD;



    //   /\  Input any new values here please!
    cout <<   "*************************************************************" << endl;
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
    cout <<   "*************************************************************" << endl;
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
        leftn = std::rand() % 10 +1; // random value for left number
        rightn = std::rand() % 10 +1; // random value for the right number
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
                    correctAnswer = leftn / rightn;
                for (int i = 1; i <= MAX_ATTEMPTS; i++) {
                    cout << "[Level #" << mathLevel << "] " << name << ", what does " << leftn << "/" << rightn << "=";
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

    } while (!(userAnswer == correctAnswer) && remainingAttempts > 0);

    // --- Level Up Logic ---
    // A common pattern is to increase difficulty (level) after a certain number of correct answers.
    // For simplicity here, let's just increment mathLevel after each correct answer (you can change this logic).
    if (userAnswer == correctAnswer) {
        mathLevel++;
        // Potentially increase number range based on mathLevel
        currentRange = LEVEL_CHANGE * (mathLevel / 5 + 1); // Increase range every 5 levels
    }

        do {
            cout << endl << "Do you want to continue (y/n)? ";
            getline(cin, userChoice);

            // Convert to lowercase and take only the first character for simple check
            if (!userChoice.empty()) {
                userChoice[0] = tolower(userChoice[0]);
            }

            if (userChoice.size() == 1 && (userChoice[0] == 'y' || userChoice[0] == 'n')) {
                break; // Valid input, exit the inner loop
            } else {
                cout << "Invalid input, please enter 'y' for yes or 'n' for no." << endl;
            }
        } while (true);

     while (userChoice[0] == 'y');


    return 0;
    }