#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main(){

int num[] = {1,2,0,0};
int k = 34;
int i, j, number;
std::string test;
vector<int>arr;


for(i=0; i<4; i++){
   test.push_back(num[i]+ '0');
}

number = stoi(test);

int sum = number+k;
int sum2 = sum;
int count=0;

while(sum!=0){
	sum/=10;
	count++;
}
cout<<number<<endl;
cout<<count<<endl;
for(i=0; i<count; i++){
    arr.push_back(sum2%10);
    sum2/=10;
}

for(i=0; i<count; i++){
	cout<<arr[i]<<" ";
}

}
