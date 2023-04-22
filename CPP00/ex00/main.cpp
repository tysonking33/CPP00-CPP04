#include <string>
#include <iostream>

std::string amplify(char *src);

int main(int argc, char **argv)
{
	std::string final_str;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		for (int i = 1; i < argc; i++){
			final_str = amplify(argv[i]);
			std::cout << final_str << " ";
		}
	}
	std::cout << "\n";
	return 0;
}
