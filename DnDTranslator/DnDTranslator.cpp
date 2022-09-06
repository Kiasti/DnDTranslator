#include <iostream>
#include <string>



// Todo: https://dndtopics.com/languages/draconic-language-translator/
void TranslateDraconic(std::string& toTranslate)
{
	for (auto iter = toTranslate.begin(); iter != toTranslate.end(); ++iter)
	{
		switch (*iter)
		{
			case 'A': *iter = 'E'; break;	case 'a': *iter = 'e'; break;
			case 'B': *iter = 'C'; break;	case 'b': *iter = 'c'; break;
			case 'C': *iter = 'D'; break;	case 'c': *iter = 'd'; break;
			case 'D': *iter = 'F'; break;	case 'd': *iter = 'f'; break;
			case 'E': *iter = 'I'; break;	case 'e': *iter = 'i'; break;
			case 'F': *iter = 'G'; break;	case 'f': *iter = 'g'; break;
			case 'G': *iter = 'H'; break;	case 'g': *iter = 'h'; break;
			case 'H': *iter = 'J'; break;	case 'h': *iter = 'j'; break;
			case 'I': *iter = 'O'; break;	case 'i': *iter = 'o'; break;
			case 'J': *iter = 'K'; break;	case 'j': *iter = 'k'; break;
			case 'L': *iter = 'M'; break;	case 'l': *iter = 'm'; break;
			case 'M': *iter = 'N'; break;	case 'm': *iter = 'n'; break;
			case 'N': *iter = 'P'; break;	case 'n': *iter = 'p'; break;
			case 'O': *iter = 'U'; break;	case 'o': *iter = 'u'; break;
			case 'P': *iter = 'Q'; break;	case 'p': *iter = 'q'; break;
			case 'Q': *iter = 'R'; break;	case 'q': *iter = 'r'; break;
			case 'R': *iter = 'S'; break;	case 'r': *iter = 's'; break;
			case 'S': *iter = 'T'; break;	case 's': *iter = 't'; break;
			case 'T': *iter = 'V'; break;	case 't': *iter = 'v'; break;
			case 'U': *iter = 'A'; break;	case 'u': *iter = 'a'; break;
			case 'V': *iter = 'W'; break;	case 'v': *iter = 'w'; break;
			case 'W': *iter = 'X'; break;	case 'w': *iter = 'x'; break;
			case 'X': *iter = 'Y'; break;	case 'x': *iter = 'y'; break;
			case 'Y': *iter = 'Z'; break;	case 'y': *iter = 'z'; break;
			case 'Z': *iter = 'B'; break;	case 'z': *iter = 'b'; break;
			default:
				break;
		}
	}
}

// https://dndtopics.com/languages/aquan/
void TranslateAquan(std::string& toTranslate)
{
	for (auto iter = toTranslate.begin(); iter != toTranslate.end(); ++iter)
	{
		switch (*iter)
		{
			case 'A': *iter = 'E'; break;	case 'a': *iter = 'e'; break;
			case 'B': *iter = 'C'; break;	case 'b': *iter = 'c'; break;
			case 'C': *iter = 'D'; break;	case 'c': *iter = 'd'; break;
			case 'D': *iter = 'F'; break;	case 'd': *iter = 'f'; break;
			case 'E': *iter = 'I'; break;	case 'e': *iter = 'i'; break;
			case 'F': *iter = 'G'; break;	case 'f': *iter = 'g'; break;
			case 'G': *iter = 'H'; break;	case 'g': *iter = 'h'; break;
			case 'H': *iter = 'J'; break;	case 'h': *iter = 'j'; break;
			case 'I': *iter = 'O'; break;	case 'i': *iter = 'o'; break;
			case 'J': *iter = 'K'; break;	case 'j': *iter = 'k'; break;
			case 'L': *iter = 'M'; break;	case 'l': *iter = 'm'; break;
			case 'M': *iter = 'N'; break;	case 'm': *iter = 'n'; break;
			case 'N': *iter = 'P'; break;	case 'n': *iter = 'p'; break;
			case 'O': *iter = 'U'; break;	case 'o': *iter = 'u'; break;
			case 'P': *iter = 'Q'; break;	case 'p': *iter = 'q'; break;
			case 'Q': *iter = 'R'; break;	case 'q': *iter = 'r'; break;
			case 'R': *iter = 'S'; break;	case 'r': *iter = 's'; break;
			case 'S': *iter = 'T'; break;	case 's': *iter = 't'; break;
			case 'T': *iter = 'V'; break;	case 't': *iter = 'v'; break;
			case 'U': *iter = 'A'; break;	case 'u': *iter = 'a'; break;
			case 'V': *iter = 'W'; break;	case 'v': *iter = 'w'; break;
			case 'W': *iter = 'X'; break;	case 'w': *iter = 'x'; break;
			case 'X': *iter = 'Y'; break;	case 'x': *iter = 'y'; break;
			case 'Y': *iter = 'Z'; break;	case 'y': *iter = 'z'; break;
			case 'Z': *iter = 'B'; break;	case 'z': *iter = 'b'; break;
			default:
				break;
		}
	}
}


int main()
{
	while (true)
	{
		std::cout << "Insert a sentence to translate to Aquan. Insert 1 to close the application:" << std::endl;

		std::string toTranslate;
		std::getline(std::cin, toTranslate);

		if (toTranslate.size() < 2 && toTranslate.at(0) == '1')
			break;
		std::cout << "\n";

		TranslateAquan(toTranslate);
		std::cout << toTranslate << std::endl;
	}
}
