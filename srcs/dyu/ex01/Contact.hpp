
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int					index;
	static std::string	fields_name[11];
	std::string			informations[11];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		DarkestSecret
	};
public:
	Contact();
	virtual ~Contact();

	bool	SetFields(int index);
	void	DisplayContactOutline(void);
	void	DisplayIndexedContact(void);
};

#endif