#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <valarray>
#include <vector>
#include <numeric>
#include <algorithm>
#include <numeric>
#include <limits>
// #include <windows.h>
#include <cstdio>


using namespace std;


int main() {
    int input;


    // Prototypes
    void checkEvenOrOdd( float num1, float num2);
    void checkPositiveNegativeOrZero(float num1, float num2);
    void calculateSquareRoot(float num1, float num2);
    void calculateAbsoulutePower(float num1, float power);
    void calculatePerimeterandSquare(float sidelength);
    void mutiplicationTableof2();
    float solveForPythagoreumTheorm(float sideA, float sideB);
    float currencyConverter(float amount, float exchangeRate, int direction);
    void switchTwoNumbers(float num1, float num2);
    float smallestNumber(float num1, float num2,float num3);
    float largestNumber(float num1, float num2,float num3);
    float solveFirstDegree(float a, float b);
    void solveQuadraticEquation(float a, float b, float c);
    void sumofFirstNIntegers();
    void sumofFirstNEvenIntegers();
    void convertKilometersToMeters();
    void convertMetersToKilometers();
    void fiveQuestionGame();
    void tShirtPersonalizationGame();
    int createYourArrayAndAddElements(int arr[]);
    void createArraysandAddInThird(int arr[], int sarr[],int result[]);
    void multiplyAndDivideArrays(int arr1[], int arr2[], int resultMul[], float resultDiv[]);
    void basicOperationsWithTwoArrays(float arr[], float arr2[],float result[]);
    void multiplyArrayByNumber(vector<float>& arr, vector<float>& result);
    void createA2RowMatrix();
    void displayMatrix (int matrix[2][2], const string operation);
    void addSubMulMatrices (int matrix[2][2], int matrix2[2][2], int result[2][2]);
    void addSubMulArrays(int arr1[5], int arr2[5], int result[5]);
    void greaterOfTwoNumbers(float num1, float num2);
    void addTwoIntegers(int num1, int num2);
    void subtractTwoIntegers(int num1, int num2);
    void calculateLinearRegression(vector<double>& x, vector<double>& y, double& slope, double& intercept, double xVal);
    double predict(double x,double slope, double intercept);
    void areaOfTriangle();
    void isvalidPalindrome();
    void findMinAndMaxOfArray();
    double factorialOfaNumber(double input);
    double fibbonacciSequence(double n);
    void fibonacciRecursvie();
    void rockPaperScissors();
    void numberGuessingGame();
    void tempConversion();
    void treatOrTreatHalloweenGame();
    void powerRecursive();
    void gcdRecursive();
    void sumofDigits();
    void createAnimal();
    void createBear();
    void inverseMatrixSolution();
    void createSnake();
    void virtualMedicalAssissitant();
    void setHealthGoals();
    void sierraHealthMedicalassistant();




    // Category Menu Prototypes
    void basicOperationsMenu();
    void numericCalculationsMenu();
    void numericAnalysisMenu();
    void complexCalculationsMenu();
    void gamesMenu();
    void arraysAndVectorsMenu();
    void matricesMenu();
    void classesMenu();
    void miscellaneousMenu();
    void linearRegressionMenu();
    void pointersMenu();


    while(true) {

        cout << " ____            _              \n";
        cout << "| __ )  ___  ___| | _____ _   _ \n";
        cout << "|  _ \\ / _ \\/ __| |/ / _ \\ | | |\n";
        cout << "| |_) |  __/ (__|   <  __/ |_| |\n";
        cout << "|____/ \\___|\\___|_|\\_\\___|\\__, |\n";
        cout << "                          |___/ \n";

        cout << "Hello,";
        cout << "\nI am your Virtual Assistant, Beckey :)\n";
        cout << "Let's get started! \n ";


        cout << "Choose a Category, or type 99 to quit:\n";
        cout << "1. Basic Operations\n";
        cout << "2. Numeric Calculations\n";
        cout << "3. Numeric Analysis\n";
        cout << "4. Complex Calculations\n";
        cout << "5. Games\n";
        cout << "6. Arrays and Vectors\n";
        cout << "7. Matrices\n";
        cout << "8. Miscellaneous\n";
        cout << "9. Classes \n";
        cout << "10. Linear Regression\n";
        cout << "11. Pointers\n";
        cout << "12. Prime Medical: Medical Virtual Assisstant \n";
        cout << "13. set health Goals\n";
        cout << "14. Sierra: Mental Health Virtual Assistant\n";
        cout << "Enter your choice: \n";
        cin >> input;


        //Validate the input
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input! Please enter a valid integer.\n";
            continue; // Restart the loop
        }

        if (input == 99) {
            cout << "Goodbye! Have a good day\n";
            break;
        }


        switch (input) {
            case 1: {
                basicOperationsMenu();
                break;
            }

            case 2: {
                numericCalculationsMenu();
                break;
            }

            case 3: {
                numericAnalysisMenu();
                break;
            }

            case 4: {
                complexCalculationsMenu();
                break;
            }

            case 5: {
                gamesMenu();
                break;
            }

            case 6: {
                arraysAndVectorsMenu();
                break;
            }

            case 7: {
                matricesMenu();
                break;
            }

            case 8: {
                miscellaneousMenu();
                break;
            }

            case 9: {
                classesMenu();
                break;
            }

            case 10: {
                linearRegressionMenu();
                break;
            }

            case 11: {
                pointersMenu();
                break;
            }
            case 12: {
                virtualMedicalAssissitant();
                break;
            }
            case 13: {
                setHealthGoals();
            }
            case 14: {
                sierraHealthMedicalassistant();
            }

            default:
                cout << "Invalid input! Please enter a number between 1-9 or 'Q' to quit.\n";
        }


    }


    return 0;
}


void calculateAverage(float num1, float num2) {
    cout << "Average: " << (num1 + num2) / 2<< endl;
}

void checkEvenOrOdd(float num1, float num2) {
    ///change to int
    int intNum1 = static_cast<int>(num1);
    int intNum2 = static_cast<int>(num2);

    cout << "Enter your first number: \n";
    cin >> intNum1;

    cout << "Enter your second number: \n";
    cin >> intNum2;


    if (intNum1 % 2 == 0  && intNum2 % 2 == 0) {
        cout << "Both are even Numbers";

    } else if (intNum1 % 2 != 0 && intNum2 % 2 == 0) {
        cout <<"The first number " << intNum1 << " is odd and "  << intNum2 << " is even" << endl;

    } else if (intNum1 % 2 == 0 && intNum2 % 2 != 0) {
        cout <<"The first number " << intNum1 << " is even and "  << intNum2 << " is odd " << endl;
    } else {
        cout <<"Both numbers are odd";
    }

}


void checkPositiveNegativeOrZero(float num1, float num2) {

    //first number
    cout << "Enter your first Number: \n";
    cin >> num1;


    if (num1 > 0) {
        cout << num1 << " is positive" << endl;
    } else if (num1 < 0) {
        cout << num1 << " is negative" << endl;
    } else {
        cout << num1 << " is zero" << endl;
    }

    //second number
    cout << "Enter your second Number: \n";
    cin >> num2;

    if (num2 > 0) {
        cout << num2 << " is positive" << endl;
    } else if (num2 < 0) {
        cout << num2 << " is negative" << endl;
    } else {
        cout << num2 << " is zero" << endl;
    }

}

void calculateSquareRoot(float num1, float power) {
    cout << "enter your number: \n";
    cin >> num1;
    cout << "Square Root result: " << sqrt(num1) << endl;
}

void calculateAbsoulutePower(float num1,float power) {
    cout << "enter your number: \n";
    cin >> num1;

    cout << "Enter the power \n";
    cin >> power;

    float absVal = fabs(num1);
    float result = pow(absVal, power);
    cout << "Absolute value " << num1 << "raised to the " << power << " is " << result  << endl;
}

void mutiplicationTableof2() {
    int num = 2;
    for (int i = 1 ; i <= 12 ; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void calculatePerimeterandSquare(float sidelength) {
    cout << "Perimeter and Area of a square with your two numbers";

    float area = pow(sidelength, 2);
    float perimeter = sidelength * 4;

    cout << "Perimeter of the square: " << perimeter << endl;
    cout << "area of the square: " << area << endl;

}

float solveForPythagoreumTheorm(float sideA, float sideB) {
    float hypotenuse;
    float squaredA = pow(sideA, 2);
    float squaredB = pow(sideB, 2);
    hypotenuse = sqrt(squaredA + squaredB);
    return hypotenuse;
}


float currencyConverter(float amount, float exchangeRate, int direction) {
    float result;

    if (direction == 1) {
        // Convert dollars to euros
        result = amount * exchangeRate;
    } else if (direction == 2) {
        // Convert euros to dollars
        result = amount / exchangeRate;
    }

    return result;
}


void switchTwoNumbers(float num1, float num2) {
    cout<< "What is your first number?\n";
    cin >> num1;
    cout << "What is your second number?\n";
    cin >> num2;

    float temp  = num1;
    num1  = num2;
    num2 = temp;

    cout << "Number 1 is now " << num1 << " and Number 2 is now " << num2 << endl;




}

float smallestNumber(float num1, float num2,float num3) {
    if (num1 <= num2 && num1 <= num3) {
        return num1;
    } else if (num2 <= num3 && num3 >= num1) {
        return num2;
    } else {
        return num3;
    }
}


float largestNumber(float num1, float num2,float num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num3 && num3 >= num1) {
        return num2;
    } else {
        return num3;
    }
}

float solveFirstDegree(float a, float b) {
    if (a == 0) {
        throw std::invalid_argument("a must not be 0 in a linear equation");
    }
    return -b / a;
}

void solveQuadraticEquation(float a, float b, float c) {
    float root1,root2;

    if (a == 0) {
        throw std::invalid_argument("a must not be 0 in a quadratic equation");
    }

    float discriminate = b * b - 4*a*c;

    if (discriminate < 0 ) {
        throw std::invalid_argument("Discriminate must be non-negative to have real roots");
    }

    if (discriminate >= 0) {
        float squared_discriminate = sqrt(discriminate);
        root1 = (-b+squared_discriminate) / (2*a);
        root2 = (-b-squared_discriminate) / (2*a);
    }

    cout << "root 1 is : " << root1 << endl;
    cout << "root 2 is : " << root2 << endl;
}

void sumofFirstNIntegers() {
    int N;
    cout << "Enter a number (N) greater than 0: "<< endl;
    cin >> N;


    if (N > 0 ) {
        int sum = (N * (N + 1)) / 2;
        cout << "The sum of the first " << N << " numbers is " << sum << endl;

    } else {
        cout << "Invalid input! Please enter a number greater than 0"<< endl;
    }


}


void sumofFirstNEvenIntegers() {
    int N;
    cout << "Enter a number (N) greater than 0: "<< endl;
    cin >> N;

    if (N > 0) {
        int sum = N * (N +1);
        cout << "The sum of the first " << N << " even numbers is " << sum << endl;
    } else {
        cout << "Invalid input! Please enter a number greater than 0" << endl;
    }

}

void convertKilometersToMeters() {
    double kilometers;
    cout << "Enter distance in kilometers: \n";
    cin >> kilometers;
    double meters = kilometers * 1000;
    cout << kilometers << "Kilometers is equal to " << meters << endl;


}

void convertMetersToKilometers() {
    double meters;
    cout << "Enter distance in meters: ";
    cin >> meters;
    double kilometers = meters / 1000;
    cout << meters << " meters is equal to " << kilometers << " kilometers." << endl;
}


void fiveQuestionGame() {
    int score = 0;
    string answer;

    cout << "Welcome to 'How Much Do You Know?'\n";
    cout << "Answer the following questions to test your knowledge!\n\n";


    cout << "Question 1: Which planet is known as the Red Planet?\n";
    cout << "a) Earth\nb) Venus\nc) Mars\nd) Jupiter\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c") {
        score += 100;
    } else {
        cout << "Wrong, it is Mars.\n";
    }


    cout << "\nQuestion 2: What is the capital of France?\n";
    cout << "a) London\nb) Berlin\nc) Madrid\nd) Paris\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "d") {
        score += 100;
    } else {
        cout << "Wrong, it is Paris.\n";
    }


    cout << "\nQuestion 3: Which of these is the largest ocean on Earth?\n";
    cout << "a) Atlantic Ocean\nb) Indian Ocean\nc) Pacific Ocean\nd) Arctic Ocean\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c") {
        score += 100;
    } else {
        cout << "Wrong, it is the Pacific Ocean.\n";
    }


    cout << "\nQuestion 4: Is 0 an even number?\n";
    cout << "a) Yes\nb) No\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "a") {
        score += 100;
    } else {
        cout << "Wrong, 0 is an even number.\n";
    }


    cout << "\nQuestion 5: Is a tomato a fruit?\n";
    cout << "a) Yes\nb) No\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "a") {
        score += 100;
    } else {
        cout << "Wrong, a tomato is scientifically classified as a fruit.\n";
    }

    cout << "\nBonus Question: Does Pineapple belong on Pizza?\n";
    cout << "a) Yes\nb) Obviously\nc) Duhhh\nd) No(yes)\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c") {
        score += 100;
    } else {
        cout << "What is wrong with you (respectfully)?\n";
    }


    cout << "\nYour total score is: " << score << " points.\n";


    if (score > 300) {
        cout << "YOU ARE THE BEST!!\n";
        cout << "Correct Answers Recap:\n";
        cout << "1. Mars\n";
        cout << "2. Paris\n";
        cout << "3. Pacific Ocean\n";
        cout << "4. Yes (0 is an even number)\n";
        cout << "5. Yes (a tomato is a fruit)\n";
        cout << "6. duhhh\n";
    } else {
        cout << "Never Give Up, Go Again!\n";
    }
}

void tShirtPersonalizationGame() {
    string sleeveType, printChoice, printDesign, colorChoice, sizeChoice, materialChoice;


    cout << "Do you want a long-sleeved or short-sleeved t-shirt?\n";
    cout << "1) Long sleeve\n2) Short sleeve\n";
    int choice;
    cin >> choice;
    sleeveType = (choice == 1) ? "long-sleeved" : "short-sleeved";


    cout << "\nDo you want a print on your t-shirt?\n";
    cout << "1) Yes\n2) No\n";
    cin >> choice;
    printChoice = (choice == 1) ? "with a print" : "without a print";


    if (printChoice == "with a print") {
        cout << "\nWhat kind of print would you like?\n";
        cout << "1) Animal\n2) Sports\n3) Abstract\n4) Nature\n";
        cin >> choice;
        switch (choice) {
            case 1:
                printDesign = "with an animal design";
                break;
            case 2:
                printDesign = "with a sports design";
                break;
            case 3:
                printDesign = "with an abstract design";
                break;
            case 4:
                printDesign = "with a nature design";
                break;
            default:
                printDesign = "with a custom design";
                break;
        }
    } else {
        printDesign = "without a print";
    }


    cout << "\nWhat color do you prefer for your t-shirt?\n";
    cout << "1) Blue\n2) Red\n3) Black\n4) White\n";
    cin >> choice;
    switch (choice) {
        case 1:
            colorChoice = "blue";
            break;
        case 2:
            colorChoice = "red";
            break;
        case 3:
            colorChoice = "black";
            break;
        case 4:
            colorChoice = "white";
            break;
        default:
            colorChoice = "custom color";
            break;
    }


    cout << "\nWhat size do you prefer for your t-shirt?\n";
    cout << "1) S\n2) M\n3) L\n4) XL\n";
    cin >> choice;
    switch (choice) {
        case 1:
            sizeChoice = "S";
            break;
        case 2:
            sizeChoice = "M";
            break;
        case 3:
            sizeChoice = "L";
            break;
        case 4:
            sizeChoice = "XL";
            break;
        default:
            sizeChoice = "Custom Size";
            break;
    }


    cout << "\nDo you prefer cotton or polyester?\n";
    cout << "1) Cotton\n2) Polyester\n";
    cin >> choice;
    materialChoice = (choice == 1) ? "cotton" : "polyester";


    cout << "\nThe user wants a " << colorChoice << " " << sleeveType << " t-shirt, size " << sizeChoice << ", "
         << materialChoice << " material, " << printDesign << ".\n";
}


int createYourArrayAndAddElements(int arr[]) {
    int sum = 0;
    for  (int i = 0; i < 5; ++i) {
        cout << "Element "<< i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    return sum;
}

void createArraysandAddInThird(int arr[], int sarr[],int result[10]) {
    cout << "Enter 5 elements for the first array: " <<endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    cout << " Enter 5 elements for the Second array: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> sarr[i];
    }

    // Combining both of the arrays
    for (int i = 0; i < 5; ++i) {
        result[i] = arr[i];
    }

    for (int i = 0; i < 5; ++i) {
        result[5 + i] = sarr[i];
    }

    // display the result
    cout << "Both arrays combined: \n";
    cout << "Result of adding both arrays:\n";
    for (int i = 0; i < 10; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

}

void multiplyAndDivideArrays(int arr1[], int arr2[], int resultMul[], float resultDiv[]) {
    cout << "Multiply and Divide elements of Arrays \n";

    cout << "Enter 5 elements for the first array: " <<endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter 5 elements for the second array: " <<endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr2[i];
    }

    // Multiply each element in both arrays
    for (int i = 0; i < 5; ++i) {
        resultMul[i] = arr1[i] * arr2[i];
    }

    // Divide each element in both arrays
    for (int i = 0; i < 5; ++i) {
        if (arr2[i] != 0) {
            resultDiv[i] = static_cast<float>(arr1[i]) / arr2[i];
        } else {
            cout << "Division by zero detected at index " << i << ". Setting resultDiv[" << i << "] to 0." << endl;
            resultDiv[i] = 0;
        }
    }

    // Display the results
    cout << "Multiplication results: \n";
    for (int i = 0; i < 5; ++i) {
        cout << resultMul[i] << " ";
    }
    cout << "\nDivision results: \n";
    for (int i = 0; i < 5; ++i) {
        cout << resultDiv[i] << " ";
    }
    cout << endl;
}










void inputArray(float arr[], int size, char name) {
    cout << "Enter " << size << " elements for array " << name << ": ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void addArrays(float a[], float b[], float result[]) {
    for (int i = 0; i < 5; ++i) {
        result[i] = a[i] + b[i];
    }
}

void subArray(float a[], float b[], float result[]) {
    for (int i = 0; i < 5; ++i) {
        result[i] = a[i] - b[i];
    }
}

void multiplyArrays(float A[], float B[], float result[]) {
    for (int i = 0; i < 5; ++i) {
        result[i] = A[i] * B[i];
    }
}

void divideArrays(float A[], float B[], float result[]) {
    for (int i = 0; i < 5; ++i) {
        if (B[i] != 0) {
            result[i] = A[i] / B[i];
        } else {
            result[i] = 0; // Avoid division by zero
            cout << "Division by zero for element " << i << ", setting result to 0.\n";
        }
    }
}

void showArray(float arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void basicOperationsWithTwoArrays(float arr[], float arr2[],float result[]) {
    // Input elements for arrays A and B
    inputArray(arr, 5, 'A');
    inputArray(arr2, 5, 'B');
    int choice;

    do {
        cout << "\n Choose your Operation:\n";
        cout << "1. Addition of two Arrays\n";
        cout << "2. Subtraction of two Arrays\n";
        cout << "3. Multiplication of two Arrays\n";
        cout << "4. Division of two Arrays\n";
        cout << "5.'EXIT' \n";
        cin >> choice;

        switch (choice) {
            case 1: {
                addArrays(arr, arr2, result);
                cout << "Result of A + B: ";
                showArray(result, 5);
                break;
            }

            case 2: {
                subArray(arr, arr2, result);
                cout << "Result of A - B: ";
                showArray(result, 5);
                break;
            }

            case 3: {
                multiplyArrays(arr, arr2, result);
                cout << "Result of A * B: ";
                showArray(result, 5);
                break;
            }
            case 4: {
                divideArrays(arr, arr2, result);
                cout << "Result of A / B: ";
                showArray(result, 5);
                break;
            }
        }


    } while (choice != 5);
}

void multiplyArrayByNumber(vector<float>& arr,vector<float>& result) {
    //Multiply each element of the array by the multiplier
    float multiplier;

    cout << " Enter 5 numbers for the vector\n";
    for (int i = 0; i < 5; ++i) {
        float num;
        cin >>num;
        arr.push_back(num);
    }

    cout << "Enter your multiplier :\n";
    cin >> multiplier;

    // get the multiplier form the user
    for (int i = 0; i < arr.size(); ++i) {
        result.push_back(arr[i] * multiplier);
    }

    //display the result
    cout << "Result of vector Multplication\n";
    for (int num: result) {
        cout << num << " ";
    }

    cout << endl;

}

void createA2RowMatrix() {

    int matrix[2][2];
    int additon = 0;

    cout << "Create the 2x2 matrix\n";
    cout << "Enter in 4 numbers\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "element ["<< i <<"] ["<<j<<"]\n";
            cin >> matrix[i][j];
            additon += matrix[i][j];
        }
    }

    // Display the Matrix

    cout << "The 2x2 matrix is: \n";

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}






void displayMatrix (int matrix[2][2], const string operation) {
    cout << operation << ":\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void addSubMulMatrices (int matrix[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }

    displayMatrix(result, "Additon Result");


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = matrix[i][j] - matrix2[i][j];
        }
    }
    displayMatrix(result, "Subtraction Result");


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = matrix[i][0] * matrix2[0][j] + matrix[i][1] * matrix2[1][j];
        }
    }
    displayMatrix(result, "Multiplication Result");
}


void addSubMulArrays(int arr1[2], int arr2[2], int result[2]) {
    for (int i = 0; i < 2; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    cout << "Addition Result: ";
    for (int i = 0; i < 2; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 2; ++i) {
        result[i] = arr1[i] - arr2[i];
    }
    cout << "Subtraction Result: ";
    for (int i = 0; i < 2; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 2; ++i) {
        result[i] = arr1[i] * arr2[i];
    }
    cout << "Multiplication Result: ";
    for (int i = 0; i < 2; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}


void greaterOfTwoNumbers(float num1, float num2) {
    cout << "Enter your first Number :" << endl;
    cin >> num1;

    cout << "Enter your second Number :" << endl;
    cin >> num2;


    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else {
        cout << num2 << " is greater than " << num1 << endl;
    }
}

void addTwoIntegers(int num1, int num2) {
    cout << "enter your First Number: " << endl;
    cin >> num1;

    cout << "Enter your Second Number: " << endl;
    cin >> num2;

    cout << "Your total is: " << num1 + num2 << endl;
}

void subtractTwoIntegers(int num1, int num2) {
    cout << "enter your First Number: " << endl;
    cin >> num1;

    cout << "Enter your Second Number: " << endl;
    cin >> num2;

    cout << "Your total is: " << num1 - num2 << endl;
}




// void basicOperationsMenu() // Completed;
// void numericCalculationsMenu() // Completed;
// void numericAnalysisMenu() // Completed;
// void complexCalculationsMenu() // Completed;
// void gamesMenu() // completed;
// void arraysAndVectorsMenu();
// void matricesMenu();
// void miscellaneousMenu();






/*
 *
 * additional exercises
 * 41. Linear regression done!
 * 42. Area of a triangle done!
 * 43. valid palindrome
 * 44. Find min and max in an array
 * 45. Factorials
 * 46. Fibonacci sequence
 * 47.Rock paper scissors
 * 48. Guess the number
 * 49. Temperature conversion
 *
 * 50 and 51 are done
 *
 * 52. Trick or treat game
 * 53 fact,54 fibbo,55 sum of digits: recursive functions
 * 56,57,58 clases
 * 59, 60 mid term 1 and 2
 * 61. Anything you want
 */

//Inverse Matrix problem


void inverseMatrixSolution() {
    cout << "Solving System of linear Equations using inverse matrix" << endl;
    float a[2][2], c[2][1];
    float inv[2][2], result[2][1];
    float discriminant;
    //Allow users to enter coefficents of the equation
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "Enter the coefficients for the first equation:" << endl;
        } else {
            cout << "Enter the coefficients for the second equation:" << endl;
        }
        // Prompt for X coefficient
        cout << "Enter the coefficient for X: ";
        cin >> a[i][0];
        // Prompt for Y coefficient
        cout << "Enter the coefficient for Y: ";
        cin >> a[i][1];
        cout << endl;
    }
    // ending coeffeints input
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "Enter the right-side constants for the first equation" <<
            endl;
        } else {
            cout << "Enter right-side constants for the Second equation" << endl;
        }
        cin >> c[i][0];
    }
    // Calculate the discriminate
    discriminant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    // Get the inverse coeffienct matrix and then mutliply each one by the

    if ( discriminant != 0) {
        inv[0][0] = (1 / discriminant) * a[1][1];
        inv[0][1] = (1 / discriminant) * -a[0][1];
        inv[1][0] = (1 / discriminant) * -a[1][0];
        inv[1][1] = (1 / discriminant) * a[0][0];
        //Multiply each new element of the inverse matrix by the constants on the

        for (int i = 0; i < 2; i++) {
            result[i][0] = inv[i][0] * c[0][0] + inv[i][1] * c[1][0];
        }
        //Show the results
        cout << "X = " << result[0][0] << endl;
        cout << "Y = " << result[1][0] << endl;
    } else {
        cout << "The Discriminate is 0 thus there is no inverse" << endl;
    }
}

//Solve system of 3 equations

void solveSystemOfThreeEquations() {
    cout << "Solving system of linear equations using Gaussian Elimination " << endl;
    float matrix[3][4]; //  3x4 matrix for 3 equations and  their constants

    // Input the coefficients and constants for the 3 x 4 matrix
    for (int i = 0; i < 3; i++) {
        cout << "Enter the coefficients for equation " << i + 1 << ":" << endl;
        cout << "Enter the coefficient for X: ";
        cin >> matrix[i][0];

        cout << "Enter the coefficient for Y: ";
        cin >> matrix[i][1];
        cout << "Enter the coefficient for Z: ";
        cin >> matrix[i][2];

        cout << "Enter the constant for equation " << i + 1 << ": ";
        cin >> matrix[i][3];
        cout << endl;
    }

    //Gaussian elimination
    for (int i = 0; i < 3; i++) {
        // Make the diagonal element 1 and scale the row accordingly
        float diag = matrix[i][i];

        for (int j = 0; j < 4; j++) {
            matrix[i][j] /= diag;
        }

        // Make the elements below the current row 0 in the current column
        for (int k = i + 1; k < 3; k++) {
            float factor = matrix[k][i];

            for (int j = 0; j < 4; j++) {


                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back-substitution to solve for x, y, z
    float x, y, z;
    z = matrix[2][3];

    y = matrix[1][3] -  matrix[1][2] *  z;
    x = matrix[0][3] - matrix[0][1] *   y - matrix[0][2] * z;

    // Display results
    cout << "Solution: " << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl;
}






// Encapsulation getters and setters
class Animal {
public:
    int AnimalId;
    string Name;
    string Breed;
    int weight;
    int Age;
    int Health;


    Animal(int AnimalId, const string& Name, const string& Breed, int weight, int age, int health)
        :AnimalId(AnimalId),Name(Name),Breed(Breed), weight(weight), Age(age), Health(health)  {}

    [[nodiscard]] int animal_id() const {
        return AnimalId;
    }

    [[nodiscard]] string name() const {
        return Name;
    }

    [[nodiscard]] string breed() const {
        return Breed;
    }

    [[nodiscard]] int age() const {
        return Age;
    }

    [[nodiscard]] int health() const {
        return Health;
    }


    void createAnimal() {
        cout << "Animal id: " << animal_id() << endl;
        cout << "Name: " << name() << endl;
        cout << "Breed: " << breed() << endl;
        cout << "age: " << age() << endl;
    }

    virtual void attack() {
        cout << animal_id() << "Has attacked the user" << endl;
    }

    virtual void eat() {
        Health += 2;
        cout << name() << " has a current health of " << health() << endl;

    }

   virtual void printAnimalStats() {
        cout << "---------------- Animal Stats ---------------" << endl;
        cout << "ID: " << animal_id() << endl;
        cout << "Name: " << name() << endl;
        cout << "Breed: " << breed() << endl;
        cout << "Weight: " << weight << endl;
        cout << "Age: " << age() << " years" << endl;
        cout << "Health: " << health() << endl;
        cout << "---------------------------------------------" << endl;
    }

    virtual ~Animal() = default;
};


// Inheritance
class Bear: public Animal {
public:
    int Cubs;
    string typeOfBear;
    int damageOutput;

    Bear(int AnimalId, const string &Name, const string &Breed, int weight, int age, int health, int cubs,const string &type_of_bear, int damage_output)
        : Animal(AnimalId, Name, Breed, weight, age, health),
          Cubs(cubs),
          typeOfBear(type_of_bear),
          damageOutput(damage_output) {}


    [[nodiscard]] int cubs() const {
        return Cubs;
    }

    [[nodiscard]] string type_of_bear() const {
        return typeOfBear;
    }

    [[nodiscard]] int damage_output() const {
        return damageOutput;
    }

    void printAnimalStats() override {
        cout << "---------------- Bear Stats ---------------" << endl;
        cout << "ID: " << animal_id() << endl;
        cout << "Name: " << name() << endl;
        cout << "Breed: " << breed() << endl;
        cout << "Weight: " << weight << endl;
        cout << "Age: " << age() << " years" << endl;
        cout << "Health: " << health() << endl;
        cout << "Number of Cubs: " << cubs() << endl;
        cout << "Type of Bear: " << type_of_bear() << endl;
        cout << "Damage Output: " << damage_output() << endl;
        cout << "-------------------------------------------" << endl;
    }

    ~Bear() override = default;
};

//Polymorphism
class Eagle: public Animal {

public:
    string typeofEagle;
    int wingspan;
    int damage;


    Eagle(int AnimalId, const string &Name, const string &Breed, int weight, int age, int health,
        const string &typeof_eagle, int wingspan, int damage)
        : Animal(AnimalId, Name, Breed, weight, age, health),
          typeofEagle(typeof_eagle),
          wingspan(wingspan),
          damage(damage) {
    }


    [[nodiscard]] string typeof_eagle() const {
        return typeofEagle;
    }

    [[nodiscard]] int wingspan1() const {
        return wingspan;
    }

    [[nodiscard]] int damage1() const {
        return damage;
    }

    void eat() override {
        Health += 7;
        cout << name() << " has a current health of " << health() << endl;
    }

    void printAnimalStats() override {
        cout << "---------------- Eagle Stats ---------------" << endl;
        cout << "ID: " << animal_id() << endl;
        cout << "Name: " << name() << endl;
        cout << "Breed: " << breed() << endl;
        cout << "Weight: " << weight << endl;
        cout << "Age: " << age() << " years" << endl;
        cout << "Health: " << health() << endl;
        cout << "Type of Eagle: " << typeof_eagle() << endl;
        cout << "Wingspan: " << wingspan1() << " cm" << endl;
        cout << "Damage: " << damage1() << endl;
        cout << "--------------------------------------------" << endl;
    }

    virtual ~Eagle() = default;
};


class Snake: public Animal {
    string venomType;
    bool isPoisonous;

public:
    Snake(int AnimalId, const string &Name, const string &Breed, int weight, int age, int health,
        const string &venom_type, bool is_poisonous)
        : Animal(AnimalId, Name, Breed, weight, age, health),
          venomType(venom_type),
          isPoisonous(is_poisonous) {
    }

    [[nodiscard]] string venom_type() const {
        return venomType;
    }

    void set_venom_type(const string &venom_type) {
        venomType = venom_type;
    }

    [[nodiscard]] bool is_poisonous() const {
        return isPoisonous;
    }

    void set_is_poisonous(bool is_poisonous) {
        isPoisonous = is_poisonous;
    }


    void printAnimalStats() override {
        cout << "---------------- Snake Stats ---------------" << endl;
        cout << "ID: " << animal_id() << endl;
        cout << "Name: " << name() << endl;
        cout << "Breed: " << breed() << endl;
        cout << "Weight: " << weight << endl;
        cout << "Age: " << age() << " years" << endl;
        cout << "Health: " << health() << endl;
        cout << "Venom Type: " << venom_type() << endl;
        cout << "Poisonous: " << (is_poisonous() ? "Yes" : "No") << endl;
        cout << "---------------------------------------------" << endl;
    }

    virtual ~Snake() = default;

};



// create a Bear and Eagle and Animal

void createAnimal() {
    int id, weight, age, health;
    string name, breed;

    cout << "Enter Animal ID: ";
    cin >> id;
    cin.ignore();  // Clear the newline character
    cout << "Enter Animal Name: ";
    getline(cin, name);
    cout << "Enter Animal Breed: ";
    getline(cin, breed);
    cout << "Enter Animal Weight: ";
    cin >> weight;
    cout << "Enter Animal Age: ";
    cin >> age;
    cout << "Enter Animal Health: ";
    cin >> health;

    Animal animal(id, name, breed, weight, age, health);
    animal.printAnimalStats();
}

void createBear() {
    int id, weight, age, health, cubs, damageOutput;
    string name, breed, typeOfBear;

    cout << "Enter Bear ID: ";
    cin >> id;
    cin.ignore();  // Clear the newline character
    cout << "Enter Bear Name: ";
    getline(cin, name);
    cout << "Enter Bear Breed: ";
    getline(cin, breed);
    cout << "Enter Bear Weight: ";
    cin >> weight;
    cout << "Enter Bear Age: ";
    cin >> age;
    cout << "Enter Bear Health: ";
    cin >> health;
    cout << "Enter Number of Cubs: ";
    cin >> cubs;
    cin.ignore();  // Clear the newline character
    cout << "Enter Type of Bear: ";
    getline(cin, typeOfBear);
    cout << "Enter Damage Output: ";
    cin >> damageOutput;

    Bear bear(id, name, breed, weight, age, health, cubs, typeOfBear, damageOutput);
    bear.printAnimalStats();

}



void createEagle() {
    int id, weight, age, health, wingspan, damage;
    string name, breed, typeOfEagle;

    cout << "Enter Eagle ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Eagle Name: ";
    getline(cin, name);
    cout << "Enter Eagle Breed: ";
    getline(cin, breed);
    cout << "Enter Eagle Weight: ";
    cin >> weight;
    cout << "Enter Eagle Age: ";
    cin >> age;
    cout << "Enter Eagle Health: ";
    cin >> health;
    cin.ignore();
    cout << "Enter Type of Eagle: ";
    getline(cin, typeOfEagle);
    cout << "Enter Wingspan: ";
    cin >> wingspan;
    cout << "Enter Damage: ";
    cin >> damage;

    Eagle eagle(id, name, breed, weight, age, health, typeOfEagle, wingspan, damage);
    eagle.printAnimalStats();

}


void createSnake() {
    int id, weight, age, health;
    string name, breed, venomType;
    bool isPoisonous;

    cout << "Enter Snake ID: ";
    cin >> id;
    cin.ignore();  // Clear the newline character
    cout << "Enter Snake Name: ";
    getline(cin, name);
    cout << "Enter Snake Breed: ";
    getline(cin, breed);
    cout << "Enter Snake Weight: ";
    cin >> weight;
    cout << "Enter Snake Age: ";
    cin >> age;
    cout << "Enter Snake Health: ";
    cin >> health;
    cin.ignore();  // Clear the newline character
    cout << "Enter Snake Venom Type: ";
    getline(cin, venomType);
    cout << "Is the snake poisonous (1 for yes, 0 for no)? ";
    cin >> isPoisonous;

    Snake snake(id, name, breed, weight, age, health, venomType, isPoisonous);
    snake.printAnimalStats();
}



// Design Character
class Player {
public:
    string name;
    string costume;
    int candy;
    int health;
    int damageOutPut;
    string weapon;

    Player(const string &name, const string &costume)
        :name(name), costume(costume),candy(0), health(100), damageOutPut(10), weapon("none") {}

public:
    [[nodiscard]] string name1() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] string costume1() const {
        return costume;
    }

    void set_costume(const string &costume) {
        this->costume = costume;
    }

    [[nodiscard]] int candy1() const {
        return candy;
    }

    void set_candy(int candy) {
        this->candy = candy;
    }

    [[nodiscard]] int health1() const {
        return health;
    }

    void set_health(int health) {
        this->health = health;
    }

    [[nodiscard]] int damage_out_put() const {
        return damageOutPut;
    }

    void set_damage_out_put(int damage_out_put) {
        damageOutPut = damage_out_put;
    }

    [[nodiscard]] string weapon1() const {
        return weapon;
    }

    void set_weapon(const string &weapon) {
        this->weapon = weapon;
    }

    void printPLayerStats() {
        cout << "Name: " << name << endl;
        cout << "Costume: " << costume << endl;
        cout << "Candy: " << candy << endl;
        cout << "Health: " << health << endl;
        cout << "Current DamageOutPut: " << damageOutPut << endl;
    }

    void grabAndEquipWeapon(const string &newWeapon, int additionalDamage) {
        cout << "You found a " << newWeapon << " with +" << additionalDamage << " damage. Do you want to equip it? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            weapon = newWeapon;
            damageOutPut = 10 + additionalDamage;
            cout << "You have equipped the " << weapon << "! Your new damage output is " << damageOutPut << ".\n";
        } else {
            cout << "You decided not to equip the " << newWeapon << ".\n";
        }
    }


    void grabCandy(int amount) {
        candy += amount;
        cout << name << " has collected " << amount  << "candies:" << candy << "\n";

    }

    void reduceHealth(int amount) {
        health -= amount;
        cout << name << " has reduced health " << health << "\n";


    }

    bool isAlive() const {
        return health > 0;
    }

    bool hasWon() const {
        return candy >= 120;
    }


    ~Player() = default;
};

Player createCharacter() {
    string name,costume;
    cout << "Enter your character name: \n";
    cin >> name;
    cin.ignore();
    cout  << "Choose your costume: \n" ;
    cin >> costume;
    getline(cin,costume);
    return Player(name,costume);
}

class Enemy {
public:
    string name;
    int health;
    int damageOutPut;
    int candyReward;

    Enemy(const string &name, int health, int damage_out_put, int candy_reward)
        : name(name),
          health(health),
          damageOutPut(damage_out_put),
          candyReward(candy_reward) {}


    [[nodiscard]] string name1() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] int health1() const {
        return health;
    }

    void set_health(int health) {
        this->health = health;
    }

    [[nodiscard]] int damage_out_put() const {
        return damageOutPut;
    }

    void set_damage_out_put(int damage_out_put) {
        damageOutPut = damage_out_put;
    }

    [[nodiscard]] int candy_reward() const {
        return candyReward;
    }

    void set_candy_reward(int candy_reward) {
        candyReward = candy_reward;
    }


    void attackPlayer(Player &player) {
        cout << "Oh no! A " << name << " Has Appeared!\n";
        player.reduceHealth(damageOutPut);
    }

    void takeDamage(int damage, Player &player) {
        health -= damage;
        if (health <= 0) {
            player.grabCandy(candyReward);

        }
    }

    bool isAlive() const {
        return health > 0;
    }
};


void combat(Player &player, Enemy &enemy) {
    while (player.isAlive() && enemy.isAlive()) {
        cout << "You encountered a " << enemy.name << "Choose an action: \n";
        cout << "1. Fight\n";
        cout << "2. Escape\n";
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "Player attacks first and deals " << player.damageOutPut << " damage\n";
            enemy.takeDamage(player.damageOutPut, player);
            cout << "Current enemy health: " << enemy.health << endl;


            if (!enemy.isAlive()) {
                cout << "The " << enemy.name << " has been defeated!\n";

                break;
            }

            // Enemy counterattacks if still alive
            enemy.attackPlayer(player);
            if (!player.isAlive()) {
                cout << "\nYou have been defeated by the " << enemy.name << "!\n";
                break;
            }
        } else if (choice == 2) {
            int escapeChance = rand() % 100;
            if (escapeChance < 50) {
                cout << "You escaped!\n";
                break;
            } else {
                cout << "Escape failed! The" << enemy.name << " attacks you as you try to flee!\n";
                enemy.attackPlayer(player);
                if (!player.isAlive()) {
                    cout << "\nYou have been defeated!\n";
                    break;
                }
            }
        }  else {
            cout << "Invalid Choice. PLease choose 1 to fight or 2 to try to escape!\n";
        }


    }
}

class House {
public:
    int enemyChance;
    int weaponchance;
    int candyChance;

    House(int enemy_chance, int weaponchance, int candy_chance)
        : enemyChance(enemy_chance),
          weaponchance(weaponchance),
          candyChance(candy_chance) {
    }

    [[nodiscard]] int enemy_chance() const {
        return enemyChance;
    }

    void set_enemy_chance(int enemy_chance) {
        enemyChance = enemy_chance;
    }

    [[nodiscard]] int weaponchance1() const {
        return weaponchance;
    }

    void set_weaponchance(int weaponchance) {
        this->weaponchance = weaponchance;
    }

    [[nodiscard]] int candy_chance() const {
        return candyChance;
    }

    void set_candy_chance(int candy_chance) {
        candyChance = candy_chance;
    }

    void enterHouse(Player &player) {
        int encounterRool = rand() % 100;
        if (encounterRool < enemyChance) {
            //random Enemy Encounter

            Enemy enemy = selectEnemy();

            cout << "\nYou have encounterd " << enemy.name << " in the house!"<< endl;
            combat(player, enemy);




        } else if (encounterRool < enemyChance + weaponchance) {
            int weaponDamge = rand() % 10 + 10;
            cout << "You found a weapon in the house!\n";
            player.grabAndEquipWeapon("Bat" ,weaponDamge);


        } else if (encounterRool < enemyChance + candyChance + weaponchance) {
            int candyFound = rand() % 10 + 10;
            cout << "You have found candy! Trick or Treat!\n";
            player.grabCandy(candyFound);
        } else {
            cout << "The house is empty...\n";
        }

    }

    Enemy selectEnemy() {

        vector<Enemy> enemies = {
            Enemy("Witch",35,5,15),
            Enemy("Zombie",45,15,10),
            Enemy("Bat",20,5,5),
            Enemy("Ghost",40,5,15),
            Enemy("Skeleton", 30, 8, 10),
           Enemy("Frankenstein", 70, 15, 30)
        };
        // probabiles for each enemy, and assigning probabilities to each enemy
        int randomVal = rand() % 100;
        int cumulative = 0;
        vector<int> probabilities = {20,20,20,20,10,10};
        Enemy chosenEnemy = enemies[0];

        for (int i = 1; i < enemies.size(); i++) {
            cumulative += probabilities[i];
            if (randomVal < cumulative) {
                return enemies[i];
            }

        }
        return enemies.back();
    }


};


class Location {
public:
    string locationName;
    string specialEvent;
    vector<House> houses;

    Location(const string &location_name, const string &special_event, const vector<House> &houses)
        : locationName(location_name),
          specialEvent(special_event),
          houses(houses) {
    }

    [[nodiscard]] string location_name() const {
        return locationName;
    }

    void set_location_name(const string &location_name) {
        locationName = location_name;
    }

    [[nodiscard]] string special_event() const {
        return specialEvent;
    }

    void set_special_event(const string &special_event) {
        specialEvent = special_event;
    }

    [[nodiscard]] vector<House> houses1() const {
        return houses;
    }

    void set_houses(const vector<House> &houses) {
        this->houses = houses;
    }

    void vistLocation(Player &player) {
        cout << "You visted the location " << locationName << specialEvent << "!\n";
        cout <<"Choose a house to enter (1-" << houses.size() << "): ";
        int houseChoice;
        cin >> houseChoice;

        if (houseChoice >= 1 && houseChoice <= houses.size()) {
            houses[ houseChoice -1 ].enterHouse(player);
        } else {
            cout << "Invalid house choice!\n";
        }
    }





};


void treatOrTreatHalloweenGame() {
    // Halloween Adventure game
    cout << "Welcome to the Halloween Adventure Game!\n";
    cout << "Customize your Character!\n";
    srand(time(0));

    Player player = createCharacter();

    player.printPLayerStats();

    Location spookyStreet("Spooky Street", "A dimly lit street with creepy houses.", {House(30, 50, 20), House(20, 40, 40),House(20, 20, 60),House(20, 40, 40)});
    Location hauntedHollow("Haunted Hollow", "A narrow path surrounded by mist and shadows.", {House(25, 60, 15), House(15, 50, 35),House(15, 50, 35),House(50, 15, 35)});
    Location ghostlyGrove("Ghostly Grove", "A foggy forest filled with eerie sounds.", {House(40, 30, 30), House(20, 50, 30)});
    Location pumpkinPatch("Pumpkin Patch", "A field of jack-o-lanterns with flickering lights.", {House(30, 40, 30), House(25, 55, 20)});
    Location nightmareNook("Nightmare Nook", "A creepy town with abandoned houses.", {House(35, 50, 15), House(70, 10, 20)});


    vector<Location> locations = {spookyStreet, hauntedHollow, ghostlyGrove, pumpkinPatch, nightmareNook};


    //Main game loop

    while (true) {
        // Player actions
        cout << "Choose a location to visit:\n";
        for (int i = 0; i < locations.size(); i++) {
            cout << i + 1 << ". " << locations[i].locationName << endl;
        }

        int locationChoice;
        cin >> locationChoice;

        if (locationChoice >= 1 && locationChoice <= locations.size()) {
            locations[locationChoice - 1].vistLocation(player);
        } else {
            cout << "Invalid location choice.\n";

        }

        // Check win/lose conditions
        if (player.hasWon()) {
            cout << "\nCongratulations! You've collected 120 candies and won the Halloween adventure!\n";
            break;
        }

        if (!player.isAlive()) {
            cout << "\nGame Over! You didn't survive the Halloween adventure.\n";
            break;
        }
    }

}






//Car class

class Car {
private:
    string make;
    string model;
    int year;
    double mileage;


public:
    Car(const string &make, const string &model, int year, double mileage)
        : make(make),
          model(model),
          year(year),
          mileage(mileage) {
    }

    [[nodiscard]] string make1() const {
        return make;
    }

    void set_make(const string &make) {
        this->make = make;
    }

    [[nodiscard]] string model1() const {
        return model;
    }

    void set_model(const string &model) {
        this->model = model;
    }

    [[nodiscard]] int year1() const {
        return year;
    }

    void set_year(int year) {
        this->year = year;
    }

    [[nodiscard]] double mileage1() const {
        return mileage;
    }

    void set_mileage(double mileage) {
        this->mileage = mileage;
    }

    void showStats() {
        cout << "----- Car Stats -----" << endl;
        cout << "Make       : " << make << endl;
        cout << "Model        : " << model  << endl;
        cout << "Year     : " << year <<  endl;
        cout << "Mileage     : " << mileage <<  endl;
        cout << "------------------------" << endl;
    }



    ~Car() = default;
};


void createcar() {
    string make;
    string model;
    int year;
    double mileage;

    cout << "Let's build your car!\n";

    cout << "Enter the car make: ";
    cin >> make;

    cout << "Enter the car model: ";
    cin >> model;

    cout << "Enter the car year: ";
    cin >> year;

    cout << "Enter the car mileage: ";
    cin >> mileage;

    // Create an instance of the Car class with the provided input
    Car myCar(make, model, year, mileage);

    // Display the car information
    myCar.showStats();

    // Optionally, update the mileage and show it
    double new_mileage;
    cout << "\nEnter new mileage to update: ";
    cin >> new_mileage;
    myCar.set_mileage(new_mileage);

    cout << "\nUpdated Car Information:\n";
    myCar.showStats();

}



//Person Class

class Person {
protected:
    string name;
    int age;
    int weight;
    int height;
    char gender;
    string occupation;

public:
    Person(const string &name, int age, int weight, int height, char gender, const string &occupation)
        : name(name),
          age(age),
          weight(weight),
          height(height),
          gender(gender),
          occupation(occupation) {
    }

    [[nodiscard]] string name1() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] int age1() const {
        return age;
    }

    void set_age(int age) {
        this->age = age;
    }

    [[nodiscard]] int weight1() const {
        return weight;
    }

    void set_weight(int weight) {
        this->weight = weight;
    }

    [[nodiscard]] int height1() const {
        return height;
    }

    void set_height(int height) {
        this->height = height;
    }

    [[nodiscard]] char gender1() const {
        return gender;
    }

    void set_gender(char gender) {
        this->gender = gender;
    }

    [[nodiscard]] string occupation1() const {
        return occupation;
    }

    void set_occupation(const string &occupation) {
        this->occupation = occupation;
    }

    void showStats() const {
        cout << "----- Chracter Stats -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << " years" << endl;
        cout << "Weight     : " << weight << " lbs" << endl;
        cout << "Height     : " << height << " inches" << endl;
        cout << "Gender     : " << (gender == 'M' ? "Male" : "Female") << endl;
        cout << "Occupation : " << occupation << endl;
        cout << "------------------------" << endl;
    }


    void introduce() const {
        cout << "Hi my name is :" << name << endl;
        cout << "Nice to meet you!\n";
    }

    void talk(string text) const {
        cout << text << endl;
    }

    bool isOldEnoughToDrive() const {
        return (age >= 18);
    }

    void read() {
        cout << name << " is reading.\n";
    }

    void run() {
        cout << name << " is running.\n";
    }



    ~Person() = default;
};



void createPerson() {

    string name;
    int age;
    int weight;
    int height;
    char gender;
    string occupation;

    cout << "Let's create your Character!\n";
    cout << "Enter your name: \n";
    cin >> name;

    cout << "Enter your age: \n";
    cin >> age;

    cout << "Enter your weight(lbs): \n";
    cin >> weight;

    cout << "Enter your height(inches): \n";
    cin >> height;

    cout << "Enter your gender (M or F, capitalize): \n";
    cin >> gender;

    cout << "Enter your occupation: \n";
    cin >> occupation;

    Person person(name, age, weight, height, gender, occupation);

    person.showStats();

    person.read();
    person.run();


}



void tempConversion() {
    double temp;
    char unit;

    cout << "Enter your temperature (EX: 36.6C or 90.34F): \n";
    cin >> temp;

    cout << "Enter your unit: \n";
    cin >> unit;


    if (unit == 'C' || unit == 'c') {
        double farenheit = (temp * 9.0 /5.0) + 32;
        cout  << temp <<"°C is " << farenheit << "°F." << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = (temp - 32) * 5.0 / 9.0;
        cout << temp << "°F is " << celsius << "°C." << endl;
    } else {
        cout << "Invalid unit!" << endl;
    }
}

void numberGuessingGame() {
    srand(static_cast<unsigned int>(time(0)));
    int target = rand() % 100 + 1;// Random number between 1 and 100
    int guess;
    int attempts = 0;


    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << " I am  thinking of a number between 1 and 100. Try to guess it" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Too high! Try again."<< endl;
        } else if (guess < target) {
            cout << "Too low! Try again."<< endl;
        } else {
            cout << "congratulations! you guessed the number in " << attempts << " attempts." << endl;
        }


    } while  (guess != target);


}



char getComputerMove() {
    srand(time(NULL));
    int move = rand() % 3;

    if ( move == 0 ) {
        return 'p';

    } else if (move == 1) {
        return 'r';
    } else {
        return 's';
    }
}

int getResults(char playerMove,char computerMove) {
    if (playerMove == computerMove) {
        return 0; // a tie
    }


    //Condition for win and loss according to game rule
    // Win conditions
    if ((playerMove == 'r' && computerMove == 's') ||
        (playerMove == 's' && computerMove == 'p') ||
        (playerMove == 'p' && computerMove == 'r')) {
        return 1; // Player wins
        }
    return -1; // Computer wins
}

void rockPaperScissors() {
    cout << "Welcome to Rock paper Scissors\n";
    cout << "Get up to 3 points to Win!\n";
    cout << "Enter 'r' for Rock, 'p' for Paper, and 's' for Scissors\n";

    int playerScore = 0 , computerScore = 0;

    while (playerScore < 3 && computerScore < 3) {
        char playerMove;
        cout << "Your move: \n";
        cin >> playerMove;


        if (playerMove != 'r' && playerMove != 's' && playerMove != 'p') {
            cout << "Invalid input, enter 'p', 'r', or 's'\n";
            continue;
        }

        char computerMove = getComputerMove();
        int result = getResults(playerMove, computerMove);

        if (result == 1) {
            playerScore++;
            cout << "You won this round!\n";
        } else if (result == -1) {
            computerScore++;
            cout << "Computer won this round!\n";
        } else {
            cout << "It's a draw!\n";
        }

        cout << "Your move: " << playerMove << " | Computer's move: " << computerMove << "\n";
        cout << "Score - You: " << playerScore << " | Computer: " << computerScore << "\n\n";
    }

    // Final game result
    if (playerScore == 3) {
        cout << "Congratulations! You won the game!\n\n";
    } else {
        cout << "Computer wins the game. Better luck next time!\n\n";
    }




}



//tictactoe game


bool checktictactoeWin(string (&gameBoard)[3][3], const string& player) {

    for(int i = 0; i < 3; i++) {
        if((gameBoard[i][0] == player && gameBoard[i][1] == player && gameBoard[i][2] == player)  ||
            (gameBoard[0][i] == player && gameBoard[1][i] == player && gameBoard[2][i] == player)) {
            return true;
        }
    }

    //check diagnols
    if ((gameBoard[0][0] == player && gameBoard[1][1] == player && gameBoard[2][2] == player) ||
        (gameBoard[0][2] == player && gameBoard[1][1] == player && gameBoard[2][0] == player)
    ) {
        return true;
    }
    return false;

}

void displayTicTacToeBoard(const string (&gameBoard)[3][3]) {

    cout << "\n  0   1   2\n";
    cout << " +---+---+---+\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " | " << gameBoard[i][j];
        }
        cout << " |\n";
        cout << " +---+---+---+\n";
    }
}

void ticTacToeGame() {

    //Game Board
    string gameBoard[3][3] = {
        {" "," "," "},
        {" "," "," "},
        {" "," "," "}
    };

    string currentPlayer = "X";
    bool gameWon = false;
    int moves = 0;

    while(!gameWon && moves < 9) {
        displayTicTacToeBoard(gameBoard);

        int row, col;
        cout << "Player " << currentPlayer << ", choose a row and column (e.g., 0 1): ";
        cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || gameBoard[row][col] != " ") {
            cout << "Invalid move, please try again!\n";
            continue;
        }

        gameBoard[row][col] = currentPlayer;
        moves++;

        gameWon = checktictactoeWin(gameBoard, currentPlayer);
        if (gameWon) {
            displayTicTacToeBoard(gameBoard);
            cout << "Player " << currentPlayer << " wins!\n";
            return;
        }

        // Switch players
        currentPlayer = (currentPlayer == "X") ? "O" : "X";

    }

    if (!gameWon) {
        cout << "The game is a draw!\n";
    }


}

/////////////////////////////////////////////////////////
///
///
///



// Connect Four Game


void displayGameBoard(const string (&gameBoard)[6][7]) {
    cout << "\n  A   B   C   D   E   F   G \n";
    cout << " +---+---+---+---+---+---+---+\n";

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            cout << " | " << gameBoard[i][j];
        }
        cout <<" |\n";
        cout <<" +---+---+---+---+---+---+---+\n";
    }
}


void changeTurn(string (&gameBoard)[6][7], int col, string& turn  ) {
    for (int row = 5; row >= 0; row--)  {
        if (gameBoard[row][col] == " ") {
            gameBoard[row][col] = turn;
            break;
        }
    }
}
bool checkForWin(const string (&gameBoard)[6][7], const string& player) {
    //Check horizontal, vertical, and diagnal for 4 in a row
    // horizontal check

    for (int row = 0; row < 6 ; row++) {
        for (int col = 0; col < 4 ; col++) {
            if (gameBoard[row][col] == player &&
                gameBoard[row][col + 1] == player &&
                gameBoard[row][col + 2] == player &&
                gameBoard[row][col + 3] == player ) {
                return true;
                }
        }
    }


    //vertical check
    for (int col = 0; col < 7 ; col++) {
        for (int row = 0; row < 3 ; row++) {
            if (gameBoard[row][col] == player &&
                gameBoard[row + 1][col] == player &&
                gameBoard[row + 2][col] == player &&
                gameBoard[row + 3][col] == player) {
                return true;
                }
        }



    }


    // Diagnol check bottomleft to top-right
    for (int row = 3; row < 6 ; row++) {
        for (int col = 0; col < 7 ; col++) {
            if (gameBoard[row][col] == player &&
                gameBoard[row - 1][col + 1] == player &&
                gameBoard[row - 2][col + 2] == player &&
                gameBoard[row - 3][col + 3] == player
                ) {
                return true;
            }
        }
    }


    //Top-left to bottom-right
    for (int row = 0; row < 3 ; row++) {
        for(int col = 0; col < 4; col++) {
            if (gameBoard[row][col] == player &&
                gameBoard[row + 1][col + 1] == player &&
                gameBoard[row + 2][col + 2] == player &&
                gameBoard[row + 3][col + 3] == player

            ) {
                return true;
            }
        }
    }

    return false;
}


void connectFourGame() {
    vector<string> possibleLetters = {"A","B","C","D","E","F","G"};
    // create the game board
    int rows = 6;
    int cols = 7;


    string gameBoard[6][7] = {
        {" "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "},

    };

    string currentPlayer = "X";
    bool gameWon = false;
    int moves = 0;

    while (!gameWon && moves < 6*7) {
        displayGameBoard(gameBoard);
        int col;


        // Ask for column choice
        cout << "Player " << currentPlayer <<", choose a collumn (0-6): ";
        cin >> col;

        if (col < 0 || col >= 7 || gameBoard[0][col] != " ") {
            cout << "Invalid Collumn, PLase try again!\n";
            continue;
        }

        // Place piece in lowest available row
        changeTurn(gameBoard, col, currentPlayer);

        // Check if current player won
        gameWon = checkForWin(gameBoard, currentPlayer);
        if (gameWon) {
            displayGameBoard(gameBoard);
            cout << "Player " <<currentPlayer << " wins!\n";
            return;
        }

        //switch players
        currentPlayer = (currentPlayer == "X") ? "D" : "X";
    }

    if (!gameWon) {
        cout << "The game is a draw\n";
    }

}

////////////
///
///
///
///
///
///









double predict(double x,double slope, double intercept) {
    return slope * x + intercept;
}

// vector<double> inputVectorArrayForLinearRegression() {
//     vector<double> result;
//     cout << "Enter in your Array\n";
//     for (int i = 0; i < 5; i++) {
//         cin >> result[i];
//     }
//     return result;
// }



void calculateLinearRegression(vector<double> &x,  vector<double> &y,double &slope, double &intercept, double &xVal) {
    int N = x.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
    double predictedScore;

    cout << "Enter in your first Vector array\n";
    for(int i = 0; i < 5; ++i) {
        double temp;
        cin >>temp;
        x.push_back(temp);
    }

    cout << "Enter in your second Vector array\n";
    for (int i = 0; i < 5; ++i) {
        double temp;
        cin >> temp;
        y.push_back(temp);
    }

    cout << "Enter an X value for prediction\n:";
    cin >> xVal;

    //Find the different sums and calculate them
    for (int i = 0; i < N; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    slope = (N * sumXY - sumX * sumY) / (N * sumX2 - sumX * sumX);
    intercept = (sumY - slope * sumX) / N;

    cout << "Slope X: " << slope << endl;
    cout << "Intercept X: " << intercept << endl;

    predictedScore = predict(xVal,slope,intercept);
    cout << "Predicted Y value for X is: "<< xVal  << predictedScore << endl;

}

void calculateLinearRegressionHousePrices() {

    int N;
    vector<double> houseSizes,  housePrices;
    double slope, intercept,predictedPrice,sizeInput;
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;


    cout << "Enter the number of data points\n";
    cin >> N;

    if (N < 2) {
        cout << "You have at least 2 data points for linear regression\n";
        return;
    }


    cout << "Enter the houses (in square feet): \n";
     for (int i = 0; i < N; i++) {
         double temp;
         cin >> temp;
         houseSizes.push_back(temp);
     }

    cout << "Enter the corresponding house prices (USD):\n";
    for (int i = 0; i < N; i++) {
        double temp;
        cin >> temp;
        housePrices.push_back(temp);
    }

    cout << "Enter the house size for prediction\n";
    cin >> sizeInput;


    // Calculate sums for regression

    for (int i = 0; i < N; i++) {
        sumX += houseSizes[i];
        sumY += housePrices[i];
        sumXY += houseSizes[i] * housePrices[i];
        sumX2 += houseSizes[i] * houseSizes[i];
    }


    slope = (N * sumXY - sumX * sumY) / (N * sumX2 - sumX * sumX);
    intercept = (sumY - slope * sumX) / N;


    cout << "Slope X: " << slope << endl;
    cout << "Intercept X: " << intercept << endl;

    predictedPrice = predict(sizeInput,slope,intercept);
    cout << "Predicted price for house size: "<< sizeInput  << " is " << predictedPrice << endl;

}


void calculateLinearRegressionExamScore() {
    vector<double> studyHours, examScores;
    int N;
    double slope, intercept,predictedScore,sizeInput;
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    cout << "Enter the number of data points\n";
    cin >> N;

    if (N < 2) {
        cout << "You have at least 2 data points for linear regression\n";
        return;
    }

    cout << "Enter the Study hours (Based on how many data point there are): \n";
    for (int i = 0; i < N; i++) {
        double temp;
        cin >> temp;
        studyHours.push_back(temp);
    }

    cout << "Enter the corresponding exam scores:\n";
    for (int i = 0; i < N; i++) {
        double temp;
        cin >> temp;
        examScores.push_back(temp);
    }


    cout << "Enter the house size for prediction\n";
    cin >> sizeInput;

    // Calculate sums for regression

    for (int i = 0; i < N; i++) {
        sumX += studyHours[i];
        sumY += examScores[i];
        sumXY += studyHours[i] * examScores[i];
        sumX2 += studyHours[i] * studyHours[i];
    }


    slope = (N * sumXY - sumX * sumY) / (N * sumX2 - sumX * sumX);
    intercept = (sumY - slope * sumX) / N;


    cout << "Slope X: " << slope << endl;
    cout << "Intercept X: " << intercept << endl;

    predictedScore = predict(sizeInput,slope,intercept);
    cout << "Predicted exam score for: " << sizeInput << " study hours" << predictedScore << endl;

}

void areaOfTriangle()  {

    double base,height,Area;
    cout << "Enter the base (Length)\n";
    cin >> base;
    cout << "Enter the height \n";
    cin >> height;

    Area = (base * height )/ 2;

    cout << "Area of the triangle is: " << Area << endl;

}

void isvalidPalindrome() {
    string cleaned,rev;
    string input;

    cout << "Please enter a string\n";
    cout << "NOTE: A palindrome is a string that is the same in its reversed state\n";
    cin.ignore();
    getline(cin, input);

    //Empty string


    // Clean up the string and out the string in upper case

    for (char c: input) {
        if (isalnum(c)) {
            cleaned += toupper(c);
        }
    }

    //Reversing the string to see if it is the same as the original
    for (int  i = cleaned.size() - 1; i >= 0; i--) {
        rev += cleaned.at(i);
    }

    if (cleaned == rev) {
        cout << input  << " is a palindrome\n";
    } else {
        cout  << input << " is not a palindrome\n";
    }

}


void findMinAndMaxOfArray() {
    vector<double> inputVector;
    double smallest,largest;


    cout << "Enter your Array: \n";

    for (int i = 0; i < 5; i++) {
        double temp;
        cin >> temp;
        inputVector.push_back(temp);

    }

    smallest = inputVector.at(0);
    largest = inputVector.at(0);

    for (double n : inputVector) {
        if (n < smallest) {
            smallest = n;
        }
        if (n > largest) {
            largest = n;
        }
    }

    cout <<"Smallest Number is: " << smallest << endl;
    cout <<"Largest Number is: " << largest << endl;

}

// Recursive functions

double factorialOfaNumber(double input) {

    if (input == 1 || input == 0) {
        return 1; //
    } else {
        //Recursive calls
        return input * factorialOfaNumber(input-1);
    }
}

double fibbonacciSequence(double n) {
    if (n <= 1) {
        return n;
    }
    return fibbonacciSequence(n - 1) + fibbonacciSequence(n - 2);
}


void fibonacciRecursvie() {
    int terms;
    cout << "Enter the number of terms\n";
    cin >> terms;


    if (terms <= 0 ) {
        cout << "Not a valid term. Please enter a postive number\n";
    }


    cout << "Fibonnaci seqeunce up to " << terms << endl;
    for (int i = 0; i < terms; ++i) {
        cout << fibbonacciSequence(i) << endl;
    }
    cout<< endl;
}


void sumofDigits() {

    int num;

    cout << "Enter you Number: \n";
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum of digits is: " << sum << endl;

}


double powerOfNumber(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * powerOfNumber(base, exponent - 1);
}

void powerRecursive() {
    double base;
    int exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << base << " raised to the power of " << exponent << " is: " << powerOfNumber(base, exponent) << endl;
}


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void gcdRecursive() {
    int a, b;
    cout << "Enter two numbers to find the GCD: ";
    cin >> a >> b;
    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
}




// Pointers Exercises

// Basic Pointers

void basicPointers() {
    int num;
    int *ptr = &num;

    cout << "Enter your number to be a pointer: \n";
    cin >> num;

    cout << "Original Value of Number: " << num << endl;
    cout << "Memory Address of Number: " << &num << endl;
    cout << "Pointer Value: " << ptr << endl;
    cout << "Value pointed by pointer: " << *ptr << endl;
}


//Reverse an array with pointers

void reversePointerarray() {
    int arrOne[5];
    int *ptr = arrOne;

    int *start = arrOne;
    int *end = arrOne + 4;// last element



    cout << "Enter in the Pointer Array Elements: \n";

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": "  << endl;
        cin >> *(ptr + i);
    }

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Display the reversed pointer array
    cout << "Reversed Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arrOne[i] << " ";
    }
cout << endl;


}


void sumAndAverageOfArray() {
    int arrOne[5];
    int *ptr = arrOne;
    int sum = 0;


    cout <<"Enter 5 numbers for the array\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i  << ": ";
        cin >> *(ptr + i);
    }

    // Calculate the sum
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    //calculate the average
    double average = static_cast<double>(sum) / 5.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

}


//Print memeory addreses or arrays

void printArrayMemeoryAddresses() {
    int arr[5];
    int *ptr = arr;

    // Input elements into the array

    cout << "Enter 5 elements for the array: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    cout << "\n memory addresses of Array Elements: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Address of array [" << i << "]: " << (ptr + i) << endl;
    }


    //Print the values of the array using pointers
    cout << "\nValues of the Array Using Pointer Arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "value at " << (ptr + i) << ": " << *(ptr + i) << endl;
    }

}

void findThheMinAndMaxWithPointers() {
    int arrOne[5];
    int *ptr = arrOne;

    cout << "Enter 5 elements for the array: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }


    int min =  *ptr;
    int max=  *ptr;

    for (int i = 0; i < 5; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }

        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }


    cout << "Minimum value is: " << min << endl;
    cout << "Maximum value is: " << max << endl;
}


void makeThreeByThreeMatrixPointers() {
    // Step 1: Dynamically allocate a 3x3 matrix using pointers
    int rows = 3, cols = 3;
    int** matrix = new int*[rows]; // Array of pointers for rows

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols]; // Allocate each row
    }

    // Step 2: Input values into the matrix
    cout << "Enter elements for the 3x3 matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Step 3: Display the matrix
    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Step 4: Deallocate memory to avoid leaks
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i]; // Delete each row
    }
    delete[] matrix; // Delete the array of pointers
}




////Virtual Medical
///Assisstant
///
///
///
///
///
///




class Patient {
protected:
    int SSN;
    string name;
    int age;
    string gender;
    int Height; //inches
    int Weight;// lbs
    int HoursofSleep;
    int activityLevel; // 1. sedetary, 2.active, etc.
    string Diet;
    string habits;


public:
    Patient(int ssn, const string &name, int age, const string &gender, int height, int weight, int hoursof_sleep,
        int activity_level, const string &diet, const string &habits)
        : SSN(ssn),
          name(name),
          age(age),
          gender(gender),
          Height(height),
          Weight(weight),
          HoursofSleep(hoursof_sleep),
          activityLevel(activity_level),
          Diet(diet),
          habits(habits) {
    }


    [[nodiscard]] int ssn() const {
        return SSN;
    }

    void set_ssn(int ssn) {
        SSN = ssn;
    }

    [[nodiscard]] string name1() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] int age1() const {
        return age;
    }

    void set_age(int age) {
        this->age = age;
    }

    [[nodiscard]] string gender1() const {
        return gender;
    }

    void set_gender(const string &gender) {
        this->gender = gender;
    }

    [[nodiscard]] int height() const {
        return Height;
    }

    void set_height(int height) {
        Height = height;
    }

    [[nodiscard]] int weight() const {
        return Weight;
    }

    void set_weight(int weight) {
        Weight = weight;
    }

    [[nodiscard]] int hoursof_sleep() const {
        return HoursofSleep;
    }

    void set_hoursof_sleep(int hoursof_sleep) {
        HoursofSleep = hoursof_sleep;
    }

    [[nodiscard]] int activity_level() const {
        return activityLevel;
    }

    void set_activity_level(int activity_level) {
        activityLevel = activity_level;
    }

    [[nodiscard]] string diet() const {
        return Diet;
    }

    void set_diet(const string &diet) {
        Diet = diet;
    }

    [[nodiscard]] string habits1() const {
        return habits;
    }

    void set_habits(const string &habits) {
        this->habits = habits;
    }


    double calculateBMI() const {
        return (Weight * 703) / (Height * Height);
    }


    void displayHealthEvaluation() const {
        double bmi = calculateBMI();
        cout << "Your BMI is: " << bmi << ". ";
        if (bmi < 18.5) {
            cout << "You are underweight." << endl;
        } else if (bmi >= 18.5 && bmi < 24.9) {
            cout << "You have a normal weight." << endl;
        } else if (bmi >= 25 && bmi < 29.9) {
            cout << "You are overweight." << endl;
        } else {
            cout << "You are obese." << endl;
        }
    }




    int calculateBMR() const {

        double weightInKg = Weight * 0.453592; // Convert lbs to kg
        double heightInCm = Height * 2.54;    // Convert inches to cm

        if (gender == "male" || gender == "Male") {

            return static_cast<int>(88.362 + (13.397 * weightInKg) + (4.799 * heightInCm)-(5.677 * age));

        } else if (gender == "female" || gender == "Female") {
            return static_cast<int>(447.593 + (9.247 * weightInKg) + (3.098 * heightInCm)-(4.330 * age));
        } else {
            return 0; // invalid gender
        }
    }

    double calculateDailyCalories() const {
        double bmr = calculateBMR();
        switch (activityLevel) {
            case 1:{
                return bmr * 1.2; // Sedentary
                }

            case 2:{

                return bmr * 1.375; // Lightly active
                }
            case 3: {
                return bmr * 1.55;
            } // Moderately active

            case 4: {
                return bmr * 1.725;
            }// Very active
            default:
                return bmr;
        }
    }



    void displayHealthRecommendations() const {

        double bmi = calculateBMI();
        cout << "\nHealth Recommendations:\n";



        // Exercise Suggestions


        cout << "- Exercise: ";
        if (bmi >= 25) {
            cout << "Focus on aerobic activities like walking, swimming, or cycling to help manage weight.\n";
        } else if (bmi < 18.5) {
            cout << "Focus on strength-building exercises to improve muscle mass.\n";
        } else {
            cout << "Maintain a balanced routine with strength, flexibility, and aerobic exercises.\n";
        }




        // Sleep Recommendations
        if (HoursofSleep < 7) {
            cout << "- Sleep: Aim for at least 7-8 hours of sleep per night to maintain optimal health.\n";
        } else {
            cout << "- Sleep: Your sleep habits are excellent. Keep it up!\n";
        }

        // Lifestyle Suggestions (String splitting)
        if (habits.find("smoking") != string::npos) {
            cout << "- Lifestyle: Consider quitting smoking to improve your overall health.\n";
        }
        if (habits.find("alcohol") != string::npos) {
            cout << "- Lifestyle: Reduce alcohol consumption for better health outcomes.\n";
        }

        if (habits.find("vaping") != string::npos) {
            cout << "Lifestyle: Reduce Vaping for better health outcomes.\n";
        }

        if (habits.find("exercise") != string::npos || habits.find("gym") != string::npos) {
            cout << "Lifestyle: Keep going to the gym and focus on gradual process overtime. \n";
        }


    }

    void displayNutritionPlan() const {

        double bmi = calculateBMI();
        double dailyCalories = calculateDailyCalories();

        double carbs = dailyCalories * 0.5 / 4; // 50% carbs, 4 kcal per gram

        double protein = dailyCalories * 0.2 / 4; // 20% protein, 4 kcal per gram

        double fats = dailyCalories * 0.3 / 9; // 30% fats, 9 kcal per gram


        cout << "\nNutritional Plan:\n";
        cout << "- Daily Calorie Needs: " << dailyCalories << " kcal\n";
        cout << "- Macronutrient Breakdown:\n";
        cout << "  * Carbohydrates: " << carbs << " grams\n";
        cout << "  * Protein: " << protein << " grams\n";
        cout << "  * Fats: " << fats << " grams\n";

        cout << "- Suggested Foods:\n";
        if (bmi < 18.5) {
            cout << "  * Increase caloric intake with nutrient-dense foods such as:\n";
            cout << "    - Whole grains, nut butters, avocados, dried fruits, and healthy oils.\n";
            cout << "    - Protein: Eggs, fatty fish, and lean meats.\n";
        } else if (bmi >= 18.5 && calculateBMI() < 24.9) {
            // Normal weight
            cout << "  * Maintain a balanced diet with:\n";
            cout << "    - Complex carbs: Brown rice, quinoa, oats.\n";
            cout << "    - Protein: Chicken, fish, tofu, lentils.\n";
            cout << "    - Healthy fats: Olive oil, nuts, seeds.\n";
        } else if (bmi >= 25 && calculateBMI() < 30) {  // Overweight
            cout << "  * Focus on weight management by:\n";
            cout << "    - Reducing processed carbs and increasing fiber intake.\n";
            cout << "    - Lean proteins: Grilled chicken, turkey, tofu, and legumes.\n";
            cout << "    - Healthy snacks: Veggies with hummus or low-fat yogurt.\n";
        } else {  // Obese
            cout << "  * Aim for gradual weight loss with:\n";
            cout << "    - Low-calorie, high-nutrient foods like leafy greens and non-starchy vegetables.\n";
            cout << "    - Lean proteins: Fish, skinless chicken, plant-based sources.\n";
            cout << "    - Avoid sugary drinks and refined carbs.\n";
        }


        // Example Meal Plan Based on BMI and Activity
        cout << "\n- Sample Meal Plan:\n";
        if (calculateBMI() < 18.5) {  // Underweight
            cout << "  * Breakfast: Smoothie with banana, peanut butter, and oats.\n";
            cout << "  * Lunch: Grilled chicken with quinoa and roasted vegetables.\n";
            cout << "  * Dinner: Salmon with sweet potatoes and avocado salad.\n";
            cout << "  * Snack: Trail mix with nuts and dried fruits.\n";
        } else if (calculateBMI() >= 25) {  // Overweight/Obese
            cout << "  * Breakfast: Scrambled eggs with spinach and a slice of whole-grain toast.\n";
            cout << "  * Lunch: Salad with grilled chicken, mixed greens, and olive oil dressing.\n";
            cout << "  * Dinner: Baked fish with steamed broccoli and quinoa.\n";
            cout << "  * Snack: Carrot sticks with hummus.\n";
        } else {  // Normal weight
            cout << "  * Breakfast: Greek yogurt with fresh fruits and granola.\n";
            cout << "  * Lunch: Turkey sandwich on whole-grain bread with a side of salad.\n";
            cout << "  * Dinner: Stir-fried tofu with brown rice and vegetables.\n";
            cout << "  * Snack: Fresh fruit or a handful of almonds.\n";
        }





        cout << "\nAdditional Food Based on Diet\n";
        if (Diet.find("vegetarian") != string::npos || Diet.find("vegetarian") != string::npos) {
            cout << "  * Protein: Lentils, beans, tofu, quinoa\n";
        } else if (Diet == "vegan") {
            cout << "  * Protein: Tofu, tempeh, chickpeas, nuts\n";
        } else {
            cout << "  * Protein: Chicken, fish, eggs, lean beef\n";
        }
        cout << "  * Carbs: Brown rice, quinoa, whole-grain bread\n";
        cout << "  * Fats: Avocado, olive oil, nuts\n";

        cout << "- Sample Meal Plan:\n";
        cout << "  * Breakfast: Oatmeal with fruits and nuts and avocado on the side\n";
        cout << "  * Lunch: Grilled chicken salad with olive oil dressing and optional croutons\n";
        cout << "  * Dinner: Steamed vegetables with quinoa and tofu with soy sauce\n";
        cout << "  * Snack: Greek yogurt with honey and almonds\n";
    }



    virtual ~Patient() = default;
};



// "Database" of patients
vector<Patient> patientsDatabase;


Patient* collectPatientInformation() {
    string name, gender, diet, habits;
    int SSN, age, height, weight, hoursofSleep, activityLevel;

    int choice;

    cout << "Welcome to Prime Medical!" << endl;

    cout << "Are you a new Patient?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Please enter your name: " << endl;
            cin >> name;

            cout << "Enter the last 4 of your SSN: " << endl;
            cin >> SSN;

            cout << "Please enter your age: \n";
            cin >> age;

            cout << "Please enter your gender (Male or Female): \n";
            cin >> gender;

            cout << "Please enter your height (in inches, between 24 and 100): \n";
            cin >> height;
            while (cin.fail() || height < 24 || height > 108) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid height. Please enter a realistic value (24 to 108 inches): ";
                cin >> height;
            }

            cout << "Please enter your weight (in lbs, between 50 and 1000): \n";
            cin >> weight;
            while (cin.fail() || weight < 50 || weight > 1000) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid weight. Please enter a realistic value (50 to 1000 lbs): ";
                cin >> weight;
            }

            cout << "How many hours do you sleep each night?: \n";
            cin >> hoursofSleep;

            cout << "Please Enter your activity level (1: Sedentary, 2: Lightly active, 3: Moderately active, 4: Very active)\n";
            cin >> activityLevel;

            cout << "Tell me about your diet (vegetarian, vegan, low-carb, etc): " << endl;
            cin.ignore();
            getline(cin, diet);

            // Ask about health habits
            cout << "Do you have any health habits you'd like to share? (e.g., smoking, alcohol, etc.): " << endl;
            cin >> habits;


            patientsDatabase.emplace_back(SSN, name, age, gender, height, weight, hoursofSleep, activityLevel, diet, habits);
            return &patientsDatabase.back();
        }
        case 2: {
            cout << "Enter your SSN: " << endl;
            cin >> SSN;
            cout << "Enter your name: " << endl;
            cin >> name;

            for (Patient& patient : patientsDatabase) {
                if (patient.ssn() == SSN && patient.name1() == name) {
                    cout << "Welcome back, " << patient.name1() << "!" << endl;
                    return &patient;
                }
            }

            cout << "No patient found with SSN: " << SSN << " and name: " << name << ".\n";
            return nullptr;
        }
        default:
            cout << "Invalid choice. Please enter 1 for new patient or 2 for existing patient.\n";
            break;
    }

    return nullptr; // Ensure a return value in all cases
}




void trigonometricCalculations() {
    double angle, radians;
    cout << "Enter an angle in degrees: ";
    cin >> angle;
    radians = angle * M_PI / 180.0; // Convert degrees to radians

    cout << "Trigonometric Results:" << endl;
    cout << "sin(" << angle << ") = " << sin(radians) << endl;
    cout << "cos(" <<  angle << ") = " << cos(radians) << endl;
    cout << "tan(" <<  angle << ") = " << tan(radians) << endl;
}

void createDynamicMatrixTranspose() {
    int n;
    cout << "Enter the size of the NxN matrix: ";
    cin >> n;

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    // Fill the matrix with random numbers
    cout << "Generated Matrix:" << endl;
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the matrix
    cout << "\nTranspose of the Matrix:" << endl;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}









void basicOperationsMenu() {
    char input;

    while(true) {
        cout << "\nChoose an Operation, press 'B' to go back to a previous menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Multiplication Table of 2\n";
        cout << "6. Switch two Numbers\n";

        cin >> input;

        if (input == 'b' || input == 'B') {
            break;
        }



        switch(input) {
            case '1': {
                int a,b;
                cout << "Enter your first number: \n";
                cin >> a;

                cout << "Enter your second number: \n";
                cin >> b;

                cout << "Result: " << a + b << endl;
                break;

            }
            case '2': {
                int num1,num2;
                cout << "Enter your first number: \n";
                cin >> num1;

                cout << "Enter your second number: \n";
                cin >> num2;

                cout << "Result: " << num1 - num2 << endl;
                break;

            }
            case '3': {
                int num1,num2;
                cout << "Enter your first number: \n";
                cin >> num1;

                cout << "Enter your second number: \n";
                cin >> num2;


                cout << "Result: " << num1 * num2 << endl;
                break;


            }
            case '4': {
                double num1,num2;
                cout << "Enter your first number: \n";
                cin >> num1;

                cout << "Enter your second number: \n";
                cin >> num2;

                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is undefined.\n";
                break;

            }
            case '5': {
                mutiplicationTableof2();
                break;

            }
            case '6': {
                float num1;
                float num2;
                switchTwoNumbers(num1, num2);
                break;
            }
            default:"Invalid Input! enter a number between 1 to 6\n";
        }

    }

}

void numericCalculationsMenu() {
    int input;

    while(true) {
        cout << "\nChoose an Operation, type 99 to go back to a previous menu:\n";
        cout << "1. Calculate Average\n";
        cout << "2. Check if Numbers are Even or Odd\n";
        cout << "3. Check if Numbers are positive, negative, or zero\n";
        cout << "4. Calculate the square root\n";
        cout << "5. Calculate Absolute Power\n";
        cout << "6. Calculate Perimeter and Area of a square\n";
        cout << "7. Calculate Pythagorean theorem for two numbers\n";
        cout << "8. Area of a Triangle\n";
        cout << "9.Fibonacci Sequence\n";
        cout << "10. Sum of Digits\n";
        cin >> input;

        if (input == 99) {
            break;
        }


        switch(input) {
            case 1: {
                int a,b;
                cout << "Enter your first number: \n";
                cin >> a;
                cout << "Enter your second number: \n";
                cin >> b;
                cout << "Average: " << (a + b) / 2 << endl;
                break;
            }

            case 2: {
                float a,b;
                checkEvenOrOdd(a, b);
                break;
            }

            case 3: {
                float num1,num2;
                checkPositiveNegativeOrZero(num1,num2);
                break;
            }

            case 4: {
                float num1,num2;
                calculateSquareRoot(num1,num2);
                break;
            }


            case 5: {
                float num1,num2;
                calculateAbsoulutePower(num1,num2);
                break;
            }

            case 6: {
                float sideLength;
                cout << "Enter the length of the square: ";
                cin >> sideLength;
                calculatePerimeterandSquare(sideLength);
                break;
            }

            case 7: {

                float sideA;
                float sideB;

                cout << "Enter your side lengths:\n";
                cin >> sideA;
                cin >> sideB;
                solveForPythagoreumTheorm(sideA,sideB);
                break;

            }

            case 8: {
                areaOfTriangle();
                break;
            }

            case 9: {
                fibonacciRecursvie();
                break;

            }

            case 10: {
                sumofDigits();
            }
            default:"Invalid Input! Enter a number from 1 to 7\n";
        }
    }

}

void numericAnalysisMenu() {
    char input;


    while(true) {
        cout << "\nChoose an Operation, press 'B' to go back to a previous menu:\n";
        cout << "1. Find the smallest of 3 numbers\n";
        cout << "2. Find the largest of 3 numbers\n";
        cout << "3. Find the Sum of Squares\n";
        cout << "4. find the largest and smallest of 3 numbers\n";
        cout << "5. Find the greater of two numbers\n";
        cout << "6. See if a string is a palindrome\n";
        cout << "7. trigonometric Calculations\n";
        cin >> input;

        if (input == 'b' || input == 'B') {
            break;
        }




        switch(input) {
            case '1': {

                float number1;
                float number2;
                float number3;
                float minResult;

                cout << "Enter the first number:\n ";
                cin >> number1;
                cout << "Enter the second number:\n ";
                cin >> number2;
                cout << "Enter the third number:\n ";
                cin >> number3;

                minResult = smallestNumber(number1, number2, number3);
                cout << "Smallest number is " << minResult << endl;

                break;
            }


            case '2': {
                float lnumber1;
                float lnumber2;
                float lnumber3;
                float maxResult;

                cout << "Enter the first number:\n ";
                cin >> lnumber1;
                cout << "Enter the second number:\n ";
                cin >> lnumber2;
                cout << "Enter the third number:\n ";
                cin >> lnumber3;

                maxResult = largestNumber(lnumber1, lnumber2, lnumber3);
                cout << "Largest number is " << maxResult << endl;

                break;
            }



            case '3': {

                float sumOfSquares;
                float number1,number2,number3;

                cout << "Enter the first number: ";
                cin >> number1;

                cout << "Enter the second number: ";
                cin >> number2;

                sumOfSquares = (number1 * number2) + (number2 * number3);
                cout << "Sum of Squares is " << sumOfSquares << endl;



                break;
            }


            case '4': {
                float largest, smallest;
                float number1,number2,number3;
                cout << "Enter three numbers: ";
                cin >> number1 >> number2 >> number3;
                // Find largest number
                if (number1 >= number2 && number1 >= number3) {
                    largest = number1;
                } else if (number2 >= number1 && number2 >= number3) {
                    largest = number2;
                } else {
                    largest = number3;
                }
                // Find smallest number
                if (number1 <= number2 && number1 <= number3) {
                    smallest = number1;
                } else if (number2 <= number1 && number2 <= number3) {
                    smallest = number2;
                } else {
                    smallest = number3;
                }
                // Output results
                cout << "The largest number is: " << largest << endl;
                cout << "The smallest number is: " << smallest << endl;


                break;
            }


            case '5': {
                float number1;
                float number2;
                greaterOfTwoNumbers(number1, number2);
                break;
            }

            case '6': {
               isvalidPalindrome();
                break;
            }

            case '7': {
                trigonometricCalculations();
            }



            default: {
                cout << "Invalid input! Enter a number from 1 to 5\n";
            }
        }
    }
}

void complexCalculationsMenu() {
    int input;

    while(true) {
        cout << "\nChoose an Operation, type 99 to go back to a previous menu:\n";
        cout << "1. Currency Converter (Euros and USD)\n";
        cout << "2. Measurement Converter (Kilometers and Meters)\n";
        cout << "3. find the sum of the first 100 integers\n";
        cout << "4. find the sum of the first 100 even integers\n";
        cout << "5. Solve the first degree equation\n";
        cout << "6. Solve the second degree(Quadratic) equation\n";
        cout << "7. solve Sum of N Numbers\n";
        cout << "8. solve Sum of N Even Numbers\n";
        cout << "9. Factorial of a number\n";
        cout << "10. Temperature Conversion\n";
        cout << "11. Greatest Common Denominator\n";
        cout << "12. Powers of a number\n";
        cin >> input;

        if (input == 99) {
            break;
        }

    switch(input) {
        case 1: {
            float amount, exchangeRate;
            int direction;

            cout << "Enter the amount you want to convert: ";
            cin >> amount;

            cout << "Enter the current exchange rate (1 dollar to euro): ";
            cin >> exchangeRate;

            cout << "Choose the direction of conversion:\n";
            cout << "1. Dollars to Euros\n";
            cout << "2. Euros to Dollars\n";
            cin >> direction;

            // Call the currency conversion function
            float result = currencyConverter(amount, exchangeRate, direction);

            // Display result
            if (direction == 1) {
                cout << amount << " dollars is " << result << " euros.\n";
            } else if (direction == 2) {
                cout << amount << " euros is " << result << " dollars.\n";
            }

            break;
        }

	    case 2: {
            int choice;
            do {
                cout << "Choose a conversion option:\n";
                cout << "1. Convert kilometers to meters\n";
                cout << "2. Convert meters to kilometers\n";
                cout << "3. Exit\n";
                cout << "Enter your choice (1-3): ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        convertKilometersToMeters();
                    break;
                    case 2:
                        convertMetersToKilometers();
                    break;
                    case 3:
                        cout << "Exiting program." << endl;
                    break;
                    default:
                        cout << "Invalid choice! Please select 1, 2, or 3." << endl;
                }
            } while (choice != 3);
            break;

        }

	    case 3: {
            int n = 100;
            int sum = (n * (n +1)) / 2;
            cout << "The Sum of the First 100 integers is: " << sum << endl;
            break;
        }

	    case 4: {
            int n =100;
            int sum = n *(n + 1);
            cout << "The sum of the first 100 even integers is: " << sum << endl;
            break;
        }

        case 5: {
            float a,b;

            cout<< "First degree equation: x = -b/a\n";
            cout<< "Choose a = \n";
            cin >> a;

            cout << "Choose b = \n";
            cin >> b;

            float answer = solveFirstDegree(a,b);
            cout << "Your Answer is : " << answer << endl;


            break;
        }

        case 6: {

            float a,b,c;

            cout<< "Second degree equation: x = (-b +- sqrt(b^2 -4ac)) /2a\n";
            cout<< "Choose a = \n";
            cin >> a;

            cout << "Choose b = \n";
            cin >> b;

            cout << "Choose c = \n";
            cin >> c;

            solveQuadraticEquation(a,b,c);


            break;
        }

        case 7: {
            sumofFirstNIntegers();
            break;
        }

        case 8: {
            sumofFirstNEvenIntegers();
            break;
        }

        case 9: {
            double input;
            cout << "Enter your Number: \n";
            cin >> input;

            if (input < 0) {
                cout << "Factorial is not defined for negative numbers.\n";
            } else {
                cout << "Factorial of " << input << factorialOfaNumber(input) << endl;
            }
        }
        case 10: {
            tempConversion();
        }

        default:"Invalid input! Please select 1 to 9.\n" ;
        }
    }
}


void wordScrambleGame() {
    vector<string> words = {"programming", "pointer", "array", "matrix", "recursion"};
    string word, scrambledWord, userGuess;

    srand(time(0));
    word = words[rand() % words.size()];
    scrambledWord = word;
    random_shuffle(scrambledWord.begin(), scrambledWord.end());

    cout << "Unscramble the word: " << scrambledWord << endl;
    cout << "Your guess: ";
    cin >> userGuess;

    if (userGuess == word) {
        cout << "Correct! The word is: " << word << endl;
    } else {
        cout << "Wrong! The correct word was: " << word << endl;
    }
}



void gamesMenu() {
    int input;

    while(true) {
        cout << "Choose an Operation, type 99 to go back to a previous menu:\n";
        cout << "1. 5 Question Game\n";
        cout << "2. Make a T-shirt game\n";
        cout << "3. Rock Paper Scissors\n";
        cout << "4. Number Guessing game\n";
        cout << "5. Trick or Treat: Halloween Adventure Game\n";
        cout << "6. Tic-Tac-Toe\n";
        cout << "7. Connect Four\n";
        cout << "8. Word Scramble\n";
        cin >> input;

        if (input == 99) {
            break;
        }

        switch (input) {

            case 1 : {
                fiveQuestionGame();
                break;
            }

            case 2: {
                tShirtPersonalizationGame();
                break;
            }

            case 3: {
                rockPaperScissors();
                break;
            }

            case 4: {
                numberGuessingGame();
            }
            case 5: {
                treatOrTreatHalloweenGame();
            }
            case 6 : {
                ticTacToeGame();
            }
            case 7: {
                connectFourGame();
            }
            case 8: {
                wordScrambleGame();
            }
            default:"Invalid input! Please select a number from 1-7.\n";
        }
    }
}

void statisticalAnalysis() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate Median
    sort(arr, arr + n);
    double median = (n % 2 == 0) ? (arr[n / 2 - 1] + arr[n / 2]) / 2.0 : arr[n / 2];

    // Calculate Mode
    int mode = arr[0], maxCount = 0, currentCount = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = arr[i - 1];
            }
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        mode = arr[n - 1];
    }

    // Calculate Standard Deviation
    double mean = accumulate(arr, arr + n, 0.0) / n;
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;
    double stdDev = sqrt(variance);

    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
    cout << "Standard Deviation: " << stdDev << endl;

    delete[] arr;
}


void arraysAndVectorsMenu() {
    int input;

    while (true) {
        cout << "\nChoose an Operation, or type 99 to go back to a previous menu:\n";
        cout << "1. Create an Array of 5 integers and add them\n";
        cout << "2. Put Two Arrays into another one\n";
        cout << "3. Multiply and Divide two arrays\n";
        cout << "4. Add, Subtract, Multiply and Divide two arrays\n";
        cout << "5. Multiply two Vectors\n";
        cout << "6. Find Largest and smallest in an Array/Vector\n";
        cout << "7. Statistical Analysis of an Array\n";
        cin >> input;

        if (input == 99) {
            break;
        }

        switch (input) {
            case 1: {
                int arr[5];
                int sum;
                cout << "Enter 5 numbers for your Array\n";
                sum = createYourArrayAndAddElements(arr);
                cout << "The Sum of the elements is: " << sum << endl;
                break;
            }
            case 2: {
                int a1[5];
                int b1[5];
                int c1[10];
                createArraysandAddInThird(a1, b1, c1);
                break;
            }

            case 3: {
                int arr[5];
                int arr2[5];
                int arrMul[5];
                float arrDiv[5];
                multiplyAndDivideArrays(arr, arr2, arrMul, arrDiv);
                break;
            }

            case 4: {
                float arr[5];
                float arr2[5];
                float result[5];
                basicOperationsWithTwoArrays(arr, arr2, result);
                break;
            }

            case 5: {
                vector<float> arr;
                vector<float> result;
                multiplyArrayByNumber(arr, result);
                break;
            }

            case 6: {
                findMinAndMaxOfArray();
                break;
            }
            case 7: {
                statisticalAnalysis();
            }

            default: {
                cout << "Invalid input! Please select an operation from 1 to 6!\n";
                break;
            }
        }
    }
}

void dynamicMatrixOperations() {
    int n;
    cout << "Enter the size of the NxN matrices: ";
    cin >> n;

    int** matrix1 = new int*[n];
    int** matrix2 = new int*[n];
    int** result = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
        result[i] = new int[n];
    }

    // Input matrices
    cout << "Enter elements for Matrix 1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for Matrix 2:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add matrices
    cout << "\nMatrix Addition Result:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
}


void sumOfElementsIn2DArray() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** arr = new int*[rows]; // Dynamically allocate memory for rows
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]; // Dynamically allocate memory for columns
    }

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> *(*(arr + i) + j); // Input using pointer arithmetic
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += *(*(arr + i) + j); // Access elements and calculate the sum
        }
    }

    cout << "Sum of all elements in the 2D array is: " << sum << endl;

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}



void matricesMenu() {

    char input;
    while(true) {
        cout << "\nChoose an Operation, press 'B' to go back to a previous menu:\n";
        cout << "1. Create a 2x2 Matrix\n";
        cout << "2. Add, subtract, and Multiply with one or Two Dimensional Arrays\n";
        cout << "3. Solve System of Equations using Inverse Matrix\n";
        cout << "4. Solve System of 3 Equations\n";
        cout << "5. Matrix Operations with Dynamic Memory\n";
        cout << "6. Sum of Elements in a 2D Array Using Pointers\n";

        cin >> input;

        if (input == 'b' || input == 'B') {
            break;
        }

    switch(input) {
        case '1': {
            createA2RowMatrix();
            break;
        }
	    case '2': {


            int arrayChoice;
            cout << "\nChoose Array Operations:\n";
            cout << "1. One-dimensional Arrays\n";
            cout << "2. Two-dimensional Arrays (Matrices)\n";
            cout << "Enter your choice (1-2): ";
            cin >> arrayChoice;

            if (arrayChoice == 1) {
                cout << "This section is for one-dimensional array operations.\n";
                int array[2];
                int array2[2];
                int result[2];

                cout << "Enter Array A:\n";
                for (int i = 0; i < 2; i++) {
                    cin >> array[i];
                }

                cout << "Enter Array B (:\n";
                for (int i = 0; i < 2; i++) {
                    cin >> array2[i];
                }

                addSubMulArrays(array, array2, result);

            } else if (arrayChoice == 2) {

                cout << "This section is for two-dimensional array operations.\n";
                int matrix[2][2];
                int matrix2[2][2];
                int result[2][2];

                cout << "Enter 4 numbers for your first 2x2 matrix:\n";
                for (int i = 0; i < 2; ++i) {
                    for (int j = 0; j < 2; ++j) {
                        cout << "Element [" << i << "] [" << j << "]: ";
                        cin >> matrix[i][j];
                    }
                }

                cout << "Enter 4 numbers for your second 2x2 matrix:\n";
                for (int i = 0; i < 2; ++i) {
                    for (int j = 0; j < 2; ++j) {
                        cout << "Element [" << i << "] [" << j << "]: ";
                        cin >> matrix2[i][j];
                    }
                }

                addSubMulMatrices(matrix, matrix2, result);
            } else {
                cout << "Invalid choice for array operations. Please choose 1 or 2.\n";
            }

            break;
            }

        case '3': {
            inverseMatrixSolution();
            break;
        }
        case '4': {
            solveSystemOfThreeEquations();
        }

        case '5': {
            dynamicMatrixOperations();
        }
        case '6': {
            sumOfElementsIn2DArray();
        }
            default:"Invalid Choice for the operations please choose between 1 to 4.\n";
            break;
        }
    }
}


void miscellaneousMenu() {
    char input;
    while(true) {
        cout << "\nChoose an Operation, press 'B' to go back to a previous menu:\n";
        cout << "1. Add two different Integers\n";
        cout << "2. Subtract two different Integers\n";
        cin >> input;

        if (input == 'b' || input == 'B') {
            break;
        }

        switch(input) {
            case '1': {
                int a,b;

                addTwoIntegers(a,b);
                break;
            }

            case '2': {
                int a,b;


                subtractTwoIntegers(a,b);
                break;
            }
            default: cout << "Invalid choice for operations. Please choose 1 or 2.\n";
        }
    }
}


void classesMenu() {
    char input;
    while(true) {
        cout << "\nChoose an Operation, press 'B' to go back to a previous menu:\n";
        cout << "1. Create a Chracter\n";
        cout << "2. Create a Car\n";
        cout << "3. Create an Animal\n";
        cout << "4. Create a Bear\n";
        cout << "5. Create an Eagle\n";
        cout << "6. Create a Snake\n";
        cin >> input;

        if (input == 'b' || input == 'B') {
            break;
        }

    switch(input) {
        case '1': {
            createPerson();
            break;
        }
	    case '2': {
            createcar();

            break;
            }
        case '3': {
            createAnimal();
            break;
        }
        case '4': {
            createBear();
            break;
        }
        case '5': {
            createEagle();
            break;
        }
        case '6': {
            createSnake();
            break;
        }
            default:"Invalid Choice for the operations please between 1-5.\n";
            break;
        }
    }
}


void linearRegressionMenu() {
    int input;
    while(true) {
        cout << "Choose an Operation, type 99 to go back\n";
        cout << "1. Linear Regression\n";
        cout << "2. Study Hours and Exam Scores with Liner regression\n";
        cout << "3. House Size and price using Linear Regesssion\n";
        cin >> input;
        if (input == 99) {
            break;
        }

        switch(input) {
            case 1: {
                vector<double> x;
                vector<double> y;
                double slope;
                double intercept;
                double xval;
                calculateLinearRegression(x,y,slope,intercept,xval);
                break;
            }
            case 2: {
                calculateLinearRegressionExamScore();
                break;
            }

            case 3: {
                calculateLinearRegressionHousePrices();
                break;
            }

            default:
                cout << "Invalid Choice for the operations please between 1-5.\n";
        }
    }
}


void bubbleSortWithPointers() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate memory for the array

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); // Input elements using pointer arithmetic
    }

    // Bubble sort using pointers
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements using pointers
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    cout << "Sorted Array in Ascending Order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr; // Free the allocated memory
}





void pointersMenu() {
    int input;

    while(true) {
        cout << "\nChoose an Operation, or type 99 to go back\n";
        cout << "1. Basic Pointers\n";
        cout << "2. Reverse an Array using pointers\n";
        cout << "3. Sum and Average of an Array\n";
        cout << "4. Memory Addresses of an Array\n";
        cout << "5. Find the Min and Max of an array\n";
        cout << "6. Create a 3x3 matrix with pointers\n";
        cout << "7. Advanced Pointer Manipulations\n";
        cout << "8. Bubble Sort with Pointers\n";
        cout << "\n";
        cin >> input;

        if (input == 99) {
            break;
        }

        switch(input) {
            case 1: {
                basicPointers();
                break;
            }
            case 2: {
                reversePointerarray();
                break;
            }
            case 3: {
                sumAndAverageOfArray();
                break;
            }

            case 4: {
                printArrayMemeoryAddresses();
                break;
            }
            case 5: {
                findThheMinAndMaxWithPointers();
                break;
            }
            case 6: {
                makeThreeByThreeMatrixPointers();
                break;
            }
            case 7: {
                createDynamicMatrixTranspose();
            }
            case 8: {
                bubbleSortWithPointers();
            }

            default:
                cout << "Invalid Choice for the operations please between 1-6.\n";
        }
    }
}


void virtualMedicalAssissitant() {
    while (true) {

        Patient* currentPatient = collectPatientInformation();

        if (currentPatient != nullptr) {
            cout << "\nHealth Summary for " << currentPatient->name1() << ":\n";
            currentPatient->displayHealthEvaluation();
            currentPatient->displayNutritionPlan();
        } else {
            cout << "No current patient available." << endl;
        }


        char cont;
        cout << "Do you want to continue? (y/n) : \n";
        cin >> cont;
        if (tolower(cont) != 'y') {
            break;
        }

    }

    cout << "Thank you for using prime Medical! Goodbye!\n";
}


void setHealthGoals() {
    double currentWeight, goalWeight, dailyCalorieDeficit;
    int weeks;

    cout << "Enter your current weight (lbs): ";
    cin >> currentWeight;
    cout << "Enter your goal weight (lbs): ";
    cin >> goalWeight;
    cout << "Enter the number of weeks to achieve your goal: ";
    cin >> weeks;

    if (goalWeight >= currentWeight) {
        cout << "Goal weight must be less than current weight for weight loss.\n";
        return;
    }

    dailyCalorieDeficit = ((currentWeight - goalWeight) * 3500) / (weeks * 7);

    cout << "To reach your goal, aim for a daily calorie deficit of " << dailyCalorieDeficit << " calories.\n";
}



class SierraMentalHealthAssistant {
private:
    string name;
    int age;
    string gender;
    string conditon;
    vector<int> responses;

public:
    SierraMentalHealthAssistant(const string &name, int age, const string &gender, const string &conditon)
        : name(name),
          age(age),
          gender(gender),
          conditon(conditon) {
    }


    [[nodiscard]] string name1() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    [[nodiscard]] int age1() const {
        return age;
    }

    void set_age(int age) {
        this->age = age;
    }

    [[nodiscard]] string gender1() const {
        return gender;
    }

    void set_gender(const string &gender) {
        this->gender = gender;
    }

    [[nodiscard]] string conditon1() const {
        return conditon;
    }

    void set_conditon(const string &conditon) {
        this->conditon = conditon;
    }

public:
    virtual void collectResponses() {
        cout << "Please rate the following questions on a scale from 0 (Never) to 3 (Nearly Every Day):\n";
        vector<string> Questions = {

            "Do you feel little interest or pleasure in doing things?\n",                // PHQ-9 Q1
            "Do you feel nervous, anxious, or on edge?\n",                              // GAD-7 Q1
            "Do you feel down, depressed, or hopeless?\n",                              // PHQ-9 Q2
            "Do you have trouble sleeping or sleeping too much?\n",                     // PHQ-9 Q3
            "Do you experience fatigue or lack of energy?\n",                           // PHQ-9 Q4
            "Do you feel bad about yourself or that you are a failure?\n",              // PHQ-9 Q5
            "Do you have difficulty concentrating on tasks?\n",                         // PHQ-9 Q6
            "Do you feel restless or find it hard to sit still?\n",                     // GAD-7 Q6
            "Have you thought you would be better off dead or hurting yourself?\n",     // PHQ-9 Q9
            "Do you feel overwhelmed by stress in daily life?\n"

        };

        for (string question: Questions) {
            int response;

            do {
                cout << question << " ";
                cin >> response;
                if (response < 0 || response > 3) {
                    cout << "Invalid input. Please enter a number between 0 and 3";
                }
            } while (response < 0 || response > 3);
            responses.push_back(response);
        }
    }

    virtual void analyzeResponses() {
        int totalScore = accumulate(responses.begin(), responses.end(), 0);
        cout << "\nResults for " << name << ":\n";
        cout << "Total Score: " << totalScore << "/30\n";

        // Interpret score based on research-based scales
        if (totalScore >= 20) {
            cout << "Severity Level: Severe\n";
            cout << "Recommendation: Immediate consultation with a mental health professional is advised.\n";
        } else if (totalScore >= 15) {
            cout << "Severity Level: Moderately Severe\n";
            cout << "Recommendation: Professional therapy and possible medication discussion.\n";
        } else if (totalScore >= 10) {
            cout << "Severity Level: Moderate\n";
            cout << "Recommendation: Consider therapy or counseling.\n";
        } else if (totalScore >= 5) {
            cout << "Severity Level: Mild\n";
            cout << "Recommendation: Monitor symptoms and practice self-care strategies.\n";
        } else {
            cout << "Severity Level: Minimal or None\n";
            cout << "Recommendation: Maintain a healthy lifestyle and monitor well-being.\n";
        }
    }

};



void sierraHealthMedicalassistant() {
    cout << "welcome to Sierra Mental Health Assisstant!\n";

    string name, gender, condition;
    int age;

    cout << "Enter your name: \n";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your age: \n";
    cin >> age;

    cout << "Enter your gender (Male/Female/Other): \n";
    cin >> gender;

    cout << "Describe your primary condition (if any): \n";
    cin.ignore();
    getline(cin, condition);

    // Create an assistant instance and collect/analyze responses
    SierraMentalHealthAssistant assistant(name, age, gender, condition);
    assistant.collectResponses();
    assistant.analyzeResponses();
}





































