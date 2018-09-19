#include "std_lib_facilities.h"

int main() {
	cout << "Enter the name of the person you want to write to:\n";  
	string first_name;
	cin >> first_name;

	cout << "Enter the name of your friend:\n"; 
	string friend_name;
	cin >> friend_name;

	cout << "Enter the sex of your friend! Enter an m if the friend is male and an f if the friend is female!\n";
	char friend_sex {0};
	cin >> friend_sex;

	cout << "Enter the age of your friend:\n"; 
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)  //ha a kor kevesebb, mint 0 vagy egyenlő/több, mint 110
		simple_error("you're kidding!"); //írja ki az error-t

	cout << "Dear " << first_name << ",\nHow are you? It’s been a long time since I’ve heard from you!\nHave you seen " << friend_name << " lately?\n";
	if (friend_sex == 'm') //Ha a neme "m"
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')  //Ha a neme "f"
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";	
	
	if (age < 12) //Ha 12 évnél fiatalabb
		cout << "Next year you will be " << age+1 << ".\n"; //írja ki, hogy jövőre hány éves lesz
	if (age == 17)  //Ha pontosan 17 éves
		cout << "Next year you will be able to vote.\n";
	if (age > 70) // Ha 70-nél idősebb
		cout << "I hope you are enjoying your retirement.\n";

	cout << "Yours sincerely,\n\nDavid\n";

}