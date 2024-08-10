#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef long double ld;
int NofScannedArguments = 0;

void challengEnum() {
	enum Company {
		GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
	};


	enum Company firstCom = XEROX,
		secondCom = GOOGLE,
		thirdCom = EBAY;

	printf("%d\n%d\n%d", firstCom, secondCom, thirdCom);
}

void learnEnum() {
	enum gender { male, female };
	enum primaryColor
	{
		red, yellow, blue
	};
	enum Month {
		jan = 1, feb = 2
	};

	enum  direction
	{
		up, down, left = 10, right
	};

	enum primaryColor myColor = yellow;
	enum Month myMonth = jan;

	enum gender myGender;

	myGender = male;

	int jason = 1.7e4;
	double doubleVar = 8.44e+11;
	_Bool boolVar = 1;
	bool myBool = true;

	printf("You entered: %d", jason);
	printf("\nDouble var: %lf", doubleVar);
	printf("\nHello wolrd %d", myColor);
	printf("\nMy month %d", myMonth);

}

void learnFormatSpecifiers() {
	int integerVar = 100;
	long longVar = 1e5;
	ll longLongVar = 1e+12;
	float floatingVar = 331.79f;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 0;

	printf("integerVar = %i\n", integerVar);
	printf("longVar = %li\n", longVar);
	printf("longLongVar = %lli\n", longLongVar);
	printf("floatingVar = %.1f\n", floatingVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);
	printf("boolVar = %i\n", boolVar);

}

void challengePrintTheAreaOfRetangle(double width, double height) {
	double permieter = 2.0 * (width + height);
	double area = width * height;

	printf("Width: %f \t Height: %f", width, height);
	printf("\nArea of retangle: %.2f", area);
	printf("\nPermieter of retangle: %.2f", permieter);
}

void printSizeOfDataTypes() {
	printf("Size of char: %u", (int)sizeof(char));
	printf("\nSize of int: %zd", sizeof(int));
	printf("\nSize of short int: %zd", sizeof(short int));
	printf("\nSize of unsigned int: %zd", sizeof(unsigned int));
	printf("\nSize of long int: %zd", sizeof(long));
	printf("\nSize of unsigned long int: %zd", sizeof(unsigned long));
	printf("\nSize of long long int: %zd", sizeof(long long));
	printf("\nSize of unsigned long long int: %zd", sizeof(unsigned long long));
	printf("\nSize of float: %zd", sizeof(float));
	printf("\nSize of double: %zd", sizeof(double));
	printf("\nSize of long double: %zd", sizeof(long double));
}

void learnOperator() {
	int a = 10;
	_Bool b = true;
	int result = 0;

	//printf("c is %d\n", a++);
	//printf("%d\n", a);

	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\t", i);
	//	i++;
	//}

	a |= 2;
	printf("%d", a);
}

void convertNumberOfMinutesToDaysAndYears() {
	int minutesEntered;
	double years = 0.0;
	double days = 0.0;
	double minutesInYear = 0;

	printf("Enter your minutes: ");
	scanf_s("%d", &minutesEntered);

	minutesInYear = 60 * 24 * 365;
	years = minutesEntered / minutesInYear;
	days = years * 365;

	printf("%d minutes is approximately %f years and %f days", minutesEntered, years, days);
}

void learnBitwiseOperator() {
	unsigned int a = 60; // 0011 1100
	unsigned int b = 13; // 0000 1101
	int result = 0;

	result = a & b; // 0000 1100
	printf("Result of & is: %d", result);
	result = a | b; // 0011 1101
	printf("\nResult of | is: %d", result);
	result = a ^ b; // 0011 0001 
	printf("\nResult of ^ is: %d", result);
	result = ~a; // 1100 0011 
	printf("\nResult of ~ is: %d", result);

	result = a & 1;
	printf("\nResult of odd or even is: %d", result);

	result = a >> 1; // 0001 1110
	printf("\nResult right shift of 1: %d", result);

	result = a >> 2; // 0000 1111
	printf("\nResult right shift of 2: %d", result);

	result = a >> 3; // 0000 1111
	printf("\nResult right shift of 3: %d", result);

	result = a << 2; // 1111 0000
	printf("\nResult left shift of 2: %d", result);

	result = a << 4; // 0011 1100 0000 
	printf("\nResult left shift of 4: %d", result);
}

void learnCastOperator() {
	int a = 20;
	int b = 12;
	float v = 21.51f;
	float y = 26.99f;

	float c = 1.0f * a / b;
	int d = (int)v + (int)y;

	printf("Result is %f\n", c);
	printf("Result is %lld", sizeof(d));
}


#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
void challengDetermineAmountOfPay() {
	int hours = 0;

	double grossPay = 0.0;
	double taxes = 0.0;
	double netPay = 0.0;

	printf("Please enter the number of hours worked this week: ");
	scanf_s("%d", &hours);

	if (hours < OVERTIME) {
		grossPay = hours * PAYRATE;
	}
	else {
		grossPay = OVERTIME * PAYRATE;
		double overtimePay = (hours - OVERTIME) * (PAYRATE * 1.5);
		grossPay += overtimePay;
	}

	if (grossPay <= 300) {
		taxes = grossPay * TAXRATE_300;
	}
	else if (grossPay > 300 && grossPay <= 450) {
		taxes = 300 * TAXRATE_300;
		taxes += (grossPay - 300) * TAXRATE_150;
	}
	else if (grossPay > 450) {
		taxes = 300 * TAXRATE_300;
		taxes += 150 * TAXRATE_150;
		taxes += (grossPay - 450) * TAXRATE_REST;
	}

	netPay = grossPay - taxes;

	printf("Your gross pay this week is: %.2f\n", grossPay);
	printf("Your taxes this week is: %.2f\n", taxes);
	printf("Your net pay this week is: %.2f\n", netPay);
}


void learnSwitchCase() {
	enum Weekday
	{
		Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
	};

	enum Weekday today = Sunday;
	switch (today)
	{
	case Monday:
		printf("Today is Monday");
		break;
	case Tuesday:
		break;
	case Wednesday:
		break;
	case Thursday:
		break;
	case Friday:
		break;
	case Saturday:
		break;
	case Sunday:
		printf("Today is Sunday");
		break;
	default:
		break;
	}
}

void learnForLoop() {
	unsigned long long sum = 0LL;
	unsigned int count = 0;

	printf("\nEnter the number of integers you want to sum: ");
	scanf_s("%u", &count);
	/*for (int i = 0; i < count; ++i)
	{
		sum += i;
	}*/

	for (int i = 1; i <= count; sum += i++);
	printf("\nTotal of the first %u numbers is %llu", count, sum);
}

void learnWhileLoop() {
	int num = 0;
	scanf_s("%d", &num);

	//while (num != -1)
	//{
	//	scanf_s("%d", &num);
	//}
}

void learnContinueKeyword() {
	enum Day
	{
		Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
	};

	for (enum Day day = Monday; day <= Sunday; day++)
	{
		if (day == Wednesday)  continue;

		printf("It's not Wednesday! %d\n", day);
	}

}

#include <stdlib.h>
#include <time.h>
void challengeGuessTheNumber() {
	int randomNumber = 0;
	int guess = 0;
	int numberOfGuesses = 0;
	time_t t = 0;

	// initialize the random number generator
	srand((unsigned)time(&t));

	randomNumber = rand() % 21;

	for (numberOfGuesses = 5; numberOfGuesses > 0; numberOfGuesses--)
	{
		printf("You have %d tr%s left.\n", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
		printf("Enter a guess: ");
		scanf_s("%d", &guess);

		if (guess == randomNumber) {
			printf("Congratulations. You guessed it!");
			return 0;
		}
		else if (guess < 0 || guess > 20)
			printf("The number between 0 and 20.");
		else if (guess < randomNumber)
			printf("Sorry, %d is wrong. My number is greater than that.", guess);
		else if (guess > randomNumber)
			printf("Sorry, %d is wrong. My number is less than that.", guess);

		printf("\n\n");

	}
	printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

}

#define MONTHS 12
void learnArray() {
	long numbers[10] = { 3, 1, 1, 1, 1 };
	float sample_data[500] = { 100.0, 3000.0, 500.5 };

	int days[MONTHS] = { 31,28,[4] = 31, 30, 31,[1] = 29 };

	for (int i = 0; i < MONTHS; i++)
	{
		printf("%2d %d\n", i + 1, days[i]);
	}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%2u", numbers[i]);
	//}

	//printf("\n\n");

	//for (int i = 0; i < 500; i++)
	//{
	//	printf("%2f", sample_data[i]);
	//}
}

void challengeGeneratePrimeNumbers() {
	int p = 0;
	int i = 0;
	int primes[500] = { 0 };
	int primeIndex = 2;
	bool isPrime = false;

	primes[0] = 2;
	primes[1] = 3;

	for (p = 5; p <= 1000; p += 2)
	{
		isPrime = true;

		for (i = 0; isPrime && p / primes[i] >= primes[i]; i++)
			if (p % primes[i] == 0)
				isPrime = false;

		if (isPrime) {
			primes[primeIndex] = p;
			++primeIndex;
		}
	}
	for (i = 0; i < primeIndex; ++i)
		printf("%i  ", primes[i]);

	printf("\n");
}

void learnMultidimensionalArray() {
	int numbers[3][4] = {
		{10,20,30,40},
		{15,24,35,45},
		{47,48,49,50}
	};

	int i, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d\t", numbers[i][j]);
		}

		printf("\n");
	}
}

#define YEARS 5 
#define MONTHS 12
void challengeCreateSimpleWeatherProgram() {
	float rain[YEARS][MONTHS] =
	{
		{4.3f,4.3f,4.3f,3.0f,2.0f,1.2f,0.2f,0.2f,0.4f,2.4f,3.5f,6.6f},
		{8.5f,8.2f,1.2f,1.6f,2.4f,0.0f,5.2f,0.9f,0.3f,0.9f,1.4f,7.3f},
		{9.1f,8.5f,6.7f,4.3f,2.1f,0.8f,0.2f,0.2f,1.1f,2.3f,6.1f,8.4f},
		{7.2f,9.9f,8.4f,3.3f,1.2f,0.8f,0.4f,0.0f,0.6f,1.7f,4.3f,6.2f},
		{7.6f,5.6f,3.8f,2.8f,3.8f,0.2f,0.0f,0.0f,0.0f,1.3f,2.6f,5.2f}
	};

	int year = 0, month = 0;
	float subtot = 0.0, total = 0.0;

	printf("YEAR\t RAINFALL (inches)\n");

	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
		{
			subtot += rain[year][month];
		}
		printf("%d \t%8.1f\n", 2010 + year, subtot);
		total += subtot;
	}

	printf("\nThe yearly average is %.1f inches\n", total / YEARS);

	printf("\nMONTHLY AVERAGES:\n");


	printf("\nJan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];

		printf("%.1f  ", subtot / YEARS);
	}

	printf("\n");
}

#define SIZE 50
void add();

void learnFunction() {
	add();
	float list[SIZE];

}

void add() {

}

int gcd(int u, int v);
float absoluteValue(float a);
float squareRoot(float x);

// challenge write some functions
int gcd(int u, int v) {
	int temp = 0;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

float absoluteValue(float a) {
	if (a < 0)
		a = -a;

	return a;
}

float squareRoot(float x)
{
	const float epsilon = .00001f;
	float returnValue = 0.0f;
	float guess = x / 2.0f;
	if (x < 0) {
		printf("Negative argument to squareRoot.\n");
		returnValue = -1.0;
	}
	else {
		while (absoluteValue(guess * guess - x) >= epsilon)
			guess = (x / guess + guess) / 2.0;

		returnValue = guess;
	}

	return returnValue;
}


void challengeWriteSomeFunction() {
	int result = 0;
	float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int    i1 = -716;
	float absoluteValueResult = 0.0;



	result = gcd(150, 35);
	printf("The gcd of 150 and 35 is %d\n", result);

	result = gcd(1026, 405);
	printf("The gcd of 1026 and 405 is %d\n", result);

	printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

	/* testing absolute Value Function */
	absoluteValueResult = absoluteValue(f1);
	printf("result = %.2f\n", absoluteValueResult);
	printf("f1 = %.2f\n", f1);

	absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
	printf("result = %.2f\n", absoluteValueResult);

	absoluteValueResult = absoluteValue((float)i1);
	printf("result = %.2f\n", absoluteValueResult);

	absoluteValueResult = absoluteValue(i1);
	printf("result = %.2f\n", absoluteValueResult);

	printf("%.2f\n\n\n\n", absoluteValue(-6.0) / 4);

	printf("%.2f\n", squareRoot(-3.0));
	printf("%.2f\n", squareRoot(16.0));
	printf("%.2f\n", squareRoot(25.0));
	printf("%.2f\n", squareRoot(9.0));
	printf("%.2f\n", squareRoot(225.0));
}


char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice = 0, player = 0;

void displayBoard();
int checkForWin();
void markBoard(char mark);

void learnCharacterStrings();

void challengeCreateTicTacToeGame() {
	int gameStatus = 0;
	char mark = ' ';

	player = 1;

	do
	{
		displayBoard();
		player = (player % 2) ? 1 : 2;
		// get input
		printf("Player %d, enter a number: ", player);
		scanf_s("%d", &choice);

		mark = (player == 1) ? 'X' : 'O';

		markBoard(mark);

		gameStatus = checkForWin();

		player++;

	} while (gameStatus == -1);

	if (gameStatus == 1)
		printf("==>\aPlayer %d win ", --player);
	else
		printf("==>\aGame draw");
}

void displayBoard()
{
	system("cls");

	printf("\n\n\tTic Tac Toe\n\n");

	printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

	printf("     |     |     \n\n");
}

int checkForWin()
{
	int returnValue = 0;

	if (square[1] == square[2] && square[2] == square[3])
		returnValue = 1;

	else if (square[4] == square[5] && square[5] == square[6])
		returnValue = 1;

	else if (square[7] == square[8] && square[8] == square[9])
		returnValue = 1;

	else if (square[1] == square[4] && square[4] == square[7])
		returnValue = 1;

	else if (square[2] == square[5] && square[5] == square[8])
		returnValue = 1;

	else if (square[3] == square[6] && square[6] == square[9])
		returnValue = 1;

	else if (square[1] == square[5] && square[5] == square[9])
		returnValue = 1;

	else if (square[3] == square[5] && square[5] == square[7])
		returnValue = 1;

	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
		!= '7' && square[8] != '8' && square[9] != '9')
		returnValue = 0;
	else
		returnValue = -1;

	return returnValue;
}

void markBoard(char mark)
{
	if (choice == 1 && square[1] == '1')
		square[1] = mark;

	else if (choice == 2 && square[2] == '2')
		square[2] = mark;

	else if (choice == 3 && square[3] == '3')
		square[3] = mark;

	else if (choice == 4 && square[4] == '4')
		square[4] = mark;

	else if (choice == 5 && square[5] == '5')
		square[5] = mark;

	else if (choice == 6 && square[6] == '6')
		square[6] = mark;

	else if (choice == 7 && square[7] == '7')
		square[7] = mark;

	else if (choice == 8 && square[8] == '8')
		square[8] = mark;

	else if (choice == 9 && square[9] == '9')
		square[9] = mark;
	else
	{
		printf("Invalid move ");
		player--;
		//getchar();
	}
}

void learnCharacterStrings() {
	//printf("The character \0 is used to terminate a string.");

	char word[] = { "Hello!" };
	char message[100];

	strcpy(message, "Hello world!");

	printf("Message %s", message);

	char input[10];
	printf("\nPlease input your name: ");
	NofScannedArguments = scanf("%s", input);

	printf("\nYour name: %s", input);

}

void countStringLength() {
	char str1[] = "To be or not to be";
	char str2[] = ",that is a question";
	unsigned int count = 0;

	while (str1[count] != '\0')
		++count;

	printf("The length of the string \"%s\" is %d characters.\n", str1, count);

	count = 0;
	while (str2[count] != '\0')
		++count;

	printf("The length of the string \"%s\" is %d characters.\n", str2, count);

	const char message[] = "The end";
}

int countStringCharacters(const char str[]) {
	unsigned int count = 0;

	while (str[count] != '\0')
		++count;

	return count;
}

void concatString(char result[], const char str1[], const char str2[]) {
	int i = 0, j = 0;

	for (i = 0;str1[i] != '\0'; i++)
		result[i] = str1[i];

	for (j = 0;str2[j] != '\0'; j++)
		result[i + j] = str2[j];
}

bool equalStrings(const char str1[], const char str2[]) {
	bool isEquals = true;
	int i = 0;

	while (str1[i] == str2[i]
		&& str1[i] != '\0'
		&& str2[i] != '\0')
		++i;

	if (str1[i] == '\0' && str2[i] == '\0') {
		isEquals = true;
	}
	else {
		isEquals = false;
	}

	return isEquals;
}

void challengeCharArrays() {
	const char word1[] = "jason";
	const char word2[] = " ok";
	const char word3[] = "whatever";
	char result[50] = "";

	printf("%d    %d     %d\n",
		countStringCharacters(word1),
		countStringCharacters(word2),
		countStringCharacters(word3));

	concatString(result, word1, word2);

	printf("\n%s", result);

	printf("\n%d\n", equalStrings("Jason", "jason"));
	printf("%d\n", equalStrings("Jasons", "Jason"));

	return 0;
}

void learnCommonFuncString() {
	const char myString[] = "myString";
	char src[40], dest[12];

	//printf("The length of this string is: %d", (int)strlen(myString));

	memset(dest, "\0", sizeof(dest));

	strcpy(src, "Hello how are you doing");

	strncpy(dest, src, sizeof(dest) - 1);

	printf("%s", dest);

}

void stringConcatenation() {
	char myString[] = "my string";
	char input[80];

	printf("Enter a string to be concatenated: ");
	NofScannedArguments = scanf("%[^\n]s", input);

	printf("\nThe string %s concatenated with %s is::::\n", myString, input);
	printf("%s", strcat(input, myString));
}

void stringComparasion() {
	printf("strcmp(\"A\", \"A\") is: ");
	printf("%d\n", strcmp("A", "A"));

	printf("strcmp(\"A\", \"B\") is: ");
	printf("%d\n", strcmp("A", "B"));

	printf("strcmp(\"B\", \"A\") is: ");
	printf("%d\n", strcmp("B", "A"));

	printf("strcmp(\"C\", \"A\") is: ");
	printf("%d\n", strcmp("C", "A"));

	printf("strcmp(\"Z\", \"a\") is: ");
	printf("%d\n", strcmp("Z", "a"));

	printf("strcmp(\"apple\", \"apples\") is: ");
	printf("%d\n", strcmp("apple", "apples"));

	if (strncmp("astronomy", "astro", 5) == 0) {
		printf("Found: astronomy");
	}

	if (strncmp("astounding", "astro", 5) == 0) {
		printf("Found:: astounding");
	}
}

void challengeUtilizingCommonString() {
	char str[100] = { 0 };
	char name[25][50] = { 0 }, temp[50];
	printf("Enter the string: ");
	int l = 0, i = 0, j = 0, n = 0;

	//NofScannedArguments = scanf("%[^\n]s", str);

	//printf("\nReverse Order of string: ");

	//l = strlen(str);
	//for (i = l; i >= 0; --i)
	//{
	//	printf("%c", str[i]);
	//}



	printf("\n\nSorts the strings of an array using bubble sort :  \n");
	printf("---------------------------------------------------------\n");

	printf("Input number of strings :");
	NofScannedArguments = scanf("%d", &n);

	printf("Input string %d: \n", n);

	for (i = 0; i < n; i++)
	{
		NofScannedArguments = scanf("%s", name[i]);
	}

	for (i = 1; i <= n; i++)
		for (j = 0; j <= n - i; j++)
			if (strcmp(name[j], name[j + 1]) > 0) {
				strncpy(temp, name[j], sizeof(temp) - 1);
				strncpy(name[j], name[j + 1], sizeof(name[j] - 1));
				strncpy(name[j + 1], temp, sizeof(name[j + 1] - 1));
			}


	printf("The strings appear after sorting :\n");

	for (i = 0; i <= n; i++)
		printf("%s\n", name[i]);

}

void learnBasicPointer()
{
	int number = 0;
	int* pNumber = NULL;

	number = 10;

	printf("number's address: %p\n", &number);
	printf("number's value: %d\n", number);

	pNumber = &number;

	printf("pnumber's address: %p\n", (void*)&pNumber);
	printf("pnumber's size: %zd bytes\n", sizeof(pNumber));
	printf("pnumber's value: %p\n", pNumber);
	printf("value pointed to: %d\n", *pNumber);
}


void learnSearchingAStringForCharacter()
{
	char str[] = "The quick brown fox";
	int ch = 'q';
	char word[] = "quick";
	char* pGot_char = NULL;
	char* pGot_string = NULL;

	pGot_char = strchr(str, ch);
	pGot_string = strstr(str, word);
}

void learnTokenizingString()
{
	char str[] = "Hello how are you - my name is - jason";
	const char s[] = "-";
	char* pToken_char = NULL;

	pToken_char = strtok(str, s);

	while (pToken_char != NULL)
	{
		printf("%s\n", pToken_char);
		pToken_char = strtok(NULL, s); // get netxt token
	}
}

void learnAnalyzingStrings() {
	char buf[100];
	int nLetters = 0;
	int nDigits = 0;
	int nPunct = 0; // Number of punctuation characters

	printf("Enter an interesting string of less than %d characters: \n", 100);
	NofScannedArguments = scanf("%s", buf);

	int i = 0;
	while (buf[i])
	{
		if (isalpha(buf[i]))
			++nLetters;
		else if (isdigit(buf[i]))
			++nDigits;
		else if (ispunct(buf[i]))
			++nPunct;
		++i;
	}

	printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n",
		nLetters, nDigits, nPunct);
}

void learnConvertingString() {
	char text[100];
	char substring[40];
	int i = 0;

	printf("Enter the string to be searched (less than %d characters):\n", 100);
	NofScannedArguments = scanf("%s", text);

	printf("\nEnter the string sought (less than %d characters):\n", 40);
	NofScannedArguments = scanf("%s", substring);

	printf("\nFirst string entered:\n%s\n", text);
	printf("Second string entered:\n%s\n", substring);

	for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
	for (i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);

	printf("The second string %s found in the first.\n", (strstr(text, substring) == NULL) ? "was not" : "was");
}

void learnConvertStringToNumber() {
	// atof() string => double
	// atoi() string => int 
	// atol() string => long
	// atoll() string => long long
}

void challengePointerBasics() {

	int num = 06;
	int* pNum = NULL;

	pNum = &num;

	printf("num's address: %p\n", &num);
	printf("pNum's address: %p\n", (void*)&pNum);
	printf("pNum's value: %p\n", pNum);
	printf("pNum's value pointing to: %d\n", *pNum);

}

void learnOverviewUtilizingPointer() {
	long num1 = 0L;
	long num2 = 0L;
	long* pnum = NULL;

	pnum = &num1;
	*pnum = 2L;
	++num2;
	num2 += *pnum;

	pnum = &num2;
	++*pnum;

	printf("num1= %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n",
		num1, num2, *pnum, *pnum + num2);
}

void learnPointersUsedInExpresions() {
	int value = 999;
	int* pNumber = NULL;
	pNumber = &value;
	*pNumber += 25;
	printf("%d", value);
}

void learnPointersAndConst() {
	long value = 9999L;
	const long* pValue = &value;
	value = 8888L;
	long number = 9999L;
	pValue = &number;

	printf("%ld", *pValue);
}

void learnConstantPointer() {
	int count = 43;
	int* const pCount = &count;

	*pCount = 55;
	printf("%d", count);
}

void learnVoidPointer() {
	int i = 10;
	float f = 2.34;
	char ch = 'K';

	void* vptr;

	vptr = &i;
	printf("The value of i = %d\n", *(int*)vptr);

	vptr = &f;
	printf("The value of f = %.2f\n", *(float*)vptr);

	vptr = &ch;
	printf("The value of ch = %c\n", *(char*)vptr);
}

void learnPointerToArrays() {
	int values[100] = { 0, 1 };

	int* valuesPtr;
	valuesPtr = values;

	printf("%d", valuesPtr[1]);
}



void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}
void testNe() {
	int a = 10;
	int b = 9;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d", a, b);
}

void squareNumber(int* n) {
	*n *= *n;
}

void challengeUsePointersAsParameters() {

	int* num = (int*)malloc(sizeof(int));
	*num = 3;

	squareNumber(num);


	printf("%d", *num);
	free(num);
}


int arraySum(int array[], const int n) {
	int sum = 0, * ptr;
	int* const arrayEnd = array + n;

	for (ptr = array; ptr < arrayEnd; ++ptr)
	{
		sum += *ptr;
		if (*ptr == 3) {
			*ptr = 4;
		}

	}

	return sum;
}

int arraySumWithPointerNotation(int* array, const int n) {
	int sum = 0;
	int* const arrayEnd = array + n;

	for (; array < arrayEnd; ++array)
	{
		sum += *array;
	}

	return sum;
}

//int arraySum(int array[], const int n) {
//	int sum = 0, i;
//	for (i = 0; i < n; i++)
//	{
//		sum += array[i];
//		if (array[i] == 3) {
//			array[i] = 4;
//		}
//	}
//	return sum;
//}

void learnPointerArithmetic() {
	int values[10] = { 3,7,-9,3,6,-1,7,9,1,-5 };

	for (int i = 0; i < 10; i++)
	{
		printf("%i\t", values[i]);
	}
	printf("The sum is %i\n", arraySumWithPointerNotation(values, 10));

	for (int i = 0; i < 10; i++)
	{
		printf("%i\t", values[i]);
	}
}

void pointersAndArraysExample() {
	char multiple[] = "a string";
	char* p = multiple;

	for (int i = 0; i < strlen(multiple); i++)
		printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p %lld\n",
			i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i, (unsigned long long)(p + i));
	printf("\n\n");
}

void pointersAndArraysExampleWithLong() {
	long multiple[] = { 15L, 25L, 35L, 45L };
	long* p = multiple;

	for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); i++)
		printf("address p+%d (&multiple[%d]): %llu, %p, %d		*(p+%d) value: %d\n",
			i, i, (unsigned long long)(p + i), (p + i), (int)sizeof(p + i), i, *(p + i));

	printf("\n Type long occupies: %d  %d %d bytes\n", (int)sizeof(long), (int)sizeof(multiple), (int)sizeof(multiple[0]));
	printf("\n\n");
}

void pointersAndArraysExampleWithInt() {
	int multiple[] = { 30,100, 200, 3000, 10000 };
	int* p = multiple;

	for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); i++)
		printf("address p+%d (&multiple[%d]): %llu, %p, %d		*(p+%d) value: %d\n",
			i, i, (unsigned long long)(p + i), (p + i), (int)sizeof(p + i), i, *(p + i));

	printf("\n Type long occupies: %d  %d %d bytes\n", (int)sizeof(int), (int)sizeof(multiple), (int)sizeof(multiple[0]));
}


void copyString(char to[], char from[]) {
	int i = 0;

	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];

	to[i] = '\0';
}

void copyStringByPointer(char* to, char* from) {
	for (; *to != '\0'; ++to, ++from)
		*to = *from;
	*to = '\0';
}

void copyStringByPointerOptimize(char* to, char* from)
{
	while (*from) // the null character to the value 0, so will jump out then
		*to++ = *from++;
	*to = '\0';
}

int countStringLengthByPointer(const char* str)
{
	const char* lastAddress = str;

	while (*lastAddress)
		++lastAddress;

	return lastAddress - str;
}

void testCopyString() {
	char string1[] = "A string to be copied";
	char string2[50];

	copyStringByPointerOptimize(string2, string1);

	printf("%s\n", string2);
	printf("Length of string: %d\n", countStringLengthByPointer(string1));
}

int countAsterisks(char* s) {
	int count = 0;
	int inPair = 0;

	while (*s) {
		if (*s == '|') {
			inPair = !inPair;
		}
		else if (*s == '*' && !inPair) {
			count++;
		}
		s++;
	}

	return count;
}

void learnDynamicAllocateMemory() {
	char str2[] = "helloworld";
	char* str;
	str = (char*)calloc(15, sizeof(char));
	strcpy(str, "jason");
	printf("String = %s, Address %p|%p\n", str, str, (void*)&str);

	str = (char*)realloc(str, 25 * sizeof(char));
	strcat(str, ".com");
	printf("String = %s, Address %p|%p\n", str, str, (void*)&str);

	str = str2;

	free(str);
	str = NULL;
}

void challengeDynamicAllocatedMemory() {
	int size = 0;
	char* text = NULL;

	printf("Enter the size of string: ");
	scanf("%d", &size);

	text = (char*)calloc(size, sizeof(char));

	if (text) {
		printf("Enter some text: \n");
		scanf(" ");
		fgets(text, size, stdin);

		printf("Inputed text is: %s\n", text);
	}

	free(text);
	text = NULL;
}

int main(int argc, char* argv[]) {
	//learnEnum();
	//challengEnum();
	//learnFormatSpecifiers();
	//challengePrintTheAreaOfRetangle(5000, 5000);
	//printSizeOfDataTypes();
	//learnOperator();
	//convertNumberOfMinutesToDaysAndYears();
	//learnBitwiseOperator();
	//learnCastOperator();
	//challengDetermineAmountOfPay();
	//learnSwitchCase();

	//learnForLoop();
	//learnWhileLoop();
	//learnContinueKeyword();

	//challengeGuessTheNumber();
	//learnArray();

	//challengeGeneratePrimeNumbers();

	//learnMultidimensionalArray();
	//challengeCreateSimpleWeatherProgram();

	//challengeWriteSomeFunction();

	//challengeCreateTicTacToeGame();

	//learnCharacterStrings();

	//countStringLength();

	//challengeCharArrays();


	//learnCommonFuncString();
	//stringConcatenation();
	//stringComparasion();
	//challengeUtilizingCommonString();

	//learnBasicPointer();

	//learnSearchingAStringForCharacter();
	//learnTokenizingString();
	//learnAnalyzingStrings();
	//learnConvertingString();

	//challengePointerBasics();
	//learnOverviewUtilizingPointer();

	//learnPointersUsedInExpresions();
	//learnPointersAndConst();
	//learnConstantPointer();
	//learnVoidPointer();
	//learnPointerToArrays();
	//testNe();
	//challengeUsePointersAsParameters();

	//learnPointerArithmetic();
	//pointersAndArraysExample();
	//pointersAndArraysExampleWithLong();
	//pointersAndArraysExampleWithInt();
	//testCopyString();

	//printf("%d", countAsterisks("|**|*|*|**||***||"));

	//learnDynamicAllocateMemory();
	challengeDynamicAllocatedMemory();


	//if (NofScannedArguments != 1) {
	//	exit(EXIT_FAILURE);
	//}

	return 0;
}



