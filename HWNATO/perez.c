#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
#include<string.h>
#include <stdlib.h>


//takes a source, writes to desitination with nato phonics
void Natoify(char* source, char* dest) 
{
	char buildString[4000];
	strcpy(buildString, "");
	int length = strlen(source);
	int cnt;
	for (cnt = 0; cnt < length; cnt++) 
	{
		switch (source[cnt])
		{
		case 'a':
		case 'A':
			strcat(buildString, "Alfa");

			break;
		case 'b':
		case 'B':
			strcat(buildString, "Bravo");

			break;
		case 'c':
		case 'C':
			strcat(buildString, "Charlie");

			break;
		case 'd':
		case 'D':
			strcat(buildString, "Delta");

			break;
		case 'e':
		case 'E':
			strcat(buildString, "Echo");
			break;
		case 'f':
		case 'F':
			strcat(buildString, "Foxtrot");
			break;
		case 'g':
		case 'G':
			strcat(buildString, "Golf");
			break;
		case 'h':
		case 'H':
			strcat(buildString, "Hotel");
			break;
		case 'i':
		case 'I':
			strcat(buildString, "India");
			break;
		case 'j':
		case 'J':
			strcat(buildString, "Juliett");
			break;
		case 'k':
		case 'K':
			strcat(buildString, "Kilo");
			break;
		case 'l':
		case 'L':
			strcat(buildString, "Lima");
			break;
		case 'm':
		case 'M':
			strcat(buildString, "Mike");
			break;
		case 'n':
		case 'N':
			strcat(buildString, "November");
			break;
		case 'o':
		case 'O':
			strcat(buildString, "Oscar");
			break;
		case 'p':
		case 'P':
			strcat(buildString, "Papa");
			break;
		case 'q':
		case 'Q':
			strcat(buildString, "Quebec");
			break;
		case 'r':
		case 'R':
			strcat(buildString, "Romeo");
			break;
		case 's':
		case 'S':
			strcat(buildString, "Sierra");
			break;
		case 't':
		case 'T':
			strcat(buildString, "Tango");
			break;
		case 'u':
		case 'U':
			strcat(buildString, "Uniform");
			break;
		case 'v':
		case 'V':
			strcat(buildString, "Victor");
			break;
		case 'w':
		case 'W':
			strcat(buildString, "Whiskey");
			break;
		case 'x':
		case 'X':
			strcat(buildString, "X-ray");
			break;
		case 'y':
		case 'Y':
			strcat(buildString, "Yankee");
			break;
		case 'z':
		case 'Z':
			strcat(buildString, "Zulu");
			break;
		case '\n':
			break;
		case ' ':
			strcat(buildString, " ");
			break;
		}
	}
	strcpy(dest, buildString);

}

//convert nato words to english
void Englishfy(char* source, char* dest) 
{
	char buildString[2000];
	strcpy(buildString, "");
	int length = strlen(source);

	int startCnt = -1;
	int cnt;
	char nato[100];
	strcpy(nato, "");


	//loop length plus one for null terminator
	for (cnt = 0; cnt < length+1; cnt++) {

		if ((source[cnt] >= 'A' && source[cnt] <= 'Z') || source[cnt] == '\0' || source[cnt] == '\r' || source[cnt] == '\n' || source[cnt] == ' ') 
		{ 
			if (startCnt == -1) 
			{
				startCnt = 0;
			}
			else 
			{
				strcpy(nato, "");
				strncat(nato, source + startCnt, cnt - startCnt);
				startCnt = cnt;

				if (strcmp(nato, "Alfa") == 0) {
					strcat(buildString, "a");
				}
				if (strcmp(nato, "Bravo") == 0) {
					strcat(buildString, "b");
				}
				if (strcmp(nato, "Charlie") == 0) {
					strcat(buildString, "c");
				}
				if (strcmp(nato, "Delta") == 0) {
					strcat(buildString, "d");
				}
				if (strcmp(nato, "Echo") == 0) {
					strcat(buildString, "e");
				}
				if (strcmp(nato, "Foxtrot") == 0) {
					strcat(buildString, "f");
				}
				if (strcmp(nato, "Golf") == 0) {
					strcat(buildString, "g");
				}
				if (strcmp(nato, "Hotel") == 0) {
					strcat(buildString, "h");
				}
				if (strcmp(nato, "India") == 0) {
					strcat(buildString, "i");
				}
				if (strcmp(nato, "Juliett") == 0) {
					strcat(buildString, "j");
				}
				if (strcmp(nato, "Kilo") == 0) {
					strcat(buildString, "k");
				}
				if (strcmp(nato, "Lima") == 0) {
					strcat(buildString, "l");
				}
				if (strcmp(nato, "Mike") == 0) {
					strcat(buildString, "m");
				}
				if (strcmp(nato, "November") == 0) {
					strcat(buildString, "n");
				}
				if (strcmp(nato, "Oscar") == 0) {
					strcat(buildString, "o");
				}
				if (strcmp(nato, "Papa") == 0) {
					strcat(buildString, "p");
				}
				if (strcmp(nato, "Quebec") == 0) {
					strcat(buildString, "q");
				}
				if (strcmp(nato, "Romeo") == 0) {
					strcat(buildString, "r");
				}
				if (strcmp(nato, "Sierra") == 0) {
					strcat(buildString, "s");
				}
				if (strcmp(nato, "Tango") == 0) {
					strcat(buildString, "t");
				}
				if (strcmp(nato, "Uniform") == 0) {
					strcat(buildString, "u");
				}
				if (strcmp(nato, "Victor") == 0) {
					strcat(buildString, "v");
				}
				if (strcmp(nato, "Whiskey") == 0) {
					strcat(buildString, "w");
				}
				if (strcmp(nato, "X-ray") == 0) {
					strcat(buildString, "x");
				}
				if (strcmp(nato, "Yankee") == 0) {
					strcat(buildString, "y");
				}
				if (strcmp(nato, "Zulu") == 0) {
					strcat(buildString, "z");
				}

			}
		}

		switch (source[cnt])
		{
		case ' ':
			strcat(buildString, " ");
			startCnt = cnt; //reset word length after a space
			break;
		}

	}
	strcpy(dest, buildString);

}


//do English To Nato Proccessing
void EnglishToNato() 
{
	printf("English --> NATO\n");
	char filename[] = "words.txt";
	FILE* file = fopen(filename, "r");


	char line[2000];
	while (fgets(line, sizeof line, file) != NULL) /* read a line from a file */ {
		char* natoed[4000];
		Natoify(line, natoed);
		printf(line); //print the file contents on stdout.
		printf(" -->\n");
		printf(natoed);
		printf("\n\n");

	}

	fclose(file);
}

//do nato to english proccessing
void NatoToEnglish() 
{
	printf("English --> NATO\n");
	char filename[] = "words.txt";
	FILE* file = fopen(filename, "r");


	char line[2000];
	while (fgets(line, sizeof line, file) != NULL) /* read a line from a file */ {
		char* english[2000];
		Englishfy(line, english);
		printf(line); //print the file contents on stdout.
		printf(" -->\n");
		printf(english);
		printf("\n\n");

	}

	fclose(file);
}

int main() 
{
	char input = 'l';
	//do user input loop
	do 
	{
		printf("Enter n for english to NATO, Press e for NATO to english.\n");
		printf("Words will be taken from words.txt.  press q to quit\n");
		input = getchar();
		getchar(); //use to clear enter
		printf("\n");

		if (input == 'n') {
			EnglishToNato();
		}
		
		if(input == 'e')
		{
			NatoToEnglish();
		}

		
	} while (input != 'q' && input != 'Q');


	return 0;
}

