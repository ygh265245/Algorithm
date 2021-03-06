#include <bits/stdc++.h>
using namespace std; 

char parent[15];
int rank[15];

void Make_Set2(char x){
	parent[x]=x;
	rank[x]=0;
}

char Find_Set(char x){
	if (x==parent[x]) return x;
	else{
		return parent[x]=Find_Set(parent[x]);
	}
}

void Union2(char x, char y){
	char xparent=Find_Set(x);
	char yparent=Find_Set(y);
	

	
	if (rank[xparent] > rank[yparent])  
			parent[yparent]=xparent;
			
	else{
		parent[xparent]=yparent;
		if (rank[xparent]==rank[yparent])
			rank[yparent]++;
	}
	

	
}


int main(int argc, char** argv[]) {
	
	 
	Make_Set2('a');
	Make_Set2('b');
	Make_Set2('c');
	Make_Set2('d');
	Make_Set2('e');
	Make_Set2('f');
	Make_Set2('g');
	Make_Set2('h');
	Make_Set2('k');
	Make_Set2('m'); //각 노드 만들기  
	
	Union2('a', 'b');
	Union2('h', 'c');
	Union2('b', 'c');//그림 1트리 
	
	cout<<"그림 트리1 결과:\n";
	cout << " a의 부모/랭크: "<<parent['a']<<"/"<<rank['a']<<'\n';
	cout <<" b의 부모/랭크: "<<parent['b']<<"/"<<rank['b']<<'\n';
	cout <<" c의 부모/랭크: "<<parent['c']<<"/"<<rank['c']<<'\n';
	cout<<" h의 부모/랭크: "<<parent['h']<<"/"<<rank['h']<<'\n';
	cout<<"\n\n";
	
	 
	Union2('d', 'e');
	Union2('k', 'f');
	Union2('m', 'f');
	Union2('f', 'e');//그림 2 트리

	cout<<"그림 트리2 결과:\n"; 
	cout<<" d의 부모/랭크: "<<parent['d']<<"/"<<rank['d']<<'\n';
	cout<<" e의 부모/랭크: "<<parent['e']<<"/"<<rank['e']<<'\n';
	cout<<" f의 부모/랭크: "<<parent['f']<<"/"<<rank['f']<<'\n';
	cout<<" k의 부모/랭크: "<<parent['k']<<"/"<<rank['k']<<'\n';
	cout<<" m의 부모/랭크: "<<parent['m']<<"/"<<rank['m']<<'\n';
	cout<<"\n\n";

	Union2('c', 'e'); //두 개 합병  
	cout<<"Union(c, e) 결과\n";
	cout << " a의 부모/랭크: "<<parent['a']<<"/"<<rank['a']<<'\n';
	cout <<" b의 부모/랭크: "<<parent['b']<<"/"<<rank['b']<<'\n';
	cout <<" c의 부모/랭크: "<<parent['c']<<"/"<<rank['c']<<'\n';
	cout<<" h의 부모/랭크: "<<parent['h']<<"/"<<rank['h']<<'\n'; 
	cout<<" d의 부모/랭크: "<<parent['d']<<"/"<<rank['d']<<'\n';
	cout<<" e의 부모/랭크: "<<parent['e']<<"/"<<rank['e']<<'\n';
	cout<<" f의 부모/랭크: "<<parent['f']<<"/"<<rank['f']<<'\n';
	cout<<" k의 부모/랭크: "<<parent['k']<<"/"<<rank['k']<<'\n';
	cout<<" m의 부모/랭크: "<<parent['m']<<"/"<<rank['m']<<'\n';

	return 0;
}
