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

This is a small console program that is seen as a tool to help young students study math.
They learn different math types like addition, subtraction, multiplication, and division. 
In the previous version of the code the numbers and types were randomized. The program now
has a level system where the questions get more difficult the more question the user gets right.
It starts off with ACSII art,lists a simple phrase, and asks the user for their name. Then, the
program gives the user a question and the output includes the level they are on, the amount of 
attempts they have left, and a streak of questions they have answered correctly. After the user
answers the program checks to see if their response is right or wrong. If it is right the streak 
increases by one but if they get it wrong their streak goes back to zero, and they lose an attempt. 
Once the streak reaches three the user reaches the next level with more difficult questions, and they
can make it to a maximum level of three. The user then gets asked if they want to continue or not if 
they still have attempts remaining otherwise the program ends. If they answer yes they get another
question and if they answer no the program ends.

## Console Output Testing Example
```
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
[Level #1 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 20/4 =5


Great job! That was correct.

Do you want to continue (y/n)?y

[Level #1 | Attempts Left: 3 | Correct Streak: 1] Jacob, what does 10*9 =90


Great job! That was correct.

Do you want to continue (y/n)?y

[Level #1 | Attempts Left: 3 | Correct Streak: 2] Jacob, what does 4-4 =0


Great job! That was correct.
Congratulations you have leveled up. You are now at Level 2.

Do you want to continue (y/n)?y

[Level #2 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 18-9 =9


Great job! That was correct.

Do you want to continue (y/n)?y

[Level #2 | Attempts Left: 3 | Correct Streak: 1] Jacob, what does 13-9 =4


Great job! That was correct.

Do you want to continue (y/n)?y

[Level #2 | Attempts Left: 3 | Correct Streak: 2] Jacob, what does 144/12 =12


Great job! That was correct.
Congratulations you have leveled up. You are now at Level 3.

Do you want to continue (y/n)?y

[Level #3 | Attempts Left: 3 | Correct Streak: 0] Jacob, what does 27/9 =8


That is incorrect. The correct answer is 3.

Do you want to continue (y/n)?y

[Level #3 | Attempts Left: 2 | Correct Streak: 0] Jacob, what does 20*1 =7


That is incorrect. The correct answer is 20.

Do you want to continue (y/n)?y

[Level #3 | Attempts Left: 1 | Correct Streak: 0] Jacob, what does 27-16 =5


That is incorrect. The correct answer is 11.

You are out of attempts.
Oh no you have leveled down. You are now at Level 2.
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


[Back to Top](#math-tutor-v1)

