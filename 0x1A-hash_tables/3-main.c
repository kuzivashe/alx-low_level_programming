#include "hash_tables.h"

/**
  * main - check the code
  *
  * Return: Always exit_success
  */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}
