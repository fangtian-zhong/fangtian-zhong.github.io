typedef struct Exhibit {
    char name[40];
    struct Exhibit *next;
} Exhibit;

void printExhibits(Exhibit* head);

Exhibit* create_new_exhibit(char name[]);

void insert_exhibit_at_front(Exhibit** head, Exhibit* e);

void delete_exhibit(Exhibit** head, char name[]);

void delete_all(Exhibit** head);
