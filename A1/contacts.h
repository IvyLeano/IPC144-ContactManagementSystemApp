/* A1
 * contactManagementSystem.c
 * contacts.c
 * Ivy Leano
 */

// Structure type Name declaration

struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration 

struct Address {
	int streetNumber;
	int apartmentNumber;
	char street[41];
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration

struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};

// Structure type Contact declaration

struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

// Function Prototype:
// Get and store from standard input the values for Name

void getName(struct Name *);

// Function Prototype:
// Get and store from standard input the values for Address

void getAddress(struct Address *);

// Function Prototype:
// Get and store from standard input the values for Numbers

void getNumbers(struct Numbers *);
