class Solution {
public:
    int romanToInt(string s) {
  char R_num[8] = { 'I','V','X','L','C','D','M','\0'};
int R_value[7] = { 1,  5,  10, 50, 100,500,1000 }, sum = 0, k = s.length()-1, i = -1, H_N=0;
while (k>=0) {
	i++;
	if (s[k] == R_num[i]) {
		if (R_value[i] < H_N )
		{
			sum -= R_value[i];
			i = -1;
			k--;
		}
		else if(R_value[i] >= H_N) {
			sum += R_value[i];
			H_N = R_value[i];
			i = -1;
			k--;
		}
	}
	
}
return sum;




    }
};