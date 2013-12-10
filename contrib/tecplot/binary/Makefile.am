AM_CPPFLAGS = -I$(srcdir)/include
AM_CFLAGS   =
AM_CXXFLAGS =

noinst_LIBRARIES   = libtecio.a
libtecio_a_SOURCES  = stub.C include/TECIO.h include/TECXXX.h
libtecio_a_LIBADD   = -L$(abs_builddir) -ltecio_vendor


BUILT_SOURCES = libtecio_vendor.a
EXTRA_DIST    = lib

libtecio_vendor.a: $(srcdir)/lib/@host@/tecio.a
	$(AM_V_GEN)cp $< $@

libtecio_vendordir   = $(libdir)
libtecio_vendor_DATA = libtecio_vendor.a

DISTCLEANFILES = $(BUILT_SOURCES)
