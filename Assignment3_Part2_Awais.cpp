#include <iostream>
using namespace std;

// Problem 1: 2nd Highest and 2nd Lowest values in an Array
int calculate2Low(int scores[], int total) {
    int minOne = scores[0], minTwo = scores[0];
    for (int idx = 0; idx < total; idx++) {
        if (scores[idx] < minOne) {
            minTwo = minOne;
            minOne = scores[idx];
        } else if (scores[idx] < minTwo && scores[idx] != minOne) {
            minTwo = scores[idx];
        }
    }
    return minTwo;
}

int calculate2High(int scores[], int total) {
    int maxOne = scores[0], maxTwo = scores[0];
    for (int idx = 0; idx < total; idx++) {
        if (scores[idx] > maxOne) {
            maxTwo = maxOne;
            maxOne = scores[idx];
        } else if (scores[idx] > maxTwo && scores[idx] != maxOne) {
            maxTwo = scores[idx];
        }
    }
    return maxTwo;
}

void problem1() {
    int studentCount;
    cin >> studentCount;
    int marks[studentCount];
    for (int idx = 0; idx < studentCount; idx++) {
        cin >> marks[idx];
    }
    cout << "2nd Lowest: " << calculate2Low(marks, studentCount) << endl;
    cout << "2nd Highest: " << calculate2High(marks, studentCount) << endl;
}

// Problem 2: Sum of an Array
double calculateSum(int marks[], int total) {
    double result = 0;
    for (int idx = 0; idx < total; idx++) {
        result += marks[idx];
    }
    return result;
}

void problem2() {
    int studentCount;
    cin >> studentCount;
    int marks[studentCount];
    for (int idx = 0; idx < studentCount; idx++) {
        cin >> marks[idx];
    }
    double totalMarks = calculateSum(marks, studentCount);
    cout << fixed;
    cout.precision(2);
    cout << totalMarks << endl;
}

// Problem 3: Temperature Converter
double celsiusToFahrenheit(double tempC) {
    return (tempC * 9 / 5) + 32;
}

void problem3() {
    double inputCelsius;
    cin >> inputCelsius;
    double outputFahrenheit = celsiusToFahrenheit(inputCelsius);
    cout << fixed;
    cout.precision(1);
    cout << outputFahrenheit << endl;
}

// Problem 4: Complete Program (isLeapYear)
bool isLeapYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }
    return false;
}

void problem4() {
    cout << isLeapYear(2024);
}

// Problem 5: Vowel Counter
int countVowels(char name[]) {
    int vowelTotal = 0;
    int idx = 0;
    while (name[idx] != '\0') {
        if (name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u') {
            vowelTotal++;
        }
        idx++;
    }
    return vowelTotal;
}

void problem5() {
    char studentName[100];
    cin >> studentName;
    int totalVowels = countVowels(studentName);
    cout << "Total Vowels: " << totalVowels << endl;
}

// Problem 6: Alphabetical Sorter
void problem6() {
    char letters[5];
    for (int x = 0; x < 5; x++) {
        cin >> letters[x];
    }
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 4 - x; y++) {
            if (letters[y] > letters[y + 1]) {
                char swapVal = letters[y];
                letters[y] = letters[y + 1];
                letters[y + 1] = swapVal;
            }
        }
    }
    cout << "Sorted Letters: ";
    for (int x = 0; x < 5; x++) {
        cout << letters[x];
    }
    cout << endl;
}

int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    return 0;
}
