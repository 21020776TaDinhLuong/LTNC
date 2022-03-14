#include<bits/stdc++.h>
using namespace std;
const int MAX_BAD_NUMBER =7;
const string WORD_LIST[]={"dog","cat","human","monkey","hourse","goat","fish","shrimp","frog","dragonfly"};
const string FIGURE[]={
 " ------------- \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           | \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |           | \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |          /| \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           |    \n"
 " |           O    \n"
 " |          /|\\  \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 " ------------- \n"
 " |           |    \n"
 " |           O    \n"
 " |          /|\\  \n"
 " |          /     \n"
 " |             \n"
 " ----- \n",
  " ------------- \n"
 " |           |    \n"
 " |           O    \n"
 " |          /|\\  \n"
 " |          / \\  \n"
 " |             \n"
 " ----- \n"
 };
const int WORD_COUNT = sizeof(WORD_LIST)/sizeof(string);
int trueGuess=2;
string wrongGuessedWord="";
string chooseWord()
{
	int randomIndex= rand()%WORD_COUNT;
	return WORD_LIST[randomIndex];
}
void render(string& guessedWord, const int& badWordCount)
{
    cout<<FIGURE[badWordCount]<<endl;
	cout << guessedWord<<endl;
	if (trueGuess==1)
    {
        cout<<"Correct! "<<endl;
    }
    else if (trueGuess==0)
    {
        cout<<"Incorrect!Your wrong guessed word is "<<wrongGuessedWord<<"."<<endl;

    }
	cout << "Number of wrong guesses: " << badWordCount<<endl;
}
void update(string& guessedWord, const string& secretWord, char guess)
{
	for (int i = 0; i < secretWord.size(); i++)
	{
		if (secretWord[i] == guess)
		{
			guessedWord[i] = guess;
		}
	}
}
bool contain(const string& secretWord,char guess)
{
    size_t found = secretWord.find_first_of(guess);
    return (found != string::npos);
}
char guessAWord()
{
    char c;
    cout<<"Your guess: ";
    cin>>c;
    return tolower(c);
}
void topScreen()
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

string secretWord = chooseWord();
string guessedWord = string(secretWord.size(), '-');
int badWordCount = 0;
int main()
{
    srand(time(0));
    topScreen();
	do {
		render(guessedWord, badWordCount);
		char guess = guessAWord();
		if (contain(secretWord, guess))
		{
			update(guessedWord, secretWord,guess);
			trueGuess=1;
		}
		else
        {
            badWordCount++;
            trueGuess=0;
            wrongGuessedWord=wrongGuessedWord+guess;
        }
	} while (badWordCount < MAX_BAD_NUMBER && guessedWord != secretWord);
	render(guessedWord, badWordCount);
	if (badWordCount < MAX_BAD_NUMBER) cout << "Congratulations!You win!";
	else cout << "You lost. The correct word is " << secretWord;
}
