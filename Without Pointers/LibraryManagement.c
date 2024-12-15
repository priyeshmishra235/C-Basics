#include <stdio.h>
#include <string.h>

/*Add a Book: Prompt the user to enter details of a book and store it in the array.
Display All Books: Display the details of all books currently in the library.
Search for a Book: Allow the user to search for a book by its id or title.
Delete a Book: Delete a book by its id.
Update Book Details: Update the details of a book by its id.*/
struct book
{
    int id;
    char title[30], author[20];
    float price;
};
void addBooks(int currentBooks,struct book *book)
{
    printf("Enter the id of book: ");
    scanf("%d", book[currentBooks].id);
    printf("Enter the title of the book: ");
    scanf("%s", book[currentBooks].title[30]);
    printf("Enter the Name of book author: ");
    scanf("%s", book[currentBooks].author[20]);
    printf("Enter the price of the book: ");
    scanf("%f", book[currentBooks].price);
    --currentBooks;
}
int main()
{
    int currentBooks = 100;
    struct book book[currentBooks];
    addBooks(currentBooks,&book[currentBooks]);
    printf("%d",book->id);

    return 0;
}
