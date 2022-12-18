/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS Customization
 ******************************************************************************
 *   Copyright (c) 2022 NextGIS, <info@nextgis.com>
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/

#include "ngauthmanager.h"
#include <QRandomGenerator>

static const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

static QString generatePassword()
{
    QString pass;
    QRandomGenerator *randomGenerator = QRandomGenerator::global();

    for (size_t i = 0; i < 10; ++i)
        pass.append(alphanum[randomGenerator->bounded(static_cast<int>(sizeof(alphanum) - 1))]);

    return pass;
}

void NGAuthManager::initInstance()
{
  QgsAuthManager::instance<NGAuthManager>();
}

bool NGAuthManager::verifyMasterPassword(const QString &compare)
{
    return true;
}

bool NGAuthManager::passwordHelperEnabled() const
{
    return true;
}

bool NGAuthManager::masterPasswordInput()
{
  if ( isDisabled() )
    return false;

  QString pass;
  bool ok = false;

  pass = passwordHelperRead();
  if (!pass.isEmpty() && (mPasswordHelperErrorCode == QKeychain::NoError))
  {
      ok = true;
      emit passwordHelperMessageOut(tr("Master password has been successfully read from your %1").arg(AUTH_PASSWORD_HELPER_DISPLAY_NAME), authManTag(), INFO);
  }
  else if (pass.isEmpty())
  {
      pass = generatePassword();
      ok = passwordHelperWrite(pass);
  }

  if ( ok )
  {
    mMasterPass = pass;
    return true;
  }
  else
  {
    emit passwordHelperMessageOut( tr( "Master password stored in your %1 is not valid" ).arg( AUTH_PASSWORD_HELPER_DISPLAY_NAME ), authManTag(), WARNING );
  }

  return false;
}
