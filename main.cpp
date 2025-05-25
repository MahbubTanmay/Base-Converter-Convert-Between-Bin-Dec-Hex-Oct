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


//we can directly convert string to int with different base like this
//int_variable = stoi(string_variable , nullptr, base) ; 
//int_variable = stoi(string_variable , nullptr, 2)  -- binary
//int_variable = stoi(string_variable , nullptr, 16)  -- Hex
 //int_variable = stoi(string_variable , nullptr, 8)  -- oct
    //int_variable = stoi(string_variable)  -- Decimal



    //so convert int to string using
//string_variable = to_string();

    
    return 0;
}
