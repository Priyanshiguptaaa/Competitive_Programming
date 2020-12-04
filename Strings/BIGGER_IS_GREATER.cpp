string biggerIsGreater(string w) 
{
    for (int i = w.length() - 2; i >= 0; i--) 
    {
        for (int j = w.length() - 1; j > i; j--) 
        {
            if (w[j] > w[i]) 
            {
                string result = "";
                for (int k = 0; k < i; k++) 
                {
                    result += w[k];
                }
                result += w[j];
                for (int t = w.length() - 1; t > i; t--) 
                {
                    if (t != j) result += w[t];
                    else result+= w[i];
                }
                return result;
            }
        }
    }
    return "no answer";
}
