#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Product {
    string name;
    double price;
    double quantity;
};


double calculateTotalPrice(double quantity, double price) {
    return quantity * price;
}


bool enoughMoney(double money, const vector<double>& totalPriceList) {
    double total = 0;
    for (double price : totalPriceList) {
        total += price;
    }
    return money >= total;
}


void buyCheapestPerUnit(vector<Product>& products, double& money) {
    sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a.price / a.quantity < b.price / b.quantity;
    });

    for (const auto& product : products) {
        double totalPrice = calculateTotalPrice(product.quantity, product.price);
        if (money >= totalPrice) {
            cout << "Buying " << product.quantity << " " << product.name << " for " << totalPrice << " VND" << endl;
            money -= totalPrice;
        } else {
            break;
        }
    }
}

void buyCheapestTotalValue(vector<Product>& products, double& money) {
    sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a.price * a.quantity < b.price * b.quantity;
    });

    for (const auto& product : products) {
        double totalPrice = calculateTotalPrice(product.quantity, product.price);
        if (money >= totalPrice) {
            cout << "Buying " << product.quantity << " " << product.name << " for " << totalPrice << " VND" << endl;
            money -= totalPrice;
        } else {
            break;
        }
    }
}


void buyProductsRounded(vector<Product>& products, double& money) {

    for (auto& product : products) {
        product.quantity = round(product.quantity * 10) / 10; 
        product.price = round(product.price / 1000) * 1000; 
    }


}

int main() {
    int n;
    double money; 
    cout << "Enter the number of products: ";
    cin >> n;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    vector<Product> products(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter product name, price, and quantity for product " << i+1 << ": ";
        cin >> products[i].name >> products[i].price >> products[i].quantity;
    }


    vector<double> totalPriceList;
    for (const auto& product : products) {
        double totalPrice = calculateTotalPrice(product.quantity, product.price);
        totalPriceList.push_back(totalPrice);
        cout << "Total price for " << product.quantity << " " << product.name << ": " << totalPrice << " VND" << endl;
    }


    if (enoughMoney(money, totalPriceList)) {
        cout << "You have enough money to buy all the products!" << endl;
    } else {
        cout << "You don't have enough money to buy all the products!" << endl;
    }

    cout << "Buying products based on cheapest price per unit:" << endl;
    buyCheapestPerUnit(products, money);


    cout << "Buying products based on cheapest total value:" << endl;
    buyCheapestTotalValue(products, money);

    cout << "Buying products with rounded quantities and money:" << endl;
    buyProductsRounded(products, money);

    return 0;
}
