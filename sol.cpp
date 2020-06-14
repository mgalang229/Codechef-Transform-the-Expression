#include <bits/stdc++.h>

using namespace std;

char s[400];
int top = 0;

void pop() {
	if(top == -1) {
		return;
	}
	else {
		cout << s[top];
		top = top - 1;
	}
}
void push(char x) {
	if(top == 400) {
		return;
	}
	else {
		s[++top] = x;
	}
}
void decode() {
	char a[400];
	cin >> a;
	int n = strlen(a);
	for(int i = 0; i < n; ++i) {
		if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' || a[i] == '^') {
			push(a[i]);
		}
		else if(a[i] == ')') {
			pop();
		}
		else if(a[i] == '(') {
			continue;
		}
		else {
			cout << a[i];
		}
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
