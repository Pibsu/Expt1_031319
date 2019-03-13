#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int tixpbox, tixpsideline, tixppremium, tixpgenad, notixsbox, notixssideline, notixspremium, notixsgenad, totbox, totsideline, totpremium, totgenad;
	double total_sales;
	//Ticket Input
	cout << "Ticket Sales Please input required data" << endl; 

	cout << "Ticket Prices" << endl;
	cin >> tixpbox; 
	cout << "Box:" <<  tixpbox << endl; 
	cin >> tixpsideline;
	cout << "Sideline:" << tixpsideline << endl;
	cin >> tixppremium; 
	cout << "Premium:" << tixppremium << endl; 
	cin >> tixpgenad;
	cout << "GenAd:" << tixpgenad << endl;
	
	
	cout << "Ticket Sales" << endl;
	cin >> notixsbox;
	cout << "Box:" <<  notixsbox << endl; 
	cin >> notixssideline;
	cout << "Sideline:" << notixssideline << endl;
	cin >> notixspremium; 
	cout << "Premium:" << notixspremium << endl; 
	cin >> notixsgenad;
	cout << "GenAd:" << setprecision(2) << fixed << showpoint << notixsgenad << endl;

	//Calculation
	totbox = tixpbox * notixsbox;
	totsideline = tixpsideline * notixssideline;
	totpremium = tixppremium * notixspremium;
	totgenad = tixpgenad * notixsgenad;
	total_sales = totbox + totsideline + totpremium + totgenad;

	//Total sale
	cout << "Total Sales" << endl;
	cout << "Total Box Sales:" << totbox << endl; 
	cout << "Total Sideline:" << totbox << endl; 
	cout << "Total Premium:" << totbox << endl;
	cout << "Total GenAd:" << totbox << endl;
	cout << "Total Sales" << total_sales << endl;


	-getch();
	return 0;
}