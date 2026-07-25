#include <iostream>
#include <string>

using namespace std;

/**
Program entry point.
*/
int main()
{
    // Prompt user to enter a word
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // Assume a word is a palindrome until we detect a mismatch
    bool isPalindrome = true;

    // Compare the first character and the last character and move inwards until we meet at the middle
    for (int frontIndex = 0; frontIndex < word.size(); ++frontIndex) {

        int backIndex = word.size() - 1 - frontIndex;

        // When we cross over from back to front, we've reached the end of our checks
        if (frontIndex >= backIndex)
            break;

        // If the front character doesn't match the back character, then this isn't a palindrome
        if (word.at(frontIndex) != word.at(backIndex)) {
            isPalindrome = false;
            break;
        }
    }

    cout << "The word is" << (isPalindrome ? "" : " not") << " a palindrome." << endl;

    // Exit program with return code 0 (no errors)
    return 0;
}
