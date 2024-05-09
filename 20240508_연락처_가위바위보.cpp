#include <iostream>
#include <random>
using namespace std;

int main()
{
	cout << "<<원하는 기능을 선택하시오>>" << endl;
	int _mode = 0;

	cout << "메타플밍 7기 학생 정보	[1]" << endl;
	cout << "가위 바위 보 게임	[2]" << endl;
	cout << "입력 : ";
	cin >> _mode;

	if (_mode == 1 || _mode == 2)
	{
		if (_mode == 1)
		{
			/*
			1. while문과 switch 문을 사용해서
			우린반의 전체를 조사하여
			어떠한 숫자를 입력하면
			이름 | 나이 | 전화번호 | 한줄평
			무한으로 검색할 수 있는
			프로그램을 만들어 오세용
			*/
			int _studentNum = 0;

			while (true)
			{
				cout << endl <<"검색하고자 하는 학생의 번호를 입력해주세요" << endl << endl;
				cout << "강유현 [1]	곽정민 [2]	김동원 [3]	김수주 [4]	김수진 [5]" << endl;
				cout << "김지하 [6]	김지훈 [7]	김혜린 [8]	박재현 [9]	박지훈 [10]" << endl;
				cout << "백승주 [11]	성지훈 [12]	신성진 [13]	이민홍 [14]	이준범 [15]" << endl;
				cout << "이준형 [16]	장시진 [17]	전유성 [18]	전홍현 [19]	정동균 [20]" << endl;
				cout << "정해창 [21]	조영준 [22]	조현준 [23]	진성현 [24]	최영훈 [25]" << endl;
				cout << "한유진 [26]	홍성견 [27]" << endl;
				cin >> _studentNum;

				switch (_studentNum)
				{
				case 1:
					cout << "이름 : 강XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 7기 제일 막내" << endl;
					break;
				case 2:
					cout << "이름 : 곽XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 머리가 푸들같이 귀여우심" << endl;
					break;
				case 3:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 교수님이랑 이름이 같으신 분" << endl;
					break;
				case 4:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 바로 뒷자리 " << endl;
					break;
				case 5:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 경력 2년차 고수" << endl;
					break;
				case 6:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 에너지 드링크 애호가" << endl;
					break;
				case 7:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 집에서 자전거 10분 거리" << endl;
					break;
				case 8:
					cout << "이름 : 김XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 경력 3년차 고수" << endl;
					break;
				case 9:
					cout << "이름 : 박XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 운동에 공부에 열심히 하는중" << endl;
					break;
				case 10:
					cout << "이름 : 박XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 나랑 이름이 같으신 분" << endl;
					break;
				case 11:
					cout << "이름 : 백XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 에어컨 직빵이라 추우실듯.." << endl;
					break;
				case 12:
					cout << "이름 : 성XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 나랑 이름이 같으신 분" << endl;
					break;
				case 13:
					cout << "이름 : 신XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 첫날 드신 울면? 기스면?이 너무 맛있어보임. 중국집 어디냐고 물어볼까 말까 4일째 고민중" << endl;
					break;
				case 14:
					cout << "이름 : 이XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 점심을 안먹는 친구" << endl;
					break;
				case 15:
					cout << "이름 : 이XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 에어컨 직빵이라 추우실듯.." << endl;
					break;
				case 16:
					cout << "이름 : 이XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 묵묵히 열심히 하시는분" << endl;
					break;
				case 17:
					cout << "이름 : 장XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 메타플밍 7기 임시 조명감독" << endl;
					break;
				case 18:
					cout << "이름 : 전XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 뒷자리 뉴페이스" << endl;
					break;
				case 19:
					cout << "이름 : 전XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 아직 한번도 대화해보지 못했음" << endl;
					break;
				case 20:
					cout << "이름 : 정XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 처음으로 도와드린 같은 라인이 아닌 분" << endl;
					break;
				case 21:
					cout << "이름 : 정XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 적극적으로 대답하시는 분" << endl;
					break;
				case 22:
					cout << "이름 : 조XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 모루겠음.. " << endl;
					break;
				case 23:
					cout << "이름 : 조XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 아직 한번도 대화해보지 못했음 " << endl;
					break;
				case 24:
					cout << "이름 : 진XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 박재현이랑 아는 사이 << 친해지고 싶음" << endl;
					break;
				case 25:
					cout << "이름 : 최XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 뒷자리 뉴페이스" << endl;
					break;
				case 26:
					cout << "이름 : 한XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 롤 좋아하시는 최고 어른" << endl;
					break;
				case 27:
					cout << "이름 : 홍XX | 나이 : nn | 전화번호 : 010-XXXX-XXXX | 한줄평 : 메타플밍 7기 최고 장발" << endl;
					break;
				default:
					cout << "없는 학생입니다" << endl;
					break;
				}
			}
		}
		else
		{
			/*
			2. 가위바위보게임 만들기
			컴퓨터는 랜덤한 가위바위보를 냅니다.
			가위바위보를 해서
			비기면 다시 가위바위보를
			이기면 다시할건지 물어보고
			지면 무조건 다시하도록 게임을 만든다.
			*/

			random_device rd;
			mt19937 mt(rd());

			int _computer = 0;
			int _player = 0;
			bool _isWin = false;
			int _again = 0;
		
			uniform_int_distribution<int> dist(1, 3);

			while (true)
			{
				_computer = dist(mt);

				cout << endl << "안내면 진거 가위 바위..." << endl;
				cout << "가위 !	[1]" << endl;
				cout << "바위 !	[2]" << endl;
				cout << "보 !	[3]" << endl;
				cout << "입력 : ";
				
				cin >> _player;

				cout << " " << endl;

				if (_player == 1 || _player == 2 || _player == 3)
				{
					switch (_computer)
					{
					case (1):
						if(_player == 1 || _player == 3)
						{
							if (_player == 1)
							{
								cout << "[비겼습니다]" << endl;
							}
							else
							{
								cout << "[졌습니다]" << endl;
							}
						}
						else
						{
							cout << "[이겼습니다]" << endl;
							_isWin = true;
						}
						break;
					case (2):
						if (_player == 2 || _player == 1)
						{
							if (_player == 2)
							{
								cout << "[비겼습니다]" << endl;
							}
							else
							{
								cout << "[졌습니다]" << endl;
							}
						}
						else
						{
							cout << "[이겼습니다]" << endl;
							_isWin = true;
						}
						break;
					case (3):
						if (_player == 3 || _player == 2)
						{
							if (_player == 3)
							{
								cout << "[비겼습니다]" << endl;
							}
							else
							{
								cout << "[졌습니다]" << endl;
							}
						}
						else
						{
							cout << "[이겼습니다]" << endl;
							_isWin = true;
						}
						break;
					}

				}
				else
				{
					cout << "잘못된 입력입니다!" << endl;
				}

				if (_isWin)
				{
					cout << endl << "다시 하시겠습니까? 1, 2를 제외한 다른 수를 입력하면 다시 합니다." << endl;
					cout << "네	[1]" << endl;
					cout << "아니오	[2]" << endl;
					cout << "입력 : ";

					cin >> _again;

					if (_again == 2)
					{
						break;
					}
					else
					{
						_isWin = false;
					}
				}
			}
		}
	}
	else
	{
		cout << "올바르지 않은 입력입니다" << endl;
	}
}