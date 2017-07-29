/*
 * Note: Write a solution that only iterates over the string once and uses O(1) additional memory,
 * since this is what you would be asked to do during a real interview.
 *
 * Given a string s,
 * find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.
 */
char firstNotRepeatingCharacter(std::string s) {
    vector<int> v(26, -1);
    int index = 0;
    for(int i = s.length() - 1; i >= 0; i--) {
        index = s[i] - 'a';
        if(v[index] == -1) v[index] = i;
        else if(v[index] >= 0) v[index] = INT_MAX;
        else continue;
    }
    index = INT_MAX;
    for(int i : v) {
        if(i >= 0 && i < index) index = i;
    }
    return index == INT_MAX? '_' : s[index];
}

