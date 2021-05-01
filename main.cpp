#include <iostream>
using namespace std;

int number;
int numberToGuess;
int userGuess;
int main()
{
//Title
    cout<< endl;
    cout<< "Hack the Code and Save the World!!" <<endl <<endl;

// User Picks 1st number, the game is designed for the first number to always be 3 digits
    cout<< "Greetings Agent, Ive planted a bomb in core of the Earth and if you dont Crack the code in 3 Guesses" <<endl;
    cout<< "the Entire Planet will be Destroyed!!"<<endl;
    cout<< endl;
    cout<< "Enter 3 Digit Passcode" <<endl;
    cin>>number;
    cout<< endl;

// Game is designed for first number to always be the wrong number
// User picks 2nd number designed to be 3 digits
    cout<< "Danger Wrong Passcode: Detonation Counter Initialized" <<endl;
    cout<< endl;
    cout<< "Enter 3 Digit Passcode" <<endl;


const int MIN_NUM = 1; // Minimum Number
const int MAX_NUM = 3; // Maximum Amount of Tries
int userGuess; // Counter
int rightGuess = number; //Fake right Guess
int num = MIN_NUM;
int saveTheWorld = 1000; // Actual Passcode to save the world

// do / while loop for the guesses
/* I designed the game to be a trick no matter which number guessed it would prompt to
   Renter passcode */
do
{
    cin>> userGuess;

if  (userGuess > rightGuess && userGuess <= 999)
    {
        if (num < 999)
		cout<< "Invalid Passcode: ReEnter Passcode" << endl;
		num++;
        }
        else
        {

    }
if  (userGuess < rightGuess && userGuess >= 1)
    {
		if (num < 999)
		{
		cout<< "Invalid Passcode: ReEnter Passcode" << endl;
		num++;

		}
		else
		{

		}
	}
//If user guesses same number twice game makes fun if the user
if ((userGuess == rightGuess) && (num <= 3 && userGuess == rightGuess))
	{
    cout<< endl;
	cout<< "Did you Honestly think that would work? How did you even get out of Secret Agent Training?" << endl;
	cout<< endl;
	cout<< "Nice Work Genius, You've Doomed the Planet";
	cout<< endl;
	break;
	}
//The only way to know the passcode is to die, game makes fun of the user again
if (userGuess == saveTheWorld)
    {
    cout<< "Welcome to the Afterlife, You must have died and become a Ghost to know the right answer.";
    cout<< endl;
    break;
    }

}

//End of loop, when run out of guesses the game makes fun of user and gives them the correct passcode to save the world.
while ((num <= MAX_NUM) && (userGuess != rightGuess));

    cout<< endl;
    cout<< "Congratulations You are Now Dead: The Correct Passcode is 1000!! I tricked you and now you're dead." <<endl;
    cout<< "You must now become a Ghost to save the world. Play the Game Again!"<<endl;
	return 0;
}
