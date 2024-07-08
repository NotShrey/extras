#include <bits/stdc++.h> 
using namespace std;

char solve(string &s){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
      unordered_map<char, int> mp;

    for(char ch : s){
        mp[ch]++;
    }

    int maxi = 0;
    char ans = '\0';
    for(auto i : mp){
        if(i.second > maxi || (i.second == maxi && i.first < ans)){
            maxi = i.second;
            ans = i.first;
        }
    }
    return ans;
}


int main(){
    string s;
    cout << "enter: "<<endl;

    cin >> s;

    cout << "Most frequent character: " << solve(s) << endl;
    return 0; 
}


void removeSpaces(string &str) {
    int n = str.length();
    int j = 0; // Pointer to track the position of non-space characters

    // Traverse the string
    for (int i = 0; i < n; i++) {
        // If the current character is not a space, move it to the 'j' position
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    // Resize the string to remove the trailing characters
    str.resize(j);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    removeSpaces(str);

    cout << "String after removing spaces: " << str << endl;

    return 0;
}