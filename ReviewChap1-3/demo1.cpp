#include <iostream>
#include <string>
using namespace std;

// Hàm đệ quy kiểm tra chuỗi có đối xứng không
bool isPalindrome(string str, int left, int right) {
    if (left >= right)
        return true;
    if (str[left] != str[right])
        return false;
    return isPalindrome(str, left + 1, right - 1);
}

// Hàm chính kiểm tra số nguyên có đối xứng không
bool isPalindromeNumber(int n) {
    string str = to_string(n);
    return isPalindrome(str, 0, str.length() - 1);
}

int main() {
    cout << isPalindromeNumber(121) << endl;     // 1 (true)
    cout << isPalindromeNumber(12321) << endl;   // 1 (true)
    cout << isPalindromeNumber(123) << endl;     // 0 (false)
    return 0;
}
