#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int q;
        cin >> q;
        
        vector<char> a(q);
        for (int i = 0; i < q; i++) {
            cin >> a[i];
        }

        vector<int> prefix(q, 0), suffix(q, 0);
        unordered_set<char> seen;

        // Compute prefix distinct character count
        seen.clear();
        for (int i = 0; i < q; i++) {
            seen.insert(a[i]);
            prefix[i] = seen.size();
        }

        // Compute suffix distinct character count
        seen.clear();
        for (int i = q - 1; i >= 0; i--) {
            seen.insert(a[i]);
            suffix[i] = seen.size();
        }

        // Find maximum distinct characters sum from split
        int maxDist = 0;
        for (int i = 0; i < q - 1; i++) {
            maxDist = max(maxDist, prefix[i] + suffix[i + 1]);
        }

        cout << maxDist << endl;
    }

    return 0;
}
