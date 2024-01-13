// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

static int constants()
{

	const double price_per_small_room = { 5 };
	const double price_per_large_room = { 10 };
	const double sales_tax = { 0.06 };
	const int estimate_expiry = { 30 };

	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;



	cout << "====================================" << endl;
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "====================================" << endl;
	
	int number_of_small_rooms{ 0 };
	cout << "\nHow many small rooms would you like cleaned? ";
	cin >> number_of_small_rooms;
	cout << "Number of rooms: small rooms " << number_of_small_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	int number_of_large_rooms{ 0 };
	cout << "\nHow many large rooms would you like cleaned? ";
	cin >> number_of_large_rooms;

	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;

	cout << "Price per small rooms: $" << price_per_small_room << endl;
	cout << "Price per large rooms: $" << price_per_large_room << endl;



	double cost = price_per_small_room * number_of_small_rooms + price_per_large_room * number_of_large_rooms;
	cout << "Cost: $" << cost << endl;


	double tax = (((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax);
	cout << "Tax:  $" << tax << endl;

	cout << "====================================" << endl;
	cout << "Total estimate: $" << (cost + tax) << endl; // mind for the precedence of operators
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	return 0;
}










