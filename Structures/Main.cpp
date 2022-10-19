#include <iostream>
#include <string>
#include <cmath>

struct date {
	int day{};
	int mounth{};
	int year{};
};
struct person {
	std::string name;
	date birthday;
	int salary = 0;
};

void show_person(person &P) {
	
	std::cout << "���: " << P.name << "\n";
	std::cout << "���� ��������: " <<
		P.birthday.day << "." <<     //������ �� �������� ��������� �� ������ ����������� ���: ->
		P.birthday.mounth << "." <<
		P.birthday.year << "\n";
	std::cout << "��������: " << P.salary;
}

person input_person() {
	person tmp;
	std::cout << "������� ���: ";
	getline(std::cin, tmp.name);
	std::cout << "������� ���� ��������: ";
	std::cin >> tmp.birthday.day >>
		tmp.birthday.mounth >>
		tmp.birthday.year;
	std::cout << "������� ��������: ";
	std::cin >> tmp.salary;
	return tmp;
	std::cout << "\n";
}

void fill_person(person &P) {
	std::cout << "������� ���: ";
	getline(std::cin, P.name);
	std::cout << "������� ���� ��������: ";
	std::cin >> P.birthday.day >>
		P.birthday.mounth >>
		P.birthday.year;
	std::cout << "������� ��������: ";
	std::cin >> P.salary;
	std::cout << "\n";

}

struct persona {
	std::string name;
	int age = 0;
	int coins[5]{};
};

void show_persona(persona &P) {
	std::cout << "���: " << P.name << "\n";
	std::cout << "�������: " << P.age << "\n";
	std::cout << "������: ";
	for (int i = 0; i < 5; i++)
		std::cout << P.coins[i] << ' ';
	std::cout << ' ';
}

inline int year_of_birth(persona& P, int year) {
	return year - P.age;
}

int cash(persona &P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

struct point {
	double X = 0;
	double Y = 0;
};

int compare_distance(point& P1, point P2) {
	double dist1 = sqrt(pow(0 - P1.X, 2) +
		                pow(0 - P1.Y, 2));
	double dist2 = sqrt(pow(0 - P2.X, 2) +
		                pow(0 - P2.Y, 2));
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)
		return -1;
	return 0;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ ��������� person
	/*struct person { // ���������� ��������� person. ��� �� ���������� ��������� ������� �1 � �2
		std::string name = "noname";
		int age = 18; 
		std::string position = "programer";
		int salary = 60000;
	} p1, p2 {"Bob Tomas", 40, "director", 120000};
	//��������� � ����� ������� ���������
	p1.name = "Tom Smith";
	p1.age = 18;
	//p1.position = "manager";
	p1.salary = 50000;

	std::cout << "���: " << p1.name << "\n";
	std::cout << "�������: " << p1.age << "\n";
	std::cout << "���������: " << p1.position << "\n";
	std::cout << "��������: " << p1.salary << "\n";
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "���: " << p2.name << "\n";
	std::cout << "�������: " << p2.age << "\n";
	std::cout << "���������: " << p2.position << "\n";
	std::cout << "��������: " << p2.salary << "\n";
	//��������� ����� ����������� ������� ���������
	p2 = { "Adam Tomas", 41, "president", 500000 };
	//������ ������������ ����� ������� �2 �������� �� ����� ������� �1
	p2 = p1; 
	//�������������� ������ �������� �������� ���������
	person p3{"Jake Home", 30, "policeman", 45000}; 

	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "���: " << p3.name << "\n";
	std::cout << "�������: " << p3.age << "\n";
	std::cout << "���������: " << p3.position << "\n";
	std::cout << "��������: " << p3.salary << "\n";*/

	//����� ��������� person
	

	/*person p4;
	p4.name = "Tom Smith";
	//p4.bithtday.day = 1;
	//p4.bithtday.mounth = 1;
	//p4.bithtday.year = 1970;
	p4.birthday = { 1, 1, 1970 };
	p4.salary = 50000;
	std::cout << "---------------------------------";
	std::cout << "\n";

	person p5{           //�������� ��������� ��������� � ������ ���������
		"Bob Tomas",    //name
		{5, 10, 2000},  //birthday
		20000           //salary
	};

	person* pp5 = &p5;
	std::cout << "���: " << pp5->name << "\n";
	std::cout << "���� ��������: " <<
		pp5->birthday.day << "." <<     //������ �� �������� ��������� �� ������ ����������� ���: ->
		pp5->birthday.mounth << "." <<
		pp5->birthday.year << "\n";
	std::cout << "��������: " << pp5->salary <<"\n";
	std::cout << "---------------------------------";
	std::cout << "\n";
	show_person(p4);

	//person p6 = input_person();
	person p6;
	fill_person(p6);
	std::cout << "---------------------------------";
	std::cout << "\n";
	show_person(p6);*/

	//������ 1. ������� � ��������
	/*std::cout << "������ 1.\n������:\n";
	persona A{
		"Nick Jacobs",
		25,
		{1, 2, 2, 5, 1}
	};
	show_persona(A);
	std::cout << "\n";
	std::cout << "��� ��������: " << year_of_birth(A, 2022) << "\n";
	std::cout << "����� ����������: " << cash(A) << "\n";*/
	
	//������ 2. ����������
	std::cout << "������ 2.\n����� �:\n";
	point A{ 4.5, -1.3 };
	std::cout << A.X << ", " << A.Y << '\n';
	point B{ 6.1, 0.9 };
	std::cout << "����� B: " << B.X << ", " << B.Y << "\n";
	std::cout << compare_distance(A, B) << "\n";

	return 0;
}