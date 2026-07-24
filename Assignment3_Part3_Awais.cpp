#include <iostream>
using namespace std;

// Problem 1: Count Even and Odd Numbers in an Array
int countEvenNumbers(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int countOddNumbers(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}

void problem1()
{
    int N;
    cout << "Enter Size of Array: ";
    cin >> N;
    int numbers[N];
    for(int i = 0; i < N; i++)
    {
        cout << "Enter value in index " << i << ": ";
        cin >> numbers[i];
    }
    int evenResult = countEvenNumbers(numbers, N);
    int oddResult = countOddNumbers(numbers, N);
    cout << "Number of Even Numbers in Array: " << evenResult << endl;
    cout << "Number of Odd Numbers in Array: " << oddResult << endl;
}

// Problem 2: Display a 2D Array
void problem2()
{
    int R, C;
    cout << "Enter Rows: ";
    cin >> R;
    cout << "Enter Columns: ";
    cin >> C;
    int seatChart[R][C];
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            cout << "Enter Roll Number for Desk[" << i << "][" << j << "]: ";
            cin >> seatChart[i][j];
        }
    }
    cout << "Seating Chart:" << endl;
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            cout << seatChart[i][j] << " ";
        }
        cout << endl;
    }
}

// Problem 3: Greatest Common Divisor (GCD)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void problem3() {
    cout << findGCD(48, 18);
}

// Problem 4: Batting Strike Rate Calculator
double calculateStrikeRate(int runs, int balls)
{
    double strikeRate = (double(runs) / balls) * 100;
    return strikeRate;
}

void problem4()
{
    int runs, balls;
    cout << "Enter Runs and Balls: ";
    cin >> runs >> balls;
    double result = calculateStrikeRate(runs, balls);
    cout << "Strike Rate: " << result << endl;
}

// Problem 5: Length of a Character Array
int getLength(char arr[]) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void problem5() {
    char name[] = "Student";
    cout << getLength(name);
}

// Problem 6: Copy a Word into Another Character Array
void copyWord(char src[], char dest[], int length) {
    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }
    dest[length] = '\0';
}

void problem6() {
    char original[] = "Code";
    char backup[10];
    copyWord(original, backup, 4);
    cout << backup;
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
