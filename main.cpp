/*****************************************************************************************
Program......:  Math_Tutor_V3
 Programmer(s):  Dane McClary, Jacob Diedrichsen
 Class........:  WSC CSC150 - Section 1 - 9:00 AM
 Date.........:  2025.10.10
 GitHub Repo..:  https://github.com/DaneMcClary/MathTutor-V3
 Description..: An updated math tutor that will give more difficult questions the longer you play.
                - 3 chances to answer each question correctly
                - Random math operator and numbers each question
                - level 1 generates random numbers between 1-10
                - After 3 correct answers your level will increase by 1
                - Each ascending level will increase the range by 10
                - Option to continue playing after each question
 ****************************************************************************************/

#include <iostream> // needed for cout and cin
#include <string> // needed for string data type and getline()
#include <iomanip> // for inputs and outputs
#include <cctype> // used for the tolower
#include <limits> // used for numeric limits
#include <random> // used for rand and strand


using namespace std; // use the standard namespace

// clears the input
void clear_input() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// start of the main function
int main() {
    std::srand(std::time(0));

    const int MAX_ATTEMPTS = 3; // How many attempts the user has.
    const int LEVEL_CHANGE = 10; // Level of increase in the problem.
    const int NUMROW_LENGTH = 3; // Number of correct answers before leveling up
    const int MAX_LEVEL = 3; // Sets the highest level you can have

    enum MathType { MT_ADD, MT_SUB, MT_MUL, MT_DIV };
    MathType mathType = MT_ADD;

    int leftn = 0; // left number of the problem
    int rightn = 0; // right number of pr
    char op = ' '; // math operator
    int product = 0; // used to make all division problems have whole numbers
    int tempVar = 0; // used to make sure subtraction problems dont give negatives
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.
    int totalCorrect = 0; // The total number of answers the user gets correct
    int totalIncorrect = 0; // The total number of answers the user gets incorrect
    int mathLevel = 1; // The level of difficult of the math problem
    int currentRange = LEVEL_CHANGE; // Assigns the difficulty of the problem
    int attemptsRemaining = MAX_ATTEMPTS; // ammount of attempts remaining
    int numberCorrectRow = 0; // number of questions correct in a row
    int numberIncorrectRow = 0; // number of incorrect answers in a row

    string name = "?"; // Gets the users name
    string userChoice = "?"; // Gets the users choice to continue or not

    //   /\  Input any new values here please!
    cout << R"(****************************************************************)" << endl;
    cout << R"(  __  __       _   _         __  __       _   _                 )" << endl;
    cout << R"( |  \/  | __ _| |_| |__     |  \/  | __ _| |_| |_ ___ _ __ ___  )" << endl;
    cout << R"( | |\/| |/ _` | __| '_ \    | |\/| |/ _` | __| __/ _ \ '__/ __| )" << endl;
    cout << R"( | |  | | (_| | |_| | | |   | |  | | (_| | |_| ||  __/ |  \__ \ )" << endl;
    cout << R"( |_|  |_|\__,_|\__|_| |_|   |_|  |_|\__,_|\__|\__\___|_|  |___/ )" << endl;
    cout << R"(  _____      _                __     _______                    )" << endl;
    cout << R"( |_   _|   _| |_ ___  _ __    \ \   / /___ /                    )" << endl;
    cout << R"(   | || | | | __/ _ \| '__|    \ \ / /  |_ \                    )" << endl;
    cout << R"(   | || |_| | || (_) | |        \ V /  ___) |                   )" << endl;
    cout << R"(   |_| \__,_|\__\___/|_|         \_/  |____/                    )" << endl;
    cout << R"(****************************************************************)" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;
    cout << "What is your name my pupil? :";
    getline(cin, name); // gets the users name
    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // generates the problem
    do {
        currentRange = LEVEL_CHANGE * mathLevel;

        leftn = rand() % currentRange + 1; // randomizes left number
        rightn = rand() % currentRange + 1; // randomizes right number
        mathType = static_cast<MathType>(rand() % 4); // randomizes math type

        switch (mathType) {
            case MT_ADD:
                op = '+';
                correctAnswer = leftn + rightn;
                break;

            case MT_SUB:
                op = '-';

                if (leftn < rightn) {
                    // makes sure there is no negative numbers
                    tempVar = leftn;
                    leftn = rightn;
                    rightn = tempVar;
                }
                correctAnswer = leftn - rightn;
                break;

            case MT_MUL:
                op = '*';
                correctAnswer = leftn * rightn;
                break;

            case MT_DIV:
                op = '/';
                product = leftn * rightn; // makes sure that the answer is a positive whole number
                correctAnswer = product / rightn;
                leftn = product;
                break;

            default:
                cout << "Display error -1" << endl;
                userChoice = "n";
                continue;
        }

        for (int i = 0; i < 1; i++) {


            // outputs the question
            cout << "[Level #" << mathLevel << " | Attempts Left: " << attemptsRemaining
                    << " | Correct Streak: " << numberCorrectRow << "] "
                    << name << ", what does " << leftn << op << rightn << " = ";


            while (!(cin >> userAnswer)) {
                clear_input();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
                numberCorrectRow = 0;
                attemptsRemaining--;

                if (attemptsRemaining <= 0) {
                    cout << endl << "You are out of attempts. " << endl;
                    userChoice = "n";
                }
            }
            //if the user levels up ot down
            if (numberCorrectRow == NUMROW_LENGTH && mathLevel < MAX_LEVEL) {
                mathLevel++;
                numberCorrectRow = 0;
                cout << "Congratulations you have leveled up. You are now at Level " << mathLevel << "." << endl;
            } else if (numberIncorrectRow == NUMROW_LENGTH && mathLevel > 1) {
                mathLevel--;
                numberIncorrectRow = 0;
                cout << "Oh no you have leveled down. You are now at Level " << mathLevel << "." << endl;
            }
        }
        while (false); // loop only runs once per game


        if (attemptsRemaining > 0 && userChoice != "n") {
            //if the user wants to continue
            while (true) {
                cout << endl << "Do you want to continue (y/n)? ";
                getline(cin, userChoice);

                for (int i = 0; i < userChoice.size(); i++) {
                    userChoice[0] = tolower(userChoice[0]);
                }

                if ((userChoice == "y" || userChoice == "yes" || userChoice == "n" || userChoice == "no")) {
                    break;
                } else {
                    cout << "Invalid input, please enter 'y' or 'n'." << endl;
                }
            };
        } else {
            // loop ends if attempts are zero
            userChoice = "n";
        }
    } while (userChoice == "y" || userChoice == "yes");

    cout << "Thank you for using Math Tutor V3, " << name << "!" << endl;

    return 0;
}

//end of program
