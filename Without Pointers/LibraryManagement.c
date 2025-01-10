#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Key Features:
Add a New Book
Remove a Book
Search for a Book
Borrow a Book
Return a Book
Display Available Books
Display Borrowed Books
File Handling (Optional for data persistence)*/
struct book {
  int id;
  char title[30], author[20];
  float price;
};
struct borrowedBook {
  int id;
  char title[30], author[20];
  float price;
};

void addBooksInfo(struct book *book) {
  printf("Enter the id of book: ");
  scanf("%d", &book->id);
  printf("Enter the title of the book: ");
  scanf("%29s", &book->title);
  printf("Enter the Name of book author: ");
  scanf("%19s", &book->author);
  printf("Enter the price of the book: ");
  scanf("%f", &book->price);
}
int main() {
  int currentNumberOfBooks = 0;
  while (1) {
    int option;
    printf("Library management system");
    printf("Select a option from 1 to 10");
    printf(
        "1.Add Book details"
        "\n2.Update book details"
        "\n3.Show all books");
    scanf("%d", &option);

    switch (option) {
      case 1: {
        int num;
        printf("How many books you want to add?");
        scanf("%d", &num);
        struct book books[currentNumberOfBooks + num];
        for (int i = currentNumberOfBooks + 1; i <= currentNumberOfBooks + num;
             i++) {
          addBooksInfo(&books[i]);
        }
        currentNumberOfBooks = currentNumberOfBooks + num;
        break;
      }
      case 3: {
        struct book books[currentNumberOfBooks];
        for (int i = 0; i < currentNumberOfBooks; i++) {
          printf(
              "Book number %d-->\nTitle: %s\n Author: %s\n Id: %d\n Price: "
              "%f\n",
              i, books[i].title, books[i].author, books[i].id, books[i].price);
        }
        break;
      }
    }
  }

  return 0;
}
