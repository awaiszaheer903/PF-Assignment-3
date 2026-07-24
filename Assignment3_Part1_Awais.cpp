#include <iostream>
using namespace std;

// Code 1
double calculateAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + scores[i];
    }
    double average = (double)sum / size;
    return average;
}

void code1() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int scores[n];
    cout << "Enter " << n << " test scores: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    double avg = calculateAverage(scores, n);
    cout.precision(2);
    cout << fixed;
    cout << "Average score: " << avg << endl;
}

// Code 2
int calculateLowest(int scores[], int size) {
    int lowest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int calculateHighest(int scores[], int size) {
    int highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

void code2() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int scores[n];
    cout << "Enter " << n << " test scores: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int low = calculateLowest(scores, n);
    int high = calculateHighest(scores, n);
    cout << "Lowest score: " << low << endl;
    cout << "Highest score: " << high << endl;
}

// Code 3
int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

void code3() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    int result = calculatePower(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;
}

// Code 4
double calculateVoltage(double current, double resistance) {
    double voltage = current * resistance;
    return voltage;
}

void code4() {
    double current, resistance;
    cout << "Enter current and resistance: ";
    cin >> current >> resistance;
    double voltage = calculateVoltage(current, resistance);
    cout << "Total Voltage: " << voltage << " V" << endl;
}

// Code 5
bool linearSearch(char team[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (team[i] == target) {
            return true;
        }
    }
    return false;
}

void code5() {
    char team[11] = {'b', 'r', 'f', 'a', 's', 'i', 'm', 'h', 'n', 'k', 'z'};
    char target;
    cout << "Enter player's initial to search: ";
    cin >> target;
    bool found = linearSearch(team, 11, target);
    if (found) {
        cout << "Player is in the team" << endl;
    } else {
        cout << "Player not found" << endl;
    }
}

// Code 6
int calculateLength(char word[]) {
    int count = 0;
    while (word[count] != '\0') {
        count++;
    }
    return count;
}

void code6() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    int length = calculateLength(word);
    cout << "Length of the word is: " << length << endl;
}

int main() {
    code1();
    code2();
    code3();
    code4();
    code5();
    code6();
    return 0;
}
