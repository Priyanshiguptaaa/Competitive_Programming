int makeAnagram(string a, string b) 
{
    int count=0;

    vector<int> freq(26, 0);
    for (auto ch : a) 
    { 
        ++freq[ch - 'a']; 
    }
    for (auto ch : b) 
    { 
        --freq[ch - 'a']; 
    }
    for (auto val : freq) 
    { 
        count += abs(val); 
    }
    return count;
}
