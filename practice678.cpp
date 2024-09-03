#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of coins

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y; // Coordinates of the i-th coin

        // Calculate the Manhattan distance from (0,0) to the coin
        int dist = abs(x) + abs(y);

        // If the distance is even, Monocarp can reach the coin
        if (dist % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
