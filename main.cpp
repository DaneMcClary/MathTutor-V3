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
#include <random>



using namespace std;


int main() {
    string name;



    int leftn; // left value of the problem
    int rightn; // right value of problem
    int correctAnswer = 0; // The correct answer to the problem
    int userAnswer = 0; // The answer the user enters into the problem.

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

    // generating the random numbers and math type
    leftn = std::rand() % 10 +1; // random value for left number
    rightn = std::rand() % 10 +1; // random value for the right number
    mathType = static_cast<MathType>(rand() % 4); // random variable for math operator

    // if statement for the math type and question

        switch (mathType){
            case MT_ADD: // case for addition
                correctAnswer = (leftn + rightn);
                cout << leftn << "+" << rightn <<"=";
                cin >> userAnswer;
                break;

            case MT_SUB: // case for subtraction
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

            case MT_MUL: // case for multiplication
                correctAnswer =(rightn * leftn);
                cout << rightn <<"*" <<leftn <<"=";
                cin >> userAnswer;
                break;

            case MT_DIV: // case for division
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

            default: // if the code breaks
                cout << "Display error -1" << endl << "contact DaneMcClary on Github";
                break;

        }


    if (userAnswer == correctAnswer) {
        cout << endl << "Your answer is correct." << endl;
    }
    else {
        cout << endl << "The correct number is " << correctAnswer << endl;
    }





  //  cout << endl << endl;
    //cout << "What is " << leftn << " + " << rightn << "?" << endl;
    // Asking the big question
   // cin >> answer;
    // Getting an answer for the question
 //   cout << "Thank you for using our beta version of Math Tutor! More is on the way." << endl;


    return 0;
}

