################################################################################
# Project:  external projects
# Purpose:  CMake build scripts
# Author:   Lisovenko Alexnader, alexander.lisovenko@gmail.com
################################################################################
# Copyright (C) 2016-2019, NextGIS <info@nextgis.com>
# Copyright (C) 2016 Lisovenko Alexnader
# Copyright (C) 2018-2019 Dmitry Baryshnikov
#
# This script is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This script is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this script.  If not, see <http://www.gnu.org/licenses/>.
################################################################################

set(repo nextgis-borsch/lib_spatialindex)
set(repo_type github)
# set(repo_branch master) # No need to set as master is default value

# Set for binary artifacts
set(repo_bin lib_spatialindex)
set(repo_bin_type repka)
set(repo_bin_url https://rm.nextgis.com)
set(repo_bin_id 2) # additional parameter. Not needed for github
