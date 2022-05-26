int main()
{
	std::string compiler;

#ifdef __clang__
	compiler = "Clang";
#else
	compiler = "MSVC";
#endif

	std::cout << "Hello from " << compiler << "!" << std::endl;
	return 0;
}