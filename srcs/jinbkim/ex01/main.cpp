// 전화번호부를 만드는 과제
// 간단한 클래스를 만들어보는과제
// 과제에서 주어지지는 않았지만 모든상황에서 eof(ctl+d)일때 종료가 되도록 에러처리를 했음

#include "phoneBook.hpp"

void	print(const char *s)
{
	std::cout<<"\n>>>>>>>>>> "<<s<<" <<<<<<<<<<\n\n";
}

int		main(void)
{
	std::string	cmd;
	phoneBook	pb;

	while (1)
	{
		print("My Awesome PhoneBook");
		std::cout<<"select (ADD, SEARCH, EXIT) : ";
		std::cin>>cmd;  // 명령어 읽기
		if (std::cin.eof())  // eof(ctrl+d)를 만나면
			return (-1);  // 에러표사
		std::cin.ignore();  // 버퍼에 남은 개행 제거
		std::cout<<"-------------------------------------------\n\n";
		if (cmd == "ADD")  // 폰북에 데이터 추가
			pb.addContact();
		else if (cmd == "SEARCH")  // 폰북 검색
			pb.searchContact();
		else if (cmd == "EXIT")  // 프로그램 종료
		{
			print("Good Bye! My Awesome PhoneBook");
			return (0);
		}
		else
			print("wrong input!");
	}
	return (-1);
}