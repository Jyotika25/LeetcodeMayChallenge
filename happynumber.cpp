//happy number
/*
given array of +ve integer
replace number by sum of squares of its digits
repeat process until number becomes 1
if 1 then happy number
*/
class solution{
public:
	//create squaresum function and return sum
	int squaresum(int num){
		int rem=0,sum=0;
		while(n){
			rem = num%10;
			sum = sum+(rem*rem);
			num = num/10;
		}
		return sum;
	}
	
bool happynumber(int num)
{
	if(num==1)
	return true;
	
	set<int> s;
	while(1){
		num = squaresum(num);
		if(num == 1) return true;
		if(s.find(n)!= s.end())
		return false;
		s.insert(n);
		
	}
}

};
