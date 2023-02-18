#include<iostream>
#include<ctime>
#include<string>
#include<cmath>
using namespace std;

void menu(string name,int age){
    cout << "input name : ";
    getline(cin,name);
    cout << "input age : ";
    cin >> age;
}

void random(int number){
    srand(time(0));
    int a = rand()%78+1;
}

int main(){
    string namel;
    int agel,a;
    random(a);
    cout << a << endl;
    menu(namel,agel);
    cout << namel << "\n" << agel;
    return 0;
}

