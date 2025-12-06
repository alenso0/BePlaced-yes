#include <iostream>
#include <string>
#include <vector>
#include <cmath>      // REQUIRED for sqrt, pow, abs, ceil, floor
#include <algorithm>  // REQUIRED for sort, reverse, max, min
#include <iomanip>    // REQUIRED for setprecision (printing decimals)

using namespace std;

// --- FUNCTION SYNTAX ---
// ReturnType FunctionName(ParameterType paramName) { ... }
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    // ==========================================
    // 1. BASIC INPUT / OUTPUT
    // ==========================================
    int age;
    string name;

    cout << "--- INPUT/OUTPUT ---" << endl;
    // cout << "Enter age: ";
    // cin >> age;              // Standard input for numbers/single words

    // CRITICAL: getline is needed for strings with spaces!
    // cin.ignore();            // clear buffer if switching from cin >> to getline
    // cout << "Enter full name: ";
    // getline(cin, name);      // Reads entire line including spaces


    // ==========================================
    // 2. MATH FUNCTIONS (Header: <cmath>)
    // ==========================================
    cout << "\n--- MATH SYNTAX ---" << endl;
    double x = 9.0;
    double base = 2.0, exponent = 3.0;
    int negative = -10;

    // Power: 2^3
    double p = pow(base, exponent); 
    cout << "pow(2, 3): " << p << endl; // Output: 8

    // Square Root
    double s = sqrt(x);             
    cout << "sqrt(9): " << s << endl;   // Output: 3

    // Absolute Value (abs for int, fabs for float/double)
    cout << "abs(-10): " << abs(negative) << endl;

    // Rounding
    cout << "ceil(4.2): " << ceil(4.2) << endl;   // Rounds UP -> 5
    cout << "floor(4.8): " << floor(4.8) << endl; // Rounds DOWN -> 4
    cout << "round(4.5): " << round(4.5) << endl; // Rounds to NEAREST -> 5


    // ==========================================
    // 3. STRINGS (Header: <string>)
    // ==========================================
    cout << "\n--- STRING SYNTAX ---" << endl;
    string text = "Hello World";

    // Length
    int len = text.length();  // or text.size()
    
    // Access character
    char c = text[0];         // 'H'

    // Appending
    string greeting = text + " Again"; 
    
    // Substring: substr(starting_index, length)
    // NOTE: If you omit length, it goes to the end.
    string sub = text.substr(0, 5); // "Hello" (Start at 0, take 5 chars)
    
    // Find: returns index or string::npos if not found
    size_t foundPos = text.find("World");
    if (foundPos != string::npos) {
        cout << "'World' found at index: " << foundPos << endl;
    }


    // ==========================================
    // 4. CONDITIONALS (If/Else & Switch)
    // ==========================================
    cout << "\n--- LOGIC SYNTAX ---" << endl;
    int score = 85;

    // Logical Operators: && (AND), || (OR), ! (NOT)
    if (score > 90) {
        cout << "Grade: A" << endl;
    } else if (score > 80 && score <= 90) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }

    // Switch Case (Works best with int or char)
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break; // DON'T FORGET BREAK!
        case 'B':
            cout << "Good" << endl;
            break;
        default:   // Like "else"
            cout << "Average" << endl;
    }


    // ==========================================
    // 5. LOOPS
    // ==========================================
    cout << "\n--- LOOP SYNTAX ---" << endl;
    
    // For Loop (Standard)
    for (int i = 0; i < 3; i++) {
        cout << "For loop: " << i << endl;
    }

    // While Loop
    int count = 0;
    while (count < 3) {
        cout << "While loop: " << count << endl;
        count++;
    }

    // Do-While (Runs at least once)
    int k = 0;
    do {
        cout << "Do-While runs at least once" << endl;
        k++;
    } while (k < 1);


    // ==========================================
    // 6. ARRAYS vs VECTORS (Header: <vector>)
    // ==========================================
    cout << "\n--- DATA STRUCTURES ---" << endl;
    
    // --- 6a. STATIC ARRAY (Fixed size) ---
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Trick to get array size
    
    // --- 6b. VECTORS (Dynamic Array - Recommended for Tests) ---
    // Declaration
    vector<int> numbers; 
    
    // Adding elements (Push Back)
    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(1); // Vector is now {5, 2, 8, 1}

    // Accessing
    cout << "Vector[0]: " << numbers[0] << endl; // 5

    // Properties
    cout << "Size: " << numbers.size() << endl; // 4
    
    // Removing last element
    numbers.pop_back(); // Vector is now {5, 2, 8}

    // Sorting (Required <algorithm>)
    // sort(start_iterator, end_iterator)
    sort(numbers.begin(), numbers.end()); // Vector is now {2, 5, 8}
    
    // Reversing
    reverse(numbers.begin(), numbers.end()); // Vector is now {8, 5, 2}

    // Iterating over a vector
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Range-based for loop (Modern C++ - Faster to write)
    for (int num : numbers) {
        // iterates through every element automatically
    }


    // ==========================================
    // 7. HELPER FUNCTIONS & EXTRAS
    // ==========================================
    
    // Formatting Decimal Output (<iomanip>)
    double pi = 3.14159265;
    cout << fixed << setprecision(2); // Set output to 2 decimal places
    cout << "\nPi to 2 decimals: " << pi << endl; // 3.14

    // Max/Min (<algorithm>)
    cout << "Max of 10, 20: " << max(10, 20) << endl;
    cout << "Min of 10, 20: " << min(10, 20) << endl;

    return 0;
}