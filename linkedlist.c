#include "main.h"

envstruct *insert_end(envstruct *head, char *key, char *value)
{
	if (head == NULL)
		return (NULL);

	envstruct new_var;

	new_var->key = *key;
	new_var->value = *value;
	new_var->next = NULL;

	while (head->next != NULL)
		head++;

	head->next = new_var;
}

char *get_value(envstruct *head, char *key)
{
	if (head == NULL)
                return (NULL);

	if ((head->next == NULL) && (head->key == key))
		return (head->value);

	while (head->next != NULL)
	{
		if (head->key == key)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}

int remove_value(envstruct *head, char *key)
{
	envstruct *previous = NULL, *current = NULL, *next_node = NULL;

	if (head == NULL)
                return (NULL);

	if ((head->next == NULL) && (head->key == key))
	{
		head = NULL;
		return (0);
	}

	while (head->next != NULL)
        {
                if (head->key == key)
		{
			previous->next = next_node
			current->next = NULL;
                        return (0);
		}
		previous = head;
		head = head->next;
        }
	return (1);
}
