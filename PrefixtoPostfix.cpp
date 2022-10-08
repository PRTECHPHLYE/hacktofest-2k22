#include<iostream>
#include<string>
#include<stack>

bool isOperator(char c)
{
	if ((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '^'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isOperand(char c)
{

	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
	{
		return true;
	}
	else
	{
		return false;
	}

}
std::string PrefixtoPostfix(std::string prefix)
{

	std::stack <std::string> s;
	std::string postfix;
	for (int i = prefix.length() - 1; i >= 0; i--)
	{
		if (isOperand(prefix[i]))
		{
			std::string op(1, prefix[i]);
			s.push(op);
		}
		else if (isOperator(prefix[i]))
		{
			std::string s1, s2;
			s1 = s.top();
			s.pop();
			s2 = s.top();
			s.pop();
			postfix = s1 + s2 + prefix[i];
			s.push(postfix);
		}

	}

	return postfix;
}

int main()
{

	std::string postfix, prefix;
	std::cout << "Enter prefix : " << std::endl;
	getline(std::cin, prefix);
	postfix = PrefixtoPostfix(prefix);
	std::cout << std::endl;
	std::cout << postfix;



	system("pause");
	return 0;
}