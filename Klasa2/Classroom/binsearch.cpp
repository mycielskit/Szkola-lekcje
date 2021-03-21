int binsearch(int *list, int searchval, int size)
{
    int currpos = size / 2, currdiv = size / 2;
    if(searchval < list[0] || searchval > list[size - 1])
        return -1;
    while(currdiv && currpos >= 0 && currpos < size)
    {
        if(list[currpos] == searchval)
            return currpos;
        else if(list[currpos] > searchval)
        {
            currpos -= currdiv % 2 + currdiv / 2;
            currdiv /= 2;
        }
        else
        {
            currpos += currdiv % 2 + currdiv / 2;
            currdiv /= 2;
        }
    }
    if(list[currpos] == searchval)
        return currpos;
    return -1;
}