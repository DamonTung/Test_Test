#include "base.h"


base::base(int i):m_j(i),m_i(m_j)
{
}
base::base():m_j(0),m_i(m_j){};

base::~base(void)
{
}
int base::get_i(){
	return m_i;
}
int base::get_j(){
	return m_j;
}
