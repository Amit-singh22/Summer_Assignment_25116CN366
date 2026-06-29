//WAP to create inventory management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, choice, searchId, found;
    
    cout << "Enter number of products: ";
    cin >> n;

    int productId[100], quantity[100];
    float price[100];
    string productName[100];

    // Input product details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << endl;

        cout << "Product ID: ";
        cin >> productId[i];

        cin.ignore();
        cout << "Product Name: ";
        getline(cin, productName[i]);

        cout << "Quantity: ";
        cin >> quantity[i];

        cout << "Price: ";
        cin >> price[i];
    }

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Display Inventory\n";
        cout << "2. Search Product\n";
        cout << "3. Update Quantity\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\n--- Inventory Details ---\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nProduct ID: " << productId[i];
                    cout << "\nProduct Name: " << productName[i];
                    cout << "\nQuantity: " << quantity[i];
                    cout << "\nPrice: " << price[i] << endl;
                }
                break;

            case 2:
                cout << "Enter Product ID to search: ";
                cin >> searchId;

                found = 0;
                for (int i = 0; i < n; i++) {
                    if (productId[i] == searchId) {
                        cout << "\nProduct Found!\n";
                        cout << "Name: " << productName[i] << endl;
                        cout << "Quantity: " << quantity[i] << endl;
                        cout << "Price: " << price[i] << endl;
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    cout << "Product not found.\n";
                break;

            case 3:
                cout << "Enter Product ID: ";
                cin >> searchId;

                found = 0;
                for (int i = 0; i < n; i++) {
                    if (productId[i] == searchId) {
                        cout << "Enter new quantity: ";
                        cin >> quantity[i];
                        cout << "Quantity updated successfully.\n";
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    cout << "Product not found.\n";
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}