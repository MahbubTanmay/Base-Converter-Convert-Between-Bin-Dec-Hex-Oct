//***********************

here we take int number as user input
but what is its base? mean the number u gave what is it? 
2 ways to define: 1.Through input    2.Through Program

1. Through Input
User Should put 0b before number for binary, 0x for hex, 0 for octal


2.Using program
first convert int to string using
string_variable = to_string(int_variable);
then use below code to define number as a base
int_variable = stoi(string_variable , nullptr, 2) ; -- binary
int_variable = stoi(string_variable , nullptr, 16) ; -- Hex
int_variable = stoi(string_variable , nullptr, 8) ; -- oct
int_variable = stoi(string_variable)  ; -- Decimal


#Check Line '57' of this source code for clearification : https://github.com/MahbubTanmay/Project-Base-Converter-with-string-checker-/blob/main/main.cpp


