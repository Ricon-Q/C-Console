#include <iostream>
#include <random>
using namespace std;

int main()
{
	/*
	1.피라미드 -> 역 피라미드로 찍어오기
	■□
	*/

	cout << "<<피라미드>>\n\n";

	int _mode= 0;
	int _num = 0;

	cout << "설정된 수(7층)으로 역피라미드 찍기	[1]" << endl;
	cout << "직접 수 입력 받아서 역피라미드 찍기	[2]" << endl;
	cout << "설정된 수(7층)으로 피라미드 찍기	[3]" << endl;
	cout << "직접 수 입력 받아서 피라미드 찍기	[4]" << endl;
	cout << "입력 : ";

	cin >> _mode;
	if (_mode == 1 || _mode == 3)
	{
		_num = 7;
	}
	else if (_mode == 2 || _mode == 4)
	{
		cout << "수를 입력해주세요 : ";
		cin >> _num;
	}
	else
	{
		cout << "입력받은 수가 [1][2][3][4]가 아닙니다." << endl;
	}

	if (_mode == 1 || _mode == 2)
	{
		for (int i = 0; i < _num; i++)
		{
			for (int k = 0; k < i; k++)
			{
				cout << "  ";
			}
			for (int j = 0; j < (_num - i) * 2 - 1; j++)
			{
				cout << "■";
			}
			cout << " " << endl;
		}
	}
	else if(_mode == 3 || _mode == 4)
	{
		for (int i = 0; i < _num; i++)
		{
			for (int k = 0; k < (_num-i) - 1; k++)
			{
				cout << "  ";
			}
			for (int j = 0; j < i * 2 + 1; j++)
			{
				cout << "■";
			}
			cout << " " << endl;
		}
	}

	/*
	2.  Updown
		1. 어떠한 수를 난수로 지정합니다. -> 난수 찾아봐야함....(1-100)
		2. 총 10번의 기회가 있습니다...
		3. 맟추면 스탑 못맞추면 업 다운 
		4. 10번의 기회가 끝나면 정답을 알려주고, 게임을 종료합니다.
	*/

	cout << "\n<<UpDown 게임>>\n\n";

	random_device rd;
	mt19937 mt(rd());

	int _gameMode = 0; // 게임 모드
	
	int _player = 0; // 플레이어 입력값
	int _tryCount = 0; // 플레이어 현재 시도수
	int _maxTry = 10; // 최대 시도수

	int _minRand = 1; // 최소 난수값
	int _maxRand = 100; // 최대 난수값
	cout << "[게임 모드를 설정해주세요]\n\n";
	cout << "[1~100]까지 숫자, 10번의 기회		[1]" << endl;
	cout << "커스텀 설정 (최소, 최대값, 기회 설정)	[2]" << endl;

	cin >> _gameMode;
	if (_gameMode == 1) {}
	else if (_gameMode == 2)
	{
		cout << "최소 난수값 : ";
		cin >> _minRand;
		cout << "최대 난수값 : ";
		cin >> _maxRand;
		cout << "최대 시도수 : ";
		cin >> _maxTry;
	}
	else
	{
		cout << "입력받은 수가 [1][2]가 아닙니다." << endl;
	}
	if (_gameMode == 1 || _gameMode == 2)
	{
		uniform_int_distribution<int> dist(_minRand, _maxRand);

		int _randInt = dist(mt);
		cout << "숫자가 결정되었습니다. 정답을 제시해 주십시오." << endl;

		for (_tryCount = 0; _tryCount < _maxTry; _tryCount++)
		{
			cout << _tryCount + 1 << "번째 시도 : ";
			cin >> _player;

			if (_player == _randInt)
			{
				cout << endl  << "정답입니다!" << endl;
				break;
			}
			else if (_player < _randInt)
			{
				cout << "UP" << endl;
			}
			else
			{
				cout << "DOWN" << endl;
			}
		}
		if (_tryCount == _maxTry)
		{
			cout << "모든 기회를 사용하였습니다. 정답은 [" << _randInt << "]입니다" << endl;
		}
	}
}

