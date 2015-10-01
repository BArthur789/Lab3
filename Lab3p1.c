#include <stdio.h>
#include <stdlib.h>


/* Authors: Brett Arthur, Daniel Meredith
Desc: Lab3 (...) */

float avgProfit(struct *nodePtr);
void printList(const struct *nodePtr);
void deleteBook(struct *nodePtr);
void endProg(struct *nodePtr);

int main(void)
{
struct Books {
	char title[40];
	char author[40];
	int stockNumber;
	float wholesalePrice;
	float retailPrice;
	int wholesaleQuantity;
	int retailQuantity;
};
struct Node {
	struct Books data;
	struct Node *next;
};
struct Node *head = NULL;
struct Node *nodePtr = head;

}

float avgProfit(struct *nodePtr) {
float totalProfit;
int totalSales;
/*Function calls for 3 and 4 here */
totalProfit = totalProfit();
totalSales = totalSales();
return (totalProfit/totalSales);
}

void printList(const struct *nodePtr) {
if (*nodePtr == NULL) {
	printf("The list is empty");
}
while (*nodePtr != NULL) {
	printf("%s\n", nodePtr->title);
	nodePtr = nodePtr->next;
}
}

void deleteBook(struct *nodePtr) {
struct Node *tempPtr;
struct Node *prev;
int stockNum;
tempPtr = head;
if (*nodePtr == NULL) {
	printf("\nError, list is empty");
}
else {
	printf("\nEnter book stock number: ");
	scanf("%d", &stockNum);
	if (tempPtr->stockNubmer == stockNum) {
		head = tempPtr->next;
		free(tempPtr);
	}
	else {
		prev = tempPtr;
		tempPtr = tempPtr->next;
		while (tempPtr->stockNumber != stockNum && *tempPtr != NULL) {
			tempPtr = tempPtr->next;
			prev = prev->next;
		}
		if (*tempPtr == NULL) {
			printf("Entry not found in list");
		}
		else {
			prev->next = tempPtr->next;
			free(tempPtr);
		}
	}
}
}

void endProg(struct *nodePtr) {
struct Node *holdPtr;
while (((holdPtr = nodePtr) != NULL) {
	nodePtr = nodePtr->next;
	free(holdPtr);
}
nodePtr = NULL;
holdPtr = NULL;
}
