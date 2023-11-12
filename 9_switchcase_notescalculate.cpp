/* // Simple Notes detector~
#include<iostream>
using namespace std;
int main(){

    int total_amt;
    cout << "Enter the total amount: ";
    cin >> total_amt;
    int hundreds, fifties, thirties, ones;
    // ₹1330 ~ How many?  ₹100, ₹50, ₹30, ₹1  
    // Using switch case:
    switch(100){
        case 100:{
            hundreds = ((total_amt/100));
            if(hundreds != 0){
                total_amt = total_amt - ((total_amt/100)*100);
            }
        }
        case 50:{
            fifties = ((total_amt/50));
            if(fifties != 0){
                total_amt = total_amt - ((total_amt/50)*50);
            }
        }
        case 30:{
            thirties = ((total_amt/30));
            if(thirties != 0){
                total_amt = total_amt - ((total_amt/30)*30);
            }
        }
        case 1:{
            ones =((total_amt/1));
            if(ones != 0){
                total_amt = total_amt - ((total_amt/1)*1);
            }
        }
        default:
            break;
    }
    cout << "Hundreds: " << hundreds << endl;
    cout << "Fifties: " << fifties << endl;
    cout << "Thirties: " << thirties << endl;
    cout << "Ones: " << ones << endl;

}

cout << '\n'; */
// Optimised Solution!
#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are: "<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are: "<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are: "<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are: "<<Rs1<<endl; 
           }
}
   
    // Calculator!

/* {
    int a, b;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    char ch;
    cout << "Enter for performing arithmetical operation: ";
    cin >> ch;
    switch(ch){
        case '+': cout << a+b;
                  break;
        case '-': cout << a-b;
                  break;
        case '*': cout << a*b;
                  break;
        case '/': cout << a/b;
                  break;
        case '%': cout << a%b;
                  break;
    }
} */
