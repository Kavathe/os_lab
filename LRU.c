#include <stdio.h>
#define SIZE 3 // Size of the page table
int isPageInMemory(int page, int pageTable[], int size) {
 for (int i = 0; i < size; i++) {
 if (pageTable[i] == page)
 return 1;
 }
 return 0;
}
void lruPageReplacement(int referenceString[], int n, int pageTable[], int size) {
 int pageFaults = 0;
 int counter = 0; // Counter to track the age of each page
 int ages[size]; // Age of each page in the page table
 for (int i = 0; i < size; i++)
 ages[i] = 0;
 for (int i = 0; i < n; i++) {
 if (!isPageInMemory(referenceString[i], pageTable, size)) {
 int index = 0;
 for (int j = 1; j < size; j++) {
 if (ages[j] < ages[index])
 index = j;
 }
 pageTable[index] = referenceString[i];
 ages[index] = counter++;
 pageFaults++;
 } else {
 // If the page is already in memory, update its age
 for (int j = 0; j < size; j++) {
 if (pageTable[j] == referenceString[i])
 ages[j] = counter++;
 }
 }
 // Display page table and ages after each reference
 printf("Page Table: ");
 for (int j = 0; j < size; j++) {
 if (pageTable[j] == -1)
 printf("[ ] ");
 else
 printf("[%d] ", pageTable[j]);
 }
 printf("Ages: ");
 for (int j = 0; j < size; j++) {
 printf("%d ", ages[j]);
 }
 printf("\n");
 }
 printf("Total Page Faults: %d\n", pageFaults);
}
int main() {
 int n;
 printf("Enter the number of page references: ");
 scanf("%d", &n);
 int referenceString[n];
 printf("Enter the page reference string:\n");
 for (int i = 0; i < n; i++)
 scanf("%d", &referenceString[i]);
 int pageTable[SIZE];
 for (int i = 0; i < SIZE; i++)
 pageTable[i] = -1;
 lruPageReplacement(referenceString, n, pageTable, SIZE);
 return 0;
}