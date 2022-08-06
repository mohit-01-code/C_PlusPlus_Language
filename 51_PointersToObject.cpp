#include <iostream>
using namespace std;
// Pointers to Objects in C++

class shop
{
    int id;
    float price;

public:
    void setPrice(int i, float p)
    {
        id = i;
        price = p;
    }
    void displayPrice()
    {
        cout << "The id of object is : " << id << endl;
        cout << "The price of object is : " << price << endl;
    }
};

int main()
{
    shop *ptr = new shop[5];
    int itemId;
    float itemPrice;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the id of item " << i + 1 << " : ";
        cin >> itemId;
        cout << "Enter the price of item " << i + 1 << " : ";
        cin >> itemPrice;
        // (*ptr).setPrice(itemId, itemPrice);
        (ptr + i)->setPrice(itemId, itemPrice);
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        (ptr + i)->displayPrice();
    }

    return 0;
}