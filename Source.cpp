#include <iostream>
using namespace std;

const enum INDEX {PATH,NUM_REPS_INDEX,STRING_INDEX};
const enum RUN {SUCCESS,ERROR = -1};
int main(int argc , char *argv[])
{	
	constexpr int  MIN_ARGC = 3;
	constexpr int ATOI_FAILED = 0;
	if (argc < MIN_ARGC)
	{
		cout << "Error not enough parameters";
		return ERROR;
	}
	printf("Changes");

	uint32_t reps = atoi(argv[NUM_REPS_INDEX]);
	if (reps == ATOI_FAILED)
	{
		cout << "Atoi failed , given value is ilegal." << endl;
		return ERROR;
	}

	for (int i = 0; i < reps; i++)
	{
		cout << argv[STRING_INDEX] << " ";
	}

	
	return SUCCESS;
}