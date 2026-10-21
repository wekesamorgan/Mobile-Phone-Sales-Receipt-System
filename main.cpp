#include <iostream>
using namespace std;
int main()
{
  string Customer_name,phone_model;
  int Quantity;
  double Price_per_phone,Total_sales;
  cout<<"enter customer name:";
  getline(cin,Customer_name);//allows space btn two names
  cout<<"enter phone model:";
  getline(cin,phone_model);
  cout<<"enter quantity:";
  cin>>Quantity;
  cout<<"enter price per phone:";
  cin>>Price_per_phone;
  Total_sales=Price_per_phone*Quantity;
  cout<<endl;
  cout<<"----------------------------------------"<<endl;
  cout<<"RECEIPT"<<endl;
  cout<<"----------------------------------------"<<endl;
  cout<<"customer name:"<<Customer_name<<endl;
  cout<<"phone model:"<<phone_model<<endl;
  cout<<"quantity:"<<Quantity<<endl;
  cout<<"price per phone:"<<Price_per_phone<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<"Total sales:"<<Total_sales<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<endl;
  return 0;
}