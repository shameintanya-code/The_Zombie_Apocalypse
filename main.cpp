#include <iostream>

using namespace std;
//variables
int lives=10;
int option;
string name;
void left()
{

}
void right()
{

}
void straight()
{

}
void menu()
{
    cout<<"                     ---------------------                       "<<endl;
    cout<<"                     The Zombie Apocalypse                       "<<endl;
    cout<<"                     ---------------------                       "<<endl;
    cout<<""<<endl;

    cout<<"Enter your name to start the game"<<endl;
    getline(cin, name);
    cout<<""<<endl;
    cout<<"Hey..."<<name<<endl;
    cout<<"A virus has infected the city you must survuve and find a way to leave the city..."<<endl;
    cout<<"In order to survive you need to:"<<endl;
    cout<<"1. Search for food & weapons"<<endl;
    cout<<"2. Fight Zombies"<<endl;
    cout<<"3. Manage your lives"<<endl;
    cout<<"4. Make Survival Decisions"<<endl;
    cout<<"5. Escape to the safe city"<<endl;

    cout<<""<<endl;
    cout<<"Your current location is in your apartment"<<endl;
    cout<<""<<endl;

    cout<<"---------"<<endl;
    cout<<"YOUR DATA"<<endl;
    cout<<"---------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Lives: "<<lives<<endl;
    cout<<""<<endl;
    cout<<"You are in the corridor outside your apartment dorm and in front of you there is a stair case"<<endl;
    cout<<"Your arpartment has an undergroud parking"<<endl;
    cout<<"that the zombies has not reached yet"<<endl;
    cout<<"You have 3 options..."<<endl;
    cout<<"1. Go left"<<endl;
    cout<<"2. Go right"<<endl;
    cout<<"3. Go straight"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            left();
            break;
        case 2:
            right();
            break;
        case 3:
            straight();
            break;
    }
}
int main()
{
    menu();
    return 0;
}
