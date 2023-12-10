#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    int price;
    string name;
    int age;
    int count_of_people;

    Company() : name("Name"), count_of_people(10), age(19), price(10000) {}

    Company(string name, int count_of_people, int age, int price) : name(name), count_of_people(count_of_people), age(age), price(price) {}

    void CompanyInfo() {
        cout << "Название компании: " << name << "\nКоличество сотрудников " << count_of_people << "\nВозраст компании: " << age << "\nСтоимость компании: " << price << "\n___________" << endl;
    }
};





class Employee : public Company {
public:
    int members_of_family;
    int age_of_emp;
    string name_of_emp;
    int money;

    Employee() : members_of_family(3), money(1000000) {}
    Employee( string name_of_emp, int age_of_emp, int members_of_family, int money) : name_of_emp(name_of_emp), age_of_emp(age_of_emp), members_of_family(members_of_family), money(money) {}

    void EmployeeInfo() {
        cout << "Имя рабочего: " << name_of_emp << "\nВозраст: " << age_of_emp << "\nСостояние: " << money << "\nКоличество членов семьи: " << members_of_family << "\n___________" << endl;
    }
};








class Vehicle {
public:
    string brand;
    int price;
    int year;;
    string color;


    Vehicle() : brand("Vehicle"), price(0), year(0), color("Color") {}
    Vehicle(string brand, int price, int year, string color) : brand(brand), price(price), year(year), color(color) {}

    void VehicleInfo() {
        cout << "Бренд: " << brand << "\nЦена: $" << price << "\nГод выпуска: " << year << "\nЦвет: " << color << "\n___________" << endl;
    }
};






class Truck : public Vehicle {
public:
    int capacity;
    int mass;

    Truck() : capacity(0), mass(0) {}

    Truck(int capacity, int mass, string brand, int price, int year, string color) : capacity(capacity), mass(mass), Vehicle(brand, price, year, color) {}


    void TruckInfo() {
        cout << "Бренд: " << brand << "\nГрузоподъемность: " << capacity << "\nМасса " << mass << "\nЦена: $" << price << "\n___________" << endl;
    } 
};








class Car : public Vehicle {
public:
    int seats;
    int weight;
    
    Car() : seats(seats), weight(weight) {}

    Car(int seats, int weight, string brand, int price, int year, string color) : seats(seats), weight(weight), Vehicle(brand, price, year, color) {}


    Car(int seats, int weight, Vehicle& vehicle) : seats(seats), weight(weight), Vehicle(vehicle) {}

    void CarInfo() {
        cout << "Количество мест: " << seats << "\nМасса: " << weight << "\nБренд: " << brand << "\nЦена: $" << price << "\nГод выпуска: " << year << "\nЦвет: " << color << endl;
    }
};







int main() {

    setlocale(LC_ALL, "ru");

    Company c1("Apple", 43566, 16, 500000000);
    c1.CompanyInfo();



    Employee emp1("Alexis", 19, 5, 10000);
    emp1.EmployeeInfo();



    Vehicle v1("Jeep", 10000, 2010, "Silver");
    v1.VehicleInfo();



    Truck t1(1000, 20000, "Man", 15000, 2011, "White");
    t1.TruckInfo();



    Car car1(5, 1500, "Tesla", 15000, 2023, "Grey");
    car1.CarInfo();
  

    return 0;
}
