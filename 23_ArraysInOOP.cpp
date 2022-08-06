#include <iostream>
using namespace std;
//Arrays in OOP
class shop
{
    int item_id[10];
    int price[10];

public:
    void get_price(void);
    void display_price(void);
};

void shop::get_price()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Id of item no. " << i << " : ";
        cin >> item_id[i];
        cout << "Enter price for item no. " << i << " : ";
        cin >> price[i];
    }
}

void shop::display_price()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "The price for Item Id " << item_id[i] << " is : " << price[i] << endl;
    }
}
int main()
{
    shop raj_shop;
    raj_shop.get_price();
    raj_shop.display_price();
    return 0;
}