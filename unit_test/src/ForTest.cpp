#include "gtest/gtest.h"

#include "ForTesting.hpp"

                                                                                                          
class T_ForTesting :                                                                                                     
    public testing::Test                                                 
{                                                                                                                 
protected:
    ForTesting* _utest;
    virtual void SetUp(){
        this->_utest = new ForTesting();
    }
    virtual void TearDown(){
        delete this->_utest;
    }
                                                                                                                  
   
};                                                                                                                
TEST_F(T_ForTesting,T_ForTesting_CASE_1)
{    
    _utest->SetNum(3);
    EXPECT_EQ(3,_utest->ReturnNum());
}
TEST_F(T_ForTesting,T_ForTesting_CASE_2)
{   
    _utest->SetNum(3);
    EXPECT_EQ(3,_utest->ReturnNum()); 
    EXPECT_EQ(3,_utest->ReturnNum());
}
