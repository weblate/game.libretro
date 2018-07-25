/*
 *      Copyright (C) 2018 Team Kodi
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this Program; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "ControllerLayout.h"

#include "kodi_game_types.h"

//#include <algorithm>

using namespace LIBRETRO;

CControllerLayout::CControllerLayout(const game_controller_layout &controller) :
  m_controllerId(controller.controller_id != nullptr ? controller.controller_id : ""),
  m_bProvidesInput(controller.provides_input)
{
  if (controller.digital_buttons != nullptr)
  {
    for (unsigned int i = 0; i < controller.digital_button_count; i++)
      m_digitalButtons.emplace_back(controller.digital_buttons[i]);
  }


  if (controller.analog_buttons != nullptr)
  {
    for (unsigned int i = 0; i < controller.analog_button_count; i++)
      m_analogButtons.emplace_back(controller.analog_buttons[i]);
  }

  //! @todo
}
