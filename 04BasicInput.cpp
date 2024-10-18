#include <iostream>

using namespace std;

int main()
{
	string nickname, school, course;
	cout <<"Nickname:";
	cin >> nickname;
	cout <<"Course-Year Level:";
	cin >> course;
	cout <<"School name:";
	cin >> school;
	cout << "Wow, Congrats " << nickname << "! " << course << " is a nice course. And you are studying in " << school << ", which is one of the Centers of Excellence in Tertiary Education." << endl;
	return 0;
}
