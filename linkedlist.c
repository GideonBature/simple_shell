#include "main.h"

envstruct *insert_end(envstruct *head, char *key, char *value) {
    envstruct *new_node = malloc(sizeof(envstruct));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    }

    envstruct *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;

    return head;
}

char *get_value(envstruct *head, char *key) {
    if (head == NULL || key == NULL) {
        return NULL;
    }

    envstruct *curr = head;
    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            return curr->value;
        }
        curr = curr->next;
    }

    return NULL;
}

int remove_value(envstruct **head, char *key) {
    if (head == NULL || *head == NULL) {
        return 1;
    }

    envstruct *curr = *head;
    envstruct *prev = NULL;

    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            if (prev == NULL) {
                *head = curr->next;
            } else {
                prev->next = curr->next;
            }
            free(curr->key);
            free(curr->value);
            free(curr);
            return 0;
        }

        prev = curr;
        curr = curr->next;
    }

    return 1;
}

void free_list(envstruct *head) {
    while (head != NULL) {
        envstruct *temp = head;
        head = head->next;
        free(temp->key);
        free(temp->value);
        free(temp);
    }
}

/**
int main(void) {
    envstruct *head = NULL;
    head = insert_end(head, "name", "caleb");
    head = insert_end(head, "class", "3");
    head = insert_end(head, "age", "121");

    char *name = get_value(head, "name");
    printf("Name: %s\n", name);

    remove_value(&head, "class");
    printf("After removing 'class':\n");
    name = get_value(head, "class");
    if (name == NULL) {
        printf("Class not found.\n");
    }

    free_list(head);

    return 0;
}
*/
