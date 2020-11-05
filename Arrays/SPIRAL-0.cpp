class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> v;
        if(matrix.size()==0)
            return v;
        int m=matrix[0].size(); //columns
        int n=matrix.size();//rows
        int dir=0;
        //0-rightward
        //1-downward
        //2-leftward
        //3-upward
        int top=0,down=n-1,left=0,right=m-1;//boundaries

        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
                top+=1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                right-=1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                }
                down-=1;
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left+=1;
            }
            dir=(dir+1)%4;
        } 
        return v;
    }
};
