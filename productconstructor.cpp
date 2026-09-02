#include<iostream>
using namespace std;
class Product
{
    private:
    string name;
    int quntity;
    float price;
    public:
    Product()    
        name="Unknown";
        quntity=0;
        price=0;
    }
    Product(string n, int q, float p)  
    {
        name=n;
        quntity=q;
        price=p;
    }
    Product(const Product &p)    
    {
        name=p.name;
        quntity=p.quntity;
        price=p.price;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"quntity:"<<quntity<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"total cost:"<<quntity*price<<endl;
    }
};
int main()
{
    string name;
    int quntity;
    float price;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the quntity:";
    cin>>quntity;
    cout<<"Enter the price:";
    cin>>price;
    Product p(name, quntity, price);
    p.display();
    return 0;
}

