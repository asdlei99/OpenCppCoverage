// OpenCppCoverage is an open source code coverage for C++.
// Copyright (C) 2019 OpenCppCoverage
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include <optional>

namespace Plugin
{
	class CoverageData;

	class IExportPlugin
	{
	  public:
		virtual ~IExportPlugin() = default;
		virtual void Export(const Plugin::CoverageData&,
		                    const std::optional<std::wstring>& argument) = 0;
		virtual void CheckArgument(const std::optional<std::wstring>&) = 0;
		virtual std::wstring GetHelpDescription() = 0;
	};
}