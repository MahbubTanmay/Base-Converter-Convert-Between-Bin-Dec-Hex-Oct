#include <iostream>
#include <bitset> //Dont forget to include this 

using namespace std;


int main(){

int number = 0xF; 

//Dec = 10
//Hex = 0x10
//Oct = 010
//Bin = 0b10

cout <<"To Binary Is: " <<bitset<8>(number)<<endl;   // binary = bitset<8>(int_variable_name)
cout <<"To Decimal Is: " <<bitset<8>(number).to_ulong()<<endl; //decimal = bitset<8>(int_variable_name).to_ulong()
cout<<"The HexaDecimal Is: "<<hex << number <<endl;
cout <<"To Octal Is: " <<oct<<number<<endl;
 

//***********************
//here we take int number as user input
// but what is its base? mean the number u gave what is it? 
// 2 ways to define: 1.Through input    2.Through Program

//1. Through Input
 //User Should put 0b before number for binary, 0x for hex, 0 for octal


//2.Using program
 //first convert int to string using
//string_variable = to_string(int_variable);
 //then use below code to define number as a base
 //int_variable = stoi(string_variable , nullptr, 2) ; -- binary
 //int_variable = stoi(string_variable , nullptr, 16) ; -- Hex
//int_variable = stoi(string_variable , nullptr, 8) ; -- oct
 //int_variable = stoi(string_variable)  ; -- Decimal


//Check Readme.md   for more details
    return 0;
}
