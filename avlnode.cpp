struct tnode
{
    int data;
    tnode * L, * R;
    tnode()
    {
        L = R = NULL;
    }
};
