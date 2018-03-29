#include "gtest/gtest.h"

#include "EasyTesting.hpp"
                                                                                
class T_EasyTesting :                                                                                                     
    public testing::Test                                                 
{                                                                                                                 
protected:
    EasyTesting* _utest;
    virtual void SetUp(){
        this->_utest = new EasyTesting(2);
    }
    virtual void TearDown(){
        delete this->_utest;
    }
                                                                                                                  
   
};                                                                                                                
TEST_F(T_EasyTesting,T_EasyTesting_CASE_1)
{    
      ASSERT_EQ(3,_utest->ReturnNum());
      EXPECT_EQ(2,_utest->ReturnNum());
}
TEST_F(T_EasyTesting,T_EasyTesting_CASE_2)
{   
    ASSERT_NE(3,_utest->ReturnNum()); 
    EXPECT_EQ(2,_utest->ReturnNum());
}
