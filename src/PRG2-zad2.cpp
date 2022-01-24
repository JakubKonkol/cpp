#include <iostream>
#include <vector>

auto filter_palindromes(std::vector<std::string> vec) -> std::vector<std::string>{
	std::vector<std::string> output;
	
	for(int i=0; i<vec.size(); i++)
	{
		if(is_palindrome(vec[i]))
		{
			output.push_back(vec[i]);
		}
	}
	return output;
}
 auto main() ->int{
 	std::vecctor<std::string> vec = {"kajak", "slowo", "otomoto"}, przefiltrowane;
 	przefiltrowane - filter_palindromes(vec);
 	for(int i=0;i<przefiltrowane.size();i++)
 	{
 		std::cout<<przefiltrowane[i]<<" ";
	 }
	return 0;
}