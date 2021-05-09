#include <iostream>
#include <limits>
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

    cin>>number; //First Guess

        if(number == 1000) // Secret code to save the world
        {
        cout<< endl;
        cout<< "Welcome to the Afterlife, You must have died and become a Ghost to know the right answer. "<<endl;
        cout<< "Your Sacrifice is noble and you will be remembered throughout history as the greatest agent"<< endl;
        cout<< "who ever lived ever... Like seriously thats a big deal man."<< endl;
        cout<< endl;
        cout<< endl;
        cout<< endl;
        return 0;
        }
        if(cin.fail()) //Validation for if wrong input is entered
        {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<< endl;
        cout<< "You are now dead. The World is Destroyed. Humanity will not even exist in a memeory."<<endl;
        cout<< "All because you cant follow instructions. You are a disgrace to secret agents everywhere.";
        cout<< endl;
        cout<< endl;
        return 0;
        }

        if(!cin.fail())// If wrong input is not entered continue
        {

        }


// Game is designed for first number to always be the wrong number
// User picks 2nd number designed to be 3 digits
    cout<< "Danger Wrong Passcode: Detonation Counter Initialized" <<endl;
    cout<< endl;
    cout<< "Enter 3 Digit Passcode" <<endl;


const int MIN_NUM = 1; // Minimum Number
const int MAX_NUM = 2; // Maximum Amount of Tries
int userGuess; // Counter / second and third guess
int rightGuess = number; //Fake right Guess
int num = MIN_NUM; // For limit counter
int saveTheWorld = 1000; // Actual Passcode to save the world

// do / while loop for the guesses
/* I designed the game to be a trick no matter which number guessed it would prompt to
   Renter passcode unless you know the secret save the world number */

    do
 {
    cin>> userGuess; //Second Guess input



    if(cin.fail())
        {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<< endl;
        cout<< endl;
        cout<< "You are now dead. The World is Destroyed. Humanity will not even exist in a memeory."<<endl;
        cout<< "All because you cant follow instructions. You are a disgrace to secret agents everywhere.";
        cout<< endl;
        cout<< endl;

        return 0;
        }

    if(!cin.fail())

    {




    if  (userGuess > rightGuess && userGuess <= 999)
      {
        if (num < 999)
        {
		cout<< "Invalid Passcode: ReEnter Passcode" << endl;
		num++;
		cin.ignore().get();
        }

      }
    if  (userGuess < rightGuess && userGuess >= 1)
      {
		if (num < 999)
		{
		cout<< "Invalid Passcode: ReEnter Passcode" << endl;
		num++;
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
        cout<< endl;
        cout<< endl;
        cout<< "Welcome to the Afterlife, You must have died and become a Ghost to know the right answer. "<<endl;
        cout<< "Your Sacrifice is noble and you will be remembered throughout history as the greatest agent"<< endl;
        cout<< "who ever lived ever... Like seriously thats a big deal man."<< endl;
        cout<< endl;
        break;
      }

    }

 }


//End of loop, when run out of guesses the game makes fun of user and gives them the correct passcode to save the world.
while ((num <= MAX_NUM) && (userGuess != rightGuess) && (number && userGuess <=1001));

    cout<< endl;
    cout<< "Congratulations You are Now Dead: The Correct Passcode is 1000!! I tricked you and now you're dead." <<endl;
    cout<< "You must now become a Ghost to save the world. Play the Game Again!"<<endl;

	return 0;
}
