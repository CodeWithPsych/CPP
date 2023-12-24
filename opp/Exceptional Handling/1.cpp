#include <iostream>
#include <stdexcept>  

using namespace std;

class Item {
public:
    string name;
    double price;
    int quantity;

    Item() : name(""), price(0.0), quantity(0) {} 

    Item(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}
};

class Cart {
private:
    static const int MAX_ITEMS = 10;
    Item items[MAX_ITEMS];
    int itemCount;

public:
    Cart() : itemCount(0) {}

    void addItem(const Item& item) {
        if (itemCount >= MAX_ITEMS) {
            throw overflow_error("Error: Cart is full. Cannot add more items.");
        }

        if (item.quantity < 0) {
            throw invalid_argument("Error: Invalid quantity. Quantity cannot be negative.");
        }

        items[itemCount++] = item;
        cout << "Item added to cart: " << item.name << endl;
    }

    void removeItem(const string& itemName) {
        int index = -1;

        for (int i = 0; i < itemCount; ++i) {
            if (items[i].name == itemName) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            throw out_of_range("Error: Item '" + itemName + "' not found in the cart.");
        }

        for (int i = index; i < itemCount - 1; ++i) {
            items[i] = items[i + 1];
        }

        --itemCount;
        cout << "Item removed from cart: " << itemName << endl;
    }

    double calculateTotalCost() const {
        double totalCost = 0.0;
        for (int i = 0; i < itemCount; ++i) {
            totalCost += items[i].price * items[i].quantity;
        }
        return totalCost;
    }
};

int main() {
    Cart cart;

    try {
        string name1;
        double price1;
        int quantity1;

        cout << "Enter details for Item 1:" << endl;
        cout << "Name: ";
        cin >> name1;

        cout << "Price: $";
        cin >> price1;

        cout << "Quantity: ";
        cin >> quantity1;

        Item item1(name1, price1, quantity1);
        cart.addItem(item1);

        string name2;
        double price2;
        int quantity2;

        cout << "Enter details for Item 2:" << endl;
        cout << "Name: ";
        cin >> name2;

        cout << "Price: $";
        cin >> price2;

        cout << "Quantity: ";
        cin >> quantity2;

        Item item2(name2, price2, quantity2);
        cart.addItem(item2);

        cout << "Total Cost: $" << cart.calculateTotalCost() << endl;

        string itemNameToRemove;
        cout << "Enter the name of the item to remove: ";
        cin >> itemNameToRemove;
        cart.removeItem(itemNameToRemove);

        string invalidItemName;
        double invalidItemPrice;
        int invalidItemQuantity;

        cout << "Enter details for an item with negative quantity:" << endl;
        cout << "Name: ";
        cin >> invalidItemName;

        cout << "Price: $";
        cin >> invalidItemPrice;

        cout << "Quantity: ";
        cin >> invalidItemQuantity;

        Item invalidItem(invalidItemName, invalidItemPrice, invalidItemQuantity);
        cart.addItem(invalidItem);

        cout << "Total Cost: $" << cart.calculateTotalCost() << endl;
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
        return 1;
    }

    return 0;
}