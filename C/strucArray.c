// a simple mailing list

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct address {
    char name[30];
    char street[40];
    char city[20];
    char state[15];
    unsigned long int zip;
} address_list[MAX];

void init_list(void), enter(void);
void delete(void), list(void);
int menu_sel(void), find_free(void);

int main(void) {
    char choice;
    
    init_list(); //initialize the structure array
    for(;;) {
        choice = menu_sel();
        switch(choice) {
            case 1: enter();
            break;
            case 2: delete();
            break;
            case 3: list();
            break;
            case 4: exit(0);
        }
    }

    return 0;
}

//initiaize the list.
void init_list(void) {
    register int t;
    
    for(t = 0; t < MAX; ++t) address_list[t].name[0] = '\0';
}

//getting the menu selection
void menu_sel(void) {
    char s[80];
    int c;
    
    printf("1. Enter a name\n");
    printf("2. Delete a name\n");
    printf("3. List the file\n");
    printf("4. Quit\n");
    
    do {
        printf("\n Enter the NUMBER corresponding the opertion you want to do: ");
        gets(s);
        c = atoi(s);
    } while(c < 0 || c > 4);
    return c;
}

//take the inputs
void enter(void) {
    int slot;
    char s[80];
    
    slot = find_free();
    
    if(slot == -1) {
        printf("\nList Full");
        return; 
    }

    printf("Enter name: ");
    gets(address_list[slot].name);

    printf("Enter street: ");
    gets(address_list[slot].street);

    printf("Enter city: ");
    gets(address_list[slot].city);

    printf("Enter state: ");
    gets(address_list[slot].state);

    printf("Enter zip: ");
    gets(s);
    address_list[slot].zip = strtoul(s, '\0', 10);
}

//find an unused structure
int find_free(void) {
    register int t;
    
    for(t=0; address_list[t].name[0] && t < MAX; ++t);

    if(t == MAX) return -1; //no slots available
    return t;
}

//delete an address
void delete(void) {
    register int slot;
    char s[80];

    printf("Enter record NUMBER: ");
    gets(s);
    slot = atoi(s);

    if(slot >= 0 && slot < MAX) {
        address_list[slot].name[0] = '\0';
    }
}

//displat the list
void list(void) {
    register int t;

    for(t = 0; t < MAX; ++t) {
        if(addr_list[t].name[0]) {
            printf("%s\n", address_list[t].name);
            printf("%s\n", address_list[t].street);
            printf("%s\n", address_list[t].city;
            printf("%s\n", address_list[t].state);
            printf("%lu\n\n", address_list[t].zip);
        }
    }
    printf("\n\n");
}