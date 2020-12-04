int birthdayCakeCandles(vector<int> candles) 
{
    int max = candles[0];
    int count = 0;
    for(int i=0; i<candles.size(); i++)
        if(candles[i] > max)
            max = candles[i];
    for(int i = 0; i < candles.size(); i++)
        if (candles[i] == max)
            count++;
    return count;
}
