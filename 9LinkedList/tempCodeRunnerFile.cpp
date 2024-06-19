int searchElement(Node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    int cnt = 1;
    if (head->data == x)
    {
        return cnt;
    }
    cnt++;
    searchElement(head->next, x);
}
