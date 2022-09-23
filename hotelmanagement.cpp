#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;



int main()
{
	string a;

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t****************************";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t* HOTEL MANAGEMENT PROJECT *";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t****************************";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t DEVELOPED BY:";
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t - SUDHAKAR KUMAR" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t - SYED NOUMAN ALI SHAH " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t - UMAR AHMED KHAN " << endl;

	getline(cin, a);
	system("cls");
	int r, b, room_no, e;
	string name, phone_no, cnic; //customer records
	int choice = 0, x, y;
	{
		for (x = 0; x = 5; x++)
		{
			{			system("cls"); 
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*************************";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t HOTEL MANAGEMENT SYSTEM";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      * MAIN MENU *";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*************************";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t1.Book A Room";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2.Customer Records";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t3.Rooms Allotted";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t4.Edit Record";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t5.Exit";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice: ";
			cin >> choice;
			}

			switch (choice)
			{
			case 1: //Book a room
			{
				system("cls");
				cout << "\n Enter Customer Detalis";
				cout << "\n ----------------------";
				cout << "\n\n Room no: ";
				cout << "\n Total no. of Rooms 1 - 25\n\n";
				cout << "\n Ordinary Rooms from 1 - 10";
				cout << "\n Luxuary Rooms from 11 - 20";
				cout << "\n Royal Rooms from 21 - 25";
				cout << "\n Enter The Room no. you want to stay in :- " << endl;
				cin >> r;
				system("cls");
				{
					if (r >= 1 && r <= 10)
					{
						cout << "You Are Booking an Ordinary Room\n" << endl;
						cout << "Enter your name" << endl;
						cin >> name;
						cout << "Enter your phone number" << endl;
						cin >> phone_no;
						cout << "Enter your CNIC number" << endl;
						cin >> cnic;
						getline(cin, a);
					}
					else if (r >= 11 && r <= 20)
					{
						cout << "You Are Booking a Luxuary Room\n" << endl;
						cout << "Enter your name" << endl;
						cin >> name;
						cout << "Enter your phone number" << endl;
						cin >> phone_no;						
						cout << "Enter your CNIC number" << endl;
						cin >> cnic;
						getline(cin, a);
					}
					else if (r >= 21 && r <= 25)
					{
						cout << "You Are Booking a Royal Room\n" << endl;
						cout << "Enter your name" << endl;
						cin >> name;
						cout << "Enter your phone number" << endl;
						cin >> phone_no;
						cout << "Enter your CNIC number" << endl;
						cin >> cnic;
						getline(cin, a);
					}
					else
					{
						cout << "\a Sorry...!!! No Rooms are available of this number" << r << endl;

					}
					
					system("cls");
					break; }
			} //case 1

			case 2: //customer records
			{ // case 2
				system("cls");
				
				cout << "\n Enter room no. for a particular customer`s details :- " << endl;
				cin >> room_no;
				if (room_no == r)
				{
					getline(cin, a);
					system("cls");
					cout << "\n Customer Details";
					cout << "\n ----------------";
					cout << "\n\n Room no: " << room_no;
					cout << "\n Name: " << name;
					cout << "\n Phone no: " << phone_no ;
					cout << "\n CNIC: " << cnic << endl;
					system("pause");
				}
				else
				{
					getline(cin, a);
					system("cls");
					cout << "\a\n Sorry Room no. not found or vacant....!!" << endl;
					system("pause");
				}
				break;
			} //case 2
			case 3: //rooms alloted
			{
				getline(cin, a);
				system("cls");
				cout << "\n\t\t\t    List Of Rooms Allotted";
				cout << "\n\t\t\t    ----------------------";
				cout << "\n\n Room No.\tName\t\t\tPhone No. \t\tCNIC\n";
				cout << "\n\n " << r << "\t\t" << name ;
				cout << "\t" << "\t\t" << phone_no<<"\t\t" << cnic ;
				cout << endl;
				getline(cin, a);

				break;
			} //case 3
			case 4: // Edit Record
			{
				getline(cin, a);
				system("cls");
				cout << "\n EDIT MENU";
				cout << "\n ---------";
				cout << "\n\n 1.Modify Customer Record";

				cout << "\n Enter room no: ";
				cin >> e;
				if (e == r)
				{
					getline(cin, a);
					system("cls");
					cout << " \t\t Enter New Record :" << endl;
					cout << "Name :" << endl;
					cin >> name;
					cout << "Phone Number :" << endl;
					cin >> phone_no;
					cout << "CNIC :" << endl;
					cin >> cnic;

				}
				else if (e != r)
				{
					getline(cin, a);
					system("cls");
					cout << " \a Sorry...!!! This Room no is not available or vacant .";
				}
				cout << endl;
				system("pause");
				break;
			}
			default:
			{
				system("cls");
				exit(1);
			}
			}
		}
	}

	return 0;

}
