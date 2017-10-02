/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 27, 2017, 12:56 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;


class ShopItemOrder {
public:

string getItemName() const {
    return itemName;
}
void setItemName(string itemName) {
    this->itemName = itemName;
}
double getItemUnitPrice() const {
    return itemUnitPrice;
}
void setItemUnitPrice(double itemUnitPrice) {
    this->itemUnitPrice = itemUnitPrice;
}
int getNumberOrdered() const {
    return numberOrdered;
}
void setNumberOrdered(int numberOrdered) {
    this->numberOrdered = numberOrdered;
}
double totalPrice()
{
    double price;
    price = getItemUnitPrice() * getNumberOrdered();
    return price;
}
private:  
string itemName;
double itemUnitPrice;
int numberOrdered;
};


/*
 * 
 */
int main(int argc, char** argv) {
    ShopItemOrder myShopItemOrder;
    myShopItemOrder.setNumberOrdered(5);
    myShopItemOrder.setItemName("a singular potato chip");
    myShopItemOrder.setItemUnitPrice(10.00);
    cout << myShopItemOrder.getNumberOrdered() << " of " << myShopItemOrder.getItemName() << " will cost " << myShopItemOrder.totalPrice() << "$" << endl;
    return 0;
}


