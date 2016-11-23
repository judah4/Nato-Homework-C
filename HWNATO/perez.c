#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
#include<string.h>
#include <stdlib.h>


//takes a source, writes to desitination with nato phonics
void Natoify(char* source, char* dest) {
	char stringer[1000];
	strcpy(stringer, "");
	int length = strlen(source);
	int cnt;
	for (cnt = 0; cnt < length; cnt++) {
		switch (source[cnt])
		{
		case 'a':
		case 'A':
			strcat(stringer, "Alpha");

			break;
		case 'b':
		case 'B':
			strcat(stringer, "Bravo");

			break;
		case 'c':
		case 'C':
			strcat(stringer, "Charlie");

			break;
		case 'd':
		case 'D':
			strcat(stringer, "Delta");

			break;
		case 'e':
		case 'E':
			strcat(stringer, "Echo");
			break;
		case 'f':
		case 'F':
			strcat(stringer, "Foxtrot");
			break;
		case 'g':
		case 'G':
			strcat(stringer, "Golf");
			break;
		case 'h':
		case 'H':
			strcat(stringer, "Hotel");
			break;
		case 'i':
		case 'I':
			strcat(stringer, "India");
			break;
		case 'j':
		case 'J':
			strcat(stringer, "Juliett");
			break;
		case 'k':
		case 'K':
			strcat(stringer, "Kilo");
			break;
		case 'l':
		case 'L':
			strcat(stringer, "Lima");
			break;
		case 'm':
		case 'M':
			strcat(stringer, "Mike");
			break;
		case 'n':
		case 'N':
			strcat(stringer, "November");
			break;
		case 'o':
		case 'O':
			strcat(stringer, "Oscar");
			break;
		case 'p':
		case 'P':
			strcat(stringer, "Papa");
			break;
		case 'q':
		case 'Q':
			strcat(stringer, "Quebec");
			break;
		case 'r':
		case 'R':
			strcat(stringer, "Romeo");
			break;
		case 's':
		case 'S':
			strcat(stringer, "Sierra");
			break;
		case 't':
		case 'T':
			strcat(stringer, "Tango");
			break;
		case 'u':
		case 'U':
			strcat(stringer, "Uniform");
			break;
		case 'v':
		case 'V':
			strcat(stringer, "Victor");
			break;
		case 'w':
		case 'W':
			strcat(stringer, "Whiskey");
			break;
		case 'x':
		case 'X':
			strcat(stringer, "X-ray");
			break;
		case 'y':
		case 'Y':
			strcat(stringer, "Yankee");
			break;
		case 'z':
		case 'Z':
			strcat(stringer, "Zulu");
			break;
		case '\n':
			break;
		case ' ':
			strcat(stringer, " ");
			break;
		}
	}
	strcpy(dest, stringer);

}

//do English To Nato Proccessing
void EnglishToNato() {
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

void NatoToEnglish() {
	printf("English --> NATO\n");
	char filename[] = "words.txt";
	FILE* file = fopen(filename, "r");


	char line[2000];
	while (fgets(line, sizeof line, file) != NULL) /* read a line from a file */ {
		char* english[2000];
		//Englishfy(line, english);
		printf(line); //print the file contents on stdout.
		printf(" -->\n");
		//printf(english);
		printf("\n\n");

	}

	fclose(file);
}

int main() {
	char input = 'l';
	do {
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

