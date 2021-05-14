#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <iomanip>

using namespace std;
class user
{
	private:
	public:
	string username;
	int user_id;
    char data;
};
class car
{
   public:
       string carmodel;
       string carnumber;
       };
class model:virtual public car
{ public :
    void model_no(){
        cout<<"\t\t\t\tEnter 'A' for Tesla 2014."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Audi 2017."<<endl;
        cout<<"\t\t\t\tEnter 'C' for BMW 2019."<<endl;
        cout<<endl;
    };

};
class model_year{
 public: int year;
 };
class car_price{
 public:int price;
        int rate(int a){
        if(a==2014)price=500;return price;
        if(a==2017)price=3000;return price;
        if(a==2019)price=5000;return price;
        };
        };
class rental : public user,public virtual car,public model,public model_year,public price
{
	public:
	int days=0,rentalfee=0;
	void data()
	{
		int login();
	login();
	cout << "\t\t\t\tPlease Enter your Name: ";
    cin >> username;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl;
        model_no();
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<"\t\t\t\tChoose a Car model year from the below options:-(2014,2017,2019) ";
        cin>>year;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A" && year==2014)
 {
 	system("CLS");

		cout<<"You have choosed Tesla model and model year"<<year<<endl;
		 ifstream inA("A.txt"); //displaying details of model A
         char str[200];
         while(inA) {
         inA.getline(str, 200);
         if(inA) cout << str << endl;
        }
  }
  if(carmodel=="B" && year==2017)
  {
  	system("CLS");

		cout<<"You have choosed AUDI model and model year"<<year<<endl;
		 ifstream inB("B.txt"); //displaying details of model B
         char str[200];
         while(inB) {
         inB.getline(str, 200);
         if(inB) cout << str << endl;

     }
 }
 if(carmodel=="C" && year==2019)
 {
 	system("CLS");
	     cout<<"You have choosed BMW model and model year"<<year<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }

}

if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )

      cout<<"\aInvalid Car Model. Please try again!"<<endl;
if(year !=2014 && year !=2017 &&  year !=2019 )

      cout<<"\aInvalid Car Model year. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && year !=2014 && year !=2017 &&  year !=2019);
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rental the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		system ("CLS");
		cout<<"Calculating rental. Please wait......"<<endl;
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*rate(year);
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*rate(year);
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*rate(year);
    }
void showrental()
    {
    cout << "\n\t\t                       Car rental - user Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| user Name:"<<"---------------------|"<<setw(10)<<username<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorized signature #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("\athanks.txt");


  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome
{
	public:
	int welcum()
	{ cout<<"\t\t\t";
 ifstream in("welcome.txt");
  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout <<"\t\t\t"<< str << endl;
  }
  in.close();

  cout<<"\nStarting the program please wait....."<<endl;

  cout<<"\nloading up files....."<<endl;
  system("PAUSE");

  system ("CLS"); //cleares screen
}

};
int main()
{
welcome obj1; //object created for welcome class
obj1.welcum(); //welcum function is called
rental obj2;
//object created for rental class and further member functions are called
obj2.data();
obj2.calculate();
obj2.showrental();

return 0; //end of the program
}

int login(){
   string pass1 ="";
   string pass2 ="";
   char ch1,ch2;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t        AUTO ROAD \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tUser_ID ";
   ch1 = _getch();
   while(ch1 != 13){
      pass1.push_back(ch1);
      cout << ch1;
      ch1 = _getch();
   }
   cout << "\n\n\t\t\t\t\tEnter Password: ";
   ch2 = _getch();
   while(ch2 != 13){
      pass2.push_back(ch2);
      cout << '*';
      ch2 = _getch();
   }
  if(pass1 == "saurabh" || pass1 == "aman" || pass1 == "pramod"){
   if(pass2 == "saurabh"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\a\n\n\t\t\t\t\t\t\tAccess Aborted Invalid password...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   }else{
     cout << "\a\n\n\t\t\t\t\t\t\tAccess Aborted Invalid User Name...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
     system("PAUSE");
     system("CLS");
     login();
   }
}

