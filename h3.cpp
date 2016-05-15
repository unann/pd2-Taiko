#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	string name;
	int height, weight;
	ofstream outFile("outfile", ios::out);
	if(!outFile){
		cerr<<"Failed to open"<<endl;
		exit(1);
	}
	cout<<"Enter Name Height Weight each line.\n"
		<<"EOF to finish.\n"<<"?";
	outFile<<"Name\tHeight\tWeight\tBMI\n";
	while(cin>>name>>height>>weight){
		outFile<<name<<"t"<<height<<"t"<<weight<<"t"<<(weight/(height * height))<<endl;
				cout<<"?";
	}
	cout<<endl;
	return 0;
}
