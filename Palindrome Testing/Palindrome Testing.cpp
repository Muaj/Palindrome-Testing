// Palindrome Testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //required to use getline(cin, string)
using namespace std;

//prototyping
bool isPalindrome(string str, int lower, int upper);

int main()
{
	cin.clear();
	string userWord;
	cout << "Enter a palindrome: ";
	
	while (getline(cin, userWord) && !userWord.empty()) //accept word and test if is empty
	{
		if (isPalindrome(userWord, 0, userWord.length() - 1))
		{
			cout << "The word is a palindrome" << endl;
		}
		else
		{
			cout << "The word is not a palindrome" << endl;
		}
		cout << "Enter a palindrome: "; //ask for a word again
		
	}
	return 0;


}

bool isPalindrome(string str, int lower, int upper)
{
	if (lower == upper) //if upper char and lower char are equal return true
	{
		return true;
	}

	if (str[lower] != str[upper]) //if upper and lower arent equal return false
	{
		return false;
	}

	return isPalindrome(str, lower + 1, upper - 1); //increase lower and decrease upper makes it test inwards
}