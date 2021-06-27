#include <iostream>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;


int main_ftp(int argc, char* argv[]);
int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "Usage: tut1 path\n";
		return 1;
	}
	main_ftp(argc, argv);
	std::cout << argv[1] << " " << file_size(argv[1]) << '\n';
	return 0;
}