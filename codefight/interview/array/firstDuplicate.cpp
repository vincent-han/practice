/*
 * Given an array a that contains only numbers in the range from 1 to a.length,
 * find the first duplicate number for which the second occurrence has the minimal index.
 * In other words, if there are more than 1 duplicated numbers,
 * return the number for which the second occurrence has a smaller index than the second occurrence of the other number does.
 * If there are no such elements, return -1.
 */
int firstDuplicate(std::vector<int> a) {
    int i;
    for(int e:a) {
        i = abs(e)-1;
        if(a[i] < 0) return abs(e);
        else a[i] = -a[i];
    }

    return -1;
}

