/*
		File: plugin.h
    Created on: 14/08/2017
    Author: Felix de las Pozas Alvarez

		This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NOWPLAYINGPLUGIN_H_
#define NOWPLAYINGPLUGIN_H_

// C++
#include <string>

// Winamp SDK
#include <Winamp/GEN.H>

/** \struct Data
 * \brief Data to maintain during whole execution.
 *
 */
struct Data
{
  WNDPROC     lpWndProcOld; /** handle to Winamp main window, the one receiven messages.            */
  std::string pluginPath;   /** path to Winamp plugins directory, where the file will be generated. */

  Data(): lpWndProcOld{nullptr} {};
};

#endif // NOWPLAYINGPLUGIN_H_
