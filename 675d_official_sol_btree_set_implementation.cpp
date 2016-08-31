#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    set<int> numbers;
    map<int, int> left;
    map<int, int> right;
    int n,x;
    cin >>n>>x;
    numbers.insert(x);
    for (int i=0; i<n-1; i++) {
        cin>>x;
        auto it =numbers.upper_bound(x);
        int result;
        if (it != numbers.end() && left.count(*it) == 0) {
            left[*it] = x;
            result = *it;
        } else {
            it--;
            right[*it] = x;
            result = *it;
        }
        numbers.insert(x);
        cout << result;
        if (i == n - 2) cout << ' ';
        else cout << ' ';
    }
}
