#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{

string line;
ifstream file("IO QUEST Q1.txt");
if(file.is_open())
{

while(getline(file,line))
{
	cout<<line<<endl;
}
	file.close();

}
else
cout<<"file was not able to store";
cin.get();
return 0;
}
