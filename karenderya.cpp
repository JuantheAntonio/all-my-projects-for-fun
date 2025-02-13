#include <iostream>
#include <string>

using namespace std;

void karenderya()
{
	
	cout<<"Welcome to karenderya"<<endl;
	cout<<"Rice: 15 per cup \nChicken: 25 per piece\nMongos: 15 per serving\n";
	
	cout<<"How many rice? \n";
	int rice;
	cin >> rice;
		if (rice >= 0)
		{
			cout<<rice<<" cups of rice served\n";
		}
		else
		{
			cout<<"binuang";
		}
	
	cout<<"How many chicken? \n";
	int chicken;
	cin >> chicken;
		if (rice >= 0)
		{
			cout<<rice<< " cups of rice served.\n";
		}
		else
		{
			cout<<"binuang";
		}
	
	cout<<"How many mongos? \n";
	int mongos;
	cin >> mongos;
		if (mongos >= 0)
		{
			cout<<mongos<< " bowls of mongos served\n";
		}
		else
		{
			cout<<"binuang";
		}
	
	int bill;
	bill = (rice * 15) + (chicken * 25) + (mongos * 15);
	
	cout<<bill<<" is your total bill\n";
	string senior;
	cout<<"senior mam? (REPLY WITH YES/NO) \n";
	cin>>senior;
		if (senior == "YES")
		{
			bill = (bill *0.8);
			cout<<bill<<" is your final bill\n";
		}
	cout<<"bayad? ";
	int bayad, sukli;
	cin>> bayad;
	
	sukli = bayad - bill;
	if (sukli > 0)
		cout<<"Your change is "<<sukli<<endl;
	else if (sukli == 0)
		cout<<"Sakto ra dong "<<endl;
	else
		cout<<"nice try wa kay mailad diri dong \n";
}

int main(){
	while (true)
	{
		karenderya();
		cout<<"New customer? YES or NO \n";
		string customer;
		cin>>customer;
			if (customer == "NO")
			{
				break;
			}
	}

}
