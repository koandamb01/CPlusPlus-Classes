#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

vector<Product>cart;

// Funtion to displays main menu.
void main_menu(){
    cout<<"1. Add a new product.\n";
    cout<<"2. Update quantity.\n";
    cout<<"3. Remove a product.\n";
    cout<<"4. Display total price.\n";
    cout<<"5. Exit This Program.\n";
}

void display_cart(){
    // vector<Product> cart;
    if(cart.empty()){
        cout<<"Your shopping cart is empty!\n";
        return;
    }
    
    cout<<"----- Your Shopping Cart -----\n";
    double grand_total = 0.0;
    double sub_total = 0.0;
    for(int x=0; x < cart.size();x++){

        cout<<x+1<<". "<<cart[x].name <<"\t";
        cout<<"Qty: " <<cart[x].quantity <<"\t";
        cout<<"Price: $" <<cart[x].price <<"\t";
        sub_total = cart[x].quantity * cart[x].price;
        cout<<"Sub_total: $"<<sub_total<<"\n";
        grand_total = grand_total + sub_total;
    }
    cout<<"Your grand total is: $"<<grand_total<<"\n";

}


// Function to add products
void add_product(){
    // vector<Product> cart;

        cout<<"Please enter the new product informations\n";
        Product newProduct;

        cout<<"Product name: ";
        cin.ignore();
        getline(cin, newProduct.name);

        cout<<"Quantity: ";
        cin>> newProduct.quantity;

        cout<<"Price: ";
        cin>> newProduct.price;

        cart.push_back(newProduct);
        cout<<"Item added succesfully!\n\n";
   
}

// Function to update product quantity.
void update_quantity(){
    // vector<Product> cart;
    if(cart.empty()){
        cout<<"Your shopping cart is empty. Add items first!\n";
        return;
    }
    
    cout<<"Enter the name of the item to update: ";
    string lookup_item;
    cin>>lookup_item;
    bool isItemFound = false;
    for(int x=0; x < cart.size();x++){
        if(lookup_item == cart[x].name){
            isItemFound = true;
            cout<<"The current quantity is: "<<cart[x].quantity<<"\n";
            int new_quantity;
            cout<<"Enter New quantity: ";
            cin>>new_quantity;
            cart[x].quantity = new_quantity;
            cout<<"Quantity updated succesfully!\n\n";

        }
    }
    if (isItemFound == false){
        cout<<"Item not found.\n";
    }
}

// Function to remove product.
void remove_product(){
    // vector<Product> cart;
    if(cart.empty()){
        cout<<"Your shopping cart is empty!\n";
        return;
    }
   
    cout<<"Enter the name of the item to remove: ";
    string lookup_item;
    cin>>lookup_item;
    bool isItemFound = false;
    for(int x=0; x < cart.size();x++){
        if(lookup_item == cart[x].name){
            isItemFound = true;
            cart.erase(cart.begin() + 1);
            cout<<"Item removed succesfully!\n";
            if(cart.empty()){
                cout<<"Your shopping cart is empty!\n";
            }
        }
    }
    if (isItemFound == false){
        cout<<"Item not found.\n";
    }

}


//Main function
int main(){
    int chosen_option;
    cout<<"\n";
    cout<<"----Welcome to your shopping cart!-----\n";
    cout<<"Please chose an option from the main menu: \n";
    main_menu();
    cin>>chosen_option;
    while (chosen_option!=5) {
        switch (chosen_option) {
            case 1:
                add_product();
                display_cart();
                cout<<"\n";
            break;

            case 2:
                update_quantity();
                display_cart();
                cout<<"\n";
            break;

            case 3:
                remove_product();
                display_cart();
            cout<<"\n";
            break;

            case 4:
                display_cart();
            break;

            default:
            cout<<"Please choose from the main menu.\n";
            break;
        }
        cout<<"What would you like to do next?\n";
        main_menu();
        cin>>chosen_option;
    }
    cout<<"You are exiting the program!\n";
    cout<<"---Thank you for shopping with us---\n";
    return 0;
}