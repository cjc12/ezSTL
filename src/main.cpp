/*********************************************************************************************/
// main function, testing other components

#include "../include/test.h"
using namespace ezSTL;

int main()
{
	// add annotations to prevent running the testing codes of corresponding modules
	test::test_vector();
	test::test_list();
	test::test_stack();
	test::test_queue();
	test::test_priority_queue();
	test::test_rbtree();
	test::test_set();
	test::test_map();
	test::test_unordered_map();
	test::test_smart_pointers();
	test::test_set_map_efficiency();
	test::test_algorithm();
	test::test_algorithm_efficiency();
	return 0;
}
