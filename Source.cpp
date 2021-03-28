#include <iostream>
#include <string>
#include <Windows.h>
#include "colours.h"

std::string user_input;//user input string
std::string output_str;//output ciphertext
int x;//loop counter 
int corres_num[1500000] = {};//corresponding number according to alphabets
int cipher_value;//the cipher rotation value
std::string cipher_assign;//assigns <cipher_value> a integer value
bool cipher_validator = true;//validates <cipher_assign>

void termclr()//terminal clear function
{
#ifdef __linux__
	system("clear");
#elif _WIN32
	system("cls");
#endif
}

void convertion()//user input convertion
{
	std::string output_str_assign = "";//assigns individual ciphered characters to main ciphertext
	int calc = 0;//contributes in assigning <output> 
	int output = 0;//assigns individual cipher characters
	if (user_input[x] == 'A' || user_input[x] == 'a') { corres_num[x] = 1; }
	else if (user_input[x] == 'B' || user_input[x] == 'b') { corres_num[x] = 2; }
	else if (user_input[x] == 'C' || user_input[x] == 'c') { corres_num[x] = 3; }
	else if (user_input[x] == 'D' || user_input[x] == 'd') { corres_num[x] = 4; }
	else if (user_input[x] == 'E' || user_input[x] == 'e') { corres_num[x] = 5; }
	else if (user_input[x] == 'F' || user_input[x] == 'f') { corres_num[x] = 6; }
	else if (user_input[x] == 'G' || user_input[x] == 'g') { corres_num[x] = 7; }
	else if (user_input[x] == 'H' || user_input[x] == 'h') { corres_num[x] = 8; }
	else if (user_input[x] == 'I' || user_input[x] == 'i') { corres_num[x] = 9; }
	else if (user_input[x] == 'J' || user_input[x] == 'j') { corres_num[x] = 10; }
	else if (user_input[x] == 'K' || user_input[x] == 'k') { corres_num[x] = 11; }
	else if (user_input[x] == 'L' || user_input[x] == 'l') { corres_num[x] = 12; }
	else if (user_input[x] == 'M' || user_input[x] == 'm') { corres_num[x] = 13; }
	else if (user_input[x] == 'N' || user_input[x] == 'n') { corres_num[x] = 14; }
	else if (user_input[x] == 'O' || user_input[x] == 'o') { corres_num[x] = 15; }
	else if (user_input[x] == 'P' || user_input[x] == 'p') { corres_num[x] = 16; }
	else if (user_input[x] == 'Q' || user_input[x] == 'q') { corres_num[x] = 17; }
	else if (user_input[x] == 'R' || user_input[x] == 'r') { corres_num[x] = 18; }
	else if (user_input[x] == 'S' || user_input[x] == 's') { corres_num[x] = 19; }
	else if (user_input[x] == 'T' || user_input[x] == 't') { corres_num[x] = 20; }
	else if (user_input[x] == 'U' || user_input[x] == 'u') { corres_num[x] = 21; }
	else if (user_input[x] == 'V' || user_input[x] == 'v') { corres_num[x] = 22; }
	else if (user_input[x] == 'W' || user_input[x] == 'w') { corres_num[x] = 23; }
	else if (user_input[x] == 'X' || user_input[x] == 'x') { corres_num[x] = 24; }
	else if (user_input[x] == 'Y' || user_input[x] == 'y') { corres_num[x] = 25; }
	else if (user_input[x] == 'Z' || user_input[x] == 'z') { corres_num[x] = 26; }
	else { output_str_assign = user_input[x]; }//keeping user input intact if user input is not within a-z
	calc = corres_num[x] + cipher_value;//assigning <calc> value
	if (calc > 26)//setting value if <calc> goes over 26
	{
		output = calc - 26;
	}
	else if (calc <= 26 && calc > 0)//maintaing <calc> value if within range
	{
		output = calc;
	}
	switch (output)//assigning individual cipher characters
	{
	case 1:if (isupper(user_input[x])) { output_str_assign = "A"; }
		  else if (islower(user_input[x])) { output_str_assign = "a"; } break;
	case 2:if (isupper(user_input[x])) { output_str_assign = "B"; }
		  else if (islower(user_input[x])) { output_str_assign = "b"; } break;
	case 3:if (isupper(user_input[x])) { output_str_assign = "C"; }
		  else if (islower(user_input[x])) { output_str_assign = "c"; } break;
	case 4:if (isupper(user_input[x])) { output_str_assign = "D"; }
		  else if (islower(user_input[x])) { output_str_assign = "d"; } break;
	case 5:if (isupper(user_input[x])) { output_str_assign = "E"; }
		  else if (islower(user_input[x])) { output_str_assign = "e"; } break;
	case 6:if (isupper(user_input[x])) { output_str_assign = "F"; }
		  else if (islower(user_input[x])) { output_str_assign = "f"; } break;
	case 7:if (isupper(user_input[x])) { output_str_assign = "G"; }
		  else if (islower(user_input[x])) { output_str_assign = "g"; } break;
	case 8:if (isupper(user_input[x])) { output_str_assign = "H"; }
		  else if (islower(user_input[x])) { output_str_assign = "h"; } break;
	case 9:if (isupper(user_input[x])) { output_str_assign = "I"; }
		  else if (islower(user_input[x])) { output_str_assign = "i"; } break;
	case 10:if (isupper(user_input[x])) { output_str_assign = "J"; }
		   else if (islower(user_input[x])) { output_str_assign = "j"; } break;
	case 11:if (isupper(user_input[x])) { output_str_assign = "K"; }
		   else if (islower(user_input[x])) { output_str_assign = "k"; } break;
	case 12:if (isupper(user_input[x])) { output_str_assign = "L"; }
		   else if (islower(user_input[x])) { output_str_assign = "l"; } break;
	case 13:if (isupper(user_input[x])) { output_str_assign = "M"; }
		   else if (islower(user_input[x])) { output_str_assign = "m"; } break;
	case 14:if (isupper(user_input[x])) { output_str_assign = "N"; }
		   else if (islower(user_input[x])) { output_str_assign = "n"; } break;
	case 15:if (isupper(user_input[x])) { output_str_assign = "O"; }
		   else if (islower(user_input[x])) { output_str_assign = "o"; } break;
	case 16:if (isupper(user_input[x])) { output_str_assign = "P"; }
		   else if (islower(user_input[x])) { output_str_assign = "p"; } break;
	case 17:if (isupper(user_input[x])) { output_str_assign = "Q"; }
		   else if (islower(user_input[x])) { output_str_assign = "q"; } break;
	case 18:if (isupper(user_input[x])) { output_str_assign = "R"; }
		   else if (islower(user_input[x])) { output_str_assign = "r"; } break;
	case 19:if (isupper(user_input[x])) { output_str_assign = "S"; }
		   else if (islower(user_input[x])) { output_str_assign = "s"; } break;
	case 20:if (isupper(user_input[x])) { output_str_assign = "T"; }
		   else if (islower(user_input[x])) { output_str_assign = "t"; } break;
	case 21:if (isupper(user_input[x])) { output_str_assign = "U"; }
		   else if (islower(user_input[x])) { output_str_assign = "u"; } break;
	case 22:if (isupper(user_input[x])) { output_str_assign = "V"; }
		   else if (islower(user_input[x])) { output_str_assign = "v"; } break;
	case 23:if (isupper(user_input[x])) { output_str_assign = "W"; }
		   else if (islower(user_input[x])) { output_str_assign = "w"; } break;
	case 24:if (isupper(user_input[x])) { output_str_assign = "X"; }
		   else if (islower(user_input[x])) { output_str_assign = "x"; } break;
	case 25:if (isupper(user_input[x])) { output_str_assign = "Y"; }
		   else if (islower(user_input[x])) { output_str_assign = "y"; } break;
	case 26:if (isupper(user_input[x])) { output_str_assign = "Z"; }
		   else if (islower(user_input[x])) { output_str_assign = "z"; } break;
	}
	output_str += output_str_assign;//adding to output ciphertext
}
void cipher_num_validator()//validates user input when called
{
	if (cipher_assign == "2") { cipher_validator = false; cipher_value = 2; }
	else if (cipher_assign == "3") { cipher_validator = false; cipher_value = 3; }
	else if (cipher_assign == "4") { cipher_validator = false; cipher_value = 4; }
	else if (cipher_assign == "5") { cipher_validator = false; cipher_value = 5; }
	else if (cipher_assign == "6") { cipher_validator = false; cipher_value = 6; }
	else if (cipher_assign == "7") { cipher_validator = false; cipher_value = 7; }
	else if (cipher_assign == "8") { cipher_validator = false; cipher_value = 8; }
	else if (cipher_assign == "9") { cipher_validator = false; cipher_value = 9; }
	else if (cipher_assign == "10") { cipher_validator = false; cipher_value = 10; }
	else if (cipher_assign == "11") { cipher_validator = false; cipher_value = 11; }
	else if (cipher_assign == "12") { cipher_validator = false; cipher_value = 12; }
	else if (cipher_assign == "13") { cipher_validator = false; cipher_value = 13; }
	else if (cipher_assign == "14") { cipher_validator = false; cipher_value = 14; }
	else if (cipher_assign == "15") { cipher_validator = false; cipher_value = 15; }
	else if (cipher_assign == "16") { cipher_validator = false; cipher_value = 16; }
	else if (cipher_assign == "17") { cipher_validator = false; cipher_value = 17; }
	else if (cipher_assign == "18") { cipher_validator = false; cipher_value = 18; }
	else if (cipher_assign == "19") { cipher_validator = false; cipher_value = 19; }
	else if (cipher_assign == "20") { cipher_validator = false; cipher_value = 20; }
	else if (cipher_assign == "21") { cipher_validator = false; cipher_value = 21; }
	else if (cipher_assign == "22") { cipher_validator = false; cipher_value = 22; }
	else if (cipher_assign == "23") { cipher_validator = false; cipher_value = 23; }
	else if (cipher_assign == "24") { cipher_validator = false; cipher_value = 24; }
	else if (cipher_assign == "25") { cipher_validator = false; cipher_value = 25; }
	else { cipher_validator = true; }
}
int main()
{
	bool run = true;//run validator
	char run_again;//user choice for run again
	while (run)//will run while <run> is true
	{
		std::cout << std::endl;
		text_colour(f_dyellow, b_black);
		std::cout << " Cipher value (rot[2-25]): ";
		text_colour(f_gray, b_black);
		std::getline(std::cin, cipher_assign);//user input
		cipher_num_validator();//checking illegal input
		while (cipher_validator)//will loop while user input is illegal 
		{
			text_colour(f_dred, b_black);
			std::cout << " Invalid...cipher value can only be between 2-25: ";
			text_colour(f_gray, b_black);
			std::getline(std::cin, cipher_assign);//user input
			cipher_num_validator();//checking illegal input
		}
		std::cout << std::endl << std::endl;
		text_colour(f_dyellow, b_black);
		std::cout << " Input====> ";
		text_colour(f_gray, b_black);
		std::getline(std::cin, user_input);//user input
		for (x = 0; x < user_input.size(); x++)
		{
			user_input[x];
			convertion();//calling string convertion
		}
		text_colour(f_dyellow, b_black);
		std::cout << " Output===> ";
		text_colour(f_gray, b_black);
		std::cout << output_str << std::endl;
		std::cout << std::endl << std::endl;
		std::cout << " Press any key to continue . . .";
		_getwch();
		std::cout << std::endl;
		termclr();//clear screen
		std::cout << std::endl;
		text_colour(f_blue, b_black);
		std::cout << " Run again? (Y/N): ";
		text_colour(f_gray, b_black);
		run_again = toupper(_getwche());//user input
		std::cout << std::endl;
		while (run_again != 'Y' && run_again != 'N')//checking illegal input
		{
			text_colour(f_dred, b_black);
			std::cout << " Invalid...try again (Y/N): ";
			text_colour(f_gray, b_black);
			run_again = toupper(_getwche());//user input
			std::cout << std::endl;
		}
		termclr();//clear screen
		output_str = "";
		if (run_again == 'Y')
		{
			run = true;//will run again
		}
		else if (run_again == 'N')
		{
			run = false;//wont run again
		}
	}
	text_colour(f_gray, b_black);
	return 0;
}