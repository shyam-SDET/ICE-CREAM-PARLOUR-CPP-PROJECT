#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;
string admin("shyam"),password("12345678");
string user("user"),password1("789456");
int bill=0;
string customers[30]={"rajesh","akhil","Yaswanth","pranitha","roshini","shiva","suresh","shanmukh","ram","shyam","srinu","malli","usha","kala","hari"};
		int age[30]={18,10,45,20,56,41,55,21,12,23,20,32,14,25,36};
		int bou[30]={200,400,200,40,35,20,30,60,70,80,100,200,40,60,50};
string entered,en_pass;
class icecream{

	public:

		string cream;

		void display();



};
void icecream::display(){
	cout<<endl<<"*****   Welcome to Lovely ice cream parlour  ******";
	cout<<endl<<"**Please enter your id and password";
	cin>>entered>>en_pass;
	if(entered==admin){
		if(en_pass==password){
			cout<<endl<<"****  Lovely ice cream parlor welcome you shyam (admin)  *****";
		}
			else
			cout<<"you have entered the password incorrectly";

	}
	else if(entered==user){
		if(en_pass==password1){
			cout<<endl<<"**Lovely ice cream parlour welcome you user  *****";

		}
		else{
			cout<<"you have entered your details incorrectly";

		}
	}
}

class menu{
	public:
	 string ice[30];
		int price[30];
		int i,n,*pay,*otp,*card,c;
		int f,cho[50];
		int qua;

		menu(){
			qua=30;
			ice[0]="butter scotch";
			ice[1]="vanilla";

ice[2]="strawberry";
ice[3]="chocolate";
ice[4]="mocha";
ice[5]="black currant";
ice[6]="tuity fruity";
ice[7]="mango";
ice[8]="pista";
ice[9]="caramel crunch";
ice[10]="rocky road";
ice[11]="dry fruit";
ice[12]="vanilla chocolate chip";
ice[13]="chocolate europa";
ice[14]="rum & raisin";
ice[15]="fig & honey ";
ice[16]="lychee";
ice[17]="crispy chocolate malt";

price[0]=60;
price[1]=60;
price[2]=60;
price[3]=60;
price[4]=60;
price[5]=60;
price[6]=60;
price[7]=60;
price[8]=60;
price[9]=60;
price[10]=60;
price[11]=60;
price[12]=60;
price[13]=60;
price[14]=60;
price[15]=60;
price[16]=60;
price[17]=60;


		}

		fstream fop,kop;
       void user_menu();
	   void admin_menu();
		void show();
		void billcal();
		void billpay();
};


void menu::show(){
	kop.open("customer.txt",ios::out);
	for(i=0;i<15;i++){

		kop<<endl<<customers[i]<<"\t"<<age[i]<<"\t"<<bou[i];
	}
fop.open("icecream.txt",ios::out);

	cout<<endl<<"flavour"<<"\t\t"<<"price"<<"\t\t"<<"quantity";
	for(n=0;n<18;n++){
		cout<<endl<<n+1<<"\t"<<ice[n]<<"\t"<<price[n]<<"\t"<<qua;
		fop<<endl<<n+1<<"\t"<<ice[n]<<"\t"<<price[n]<<"\t"<<qua;
	}
	fop.close();


}


void menu::billcal(){
		cout<<endl<<"Enter no of  ice cream your going to order";
	cin>>f;

	cout<<"enter the ice cream choice";
	for (i=0;i<f;i++){
		cin>>cho[i];
	}



	for(i=0;i<f;i++){

	switch(cho[i]){
		case 1:bill=bill+price[i];
			break;
			case 2:bill=bill+price[i];
				break;
				case 3:bill=bill+price[i];
					break;
					case 4:bill=bill+price[i];
					break;
					case 5:bill=bill+price[i];
						break;
						case 6:bill=bill+price[i];
							break;
								case 7:bill=bill+price[i];
							break;
								case 8:bill=bill+price[i];
							break;
								case 9:bill=bill+price[i];
							break;
								case 10:bill=bill+price[i];
							break;
								case 11:bill=bill+price[i];
							break;
								case 12:bill=bill+price[i];
							break;
								case 13:bill=bill+price[i];
							break;
								case 14:bill=bill+price[i];
							break;
								case 15:bill=bill+price[i];
							break;
								case 16:bill=bill+price[i];
							break;
								case 17:bill=bill+price[i];
							break;
								case 18:bill=bill+price[i];
							break;
							default:
								cout<<endl<<"you have entered a incorrect option";
	}
}
	cout<<endl<<"the bill is"<<bill;
	cout<<"please select the payment method";
	if(bill==0){
		cout<<"you have selected nothing please select any icecream";
		show();
		billcal();

	}

}
void menu::billpay(){

	int i;
	cout<<endl<<"***1.PAYTM***";
	cout<<endl<<"***2.DEBIT CARD***";
	cout<<endl<<"***3.TEZ***";
	pay=new int;
	otp=new int[4];
	card=new int[20];
	cin>>*pay;
	switch(*pay){
		case 1:
			cout<<endl<<"PLEASE ENTER YOUR PAYTM NO";
			for(i=0;i<10;i++){
				cin>>*(card+i);
			}
			cout<<endl<<"ENTER OTP";
				for(i=0;i<4;i++){
					cin>>*(otp+i);
				}
				cout<<endl<<"*****  YOUR PAYMENT HAS BEEN SUCESSFULL  ******";
			break;
				case 2:cout<<endl<<"PLEASE ENTER YOUR DEBIT CARD NO";
			for(i=0;i<16;i++){
				cin>>*(card+i);
			}
			cout<<endl<<"ENTER OTP";
				for(i=0;i<4;i++){
					cin>>*(otp+i);
				}
				cout<<endl<<"*****  YOUR PAYMENT HAS BEEN SUCESSFULL  ******";
			break;
				case 3:cout<<endl<<"PLEASE ENTER YOUT TEZ NO";
			for(i=0;i<10;i++){
				cin>>*(card+i);
			}
			cout<<endl<<"ENTER OTP";
				for(i=0;i<4;i++){
					cin>>*(otp+i);
				}
				cout<<endl<<"*****  YOUR PAYMENT HAS BEEN SUCESSFULL  ******";
			break;
			default:
				cout<<"YOU HAVE SELETED A INCOORECT OPTION";
				break;
	}
}


class option:public menu{
	public:
		string ice2[10];
		int u[10];
		int a;
		void showoption();
		void getoption();
		void del();
		void data();
		void search();

}p;
void option::showoption(){
	cout<<endl<<"***1. MAIN MENU ***";
	cout<<endl<<"***2. PLACE ORDER ***";
	cout<<endl<<"***3.ADD ICECREAM ***";
	cout<<endl<<"***4.DELETE ICECREAM***";
	cout<<endl<<"***5.SEARCH ITEM***";
	cout<<endl<<"***6.EXIT***";
	cout<<endl;
	cout<<endl<<"enter the option of your choice";
	cin>>a;



	switch(a){
		case 1: show();
		         showoption();
		break;
		case 2:billcal();
		     billpay();
		     showoption();
		     break;
	case 3:data();
	showoption();
	break;
	    case 4:del();
	    showoption();
		break;
		case 5:search();
		showoption();
		break;
		case 6:
           cout<"|||***** THANKYOU FOR VISITING   *****|||";
		exit(0);
		break;
		default:
		cout<<"you have entered a incoorect option";
		showoption();
		break;
	}


}
void option::search(){
	string r;
	cout<<"enter the ice cream that u want to search";
	cin>>r;
	fflush(stdin);
	fstream o;
	o.open("data",ios::in|ios::binary);
	while(o.eof()==0){
		for(i=0;i<18;i++){
			o>>ice[i];
			if(ice[i]==r){
				cout<<endl<<"here we go with ur "<<"\t"<<ice[i];
			}

		}


		o.close();
	}
}


void option::data(){
	int y;

	cout<<"enter no of ice cream your going to add";
	cin>>y;
	for(i=0;i<y;i++){

	cout<<"enter the name of icecream";
	cin>>ice2[i];
	cout<<endl<<"enter the price";
	cin>>u[i];


}
fop.open("icecream.txt",ios::out|ios::app);
for(i=0;i<y;i++){
	fop<<endl<<ice2[i]<<"\t"<<u[i]<<"\t"<<qua;
}
fop.close();
}

void option::del(){
	string temp;
	fstream j,k;
	j.open("data",ios::in|ios::binary);
	k.open("new",ios::out|ios::binary);
	cout<<endl<<"enter the name or of ice cream u want to delete";
	cin>>temp;
while(j.read((char*)&p,sizeof(p))){

	for(i=0;i<20;i++){

	if((temp!=ice[i])){
		k<<ice[i]<<"\t"<<price[i];
	}
}
rename("new","data");
remove("data");
cout<<"***item deleted****";
j.close();
k.close();

}
}
int main(){
	option k;
	icecream m;
	m.display();

	k.showoption();

}
