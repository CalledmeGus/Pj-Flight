#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Flight{
	public:
		int date,day;
		string month,mon;
		void setDate(){
			cout<<"Please input date of flight: "; cin>>date;
			day = date;
			cout<<"Please input month: "; cin>>month;
			mon = month;
		};
};

class Dayflight : public Flight{
	public:
		int year;
		void showDate(){
			Flight::setDate();
			cout<<"Please input year: "; cin>>year;
			cout<<"Date of your flight is : "<<day<<"\t"<<mon<<"\t"<<year<<endl;
		};
};

class Destination{
	public:
		string destinate;
		void setFlight(){
			cout<<"Please input destination: "; cin>>destinate;
		};
};
class Destinate : public Destination{
	public:
		string airport;
		void showDest(){
			Destination::setFlight();
			
				if(destinate == "DonMuang"){
					cout<<"Don Muang\n";
					cout<<"Where do you go: \n Krabi\n Chiang Mai\n Hat Yai\n Phuket\n";
					cin>>airport;
				}
				else if(destinate == "Krabi"){
					cout<<"Krabi\n";
					cout<<"Where do you go: \n Don Muang\n Chiang Mai\n Hat Yai\n Phuket\n";
					cin>>airport;
				}
				else if(destinate == "ChiangMai"){
					cout<<"Chiang Mai\n";
					cout<<"Where do you go: \n Don Muang\n Krabi\n Hat Yai\n Phuket\n";
					cin>>airport;
				}
				else if(destinate == "HatYai"){
					cout<<"Hat Yai\n";
					cout<<"Where do you go: \n Don Muang\n Krabi\n Chiang Mai\n Phuket\n";
					cin>>airport;
				}
				else if(destinate == "Phuket"){
					cout<<"Phuket\n";
					cout<<"Where do you go: \n Don Muang\n Krabi\n Chiang Mai\n Hat Yai\n";
					cin>>airport;
				}
				else{
					cout<<"Invalid airport";
				};
			};
		};
class Ticket_price{
	public:
		float ticket_ecoprice,ticket_busprice,ticket_firprice;
		int Eco_passengers,Bus_passengers,Fir_passengers;
		void setTicket(){
			cout<<"How many Economy passengers: "; cin>>Eco_passengers;
			cout<<"How many Bussiness passengers: "; cin>>Bus_passengers;
			cout<<"How many First Class passengers: "; cin>>Fir_passengers;
		};
		
};
class Totalprice : public Ticket_price{
	public:
		float eoprice,busprice,firprice,totalprice;
		void showPrice(){
			Ticket_price::setTicket();
			ticket_ecoprice = Eco_passengers * 1500.00;
			ticket_busprice = Bus_passengers * 2700.00;
			ticket_firprice = Fir_passengers * 4000.00;
			totalprice = ticket_ecoprice + ticket_busprice + ticket_firprice;
			cout<<"Economy ticket = "<<ticket_ecoprice<<endl;
			cout<<"Business ticket = "<<ticket_busprice<<endl;
			cout<<"First Class ticket = "<<ticket_firprice<<endl;
			cout<<"Total Price = "<<totalprice<<"THB";
		};
};
main(){
	string name;
	cout<<"Codeman Airlines"<<endl;
	cout<<"Please input your name: "; 
	cin>>name;
	
	Dayflight dfl;
	Destinate des;
	Totalprice tot;
	
	
	dfl.showDate();
	des.showDest();
	tot.showPrice();

}

