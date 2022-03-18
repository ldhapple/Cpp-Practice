#include "GameManager.h"
#include "Inventory.h"
#include "ARandomBox.h"
#include "BRandomBox.h"

void GameManager::GameStart()
{
	Inventory *inven = Inventory::GetInstance();
	while (1)
	{
		int num;
		cout << "1. �κ��丮 Ȯ�� 2. A�������� ���� 3. B�������� ����" << endl;
		cin >> num;

		switch (num)
		{
		case 1:
		{
			inven->PrintInventory();
			break;
		}
		case 2:
		{
			ARandomBox *aRandomBox = new ARandomBox();
			aRandomBox->Open();
			delete aRandomBox;
			break;
		}

		case 3:
		{
			BRandomBox *bRandomBox = new BRandomBox();
			bRandomBox->Open();
			delete bRandomBox;
			break;
		}
		}
	}

}