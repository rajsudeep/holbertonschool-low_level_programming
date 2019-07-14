# C programming: argc, argv
## General Concept Guidance:
* [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
* [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
* [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
### 0. It ain't what they call you, it's what you answer to
> program that prints its name, followed by a new line
### 1. Silence is argument carried out by other means
> prints the number of arguments passed into it
### 2. The best argument against democracy is a five-minute conversation with the average voter
> prints all arguments it receives
### 3. Neither irony nor sarcasm is argument
> multiplies two numbers
> * assume that the two numbers and result of the multiplication can be stored in an integer
> * if the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
### 4. To infinity and beyond
> adds positive numbers
> * if no number is passed to the program, print 0, followed by a new line
> * if one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
### 100. Minimal Number of Coins for Change
> prints the minimum number of coins to make change for an amount of money
> * if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
> * if the number passed as the argument is negative, print 0, followed by a new line
> * you can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent