#include <gtest/gtest.h>
/*
Fatal assertion Nonfatal assertion  Verifies
ASSERT_EQ(val1,val2);   EXPECT_EQ(val1,val2);   val1 == val2
ASSERT_NE(val1,val2);   EXPECT_NE(val1,val2);   val1 != val2
ASSERT_LT(val1,val2);   EXPECT_LT(val1,val2);   val1 < val2
ASSERT_LE(val1,val2);   EXPECT_LE(val1,val2);   val1 <= val2
ASSERT_GT(val1,val2);   EXPECT_GT(val1,val2);   val1 > val2
ASSERT_GE(val1,val2);   EXPECT_GE(val1,val2);   val1 >= val2
*/  
int main(int argc, char **argv)
{	
	testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
