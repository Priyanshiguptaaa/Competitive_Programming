int formingMagicSquare(vector<vector<int>> s) 
{
    vector<vector<int>> valid_squares = 
    {             
    //All valid magic squares
        {8,1,6,3,5,7,4,9,2},
        {4,3,8,9,5,1,2,7,6},
        {2,9,4,7,5,3,6,1,8},
        {6,7,2,1,5,9,8,3,4},
        {6,1,8,7,5,3,2,9,4},
        {8,3,4,1,5,9,6,7,2},                
        {4,9,2,3,5,7,8,1,6},
        {2,7,6,9,5,1,4,3,8}
   };
   int a[9],l=0;
   //Convert 2-D vector to 1-D array. Ease of calculation
   for(int i=0;i<3;i++)   
   {
       for(int k=0;k<3;k++)
       {
           a[l++] = s[i][k]; 
       }              
   }               
     
   int best = 1000000;
   for(int i=0;i<8;i++)
   {
       int diff = 0;
       for(int j=0;j<9;j++)
       {
            //Difference of magic square vs input matrix
            diff += abs(a[j]-valid_squares[i][j]);           
            cout<<"j="<<j<<",diff="<<diff<<endl;
       }
       if (diff<best)
       {
           best = diff;
       }
   }
   return best;
}
