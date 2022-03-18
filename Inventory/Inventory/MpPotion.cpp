#include "MpPotion.h"
#include "Statistics.h"

MpPotion::MpPotion()
{
	price = 120;
	name = "Mp����";

}

void MpPotion::Use()
{
	if (Statistics::GetInstance()->GetMp() < 230)
	{
		Statistics::GetInstance()->SetMp(Statistics::GetInstance()->GetMp() + 30);
	}
}

