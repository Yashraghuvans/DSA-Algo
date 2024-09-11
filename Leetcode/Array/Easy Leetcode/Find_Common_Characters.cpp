// Find Common Characters problem
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int> min_freq(26, INT_MAX);

     
        for (auto& word : words) {
           
            vector<int> freq(26, 0);

            
            for (char c : word) {
                freq[c - 'a']++;
            }

           
            for (int i = 0; i < 26; ++i) {
                min_freq[i] = min(min_freq[i], freq[i]); 
            }
        }

        
        vector<string> result;

        
        for (int i = 0; i < 26; ++i) {
            while (min_freq[i]-- > 0) {
                result.push_back(string(1, i + 'a')); 
            }
        }

        return result;
    }
};

int main() {
    vector<string> words;
    words.push_back("apple");
    words.push_back("ape");
    words.push_back("april");

    Solution s;
    vector<string> common_chars = s.commonChars(words);

    cout << "Common characters: ";
    for (const string& ch : common_chars) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
