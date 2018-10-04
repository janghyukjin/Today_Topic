//
//  main.cpp
//  test
//
//  Created by JangHyukJin on 20/09/2018.
//  Copyright © 2018 JangHyukJin. All rights reserved.
//
#include <iostream>

using namespace std;

class FruitSeller
{
    private:
        int apple_price;
        int numOfApples;
        int myMoney;
    public:
        FruitSeller(int price, int num, int money)
        {
            apple_price= price;
            numOfApples= num;
            myMoney= money;
            
        }
    int SaleApples(int money)
    {
        int num = money/ apple_price;
        numOfApples-= num;
        myMoney+= money;
        return num;
        
    }
    void ShowSalesResult() const
    {
        cout << "the number of apples: " << numOfApples << endl;
        cout << "the margin: " << myMoney << endl;
        
    }
    
};
