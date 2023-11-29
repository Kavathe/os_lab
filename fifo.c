#include <stdio.h>
#define SIZE 3 // Size of the page table
int isPageInMemory(int page, int pageTable[], int size) {
 for (int i = 0; i < size; i++) {
 if (pageTable[i] == page)
 return 1;
 }
 return 0;
}
void fifoPageReplacement(int referenceString[], int n, int pageTable[], int size) {
 int pageFaults = 0;
 int front = 0;
 for (int i = 0; i < n; i++) {
 if (!isPageInMemory(referenceString[i], pageTable, size)) {
 pageTable[front] = referenceString[i];
 front = (front + 1) % size;
 pageFaults++;
 }
 // Display page table after each reference
 printf("Page Table: ");
 for (int j = 0; j < size; j++) {
 if (pageTable[j] == -1)
 printf("[ ] ");
 else
 printf("[%d] ", pageTable[j]);
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
 fifoPageReplacement(referenceString, n, pageTable, SIZE);
 return 0;
}
