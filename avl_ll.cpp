tnode * AVL :: LL(tnode * parent)
{
    tnode * temp;
    temp = parent -> L;
    parent -> L = temp -> R;
    temp -> R = parent;
    return temp;
}
