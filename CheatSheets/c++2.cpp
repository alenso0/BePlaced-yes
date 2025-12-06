#include <iostream>
#include <string>
#include <vector>
#include <cmath>      // REQUIRED for sqrt, pow, abs, ceil, floor
#include <algorithm>  // REQUIRED for sort, reverse, max, min
#include <iomanip>    // REQUIRED for setprecision (printing decimals)

using namespace std;

// ==========================================
// 8. COMMON ALGORITHMS (Memorize these logics!)
// ==========================================

// A. Check Prime (Efficient: O(sqrt(n)))
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) { // Optimization: Only go up to sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

// B. Factorial (Recursion)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// C. Reverse a Number (Modulo Arithmetic)
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }
    return reversed;
}

// D. Palindrome Check (String method)
bool isPalindrome(string s) {
    int left = 0; 
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

// ==========================================
// 9. PATTERNS (Nested Loops)
// ==========================================
void printPatterns(int n) {
    cout << "\n--- PATTERNS (N=" << n << ") ---" << endl;
    
    // Pattern 1: Right-Angled Triangle
    // *
    // **
    // ***
    cout << "1. Triangle:" << endl;
    for (int i = 1; i <= n; i++) {       // Rows
        for (int j = 1; j <= i; j++) {   // Columns
            cout << "*";
        }
        cout << endl;
    }

    // Pattern 2: Pyramid (Center aligned)
    //   *
    //  ***
    // *****
    cout << "2. Pyramid:" << endl;
    for (int i = 1; i <= n; i++) {
        // Print Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print Stars (2*i - 1 gives 1, 3, 5...)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // --- PREVIOUS SYNTAX REFRESHER ---
    
    // 1. INPUT/OUTPUT
    cout << "--- INPUT/OUTPUT ---" << endl;
    // string name; 
    // getline(cin, name); // Remember: getline for strings with spaces

    // 2. MATH
    cout << "\n--- MATH ---" << endl;
    cout << "pow(2, 3): " << pow(2, 3) << endl;
    cout << "sqrt(16): " << sqrt(16) << endl;
    cout << "abs(-5): " << abs(-5) << endl;

    // 3. STRINGS
    string s = "Hello";
    cout << "\n--- STRINGS ---" << endl;
    cout << "Length: " << s.length() << endl;
    cout << "Substr: " << s.substr(0, 2) << endl; // "He"

    // 4. VECTORS (Dynamic Array)
    cout << "\n--- VECTORS ---" << endl;
    vector<int> nums = {5, 2, 9, 1};
    nums.push_back(10);           // Add to end
    sort(nums.begin(), nums.end()); // Sort {1, 2, 5, 9, 10}
    
    cout << "Sorted Vector: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    // --- NEW ALGORITHMS SECTION ---
    cout << "\n--- ALGORITHMS ---" << endl;
    
    // Prime Check
    int p = 17;
    cout << "Is " << p << " prime? " << (isPrime(p) ? "Yes" : "No") << endl;

    // Factorial
    cout << "Factorial of 5: " << factorial(5) << endl;

    // Reverse Integer
    cout << "Reverse of 1234: " << reverseNumber(1234) << endl;

    // Palindrome
    string pal = "racecar";
    cout << "Is 'racecar' palindrome? " << (isPalindrome(pal) ? "Yes" : "No") << endl;

    // --- PATTERNS ---
    printPatterns(5);

    return 0;
}