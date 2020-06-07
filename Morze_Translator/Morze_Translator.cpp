#include "pch.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <algorithm>
#include <clocale>
#include <io.h> 
#include <fcntl.h>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "");
	int LangID = GetSystemDefaultUILanguage();
	bool RU = false;
	if (LangID == 1049)
	{
		RU = true;
	}
	if (RU)
	{
		cout <<"Описание:\n\tЭта программа предназначена для перевода английского текста в код Морзе.\n\n\t\t© 2019 John Warestone. Все права защищены.\n\n*******\nВведите ваше сообщение и нажмите 'Ввода' или нажмите 'Ввод' с пустым сообщением для выхода из программы.\n";
	}
	else
	{
		cout << "Description:\n\tThis prorgam is designed to translate text in English to Morse code.\n\n\t\t© 2019 John Warestone. All rights reserved.\n\n*******\nEnter your message and press 'Enter' button or press 'Enter' button without any message for exit the programm.\n";
	}
	string Input, Output, OrigInput, Conv;
	getline(cin, Input);
	OrigInput = Input;
	transform(Input.begin(), Input.end(), Input.begin(), tolower);
	if (Input=="")
	{
		exit(0);
	}
	else
	{
		for (int i = 0; i < Input.length(); i++)
		{
			if (Input[i]==' ')
			{
				Output += "   ";
				continue;
			}
			switch (Input[i])
			{
			case 'a':
				Output += "*-|";
				break;
			case 'b':
				Output += "-***|";
				break;
			case 'c':
				Output += "-*-*|";
				break;
			case 'd':
				Output += "-**|";
				break;
			case 'e':
				Output += "*|";
				break;
			case 'f':
				Output += "**-*|";
				break;
			case 'g':
				Output += "--*|";
				break;
			case 'h':
				Output += "****|";
				break;
			case 'i':
				Output += "**|";
				break;
			case 'j':
				Output += "*---|";
				break;
			case 'k':
				Output += "-*-|";
				break;
			case 'l':
				Output += "*-**|";
				break;
			case 'm':
				Output += "--|";
				break;
			case 'n':
				Output += "-*|";
				break;
			case 'o':
				Output += "---|";
				break;
			case 'p':
				Output += "*--*|";
				break;
			case 'q':
				Output += "--*-|";
				break;
			case 'r':
				Output += "*-*|";
				break;
			case 's':
				Output += "***|";
				break;
			case 't':
				Output += "-|";
				break;
			case 'u':
				Output += "**-|";
				break;
			case 'v':
				Output += "***-|";
				break;
			case 'w':
				Output += "*--|";
				break;
			case 'x':
				Output += "-**-|";
				break;
			case 'y':
				Output += "-*--|";
				break;
			case 'z':
				Output += "--*|";
				break;
			default:
				Output += Input[i];
				break;
			}			
		}
		if (RU)
		{
			cout << "\n***ВЫПОЛНЕНО***\n\n''|'' - делитель букв в слове.\n\nВаше сообщение: ''" << OrigInput << "''\nКод Морзе: ''" << Output << "''\n\n";
		}
		else
		{
			cout << "\n\n***DONE***\n\n\''|''- delimiter letters in word.\n\nYour message: ''" << OrigInput << "''\nMorse code: ''" << Output << "''\n\n";
		}		
		system("pause");
		system("cls");
		main();
	}
	
}

