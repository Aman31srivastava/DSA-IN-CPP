#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool uniquenumbeocc(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> v;

    for (int i = 0; i < arr.size(); i++) {
        int count = 1;

        while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        v.push_back(count);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 4,2};

    if (uniquenumbeocc(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
