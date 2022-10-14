#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class management{
	public:
		string name, address, age, contact, gender;
		void menu();
		void details();
		void flight();
		void dubai();
		void UK();
		void USA();
		void canada();
		void australia();
		void europe();
		void asia();
		void ticket();
};

void management::menu(){
	m:
	int choice;
	cout<<"____________________________________________ASARE'S AIRLINE________________________________________________";
	cout<<"\n\n\n | 1. Add customer details                 |";
	cout<<"\n\n | 2. Flght booking                        |";
	cout<<"\n\n | 3. Ticket                               |";
	cout<<"\n\n | 4. Exit                                 |";
	cout<<"\n\n\n Plese select from the options above: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			system("cls");
			details();
		break;
		
		case 2:
			system("cls");
			flight();
		break;
		
		case 3:
			system("cls");
			ticket();
		break;
		
		case 4:
			exit(0);
		break;
		
		default:
			system("cls");
			cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
	}
	
}

void management::details(){
	string done;
	cout<<"========================================DETAILS================================================";
	cout<<"\n\n\n Please enter your Name: ";
	cin>>name;
	cout<<"\n\n Please enter your Age: ";
	cin>>age;
	cout<<"\n\n Please enter your Gender: ";
	cin>>gender;
	cout<<"\n\n Please enter your Phone Number: ";;
	cin>>contact;
	cout<<"\n\n Please enter your Address: ";
	cin>>address;
	cout<<"\n\n\n\n Thank you"" "<<name<<" "", Your details are successfully saved";
	cout<<"\n\n Press any key to go back to menu and book your flight:";
	cin>>done;
	system("cls");
	menu();
	
}

void management::flight(){
	m:
	int choice;
	cout<<"==================================================BOOKING=======================================================";
	cout<<"\n\n\n | 1. Flight to Dubai                        |";
	cout<<"\n\n | 2. Flight to UK                           |";
	cout<<"\n\n | 3. Flight to USA                          |";
	cout<<"\n\n | 4. Flight to Canada                       |";
	cout<<"\n\n | 5. Flight to Australia                    |";
	cout<<"\n\n | 6. Flight to Europe                       |";
	cout<<"\n\n | 7. Flight to Asia                         |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			system("cls");
			dubai();
		break;
		
		case 2:
			system("cls");
			UK();
		break;
		
		case 3:
			system("cls");
			USA();
		break;
		
		case 4:
			system("cls");
			canada();
		break;
		
		case 5:
			system("cls");
			australia();
		break;
		
		case 6:
			system("cls");
			europe();
		break;
		
		case 7:
			system("cls");
			asia();
		break;
		
		defaut:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;	
	}
}

void management::dubai(){
	m:
	int choice;
	string done;
	cout<<"====================================================DUBAI FLIGHTS==============================================";
	cout<<"\n\n\n | 1. DUB - DH890 / 12 - 05 - 2022 6:00AM 12hrs Rs 6000       |";
	cout<<"\n\n | 2. DUB - FY030 / 13 - 05 - 2022 7:00PM 11hrs Rs 7000       |";
	cout<<"\n\n | 3. DUB - KJ990 / 17 - 05 - 2022 12:00PM 10hrs Rs 9000      |";
	cout<<"\n\n | 4. DUB - VC737 / 12 - 05 - 2022 8:00AM 12hrs Rs 6000       |";
	cout<<"\n\n | 5. DUB - DH090 / 11 - 05 - 2022 9:00PM 9hrs Rs 10000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: DUB - DH890 / 12 - 05 - 2022 6:00AM 12hrs  ";
			cout<<"\n charges: $6000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: DUB - FY030 / 13 - 05 - 2022 7:00PM 11hrs ";
			cout<<"\n charges: $7000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: DUB - KJ990 / 17 - 05 - 2022 12:00PM 10hrs ";
			cout<<"\n charges: $9000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: DUB - VC737 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $6000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: DUB - DH090 / 11 - 05 - 2022 9:00PM 9hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;		
				
	}
}

void management::UK(){
	m:
	int choice;
	string done;
	cout<<"====================================================UK FLIGHTS==============================================";
	cout<<"\n\n\n | 1. UK - GP170 / 12 - 05 - 2022 6:00AM 11hrs Rs. 9000       |";
	cout<<"\n\n | 2. UK - NK846 / 13 - 05 - 2022 7:00PM 10hrs Rs. 11000       |";
	cout<<"\n\n | 3. UK - PD046 / 17 - 05 - 2022 12:00PM 10hrs Rs. 10000      |";
	cout<<"\n\n | 4. UK - HE048 / 12 - 05 - 2022 8:00AM 12hrs Rs. 9500       |";
	cout<<"\n\n | 5. UK - DH090 / 11 - 05 - 2022 9:00PM 7hrs Rs. 12000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: UK - GP170 / 12 - 05 - 2022 6:00AM 11hrs";
			cout<<"\n charges: $9000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: UK - NK846 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: UK - PD046 / 17 - 05 - 2022 12:00PM 10hrs ";
			cout<<"\n charges: $9000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: UK - HE048 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $9500";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: UK - DH090 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $12000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;		
				
	}
}

void management::USA(){
		m:
	int choice;
	string done;
	cout<<"====================================================USA FLIGHTS==============================================";
	cout<<"\n\n\n | 1. USA - GD933 / 12 - 05 - 2022 4:00AM 11hrs Rs. 10000       |";
	cout<<"\n\n | 2. USA - DD396 / 13 - 05 - 2022 7:00PM 10hrs Rs. 13000       |";
	cout<<"\n\n | 3. USA - HE983 / 11 - 05 - 2022 6:00AM 12hrs Rs. 10000      |";
	cout<<"\n\n | 4. USA - UH937 / 12 - 05 - 2022 8:00AM 12hrs Rs. 9500       |";
	cout<<"\n\n | 5. USA - FD073 / 11 - 05 - 2022 9:00PM 7hrs Rs. 12000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: USA - GD933 / 12 - 05 - 2022 4:00AM 11hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: USA - DD396 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $13000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: USA - HE983 / 11 - 05 - 2022 6:00AM 12hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: USA - UH937 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $9500";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: USA - FD073 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $12000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
}
}

void management::canada(){
		m:
	int choice;
	string done;
	cout<<"====================================================CANADA FLIGHTS==============================================";
	cout<<"\n\n\n | 1. CAN - HR549 / 12 - 05 - 2022 4:00AM 11hrs Rs. 10000       |";
	cout<<"\n\n | 2. CAN - DG740 / 13 - 05 - 2022 7:00PM 10hrs Rs. 4000       |";
	cout<<"\n\n | 3. CAN - KK283 / 11 - 05 - 2022 6:00AM 12hrs Rs. 7000      |";
	cout<<"\n\n | 4. CAN - EC392 / 12 - 05 - 2022 8:00AM 12hrs Rs. 7000       |";
	cout<<"\n\n | 5. CAN - DD339 / 11 - 05 - 2022 9:00PM 7hrs Rs. 11000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: CAN - HR549 / 12 - 05 - 2022 4:00AM 11hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: CAN - DG740 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $4000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: CAN - KK283 / 11 - 05 - 2022 6:00AM 12hrs ";
			cout<<"\n charges: $7000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: CAN - EC392 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $7000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: CAN - DD339 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
}
}

void management::australia(){
		m:
	int choice;
	string done;
	cout<<"====================================================AUSTRALIA FLIGHTS==============================================";
	cout<<"\n\n\n | 1. AUS - GF203 / 12 - 05 - 2022 4:00AM 11hrs Rs. 11000       |";
	cout<<"\n\n | 2. AUS - BL750 / 13 - 05 - 2022 7:00PM 10hrs Rs. 12000       |";
	cout<<"\n\n | 3. AUS - FV075 / 11 - 05 - 2022 6:00AM 12hrs Rs. 10000      |";
	cout<<"\n\n | 4. AUS - VG847 / 12 - 05 - 2022 8:00AM 12hrs Rs. 11000       |";
	cout<<"\n\n | 5. AUS - VT498 / 11 - 05 - 2022 9:00PM 7hrs Rs. 14000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: AUS - GF203 / 12 - 05 - 2022 4:00AM 11hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: AUS - BL750 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $12000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: AUS - FV075 / 11 - 05 - 2022 6:00AM 12hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: AUS - VG847 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: AUS - VT498 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $14000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
}
}

void management::europe(){
		m:
	int choice;
	string done;
	cout<<"====================================================EUROPE FLIGHTS==============================================";
	cout<<"\n\n\n | 1. EUR - GF203 / 12 - 05 - 2022 4:00AM 11hrs Rs. 11000       |";
	cout<<"\n\n | 2. EUR - CK750 / 13 - 05 - 2022 7:00PM 10hrs Rs. 12000       |";
	cout<<"\n\n | 3. EUR - FF075 / 11 - 05 - 2022 6:00AM 12hrs Rs. 10000      |";
	cout<<"\n\n | 4. EUR - EK847 / 12 - 05 - 2022 8:00AM 12hrs Rs. 11000       |";
	cout<<"\n\n | 5. EUR - KV498 / 11 - 05 - 2022 9:00PM 7hrs Rs. 14000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: EUR - GF203 / 12 - 05 - 2022 4:00AM 11hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: EUR - BL750 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $12000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: EUR - FV075 / 11 - 05 - 2022 6:00AM 12hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: EUR - VG847 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: EUR - VT498 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $14000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
}
}

void management::asia(){
		m:
	int choice;
	string done;
	cout<<"====================================================ASIA FLIGHTS==============================================";
	cout<<"\n\n\n | 1. ASI - GF203 / 12 - 05 - 2022 4:00AM 11hrs Rs. 11000       |";
	cout<<"\n\n | 2. ASI - BL750 / 13 - 05 - 2022 7:00PM 10hrs Rs. 12000       |";
	cout<<"\n\n | 3. ASI - FV075 / 11 - 05 - 2022 6:00AM 12hrs Rs. 10000      |";
	cout<<"\n\n | 4. ASI - VG847 / 12 - 05 - 2022 8:00AM 12hrs Rs. 11000       |";
	cout<<"\n\n | 5. ASI - VT498 / 11 - 05 - 2022 9:00PM 7hrs Rs. 14000       |";
	cout<<"\n\n\n Please select from the above options: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n You've booked: ASI - GF203 / 12 - 05 - 2022 4:00AM 11hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 2:
			cout<<"\n\n You've booked: ASI - BL750 / 13 - 05 - 2022 7:00PM 10hrs ";
			cout<<"\n charges: $12000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;	
		
		case 3:
			cout<<"\n\n You've booked: ASI - FV075 / 11 - 05 - 2022 6:00AM 12hrs ";
			cout<<"\n charges: $10000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 4:
			cout<<"\n\n You've booked: ASI - VG847 / 12 - 05 - 2022 8:00AM 12hrs ";
			cout<<"\n charges: $11000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		break;
		
		case 5:
			cout<<"\n\n You've booked: ASI - VT498 / 11 - 05 - 2022 9:00PM 7hrs ";
			cout<<"\n charges: $14000";
			cout<<"\n Your ticket is ready";
			cout<<"\n\n press any key to go back to main menu for your ticket: ";
			cin>>done;
			system("cls");
			menu();
		
		default:
			system("cls");
		cout<<"Wrong choice!, Please look carefully and select from the available options\n\n";
		goto m;
}
}


void management::ticket(){
	
	
	cout<<"_________________________________________ASARE'S AIRLINE________________________________________";
	cout<<"\n\n________________________________________TICKET______________________________________________";
	cout<<"\n\n\n CUSTOMER NAME:"<<name<<"\t\t\t\t DESTINATION: "; 
	cout<<"\n GENDER :"<<gender<<        "\t\t\t\t\t FLIGHT NUMBER: ";
	cout<<"\n AGE :"<<age<<              "\t\t\t\t\t DEPARTURE DATE: ";
	cout<<"\n TELEPHONE :"<<contact<<    "\t\t\t\tDEPARTURE TIME: ";
	cout<<"\n ADDRESS :"<<address<<endl;
	


}



int main(){
	management m;
	m.menu();
	
	return 0;
};