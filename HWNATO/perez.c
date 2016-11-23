#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
#include<string.h>
#include <stdlib.h>


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

int main() {

	printf("Hello, world!\n");
	char filename[] = "words.txt";
	FILE* file = fopen(filename, "r");


	char line[2000];
	while (fgets(line, sizeof line, file) != NULL) /* read a line from a file */ {
		char* natoed[2000];
		Natoify(line, natoed);
		printf( line); //print the file contents on stdout.
		printf("\n");
		printf(natoed); 
		printf("\n\n");

	}

	//char *strs[10000];
	//int index = 0;
	//int cha;
	//while (cha = fgetc(file) != EOF) {
	//	switch (cha)
	//	{
	//	case 'a':
	//	case 'A':
	//		strs[index] = malloc(strlen("Alfa") + 1);
	//		strcpy(strs[index], "Alfa");
	//		break;
	//	case 'b':
	//	case 'B':
	//		strs[index] = malloc(strlen("Bravo") + 1);
	//		strcpy(strs[index], "Bravo");
	//		break;
	//	case 'c':
	//	case 'C':
	//		strs[index] = malloc(strlen("Charlie") + 1);
	//		strcpy(strs[index], "Charlie");
	//		break;
	//	case 'd':
	//	case 'D':
	//		strs[index] = malloc(strlen("Delta") + 1);
	//		strcpy(strs[index], "Delta");
	//		break;
	//	default:
	//		strs[index] = malloc(strlen("0") + 1);
	//		strcpy(strs[index], "0");
	//		//strcpy(strs[index], tempStr);

	//		break;
	//	}


	//	index++;


	//}


	//char* betterLength[index + 1];


	fclose(file);


	/*int cnt;
	for (cnt = 0; cnt < index; cnt++) {
		printf(strs[cnt]);

	}*/

	char c = getchar();

	return 0;
}

