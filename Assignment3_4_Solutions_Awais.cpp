#include <iostream>
using namespace std;

// Problem 1
void problem1() {
    int numRows, numCols;
    cin >> numRows >> numCols;

    int marks[100][100];
    int totalSum = 0;

    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            cin >> marks[row][col];
            totalSum += marks[row][col];
        }
    }

    cout << "Sum = " << totalSum << endl;
}

// Problem 2
void problem2() {
    int numRows, numCols;
    cin >> numRows >> numCols;

    int profitTable[100][100];

    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            cin >> profitTable[row][col];
        }
    }

    int finalValue = profitTable[0][0];

    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            if (row == 0 && col == 0) {
                continue;
            }
            finalValue -= profitTable[row][col];
        }
    }

    cout << "Result = " << finalValue << endl;
}

// Problem 3
double calculateArea(double squareSide) {
    return squareSide * squareSide;
}

double calculateArea(double rectLength, double rectWidth) {
    return rectLength * rectWidth;
}

void problem3() {
    double squareInput, lengthInput, widthInput;

    cout << "Enter side of square: ";
    cin >> squareInput;

    cout << "Enter length and width of rectangle: ";
    cin >> lengthInput >> widthInput;

    double areaOne = calculateArea(squareInput);
    double areaTwo = calculateArea(lengthInput, widthInput);

    cout << "Area of Square: " << areaOne << endl;
    cout << "Area of Rectangle: " << areaTwo << endl;
}

// Problem 4
double getBowlingAverage(int totalRuns, int totalWickets) {
    if (totalWickets == 0) {
        return 0.0;
    }
    return (double)totalRuns / totalWickets;
}

void problem4() {
    int bowlerRuns, bowlerWickets;

    cin >> bowlerRuns >> bowlerWickets;

    double avgResult = getBowlingAverage(bowlerRuns, bowlerWickets);

    cout << "Bowling Average: " << avgResult << endl;
}

// Problem 5
void displayVertically(char letters[], int length) {
    for (int idx = 0; idx < length; idx++) {
        cout << letters[idx] << endl;
    }
}

void problem5() {
    char inputWord[100];

    cin >> inputWord;

    int wordLength = 0;
    while (inputWord[wordLength] != '\0') {
        wordLength++;
    }

    displayVertically(inputWord, wordLength);
}

// Problem 6
void reverseWord(char letters[], int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        char swapVal = letters[left];
        letters[left] = letters[right];
        letters[right] = swapVal;
        left++;
        right--;
    }
}

void problem6() {
    char myWord[100];

    cin >> myWord;

    int wordLength = 0;
    while (myWord[wordLength] != '\0') {
        wordLength++;
    }

    reverseWord(myWord, wordLength);

    cout << "Reversed Word: " << myWord << endl;
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
