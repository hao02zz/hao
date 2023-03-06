#include <iostream>
#include <string>
using namespace std;

class TV{
	public:		
		void title(){
			cout<<" Type\t"<<"Color\t"<<"Monitor\t"<<"Price\t"
				<<"Wifi\t"<<"Bluetooth\t"<<"Touchscreen\t"<<"Other Specifications\n";
			cout<<"----------------------------------------------------------------------------------------------\n";
		}
}; 
class TVA:public TV{
	public:		
		string type ="TV_A";
		string color ="Grey";
		string monitor = "LED";
		string price ="825USD";
		string wifi="Yes";
		string bluettoth="Yes";
		string touch="No";
		string other = "Stereo Speaker,HDMI port,55inch";		
};
class TVB:public TV{
	public:		
		string type ="TV_B";
		string color = "RED";
		string monitor = "QLED";
		string price ="1200USD";
		string wifi="Yes";
		string bluettoth="Yes";
		string touch="Yes";
		string other = "Stereo Speaker,HDMI port,55inch";
};
class TVC:public TV{
	public:		
		string type = "TV_C";
		string color = "Blue";
		string monitor = "QLED";
		string price ="1000USD";
		string wifi="Yes";
		string bluettoth="Yes";
		string touch="Yes";
		string other = "Stereo Speaker,HDMI port,55inch ";
};
class TVD:public TV{
	public:		
		string type = "TV_D ";
		string color = "Pink";
		string monitor = "LCD";
		string price ="500USD";
		string wifi="No";
		string bluettoth="Yes";
		string touch="No";
		string other = "Stereo Speaker,HDMI port,55inch";
};
class TVE:public TV{
	public:		
		string type = "TV_E";
		string color = "Green";
		string monitor = "Plasma";
		string price ="250USD";
		string wifi="No";
		string bluettoth="No";
		string touch="No";
		string other = "Stereo Speaker,HDMI port,55inch ";
};
class TVF:public TV{
	public:		
		string type = "TV_F";
		string color = "White";
		string monitor = "Plasma";
		string price ="200USD";
		string wifi="No";
		string bluettoth="No";
		string touch="No";
		string other = "Stereo Speaker,HDMI port,55inch ";
		
};
int main(){
	TV tv;
	TVA a;
	TVB b;
	TVC c;
	TVD d;
	TVE e;
	TVF f;
	
	string enter;
	tv.title();	
	cout<<a.type+"\t"+a.color+"\t"+a.monitor+"\t"+a.price+"\t"+a.wifi+"\t"+a.bluettoth+"\t\t"+a.touch+"\t\t"+a.other+"\n";
	cout<<b.type+"\t"+b.color+"\t"+b.monitor+"\t"+b.price+"\t"+b.wifi+"\t"+b.bluettoth+"\t\t"+b.touch+"\t\t"+b.other+"\n";
	cout<<c.type+"\t"+c.color+"\t"+c.monitor+"\t"+c.price+"\t"+c.wifi+"\t"+c.bluettoth+"\t\t"+c.touch+"\t\t"+c.other+"\n";
	cout<<d.type+"\t"+d.color+"\t"+d.monitor+"\t"+d.price+"\t"+d.wifi+"\t"+d.bluettoth+"\t\t"+d.touch+"\t\t"+d.other+"\n";
	cout<<e.type+"\t"+e.color+"\t"+e.monitor+"\t"+e.price+"\t"+e.wifi+"\t"+e.bluettoth+"\t\t"+e.touch+"\t\t"+e.other+"\n";
	cout<<f.type+"\t"+f.color+"\t"+f.monitor+"\t"+f.price+"\t"+f.wifi+"\t"+f.bluettoth+"\t\t"+f.touch+"\t\t"+f.other+"\n";
	cout<<"Enter the specifications for the television\n";
	cin>>enter;
	tv.title();	
	
	if(enter == a.type){
		cout<<a.type+"\t"+a.color+"\t"+a.monitor+"\t"+a.price+"\t"+a.wifi+"\t"+a.bluettoth+"\t\t"+a.touch+"\t\t"+a.other+"\n";
		
	}
	else if(enter == b.type){
		cout<<b.type+"\t"+b.color+"\t"+b.monitor+"\t"+b.price+"\t"+b.wifi+"\t"+b.bluettoth+"\t\t"+b.touch+"\t\t"+b.other+"\n";
	}
	else if(enter == c.type){
		cout<<c.type+"\t"+c.color+"\t"+c.monitor+"\t"+c.price+"\t"+c.wifi+"\t"+c.bluettoth+"\t\t"+c.touch+"\t\t"+c.other+"\n";
	}
	else if(enter == d.type ){
		cout<<d.type+"\t"+d.color+"\t"+d.monitor+"\t"+d.price+"\t"+d.wifi+"\t"+d.bluettoth+"\t\t"+d.touch+"\t\t"+d.other+"\n";
	}
	else if(enter == e.type){
		cout<<e.type+"\t"+e.color+"\t"+e.monitor+"\t"+e.price+"\t"+e.wifi+"\t"+e.bluettoth+"\t\t"+e.touch+"\t\t"+e.other+"\n";
	}
	else if(enter == f.type){
		cout<<f.type+"\t"+f.color+"\t"+f.monitor+"\t"+f.price+"\t"+f.wifi+"\t"+f.bluettoth+"\t\t"+f.touch+"\t\t"+f.other+"\n";
	}
	else if(enter == "Grey"){
		cout<<a.type+"\t"+a.color+"\t"+a.monitor+"\t"+a.price+"\t"+a.wifi+"\t"+a.bluettoth+"\t\t"+a.touch+"\t\t"+a.other+"\n";
	}
	else if(enter == "Red"){
		cout<<b.type+"\t"+b.color+"\t"+b.monitor+"\t"+b.price+"\t"+b.wifi+"\t"+b.bluettoth+"\t\t"+b.touch+"\t\t"+b.other+"\n";
	}
	else if(enter == "Blue"){
		cout<<c.type+"\t"+c.color+"\t"+c.monitor+"\t"+c.price+"\t"+c.wifi+"\t"+c.bluettoth+"\t\t"+c.touch+"\t\t"+c.other+"\n";
	}
	else if(enter == "Pink"){
		cout<<d.type+"\t"+d.color+"\t"+d.monitor+"\t"+d.price+"\t"+d.wifi+"\t"+d.bluettoth+"\t\t"+d.touch+"\t\t"+d.other+"\n";
	}
	else if(enter == "Green"){
		cout<<e.type+"\t"+e.color+"\t"+e.monitor+"\t"+e.price+"\t"+e.wifi+"\t"+e.bluettoth+"\t\t"+e.touch+"\t\t"+e.other+"\n";
	}
	else if(enter == "White"){
		cout<<f.type+"\t"+f.color+"\t"+f.monitor+"\t"+f.price+"\t"+f.wifi+"\t"+f.bluettoth+"\t\t"+f.touch+"\t\t"+f.other+"\n";
	}
	else if(enter == "QLED"){
	cout<<b.type+"\t"+b.color+"\t"+b.monitor+"\t"+b.price+"\t"+b.wifi+"\t"+b.bluettoth+"\t\t"+b.touch+"\t\t"+b.other+"\n";
	cout<<c.type+"\t"+c.color+"\t"+c.monitor+"\t"+c.price+"\t"+c.wifi+"\t"+c.bluettoth+"\t\t"+c.touch+"\t\t"+c.other+"\n";	
	}
	else if(enter == "LED"){
	cout<<a.type+"\t"+a.color+"\t"+a.monitor+"\t"+a.price+"\t"+a.wifi+"\t"+a.bluettoth+"\t\t"+a.touch+"\t\t"+a.other+"\n";
	cout<<d.type+"\t"+d.color+"\t"+d.monitor+"\t"+d.price+"\t"+d.wifi+"\t"+d.bluettoth+"\t\t"+d.touch+"\t\t"+d.other+"\n";	
	}
	else if(enter == "Plasma"){
	cout<<e.type+"\t"+e.color+"\t"+e.monitor+"\t"+e.price+"\t"+e.wifi+"\t"+e.bluettoth+"\t\t"+e.touch+"\t\t"+e.other+"\n";
	cout<<f.type+"\t"+f.color+"\t"+f.monitor+"\t"+f.price+"\t"+f.wifi+"\t"+f.bluettoth+"\t\t"+f.touch+"\t\t"+f.other+"\n";
	}
	else if(enter == "LCD"){
	cout<<d.type+"\t"+d.color+"\t"+d.monitor+"\t"+d.price+"\t"+d.wifi+"\t"+d.bluettoth+"\t\t"+d.touch+"\t\t"+d.other+"\n";	
	}
}
