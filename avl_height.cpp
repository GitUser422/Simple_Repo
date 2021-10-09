int AVL :: height(tnode * temp )
{
    if(temp == NULL)                                    //height of empty node(subtree)
        return -1;

    if(temp -> L == NULL and temp -> R == NULL)             //height of leaf node
        return 0;

    return (1 + MAX( height(temp -> L), height(temp -> R)));
}
