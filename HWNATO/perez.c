#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
#include<string.h>
#include <stdlib.h>


//takes a source, writes to desitination with nato phonics
void Natoify(char* source, char* dest) {
	char stringer[4000];
	strcpy(stringer, "");
	int length = strlen(source);
	int cnt;
	for (cnt = 0; cnt < length; cnt++) {
		switch (source[cnt])
		{
		case 'a':
		case 'A':
			strcat(stringer, "Alfa");

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

//convert nato words to english
void Englishfy(char* source, char* dest) {
	char stringer[2000];
	strcpy(stringer, "");
	int length = strlen(source);

	int startCnt = -1;
	int cnt;
	char nato[100];
	strcpy(nato, "");


	//loop length plus one for null terminator
	for (cnt = 0; cnt < length+1; cnt++) {

		if ((source[cnt] >= 'A' && source[cnt] <= 'Z') || source[cnt] == '\0' || source[cnt] == '\n' || source[cnt] == ' ') { //cap
			if (startCnt == -1) {
				startCnt = 0;
			}
			else {
				strcpy(nato, "");
				strncat(nato, source + startCnt, cnt - startCnt);
				startCnt = cnt;

				if (strcmp(nato, "Alfa") == 0) {
					strcat(stringer, "a");
				}
				if (strcmp(nato, "Bravo") == 0) {
					strcat(stringer, "b");
				}
				if (strcmp(nato, "Charlie") == 0) {
					strcat(stringer, "c");
				}
				if (strcmp(nato, "Delta") == 0) {
					strcat(stringer, "d");
				}
				if (strcmp(nato, "Echo") == 0) {
					strcat(stringer, "e");
				}
				if (strcmp(nato, "Foxtrot") == 0) {
					strcat(stringer, "f");
				}
				if (strcmp(nato, "Golf") == 0) {
					strcat(stringer, "g");
				}
				if (strcmp(nato, "Hotel") == 0) {
					strcat(stringer, "h");
				}
				if (strcmp(nato, "India") == 0) {
					strcat(stringer, "i");
				}
				if (strcmp(nato, "Juliett") == 0) {
					strcat(stringer, "j");
				}
				if (strcmp(nato, "Kilo") == 0) {
					strcat(stringer, "k");
				}
				if (strcmp(nato, "Lima") == 0) {
					strcat(stringer, "l");
				}
				if (strcmp(nato, "Mike") == 0) {
					strcat(stringer, "m");
				}
				if (strcmp(nato, "November") == 0) {
					strcat(stringer, "n");
				}
				if (strcmp(nato, "Oscar") == 0) {
					strcat(stringer, "o");
				}
				if (strcmp(nato, "Papa") == 0) {
					strcat(stringer, "p");
				}
				if (strcmp(nato, "Quebec") == 0) {
					strcat(stringer, "q");
				}
				if (strcmp(nato, "Romeo") == 0) {
					strcat(stringer, "r");
				}
				if (strcmp(nato, "Sierra") == 0) {
					strcat(stringer, "s");
				}
				if (strcmp(nato, "Tango") == 0) {
					strcat(stringer, "t");
				}
				if (strcmp(nato, "Uniform") == 0) {
					strcat(stringer, "u");
				}
				if (strcmp(nato, "Victor") == 0) {
					strcat(stringer, "v");
				}
				if (strcmp(nato, "Whiskey") == 0) {
					strcat(stringer, "w");
				}
				if (strcmp(nato, "X-ray") == 0) {
					strcat(stringer, "x");
				}
				if (strcmp(nato, "Yankee") == 0) {
					strcat(stringer, "y");
				}
				if (strcmp(nato, "Zulu") == 0) {
					strcat(stringer, "z");
				}

			}
		}

		switch (source[cnt])
		{
		case ' ':
			strcat(stringer, " ");
			startCnt = cnt; //reset word length after a space
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
	char filename[] = "words-nato.txt";
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

