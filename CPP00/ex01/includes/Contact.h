/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:07:10 by tytang            #+#    #+#             */
/*   Updated: 2023/03/15 12:12:00 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact{
	public:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		int number;
		std::string secret;
		std::string truncFN;
		std::string truncLN;
		std::string truncNN;
		std::string truncSec;
		Contact();
		Contact(const Contact& C);
		Contact &operator=(const Contact &src);
		~Contact();
		void printInPb(int index);
		void printAll();
		void truncate(int type);
};

#endif
