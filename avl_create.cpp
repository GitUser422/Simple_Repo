void AVL :: create()
{
    int val;
    char ch;
    do
    {
        cout << "Enter Number : ";
        cin >> val;
        root = insert(root, val);
        cout << "Continue : ";
        cin >> ch;
    }while(ch == 'y');
}
