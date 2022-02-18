#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> anagram(vector<string> dictionary, string input){
    cout << input;
    return dictionary;
}

int main() {
    vector<string> dict1{"tar", "rat", "bar", "tart"};
    
    string input1 = "art";
    vector<string> answer1 = anagram(dict1, input1);
    return 0;
}