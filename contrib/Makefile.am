AUTOMAKE_OPTIONS = subdir-objects

###########################################################
# add contributed libraries that are conditionally compiled
SUBDIRS    =
opt_libs   =
dbg_libs   =
devel_libs =
prof_libs  =
oprof_libs =

# Doesn't seem to be used directly in this Makefile; add
# it in case someone includes this Makefile?
AM_LDFLAGS   = $(libmesh_LDFLAGS)

if LIBMESH_INSTALL_INTERNAL_BOOST
   SUBDIRS += boost/include
endif

if LIBMESH_INSTALL_INTERNAL_EIGEN
   SUBDIRS += eigen/eigen
endif

if LIBMESH_ENABLE_GMV
  SUBDIRS    += gmv
  opt_libs   += gmv/libopt.a
  dbg_libs   += gmv/libdbg.a
  devel_libs += gmv/libdevel.a
  prof_libs  += gmv/libprof.a
  oprof_libs += gmv/liboprof.a
endif

if LIBMESH_ENABLE_GZSTREAMS
  SUBDIRS    += gzstream
  opt_libs   += gzstream/libopt.a
  dbg_libs   += gzstream/libdbg.a
  devel_libs += gzstream/libdevel.a
  prof_libs  += gzstream/libprof.a
  oprof_libs += gzstream/liboprof.a
endif

if LIBMESH_ENABLE_NETCDF
# NetCDF version 3, build minimal subset
if LIBMESH_ENABLE_NETCDF_V3
  SUBDIRS    += netcdf/v3
  opt_libs   += netcdf/v3/libopt.a
  dbg_libs   += netcdf/v3/libdbg.a
  devel_libs += netcdf/v3/libdevel.a
  prof_libs  += netcdf/v3/libprof.a
  oprof_libs += netcdf/v3/liboprof.a
endif

# NetCDF version 4, use their autotools package
if LIBMESH_ENABLE_NETCDF_V4
  SUBDIRS    += netcdf/v4
  opt_libs   += netcdf/v4/liblib/libnetcdf.a
  dbg_libs   += netcdf/v4/liblib/libnetcdf.a
  devel_libs += netcdf/v4/liblib/libnetcdf.a
  prof_libs  += netcdf/v4/liblib/libnetcdf.a
  oprof_libs += netcdf/v4/liblib/libnetcdf.a
endif
endif


if LIBMESH_ENABLE_EXODUS
if LIBMESH_ENABLE_EXODUS_V509
  SUBDIRS    += exodusii/v5.09
  opt_libs   += exodusii/v5.09/libopt.a
  dbg_libs   += exodusii/v5.09/libdbg.a
  devel_libs += exodusii/v5.09/libdevel.a
  prof_libs  += exodusii/v5.09/libprof.a
  oprof_libs += exodusii/v5.09/liboprof.a
endif

if LIBMESH_ENABLE_EXODUS_V522
  SUBDIRS    += exodusii/v5.22/exodus
  opt_libs   += exodusii/v5.22/exodus/libopt.a
  dbg_libs   += exodusii/v5.22/exodus/libdbg.a
  devel_libs += exodusii/v5.22/exodus/libdevel.a
  prof_libs  += exodusii/v5.22/exodus/libprof.a
  oprof_libs += exodusii/v5.22/exodus/liboprof.a
endif
endif


if LIBMESH_ENABLE_NEMESIS
if LIBMESH_ENABLE_NEMESIS_V309
  SUBDIRS    += nemesis/v3.09
  opt_libs   += nemesis/v3.09/libopt.a
  dbg_libs   += nemesis/v3.09/libdbg.a
  devel_libs += nemesis/v3.09/libdevel.a
  prof_libs  += nemesis/v3.09/libprof.a
  oprof_libs += nemesis/v3.09/liboprof.a
endif

if LIBMESH_ENABLE_NEMESIS_V522
  SUBDIRS    += nemesis/v5.22/nemesis
  opt_libs   += nemesis/v5.22/nemesis/libopt.a
  dbg_libs   += nemesis/v5.22/nemesis/libdbg.a
  devel_libs += nemesis/v5.22/nemesis/libdevel.a
  prof_libs  += nemesis/v5.22/nemesis/libprof.a
  oprof_libs += nemesis/v5.22/nemesis/liboprof.a
endif
endif


if LIBMESH_ENABLE_TECIO
  SUBDIRS    += tecplot/tecio
  opt_libs   += tecplot/tecio/libopt.a
  dbg_libs   += tecplot/tecio/libdbg.a
  devel_libs += tecplot/tecio/libdevel.a
  prof_libs  += tecplot/tecio/libprof.a
  oprof_libs += tecplot/tecio/liboprof.a
endif

# I don't think this actually copies any symbols into
# libcontrib.a because we aren't using them here...
if LIBMESH_ENABLE_TECPLOT
  SUBDIRS    += tecplot/binary
  opt_libs   += tecplot/binary/libtecio.a
  dbg_libs   += tecplot/binary/libtecio.a
  devel_libs += tecplot/binary/libtecio.a
  prof_libs  += tecplot/binary/libtecio.a
  oprof_libs += tecplot/binary/libtecio.a
endif

if LIBMESH_ENABLE_TRIANGLE
  SUBDIRS    += triangle
  opt_libs   += triangle/libopt.a
  dbg_libs   += triangle/libdbg.a
  devel_libs += triangle/libdevel.a
  prof_libs  += triangle/libprof.a
  oprof_libs += triangle/liboprof.a
endif

if LIBMESH_ENABLE_TETGEN
  SUBDIRS    += tetgen
  opt_libs   += tetgen/libopt.a
  dbg_libs   += tetgen/libdbg.a
  devel_libs += tetgen/libdevel.a
  prof_libs  += tetgen/libprof.a
  oprof_libs += tetgen/liboprof.a
endif

if LIBMESH_ENABLE_LIBHILBERT
  SUBDIRS    += libHilbert
  opt_libs   += libHilbert/libopt.a
  dbg_libs   += libHilbert/libdbg.a
  devel_libs += libHilbert/libdevel.a
  prof_libs  += libHilbert/libprof.a
  oprof_libs += libHilbert/liboprof.a
endif

if LIBMESH_ENABLE_LASPACK
  SUBDIRS    += laspack
  opt_libs   += laspack/libopt.a
  dbg_libs   += laspack/libdbg.a
  devel_libs += laspack/libdevel.a
  prof_libs  += laspack/libprof.a
  oprof_libs += laspack/liboprof.a
endif

if LIBMESH_ENABLE_METIS
if BUILD_METIS
  SUBDIRS    += metis
  opt_libs   += metis/libopt.a
  dbg_libs   += metis/libdbg.a
  devel_libs += metis/libdevel.a
  prof_libs  += metis/libprof.a
  oprof_libs += metis/liboprof.a
endif
endif

if LIBMESH_ENABLE_PARMETIS
  SUBDIRS    += parmetis
  opt_libs   += parmetis/libopt.a
  dbg_libs   += parmetis/libdbg.a
  devel_libs += parmetis/libdevel.a
  prof_libs  += parmetis/libprof.a
  oprof_libs += parmetis/liboprof.a
endif

if LIBMESH_ENABLE_SFC
  SUBDIRS    += sfcurves
  opt_libs   += sfcurves/libopt.a
  dbg_libs   += sfcurves/libdbg.a
  devel_libs += sfcurves/libdevel.a
  prof_libs  += sfcurves/libprof.a
  oprof_libs += sfcurves/liboprof.a
endif

if LIBMESH_ENABLE_FPARSER
  # ATM always compile fparser with optimized flags,
  # and reuse in all methods
  SUBDIRS    += fparser
  opt_libs   += fparser/libfparser.a
  dbg_libs   += fparser/libfparser.a
  devel_libs += fparser/libfparser.a
  prof_libs  += fparser/libfparser.a
  oprof_libs += fparser/libfparser.a
endif

if LIBMESH_ENABLE_NANOFLANN
  SUBDIRS += nanoflann
  # header-only library - no library dependencies
endif



######################################################################
#
# Building the flavors
#
noinst_LIBRARIES =

if LIBMESH_OPT_MODE
  noinst_LIBRARIES        += libcontrib_opt.a
  libcontrib_opt_a_SOURCES  = cppsource.C
  libcontrib_opt_a_CPPFLAGS = $(CPPFLAGS_OPT) $(AM_CPPFLAGS)
  libcontrib_opt_a_CXXFLAGS = $(CXXFLAGS_OPT)
  libcontrib_opt_a_CFLAGS   = $(CFLAGS_OPT)
  libcontrib_opt_a_LIBADD   = $(opt_libs)
endif

if LIBMESH_DBG_MODE
  noinst_LIBRARIES        += libcontrib_dbg.a
  libcontrib_dbg_a_SOURCES  = cppsource.C
  libcontrib_dbg_a_CPPFLAGS = $(CPPFLAGS_DBG) $(AM_CPPFLAGS)
  libcontrib_dbg_a_CXXFLAGS = $(CXXFLAGS_DBG)
  libcontrib_dbg_a_CFLAGS   = $(CFLAGS_DBG)
  libcontrib_dbg_a_LIBADD   = $(dbg_libs)
endif

if LIBMESH_DEVEL_MODE
  noinst_LIBRARIES          += libcontrib_devel.a
  libcontrib_devel_a_SOURCES  = cppsource.C
  libcontrib_devel_a_CPPFLAGS = $(CPPFLAGS_DEVEL) $(AM_CPPFLAGS)
  libcontrib_devel_a_CXXFLAGS = $(CXXFLAGS_DEVEL)
  libcontrib_devel_a_CFLAGS   = $(CFLAGS_DEVEL)
  libcontrib_devel_a_LIBADD   = $(devel_libs)
endif

if LIBMESH_PROF_MODE
  noinst_LIBRARIES         += libcontrib_prof.a
  libcontrib_prof_a_SOURCES  = cppsource.C
  libcontrib_prof_a_CPPFLAGS = $(CPPFLAGS_PROF) $(AM_CPPFLAGS)
  libcontrib_prof_a_CXXFLAGS = $(CXXFLAGS_PROF)
  libcontrib_prof_a_CFLAGS   = $(CFLAGS_PROF)
  libcontrib_prof_a_LIBADD   = $(prof_libs)
endif

if LIBMESH_OPROF_MODE
  noinst_LIBRARIES          += libcontrib_oprof.a
  libcontrib_oprof_a_SOURCES  = cppsource.C
  libcontrib_oprof_a_CPPFLAGS = $(CPPFLAGS_OPROF) $(AM_CPPFLAGS)
  libcontrib_oprof_a_CXXFLAGS = $(CXXFLAGS_OPROF)
  libcontrib_oprof_a_CFLAGS   = $(CFLAGS_OPROF)
  libcontrib_oprof_a_LIBADD   = $(oprof_libs)
endif
