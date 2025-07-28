#include <iostream>
using namespace std;

struct Book {
    string book_id;
    string author_name;
    string price;
    string no_of_pages;
    string publisher;
    string year_of_publishing;
};

// Function to swap two books
void swap(Book& a, Book& b) {
    Book temp = a;
    a = b;
    b = temp;
}

// Function to sort an array of books by author name
void sortBooks(Book books[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (books[i].author_name > books[j].author_name) {
                swap(books[i], books[j]);
            }
        }
    }
}

int main() {
    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;

    Book* books = new Book[numBooks];

    // Take input from the user
    for (int i = 0; i < numBooks; i++) {
        cout << "Enter details for book " << i + 1 << ":\n";
        cout << "Book ID: ";
        cin >> books[i].book_id;
        cout << "Author Name: ";
        cin.ignore(); // ignore newline character
        getline(cin, books[i].author_name);
        cout << "Price: ";
        cin >> books[i].price;
        cout << "Number of Pages: ";
        cin >> books[i].no_of_pages;
        cout << "Publisher: ";
        cin.ignore(); // ignore newline character
        getline(cin, books[i].publisher);
        cout << "Year of Publishing: ";
        cin >> books[i].year_of_publishing;
        cout << "\n";
    }

    // Sort the array of books by author name
    sortBooks(books, numBooks);

    // Print the sorted list of books
    cout << "Sorted list of books:\n\n";
    for (int i = 0; i < numBooks; i++) {
        cout << "Book ID: " << books[i].book_id << "\n";
        cout << "Author Name: " << books[i].author_name << "\n";
        cout << "Price: " << books[i].price << "\n";
        cout << "Number of Pages: " << books[i].no_of_pages << "\n";
        cout << "Publisher: " << books[i].publisher << "\n";
        cout << "Year of Publishing: " << books[i].year_of_publishing << "\n\n";
    }

    delete[] books; // free dynamically allocated memory

    return 0;
}