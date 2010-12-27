/********************************************************************
  Copyright: 2010 Alexander Sokoloff <sokoloff.a@gmail.ru>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License.
  version 2 as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*********************************************************************/

#ifndef RAZOR_MAINMENU_H
#define RAZOR_MAINMENU_H

#include "defs.h"
#include "razorplugin.h"
#include <QPushButton>

class RazorMainMenu : public RazorPlugin
{
    Q_OBJECT
public:
    RazorMainMenu(RazorBar * panel, QWidget * parent, const QString & name=0);
    ~RazorMainMenu();

    int widthForHeight(int h) { return mButton.sizeHint().width(); }
    int heightForWidth(int w) { return w; }
    RazorPlugin::RazorPluginSizing sizePriority() { return RazorPlugin::Static; }

signals:

protected:
    QPushButton mButton;

private slots:
    void showMenu();
};

extern "C" RazorPlugin* init(RazorBar* panel, QWidget* parent, const QString & name);

#endif