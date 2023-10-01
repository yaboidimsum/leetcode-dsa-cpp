#include <iostream>

using namespace std;

/*Review how classes work in C++.*/

class Cookie
{
private:
    string color;
    int chips;

public:
    Cookie(string color, int chips)
    {
        this->color = color;
        this->chips = chips;
    }
    string getColor()
    {
        return color;
    }
    int getChips()
    {
        return chips;
    }
    void setColor(string color)
    {
        this->color = color;
    }
    void setChips(int chips)
    {
        this->chips = chips;
    }
};

int main()
{
    Cookie *cookieOne = new Cookie("red",6);
    Cookie *cookieTwo = new Cookie("blue",5);

    cout << "cookieOne color: " << cookieOne->getColor() << endl;
    cout << "cookieOne chips: " << cookieOne->getChips() << endl;
    cout << endl;
    cookieOne->setColor("green");
    cookieOne->setChips(10);
    cout << "cookieOne color: " << cookieOne->getColor() << endl;
    cout << "cookieOne chips: " << cookieOne->getChips() << endl;
    cout << endl;
    cout << "cookieTwo color: " << cookieTwo->getColor() << endl;
    cout << "cookieTwo chips: " << cookieTwo->getChips() << endl;
};