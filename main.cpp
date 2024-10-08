#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;


vector<int> parseInts(string str) {
    vector<int> integers;
    stringstream ss(str);
    string temp;

    while (getline(ss, temp, ',')) {  // Split string by commas
        integers.push_back(stoi(temp));  // Convert substring to int and add to vector
    }

    return integers;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
