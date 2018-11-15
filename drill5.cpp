#include "std_lib_facilities.h"
int main()

try {
	//Annak érdekében, hogy az összes eredményt kiírja egy programban,
	//a változók neveit kiegészítettem az adott feladat sorszámával,
	//mivel két egyforma változó nem lehet.

	//1
	//Hibaleírás: ‘Cout’ was not declared in this scope
	//Eredeti: Cout << "Success!\n";
  	//Nagybetű helyett kisbetű a cout. Megoldás:
	cout << "1. Success!\n";

	//2
	//Hibaleírás: missing terminating " character
	//Eredeti kód: cout << "Success!\n;
	//a \n végére kell egy " karakter, így a megoldás:
	cout << "2. Success!\n";

	//3
	//Hibaleírások: a) stray ‘\’ in program
	//				b) missing terminating " character
	//				c) ‘n’ was not declared in this scope
	//Eredeti: cout << "Success" << !\n"
	//A felkiáltójel elé egy " karaktert és a sor végére egy ; karakter szükséges
	cout << "3. Success" << "!\n";

	//4
	//Hibaleírás: ‘success’ was not declared in this scope
	//Eredeti: cout << success << '\n';
	//a success-t " " közé kell tenni.
	cout << "4. success" << '\n';

	//5
	//Hibaleírás: a) conversion from ‘int’ to non-scalar type ‘std::__cxx11::string {aka std::__cxx11::basic_string<char>}’ requested
	//			b) cannot convert ‘std::__cxx11::string {aka std::__cxx11::basic_string<char>}’ to ‘int’ in assignment
	//Eredeti: string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	//string helyett int használata
	int res = 7; 
	vector<int> v5(10); 
	v5[5] = res; 
	cout << "5. Success! \n";

	//6
	//Hibaleírás:
	//Eredeti: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
	//v(5) helyett v[5] és a logikai jelnél != helyett ==
	vector<int> v6(10); 
	v6[5] = 7; 
	if (v6[5] == 7) 
		cout << "6. Success!\n";

	//7.
	//Hibaleírás: ‘cond’ was not declared in this scope
	//Eredeti: if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	//adni kell egy értéket a cond változónak.
	bool cond = true;
	if (cond) 
		cout << "7. Success!\n"; 
	else 
		cout << "Fail!\n";

	//8.
	//Hibaleírás: A program nem jelez hibát, de success helyett fail-t ír ki.
	//Eredeti: bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	//c legyen true
	bool c8 = true; 
	if (c8) 
		cout << "8. Success!\n"; 
	else 
		cout << "Fail!\n";

	//9
	//Hibaleírás: ‘boo’ was not declared in this scope
	//			végeredményül nem ír ki semmit
	//Eredeti: string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
	//boo helyett bool és c helyett !c
	string s9 = "ape"; 
	bool c9 = "fool"<s9; 
	if (!c9) 
		cout << "9. Success!\n";

	//10
	//Hibaleírás:
	//Eredeti:
	//
	string s10 = "ape"; 
	if (s10 != "fool") 
		cout << "10. Success!\n";

	//11
	//Hibaleírás: no match for ‘operator<’ (operand types are ‘std::ostream {aka std::basic_ostream<char>}’ and ‘const char [10]’)
	//Eredeti: string s = "ape"; if (s=="fool") cout < "Success!\n";
	//< helyett << és a logikai feltételnél == helyett != 
	string s11 = "ape"; 
	if (s11 !="fool") 
		cout << "11. Success!\n";

	//12
	//Hibaleírás:  a) could not convert ‘std::operator+...
	//				b) no match for ‘operator<’ (operand types are ‘std::ostream {aka std::basic_ostream<char>}’ and ‘const char [10]’)
	//Eredeti: string s = "ape"; if (s+"fool") cout < "Success!\n";
	//+ helyett != és < helyett << használata
	string s12 = "ape"; 
	if (s12 != "fool") 
		cout << "12. Success!\n";

	//13
	//Hibaleírás: a ciklus mindig igaz, ezért végtelen ciklus lesz
	//Eredeti: vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
	// a ; karakter kitörlése a for() után. size_t használata. int törlése. 0<v helyett i<v használata
	vector<char> v13(5); 
	for (size_t i=0; i<v13.size(); ++i)
		cout << "13. Success!\n";

	//14
	//Hibaleírás:
	//Eredeti: vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	// a ; karakter kitörlése a for() után. size_t hozzáadása
	vector<char> v14(5); 
	for (size_t i=0; i<=v14.size(); ++i)
		cout << "14. Success!\n";

	//15
	//Hibaleírás: nem ír ki hibát, de nem írja ki végig a szót.
	//Eredeti: string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
	//size_t hozzáadása és i<6 helyett i<s.size()
	string s15 = "15. Success!\n"; 
	for (size_t i=0; i<s15.size(); ++i) 
		cout << s15[i];

	//16
	//Hibaleírások: ‘then’ was not declared in this scope
	//Eredeti: if (true) then cout << "Success!\n"; else cout << "Fail!\n";
	//Then kitörlése
	if (true)
		cout << "16. Success!\n"; 
	else 
		cout << "Fail!\n";

	//17
	//Hibaleírások: Nem ír ki hibát, de nem is írja ki az eredményt, mert int és char 2 különböző dolog.
	//Eredeti: int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	//char átírása int-re
	int x17 = 2000; 
	int c17 = x17; 
	if (c17==2000) 
		cout << "17. Success!\n";

	//18
	//Hibaleírások: Nincs hiba, a program jól működik.
	//Eredeti: string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	//
	string s18 = "Success!\n"; 
	for (int i=0; i<10; ++i) 
		cout << s18[i];

	//19
	//Hibaleírások:  missing template arguments before ‘v19’
	//				‘v19’ was not declared in this scope
	//Eredeti: vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	//a ; karakter törlése. vector után <int> hozzáírása. int helyett size_t. <= helyett <
	vector<int> v19(5); 
	for (size_t i=0; i<v19.size(); ++i)
		cout << "19. Success!\n";

	//20
	//Hibaleírások: Nem ír ki hibát, de az eredményt sem. Ránézésre logikai hiba van
	//Eredeti: int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
	//++j helyett ++i kellene.
	int i20=0; 
	int j20 = 9; 
	while (i20<10) 
		++i20; 
	if (j20<i20) 
		cout << "20. Success!\n";

	//21
	//Hibaleírások: stray ‘\342’ in program
	//Eredeti: int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
	//nem tudunk osztani nullával ezért zárójel elhagyása a 5/(x-2)-nél és - helyett +
	//továbbá mivel double ezért 5 helyett 5.0
	int x21 = 2; 
	double d21 = 5.0/x21+2; 
	if (d21==2*x21+0.5) 
		cout << "21. Success!\n";

	//22
	//Hibaleírások: ‘std::__cxx11::string {aka std::__cxx11::basic_string<char>}’ is not a template
	//Eredeti: string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
	//A <char> törlése
	string s22 = "Success!\n"; 
	for (int i=0; i<=10; ++i) 
		cout << s22[i];

	//23
	//Hibaleírások: ‘j23’ was not declared in this scope
	//Eredeti: int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
	//int j=0 hozzáadása, és ++j helyett ++i növelése
	int i23=0; 
	int j23=0;
	while (i23<10) 
		++i23; 
	if (j23<i23) 
		cout << "23. Success!\n";

	//24
	//Hibaleírás:
	//Eredeti: int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
	//
	int x24 = 4;
    double d24 = 5.0/(x24-2);
    if (d24 == x24/2.0+0.5)
		cout << "24. Success!\n";

	//25.
	//Hibaleírás:  error: no match for ‘operator<<’ (operand types are
    //             ‘std::istream {aka std::basic_istream<char>}’ and ‘const
	//             char [14]’)
	//Eredeti: cin << "Success!\n";
	//cin helyett cout
	cout << "25. Success!\n";

	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}