// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, xsubyte dev's
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// xsubyte is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with xsubyte.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include <system_error>

#include "IWriteBatch.h"
#include "IReadBatch.h"

namespace CryptoNote {

class IDataBase {
public:
  virtual ~IDataBase() {
  }

  virtual std::error_code write(IWriteBatch& batch) = 0;
  virtual std::error_code writeSync(IWriteBatch& batch) = 0;

  virtual std::error_code read(IReadBatch& batch) = 0;
};
}