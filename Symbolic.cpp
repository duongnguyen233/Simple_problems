#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

std::string floatToStringWithoutTrailingZeros(float f) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << f; // Use a fixed precision of 2 decimal places

    std::string result = ss.str();

    // Remove trailing zeros and decimal point
    while (!result.empty() && (result.back() == '0' || result.back() == '.')) {
        result.pop_back();
    }

    return result;
}

template<typename T1, typename T2>
string symbolic(T1 a, int n, T2 x) {
    string result = "";

    for (int i = 0; i < n; i++) {
        if constexpr (std::is_same_v<T2, char> || std::is_same_v<T2, string>) {
            result += x;
        }
        else {
            result += to_string(x);
        }
    }
    result += " ";
    if constexpr (std::is_same_v<T1, string>) {
        result += a;
    }
    else {
        if constexpr (std::is_same_v<T1, float> || std::is_same_v<T1, double>) {
            result += floatToStringWithoutTrailingZeros(a);
        }
        else {
            result += to_string(a);
        }
    }
    result += " ";
    for (int i = 0; i < n; i++) {
        if constexpr (std::is_same_v<T2, char> || std::is_same_v<T2, string>) {
            result += x;
        }
        else {
            result += to_string(x);
        }
    }

    return result;
}

int main() {
    
    cout << symbolic<int, char>(47, 3, '*') << endl;
    cout << symbolic<float, int>(39.25, 3, 0) << endl;
    cout << symbolic<double, string>(12.345, 1, "test") << endl;
    cout << symbolic<string, char>("Bob", 4, 'a') << endl;

    return 0;
}