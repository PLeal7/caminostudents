#include <iostream>

using namespace std;

class Estudante {
public:
	string name;
	string email;

	Estudante(string name, string email){
		this->name = name;
		this -> email = email;
	}
};

int main()
{
	Estudante pedro("Pedro Estellita Leal", "cm268@caminoschool.com.br");

	cout << pedro.name << endl;
	cout << pedro.email << endl;
}