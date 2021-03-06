// (C) 2016, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _DIARY_HPP_
#define _DIARY_HPP_

/*****************************************************************************/

#include "date.hpp"
#include "time.hpp"

#include <string>
#include <map>

/*****************************************************************************/

class Diary
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	typedef std::map< Time, std::string > DayEntries;

	typedef std::map< Date, DayEntries > Entries;

	typedef Entries::const_iterator Iterator;

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	// TODO: public members

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	// TODO: private members

/*-----------------------------------------------------------------*/

};

/*****************************************************************************/

std::ostream & operator << ( std::ostream & _o, const Diary & _diary );

/*****************************************************************************/

#endif // _DIARY_HPP_
