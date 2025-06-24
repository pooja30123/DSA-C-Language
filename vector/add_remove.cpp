#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Insert element at the 3rd position
    vec.insert(vec.begin() + 2, 10);

    cout << "After insertion: "<<endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    cout << endl;

    // Remove element from the 4th position
    vec.erase(vec.begin() + 3);

    cout << "After removal: "<<endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    cout << endl;

    return 0;
}
