#include <iostream>
#include <string>
using namespace std;

// Uni and Bi-directional Association
// 2 chracteristics of Association 
// They use eachother but None of them are owner actually 
// Bothe have different lifetime

class SwipeCard
{
public:
    string cardNo;

    SwipeCard(){
        this->cardNo = " Default card ";
    }

    SwipeCard(string cardNo){
        this->cardNo = cardNo;
    }

    SwipeCard(SwipeCard &obj){
        this->cardNo = obj.cardNo;
    }

    void LinkManager(class Manager& manager);
};

class Manager
{
public:
    string name;

    Manager() {
        this->name = "Not mentioned";
    }

    Manager(string name) {
        this->name = name;
    }

    Manager(Manager& obj) {
        this->name = obj.name;
    }

    void Login(SwipeCard& card)
    {
        std::cout << "\t\t Manager " << name << " is logging in using SwipeCard " << card.cardNo << std::endl;
    }

};

void SwipeCard::LinkManager(Manager& manager)
{
    std::cout << "\t\t SwipeCard " << cardNo << " has been swiped by Manager " << manager.name << std::endl;
}

int main()
{
    cout << endl;
    cout << "\t" << "     =====> Uni DirectionalAssociation Relationship <===== \n" << endl;

    Manager m("Areeba");
    SwipeCard s("CS001");

    m.Login(s);
    s.LinkManager(m);
    
    cout << endl;

    return 0;
}
