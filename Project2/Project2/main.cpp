#include <iostream>
#include <string>
using namespace std;

class str
{
public:
	
	void divideString(string c)
	{
		for (int i = 1; i <= c.length(); i++)
		{
			cout << c.substr(0,i) << endl;
		}
	}
};

int main()
{
	string s;
	
	cout << "���ڿ� �Է� >>";
	getline(cin, s);

	str h;
	h.divideString(s);

	system("pause");
}