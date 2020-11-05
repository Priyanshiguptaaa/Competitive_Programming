class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> matrix(n,vector<int> (n));
        
        int top=0,down=n-1,left=0,right=n-1;//boundaries
        int counter=1;
                                         
        while(top<=down && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                matrix[top][i]=counter;
                counter++;
            }
            top+=1;
            
            
            for(int i=top;i<=down;i++)
            {
                matrix[i][right]=counter;
                counter++;
            }
            right-=1;
            
            if(top<=down)
            {
                for(int i=right;i>=left;i--)
                {
                    matrix[down][i]=counter;
                    counter++;
                }
                down-=1;
            }
            if(left<=right)
            {
                for(int i=down;i>=top;i--)
                {
                    matrix[i][left]=counter;
                    counter++;
                }
                left+=1;
            }

        } 
        return matrix;
    }
};
