#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    int issued;
};

int main() {
    struct Book b[100];
    int choice, n = 0, i, id, found;

    while (1) {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Update Book Details\n");
        printf("8. Count Total Books\n");
        printf("9. Display Available Books\n");
        printf("10. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            printf("Enter Category: ");
            scanf(" %[^\n]", b[n].category);

            printf("Enter Price: ");
            scanf("%f", &b[n].price);

            b[n].issued = 0;
            n++;

            printf("Book added successfully!\n");
            break;

        case 2:
            for (i = 0; i < n; i++) {
                printf("\nID: %d\nName: %s\nAuthor: %s\n",
                       b[i].id, b[i].name, b[i].author);
                printf("Category: %s\nPrice: %.2f\n",
                       b[i].category, b[i].price);
                printf("Status: %s\n",
                       b[i].issued ? "Issued" : "Available");
            }
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("Book Name: %s\n", b[i].name);
                    printf("Author: %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 4: {
            char name[50];
            printf("Enter Book Name: ");
            scanf(" %[^\n]", name);
            found = 0;

            for (i = 0; i < n; i++) {
                if (strcmp(b[i].name, name) == 0) {
                    printf("Book ID: %d\n", b[i].id);
                    printf("Author: %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;
        }

        case 5:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].issued == 0) {
                        b[i].issued = 1;
                        printf("Book issued successfully!\n");
                    } else {
                        printf("Book already issued!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 6:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].issued == 1) {
                        b[i].issued = 0;
                        printf("Book returned successfully!\n");
                    } else {
                        printf("Book is already available!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 7:
            printf("Enter Book ID to update: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("Enter New Book Name: ");
                    scanf(" %[^\n]", b[i].name);

                    printf("Enter New Author Name: ");
                    scanf(" %[^\n]", b[i].author);

                    printf("Enter New Category: ");
                    scanf(" %[^\n]", b[i].category);

                    printf("Enter New Price: ");
                    scanf("%f", &b[i].price);

                    printf("Book updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 8:
            printf("Total Books: %d\n", n);
            break;

        case 9:
            for (i = 0; i < n; i++) {
                if (b[i].issued == 0) {
                    printf("ID: %d | Name: %s\n",
                           b[i].id, b[i].name);
                }
            }
            break;

        case 10:
            printf("Thank you!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    int issued;
};

int main() {
    struct Book b[100];
    int choice, n = 0, i, id, found;

    while (1) {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Update Book Details\n");
        printf("8. Count Total Books\n");
        printf("9. Display Available Books\n");
        printf("10. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            printf("Enter Category: ");
            scanf(" %[^\n]", b[n].category);

            printf("Enter Price: ");
            scanf("%f", &b[n].price);

            b[n].issued = 0;
            n++;

            printf("Book added successfully!\n");
            break;

        case 2:
            for (i = 0; i < n; i++) {
                printf("\nID: %d\nName: %s\nAuthor: %s\n",
                       b[i].id, b[i].name, b[i].author);
                printf("Category: %s\nPrice: %.2f\n",
                       b[i].category, b[i].price);
                printf("Status: %s\n",
                       b[i].issued ? "Issued" : "Available");
            }
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("Book Name: %s\n", b[i].name);
                    printf("Author: %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 4: {
            char name[50];
            printf("Enter Book Name: ");
            scanf(" %[^\n]", name);
            found = 0;

            for (i = 0; i < n; i++) {
                if (strcmp(b[i].name, name) == 0) {
                    printf("Book ID: %d\n", b[i].id);
                    printf("Author: %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;
        }

        case 5:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].issued == 0) {
                        b[i].issued = 1;
                        printf("Book issued successfully!\n");
                    } else {
                        printf("Book already issued!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 6:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].issued == 1) {
                        b[i].issued = 0;
                        printf("Book returned successfully!\n");
                    } else {
                        printf("Book is already available!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 7:
            printf("Enter Book ID to update: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("Enter New Book Name: ");
                    scanf(" %[^\n]", b[i].name);

                    printf("Enter New Author Name: ");
                    scanf(" %[^\n]", b[i].author);

                    printf("Enter New Category: ");
                    scanf(" %[^\n]", b[i].category);

                    printf("Enter New Price: ");
                    scanf("%f", &b[i].price);

                    printf("Book updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 8:
            printf("Total Books: %d\n", n);
            break;

        case 9:
            for (i = 0; i < n; i++) {
                if (b[i].issued == 0) {
                    printf("ID: %d | Name: %s\n",
                           b[i].id, b[i].name);
                }
            }
            break;

        case 10:
            printf("Thank you!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}