#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Count the occurrences of each answer and '?'
        int countA = 0, countB = 0, countC = 0, countD = 0, countQ = 0;
        for (char c : s) {
            if (c == 'A') countA++;
            else if (c == 'B') countB++;
            else if (c == 'C') countC++;
            else if (c == 'D') countD++;
            else if (c == '?') countQ++;
        }
        
        // Calculate the maximum correct answers
        int maxCorrect = min(countA, n) + min(countB, n) + min(countC, n) + min(countD, n);
        int remaining = 4 * n - (countA + countB + countC + countD);
        maxCorrect += min(countQ, remaining);
        
        cout << maxCorrect << endl;
    }
    
    return 0;
}
