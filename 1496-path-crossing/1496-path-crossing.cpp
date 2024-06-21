class Solution {
public:
  /*  bool isPathCrossing(string path) {
        vector <int> y;
        y.push_back(0);
        vector <int> x;
        x.push_back(0);
	for (int i = 0; i < path.length(); i++)
	{
		if (path[i]=='N')
		{
			y.push_back(y[i]+1);
			x.push_back(x[i]);
		}
		else if (path[i] == 'S')
		{
			y.push_back(y[i]-1);
			x.push_back(x[i]);
		}
		else if (path[i] == 'E')
		{
			x.push_back(x[i]+1);
			y.push_back(y[i]);
		}
		else if (path[i] == 'W')
		{
			x.push_back(x[i]-1);
			y.push_back(y[i]);
		}
	}
for (int i = 0; i < path.length()+1; i++)
	{
		for (int j = 0; j < path.length()+1; j++)
		{
			if (x[i]==x[j]&&y[i]==y[j]&&i!=j)
			{
				return true;
			}
		}
	}
	return false;
    }*/
bool isPathCrossing(string path) {
	int y[10001];
	y[0] = 0;
	int x[10001];
	x[0] = 0;
	for (int i = 0; i < path.length(); i++)
	{
		if (path[i] == 'N')
		{
			y[i + 1] = y[i] + 1;
			x[i + 1] = x[i];
		}
		else if (path[i] == 'S')
		{
			y[i + 1] = y[i] - 1;
			x[i + 1] = x[i];
		}
		else if (path[i] == 'E')
		{
			x[i + 1] = x[i] + 1;
			y[i + 1] = y[i];
		}
		else if (path[i] == 'W')
		{
			x[i + 1] = x[i] - 1;
			y[i + 1] = y[i];
		}
	}
	for (int i = 0; i < path.length()+1; i++)
	{
		for (int j = 0; j < path.length()+1; j++)
		{
			if (x[i] == x[j] && y[i] == y[j] && i != j)
			{
				return true;
			}
		}
	}
	return false;

}
    
    
};
