#include <iostream>
using namespace std;

 enum class ARGV_CONTENT_INDEXES {PATH = 0,NUM_REPS_INDEX,STRING_INDEX, ARGC_EXPECTED_VALUE};
 enum class EXIT_RETURNED_VALUE {SUCCESS = 0,ERROR = -1};
int main(uint32_t argc , char *argv[])
{	
	const int ATOI_FAILED = 0;
	const long MAX_UINT32 = LONG_MAX;
	if (argc != static_cast<int>(ARGV_CONTENT_INDEXES::ARGC_EXPECTED_VALUE))
	{
		cout << "Error not enough parameters";
		return static_cast<int>(EXIT_RETURNED_VALUE::ERROR);
	}

	int32_t reps = atoi(argv[static_cast<int>(ARGV_CONTENT_INDEXES::NUM_REPS_INDEX)]);
	if (reps == ATOI_FAILED || reps < 0 ||  reps >= MAX_UINT32)
	{
		cout << "Atoi failed , given value is ilegal." << endl;
		return static_cast<int>(EXIT_RETURNED_VALUE::ERROR);
	}

	for (int i = 0; i < reps; i++)
	{
		cout << argv[static_cast<int>(ARGV_CONTENT_INDEXES::STRING_INDEX)] << " ";
	}

	
	return static_cast<int>(EXIT_RETURNED_VALUE::SUCCESS);
}