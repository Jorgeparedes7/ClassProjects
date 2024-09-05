//Name: Jorge Paredes
//Date: 8/28/2024
//Assignment: Project 1


#include <iostream>
#include <iomanip>
using namespace std; 

//Main function
int main()
{
  
  //Cow Variables
  float cow_cost = 2000.00;
  float cow_profit = 1000.00;
  float cow_monthly_maintain = 150.00;

  //Variables   
  float land_cost;
  float budget;
  float long_side;
  float short_side;
  float height, cost; 
  float area; 
  float total_Price; 
  float left_Over;
  float intInvestment;
  float yearly_profit;
  int cows_Bought; // This variable is integer because with float it rounds out to 3.25 but with integer it rounds to a whole number
  
  // Inputs for questions
  cout << "Well it looks like you decided to buy a farm!\n";
  cout << "Let's see what your budget, farm size, and cows to figure out your profit!" << endl;
  
  cout << "What is the length of the the short side of your farm?" <<endl;                          // This line is an out out which displays whats in ""
  cin  >> short_side;                                                                               // This line is the input which is going to be the number the user inputs to get the output of
  cout << "The short side of your farm is " << fixed << setprecision(2) << short_side << " ft.\n";  // This line is incorporating the input by displaying what the user inputed
  
  cout << "\nWhat is the length of the the long side of your farm?" <<endl;
  cin  >> long_side;
  cout << "The long side of your farm is " << fixed << setprecision(2) << long_side << " ft.\n";
  
  cout << "\nWhat is the height of your farm?" << endl;
  cin >> height;
  cout << "The height of your farm is " << fixed << setprecision(2) << height << " ft.\n";
  
  cout << "\nWhat is the cost of land per square foot?" << endl;
  cin >> land_cost;
  cout << "The land costs $" << fixed << setprecision(2) << land_cost << " per square foot.\n";
  
  cout << "\nWhat is your budget for buying cows?" << endl;
  cin >> budget;
  cout << "You have " << fixed << setprecision(2) << budget << " available for buying cows.\n";
  
  // Calculations after inputs
  area = (short_side+long_side) * height/2;  // A= (a+b)*h/2 formula for trapezoid
  total_Price = area * land_cost;            
  cows_Bought = (budget-land_cost)/cow_cost;  // From line 52 to line 55 was the most difficult for me
  left_Over = budget-(cows_Bought*cow_cost);
  intInvestment = total_Price+(cows_Bought*cow_cost);
  yearly_profit =(cows_Bought*cow_profit)*12-(cow_monthly_maintain*12)*3;
  
  //Display outcome
  cout << "\nYou are buying " << fixed << setprecision(2) << area << "sq ft of land for a total price of $ " << fixed << setprecision(2) << total_Price << ".";
  cout << "\nYou are buying " << cows_Bought << " cows and have $" << fixed << setprecision(2) << left_Over << " left over from your cow budget.";
  cout << "\nYour intial investment into the land and cows was $" << fixed << setprecision(2) << intInvestment << ".";
  cout << "\nYou will make $" << fixed << setprecision(2) << yearly_profit << " per year from cows. Thats big money every year!";
  
  return 0;
}