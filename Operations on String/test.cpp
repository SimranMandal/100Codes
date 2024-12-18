#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<string> camel_case_to_words(const string& camel_case_string) {
    vector<string> words;
    string word;

    for (char c : camel_case_string) {
        if (isupper(c) && !word.empty()) {
            words.push_back(word);
            word = "";
        }
        word += c;
    }

    //for last word
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main() {
    string camel_case_input;
    cout << "Enter a CamelCase string: ";
    getline(cin, camel_case_input);

    vector<string> words = camel_case_to_words(camel_case_input);

    cout << "Individual words:\n";
    for (const string& word : words) {
        cout << word << "\n";
    }

    return 0;
}
