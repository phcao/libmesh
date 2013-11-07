// The libMesh Finite Element Library.
// Copyright (C) 2002-2012 Benjamin S. Kirk, John W. Peterson, Roy H. Stogner

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



// C++ includes
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <string>

// Local includes
#include "libmesh/xdr_io.h"
#include "libmesh/legacy_xdr_io.h"
#include "libmesh/xdr_cxx.h"
#include "libmesh/enum_xdr_mode.h"
#include "libmesh/mesh_base.h"
#include "libmesh/node.h"
#include "libmesh/elem.h"
#include "libmesh/boundary_info.h"
#include "libmesh/parallel.h"
#include "libmesh/mesh_tools.h"
#include "libmesh/partitioner.h"
#include "libmesh/libmesh_logging.h"



namespace
{
  std::string local_file_name (const unsigned int processor_id,
			       const std::string &name)
  {
    std::string basename(name);
    char buf[256];

    if (basename.size() - basename.rfind(".bz2") == 4)
      {
	basename.erase(basename.end()-4, basename.end());
	std::sprintf(buf, "%s.%04d.bz2", basename.c_str(), processor_id);
      }
    else if (basename.size() - basename.rfind(".gz") == 3)
      {
	basename.erase(basename.end()-3, basename.end());
	std::sprintf(buf, "%s.%04d.gz", basename.c_str(), processor_id);
      }
    else
      std::sprintf(buf, "%s.%04d", basename.c_str(), processor_id);

    return std::string(buf);
  }
}


namespace libMesh
{

  void XdrIO::checkpoint (const std::string &basename) const
  {
    Xdr io (local_file_name(this->processor_id(),basename), this->binary() ? ENCODE : WRITE);

    START_LOG("checkpoint()","XdrIO");


    int val=0;
    std::string full_ver = this->version() + " checkpoint";
    io.data (full_ver);
    io.data (val = this->processor_id(), "# MPI rank");
    io.data (val = 0, "# number of stored elements on this rank");
    io.data (val = 0, "# number of stored nodes on this rank");



    STOP_LOG ("checkpoint()","XdrIO");
  }



  void XdrIO::restore (const std::string &)
  {}
}
