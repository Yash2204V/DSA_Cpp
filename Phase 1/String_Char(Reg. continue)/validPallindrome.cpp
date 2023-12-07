#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Function to check if a character is valid (alphabet or digit)
bool valid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

// Function to convert a character to lowercase if it's an uppercase alphabet
char toLowerCase(char ch) { // 'A'
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else {
        // ASCII value~ A = 67, B = 68, C = 69
        // ch - 'A' + 'a'
        //  + 'a'
        char temp = ch - 'A';
        char ans = temp + 'a';
        return ans;
    }
}

// Function to check if a string is a palindrome
bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length() - 1;
// s > e!! BREAK
    while (s <= e) {
        if (a[s] != a[e]) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

// Function to check if a string is a palindrome after removing non-alphanumeric characters and converting to lowercase
bool isPalindrome(string s) {
    // Remove non-alphanumeric characters
    string temp = "";
    // AdggaD
    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(s[j]);
        }
    }

    // Convert to lowercase
    // 0 1 2 3 4 5
    // A d g g a D
    for (int j = 0; j < temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }
    // a d g g a d

    // Check if the modified string is a palindrome
    return checkPalindrome(temp);
}

int main() {
    // Declare and initialize a string array
    string s[100] = {"@#Adgg()Da"};

    // Find the length of the first string in the array
    int len = s[0].length();
    cout << "Length of the string: " << len << endl;

    // Check if the string is a palindrome and print the result
    if (isPalindrome(s[0])) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}