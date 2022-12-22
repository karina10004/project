#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainmenu();

class Management{
	public:
		Management(){
			mainmenu();
			
		}
};
class Details{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int id;
		char arr[100];
		
		void information(){
		cout<<"enter the customer id";
		cin>>id;
		cout<<"\nenter the name :";
		cin>>name;
		cout<<"enter the age:\n";
		cin>>age;
		cout<<"address\n";
		cin>>add;
		cout<<"gender\n";
		cin>>gender;
		cout<<"your details are saved with us\n"<<endl;
		}
};
int Details::id;
string Details::gender;
string Details::name;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flight[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			for(int a=0; a<6; a++){
				cout<<(a+1)<<". flight too"<<flight[a]<<endl;
			}
			cout<<"welcome to the airlines"<<endl;
			cout<<"press the number of country of which you want to book the flight";
			cin>>choice;
			switch(choice){
				case 1:
                	{
					cout<<"-------welcome to dubai emirates--------\n"<<endl;
					cout<<"your comort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 Dub - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 Dub - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 Dub - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket DUB-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket DUB-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket DUB-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
			}
			case 2:
				{
					cout<<"-------welcome to canada emirates--------\n"<<endl;
					cout<<"your comfort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 CAN - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 CAN - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 CAN - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket CAN-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket CAN-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket CAN-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
			}
			case 3:
				{
					cout<<"-------welcome to UK emirates--------\n"<<endl;
					cout<<"your comfort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 UK - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 UK - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 UK - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket UK-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket UK-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket UK-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
				}
				case 4:
				{
					cout<<"-------welcome to USA emirates--------\n"<<endl;
					cout<<"your comfort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 USA - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 USA - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 USA - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket USA-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket USA-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket USA-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
				}
				case 5:
				{
					cout<<"-------welcome to AUSTRALIA emirates--------\n"<<endl;
					cout<<"your comfort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 AUS - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 AUS - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 AUS - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket AUS-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket AUS-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket AUS-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
				}
				case 6:
				{
					cout<<"-------welcome to Europe emirates--------\n"<<endl;
					cout<<"your comfort is our priority enjoy the journey\n"<<endl;
					cout<<"follwing are the flights\n"<<endl;
					cout<<"1 EU - 498"<<endl;
					cout<<"\t11-08-2022  8:00AM 10hrs RS 16000"<<endl;
					cout<<"1 EU - 658"<<endl;
					cout<<"\t09-08-2022  8:00AM 12hrs RS 14000"<<endl;
					cout<<"1 EU - 988"<<endl;
					cout<<"\t11-08-2022  8:00AM 8hrs RS 21000"<<endl;
					
					cout<<"select the flight you want to book:";
					cin>>choice1;
					if(choice1==1){
					charges=16000;
					cout<<"you have successfully booked your ticket EU-498"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					
					else if(choice1==2){
						charges = 14000;
					cout<<"you have successfully booked your ticket EU-658"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else if(choice1==3){
						charges = 21000;
					cout<<"you have successfully booked your ticket EU-988"<<endl;
					cout<<"you can go back to the menu and take your ticet"<<endl;
					}
					else{
						cout<<"invalid input,shifting to previous menu"<<endl;
						flights();
					}
					cout<<"press any key to go back to the main menu"<<endl;
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
				}
				default:
                {
					cout<<"invalid input,shifting to main menu\n"<<endl;
					mainmenu();
					break;
				}
	}
        }
};
float registration::charges;
int registration::choice;


class ticket : public registration, Details{
	public:
		void bill(){
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"--------indian airlines--------"<<endl;
				outf<<"--------tickets--------"<<endl;
				outf<<"-----------------------------"<<endl;
				
				outf<<"customer id:"<<Details::id<<endl;
				outf<<"customer id:"<<Details::name<<endl;
				outf<<"customer id:"<<Details::gender<<endl;
				outf<<"description"<<endl;
				
				if(registration::choice==1){
					destination = "dubai";
				}
				else if(registration::choice==2){
					destination = "Canada";
				}
				else if(registration::choice==3){
					destination = "UK";
				}
				else if(registration::choice==4){
					destination = "USA";
				}
				else if(registration::choice==5){
					destination = "Austrlia";
				}
				else if(registration::choice==6){
					destination = "Europe";
				}
				outf<<"destination"<<destination<<endl;
				outf<<"flight cost:"<<registration::charges<<endl;
			}
			outf.close();
		}
		void disbill(){
			ifstream ifs("records.txt");
			{
				if(!ifs){
					cout<<"file error"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};
void mainmenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"             Indian airlines  \n"<<endl;
	cout<<"--------------main menu-----------"<<endl;
	cout<<"press 1 to add the customer details\n"<<endl;
	cout<<"press 2 for flight registration\n"<<endl;
	cout<<"press 3 for ticket and charges\n"<<endl;
	cout<<"press 4 to exit\n"<<endl;
	
	cout<<"enter the choice"<<endl;
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		case 1:
			{
				cout<<"-------customer---------\n"<<endl;
				d.information();
				cout<<"press any key to go back to the main menu"<<endl;
				cin>>back;
				
				if(back==1){
					mainmenu();
				}
				else{
					mainmenu();
					
					
				}
				break;
			}
		case 2:
			{
				cout<<"--------book a flight using this system-------\n"<<endl;
				r.flights();
				break;
			}
		case 3:
		{
			cout<<"  get your ticket   \n"<<endl;
			t.bill();
		
		cout<<"your ticket is printed and you can collect it\n"<<endl;
		cout<<"press 1 to display your ticket ";
		
		cin>>back;
		
		if(back==1){
			t.disbill();
			cout<<"press any key to go back to the main menu:";
			cin>>back;
			if(back==1){
				mainmenu();
			}
			else{
				mainmenu();
			}
		}
		else{
			mainmenu();
		}
		break;		
	}
	case 4:
		{
			cout<<"Thankyou  "<<endl;
			break;
		}
	default:
    {
		cout<<"invalid input,please try again\n"<<endl;
		mainmenu();
		break;
	}
}
}
int main(){
	Management mobj;
	return 0;
}