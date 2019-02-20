/** 
 * Author: Kevin Buffardi & Jasmin Mousavi
 * Course: CSCI 430
 *
 * A program that takes in 3 numbers and sorts them in descending order
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Function that takes 3 integers and sorts them in descending order
void sortDescending(int&,int&,int&);

//Function that takes 2 integers and swaps them
void swap(int&,int&);

//main code that takes in 3 numbers from user and sorts them in descending order
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/** Function: sortDescending 
 * Sorts 3 numbers in descending order
 * Paramenters: 
 * int& first   -integer used to compare with and sort in descending order
 * int& second  -integer used to compare with and sort in descending order
 * int& third   -integer used to compare with and sort in descending order
 *
 * returns void
 */
void sortDescending(int& first, int& second, int& third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/** Function swap
 * takes in 2 numbers and swaps them
 * Parameters:
 * int& first   -integer used to swap with seocond 
 * int& second  -integer used to swap with first
 *
 * returns void
 */
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
