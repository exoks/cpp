/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:18:25 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 19:48:25 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "MateriaSource.hpp"

//==== Default MateriaSouce Constructor ========================================
MateriaSource::MateriaSource(void)
{
	db = new AMateria*[4];
	idx = -1;
}

//==== MateriaSouce Constructor ================================================
MateriaSource::MateriaSource(const MateriaSource& mSource)
{
	(*this) = mSource;
}

//==== MateriaSource Destructor ================================================
MateriaSource::~MateriaSource()
{
	int	i;

	i = -1;
	while (++i < 4)
		delete db[i];
	delete db;
}

//==== MateriaSource Copy Assignment Operator ==================================
MateriaSource&	MateriaSource::operator= (const MateriaSource& mSource)
{
	int	i;

	db = new AMateria*[4];
	i = -1;
	while (++i <= idx)
		db[i] = mSource.db[i]->clone();
	return (*this);
}

//==== learnMateria ============================================================
void	MateriaSource::learnMateria(AMateria *m)
{
	if (idx < 3)
		db[++idx] = m; 
}

//==== newMateria ==============================================================
AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int	i;

	i = -1;
	while (++i <= idx)
	{
		if (type == db[i]->getType())
			return (db[i]->clone());
	}
	return (NULL);
}
