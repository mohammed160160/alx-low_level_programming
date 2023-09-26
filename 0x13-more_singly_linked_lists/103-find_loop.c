/**
 * find_listint_loop -  function that finds the loop in a linked list.
 * @head:A pointer to the first element of the list
 * Return: The address or NULL if there isnt one.
 */

listint_t *find_listint_loop(listint_t *head)
{
const listint_t *X = head;
const listint_t *Y = head;


while (X != NULL)
{
X = X->next;

if (Y != NULL)
{
Y = Y->next;
        if (Y != NULL)
        {
        Y = Y->next;
        }
}

        if ((X == Y) &&(X != NULL))
        {
        return (X);
        }

}

return (NULL);
}
