//Basic 'C++' principles part 1
#include<iostream>
using namespace std;

int main() {
	//declaring variables         
	int num1;
	int num2;

	//This code requests and accepts the first number
	cout << "Put number 1 \n"; 
	cin >> num1;             

    //This code checks if the entered value is indeed an integer
	while (!cin)           
	{
		cin.clear();
		cin.ignore();
		cout << "Put number 1 please \n";
		cin >> num1;
	}
	
	//This code requests and accepts a second number
	cout << "Put number 2\n";
	cin >> num2;

	//This code checks if the entered value is indeed an integer
	while (!cin)           
	{
		cin.clear();
		cin.ignore();
		cout << "Put number 2 please \n";
		cin >> num2;
	}


    //This code will display the relationship between the two numbers and the location of
	//their sum in RAM
	int sum = num1 + num2;
	int * sumLocation = &sum;
	if (num1 > num2) {
		cout << "Number 1 is greater than Number 2\nAnd sum="<<sum<<" \nSum location in RAM: "<<sumLocation<<"";                                //displaying memory location of variable value of sum in RAM
	}
	else {
		cout << "Number 2 is greater than or equal to Number 1\nAnd sum="<<sum<<" \nSum location in RAM: "<<sumLocation<<"";
	}

    //This code will display the numbers that were entered
    int numbers [] = {num1, num2};
	for (int i = 0; i < sizeof(numbers)/sizeof(int) ; i++) {
	    if (i == 0){
			cout << "\nThat is true\nFirst number is: \n"<<numbers[i]<<"";
		}
		else{
			cout << "\nThat is true\nSecond number is: \n"<<numbers[i]<<"";
		}
	}

    //This code will display Hello there as many times as the value of number 2
	do                                                
	{
		cout << "\nHello there\n";
		if (num2 > 0) {
			num2 -= 1;
		}
		else if (num2 < 0) {
			num2 += 1;
		}
	} while (num2 != 0);

}

//Sample c++ code covering variables (integers and integers in arrays), if statements and loops (while loop, for loop, do while loop)
//Made by me