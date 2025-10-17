<!-- 
https://github.com/lifeparticle/Markdown-Cheatsheet
https://youtu.be/eVGEea7adDM?si=cz1Fbqxr9VgioIEh
-->

# Math Tutor V3

<b>Table of Content</b>
- [Summary](#summary)
- [Console Output Example](#console-output-example)
- [How to build & Run](#how-to-build--run)
- [Maintainers](#maintainers)`

## Summary

- Simple console program ment to help young students with simple math problems
- Randomly chosen math opporator (add, sub, mult, div) and numbers each question
- Features user input to set Name and to answer questions
- 3 chances per question, 3 correct answers in a row raises the level
- Level 1 begins with a number range of 1-10, each level raises that range by 10 (ex: 1-20 and so on)
- Max level is currently 3
- After each question the user is asked if they want to continue playing

## Console Output Example
```
C:\Users\shann\CLionProjects\MathTutor-V3.5\cmake-build-debug\MathTutor_V3.exe
     ****************************************************************
       __  __       _   _         __  __       _   _
      |  \/  | __ _| |_| |__     |  \/  | __ _| |_| |_ ___ _ __ ___
      | |\/| |/ _` | __| '_ \    | |\/| |/ _` | __| __/ _ \ '__/ __|
      | |  | | (_| | |_| | | |   | |  | | (_| | |_| ||  __/ |  \__ \
      |_|  |_|\__,_|\__|_| |_|   |_|  |_|\__,_|\__|\__\___|_|  |___/
       _____      _                __     _______
      |_   _|   _| |_ ___  _ __    \ \   / /___ /
        | || | | | __/ _ \| '__|    \ \ / /  |_ \
        | || |_| | || (_) | |        \ V /  ___) |
        |_| \__,_|\__\___/|_|         \_/  |____/
     ****************************************************************
     Math is good for your brain.
     So lets feed your brain some math!

     What is your name my pupil? :Jacob

     Hello Jacob. Lets learn some math!!!

     [Level #1 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 2*5 =10


    Great job! That was correct.

     Do you want to continue (y/n)?y


     [Level #1 | Attempts Left: 3 | Correct Streak: 1] Jacob, what does 5+5 =10


    Great job! That was correct.

     Do you want to continue (y/n)?yes


     [Level #1 | Attempts Left: 3 | Correct Streak: 2] Jacob, what does 2+5 =7


    Great job! That was correct.
     Congratulations you have leveled up. You are now at Level 2.

     Do you want to continue (y/n)?abc

     Invalid input, please enter 'y' or 'n'.

     Do you want to continue (y/n)?y


     [Level #2 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 12-4 =8


    Great job! That was correct.

     Do you want to continue (y/n)?yes


     [Level #2 | Attempts Left: 3 | Correct Streak: 1] Jacob, what does 72/6 =12


    Great job! That was correct.

     Do you want to continue (y/n)?y


     [Level #2 | Attempts Left: 3 | Correct Streak: 2] Jacob, what does 44/11 =4


    Great job! That was correct.
     Congratulations you have leveled up. You are now at Level 3.

     Do you want to continue (y/n)?y


     [Level #3 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 675/27 = 25


    Great job! That was correct.

     Do you want to continue (y/n)?no

     Thank you for using Math Tutor V3, Jacob!

Process finished with exit code 0

```
This is what would happen if of the user ran out of attempts because of answering the questions incorrectly.

```
   Hello Jacob. Lets learn some math!!!

     [Level #1 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 9*2 =6


     That is incorrect. The correct answer is 18.

     Do you want to continue (y/n)?y


     [Level #1 | Attempts Left: 2 | Correct Streak: 0] Jacob, what does 4*4 =9


     That is incorrect. The correct answer is 16.

     Do you want to continue (y/n)?y


     [Level #1 | Attempts Left: 1 | Correct Streak: 0] Jacob, what does 1/1 =9


     That is incorrect. The correct answer is 1.

     You are out of attempts.
     Thank you for using Math Tutor V3, Jacob!

Process finished with exit code 0

```
## How to build & run

* clone the repository on your local device.
* Or Pull to get latest if you have already cloned.
* The compiler settings have been checked in and saved to CMakeLists.txt
* .gitignore has been checked in which allows git to ignore the build artifacts that get created when building.
* Run program in terminal.
* Be sure to complete the full run to avoid write issues in subsequent run attempts.

## Maintainers 
[@DaneMcClary](https://github.com/DaneMcClary) Dane McClary

[@JD-4450](https://github.com/JD-4450) Jacob Diedrichsen


[Back to Top](#math-tutor-v3)


