#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};

struct Library {
    struct Book books[100]; 
    int bookCount;       
};

void addBook(struct Library *library, const char *title, const char *author, int publicationYear) {
    if (library->bookCount < 100) {
        strcpy(library->books[library->bookCount].title, title);
        strcpy(library->books[library->bookCount].author, author);
        library->books[library->bookCount].publicationYear = publicationYear;
        library->bookCount++; 
    } else {
        printf("Library is full!\n");
    }
}

void displayBooks(const struct Library *library) {
    printf("Library contains %d book(s):\n", library->bookCount);

    int i;
    for (i = 0; i < library->bookCount; i++) {
        printf("Book %d: %s by %s (Published: %d)\n", 
               i + 1, 
               library->books[i].title, 
               library->books[i].author, 
               library->books[i].publicationYear);
    }
}

int main() {
    struct Library myLibrary = { .bookCount = 0 }; 
    char title[100], author[100];
    int publicationYear;
    int numberOfBooks, i;

    printf("How many books do you want to add? ");
    scanf("%d", &numberOfBooks);
    getchar(); 

    for (i = 0; i < numberOfBooks; i++) {
        printf("\nEntering details for book %d:\n", i + 1);
        
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);  

        printf("Enter book author: ");
        fgets(author, sizeof(author), stdin);
        
        printf("Enter publication year: ");
        scanf("%d", &publicationYear);
        getchar();  

        addBook(&myLibrary, title, author, publicationYear);
    }
    displayBooks(&myLibrary);
}
