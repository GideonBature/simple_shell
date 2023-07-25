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

	while (head->next != NULL)
	{
		if (head->key == key)
			return (head->value);
		head++;
	}
}
