//brute force
int steps = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            int x = points[i][0], y = points[i][1];
            int x2 = points[i + 1][0], y2 = points[i + 1][1];

            while (x != x2 || y != y2) {
                if (x < x2) x++;
                else if (x > x2) x--;

                if (y < y2) y++;
                else if (y > y2) y--;

                steps++;
            }
        }
        return steps;



//optimal  greedy approach

class Solution {
    public:
        int minTimeToVisitAllPoints(vector<vector<int>>& points) {
            int n=points.size();
            int steps=0;
            for(int i=0;i<n-1;i++){
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[i+1][0];
                int y2=points[i+1][1];
                int dy=abs(y2-y1);
                int dx=abs(x2-x1);
                steps+=(min(dx,dy)+abs(dy-dx));
             
    
            }
            return steps;
            
        }
    };


// another way
int steps = 0;
for (int i = 1; i < points.size(); i++) {
    steps += max(abs(points[i][0] - points[i - 1][0]), abs(points[i][1] - points[i - 1][1]));
}
return steps;



