void checkMagazine(vector<string> magazine, vector<string> note) 
{
    unordered_map<string, int> words;
    for (auto it: magazine)
        words[it]++;
    for (auto it: note) 
    {
    
        if (words[it]>0)
            words[it]--;
        else
        {
            cout<<"No";
            return;
        }

    }
    cout<<"Yes";
    return;
}
