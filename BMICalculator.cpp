#include<iostream>
using namespace std;
float CalculateBMI(float h, float w) {
    float SqrtOfHeight = h * h;
    float BMI = w / SqrtOfHeight;
    return BMI;
}
int main() {
    float height;
    float weight;
    cout << "Please enter your height in meters>>";
    cin >> height;
    cout << "please enter your weight in kg>>";
    cin >> weight;
    float BMI = CalculateBMI(height, weight);
    cout << "your BMI is " << BMI << "\n";
    if (BMI < 18.5) {
        cout << "you are underweight.Thin and skinny";
    } else if (BMI>18.5 & BMI < 24.9) {
        cout << "Congrats! You are healthy";
    } else if(BMI>25 & BMI < 29.9) {
        cout << "You are overweight";
    }else if(BMI>30) {
        cout << "You are Obese";
    }
    return 0;
}
