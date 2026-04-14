#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    string name;
    float price;
    int quantity;

    float getTotal() {
        return price * quantity;
    }
};

// Add Product
void addProduct(vector<Product>& cart) {
    Product p;

    cout << "\nEnter Product Name: ";
    cin >> p.name;

    cout << "Enter Price: ";
    cin >> p.price;

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    cart.push_back(p);

    cout << "Product Added Successfully!\n";
}

// Display Bill
void displayBill(vector<Product>& cart) {
    if(cart.empty()) {
        cout << "\nCart is empty!\n";
        return;
    }

    float grandTotal = 0;

    cout << "\n========== BILL ==========\n";

    for(int i = 0; i < cart.size(); i++) {
        cout << "\nProduct " << i + 1 << endl;
        cout << "Name: " << cart[i].name << endl;
        cout << "Price: " << cart[i].price << endl;
        cout << "Quantity: " << cart[i].quantity << endl;

        float total = cart[i].getTotal();
        cout << "Total: " << total << endl;

        grandTotal += total;
    }

    cout << "\n--------------------------\n";
    cout << "Grand Total: " << grandTotal << endl;
}

// Search Product
void searchProduct(vector<Product>& cart) {
    string searchName;
    cout << "\nEnter product name to search: ";
    cin >> searchName;

    bool found = false;

    for(int i = 0; i < cart.size(); i++) {
        if(cart[i].name == searchName) {
            cout << "\nProduct Found!\n";
            cout << "Name: " << cart[i].name << endl;
            cout << "Price: " << cart[i].price << endl;
            cout << "Quantity: " << cart[i].quantity << endl;
            found = true;
        }
    }

    if(!found) {
        cout << "Product not found!\n";
    }
}

// Remove Product
void removeProduct(vector<Product>& cart) {
    string name;
    cout << "\nEnter product name to remove: ";
    cin >> name;

    for(int i = 0; i < cart.size(); i++) {
        if(cart[i].name == name) {
            cart.erase(cart.begin() + i);
            cout << "Product removed!\n";
            return;
        }
    }

    cout << "Product not found!\n";
}

// Clear Cart
void clearCart(vector<Product>& cart) {
    cart.clear();
    cout << "Cart cleared!\n";
}

// Main
int main() {
    vector<Product> cart;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Bill\n";
        cout << "3. Search Product\n";
        cout << "4. Remove Product\n";
        cout << "5. Clear Cart\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addProduct(cart);
                break;

            case 2:
                displayBill(cart);
                break;

            case 3:
                searchProduct(cart);
                break;

            case 4:
                removeProduct(cart);
                break;

            case 5:
                clearCart(cart);
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}