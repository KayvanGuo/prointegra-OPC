/*
 *  Prointegra OPC
 *
 *  Copyright 2016 by it's authors. 
 *
 *  Some rights reserved. See COPYING, AUTHORS.
 *  This file may be used under the terms of the GNU General Public
 *  License version 3.0 as published by the Free Software Foundation
 *  and appearing in the file COPYING included in the packaging of
 *  this file.
 *
 *  This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 *  WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
/*!
@File piDatabase.h
*/

#ifndef _PIDATABASE_
#define _PIDATABASE_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <time.h>

#include "qtdatabase.h"
#include "config.h"


/*! Database interface class, derived from pvbrowser addons examples */

class DBInterface : public qtDatabase
{
 public:
 DBInterface() : qtDatabase(){
  };
  int setup(databaseParameters parameters){conParameters = parameters; return 0;};
  int start();
  int tCheckAndCreate();
  int checkAndCreate();
  int getJuliano(int silo);
  
 private:
  databaseParameters conParameters;
};

class DBTable
{
 public:
  DBTable();
  ~DBTable();

};


#endif