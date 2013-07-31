#ifndef  _CALCULATE_H
#define  _CALCULATE_H
#include <map>


class Calculate
{
public:
	typedef struct
	{
		unsigned int golden_count;
		unsigned int silver_count;
	} CoinsCount_t;
	typedef std::map<unsigned int ,CoinsCount_t> CoinsAreaMap_t;
	enum CoinsType
	{
		golden=0,
		silver=1
	};
	
public:
	Calculate(void);
	~Calculate(void);
	void  __Gen(int *out);
	bool AddBet(unsigned int golden_coins,unsigned int silver_coins,unsigned int area);

	std::vector<int> getResult();
 	
private:
	
	CoinsAreaMap_t m_coins_area_map;
	unsigned int m_all_golden_count;
	unsigned int m_all_sliver_count;


     
};
#endif