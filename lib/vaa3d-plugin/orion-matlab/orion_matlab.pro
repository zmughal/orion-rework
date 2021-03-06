
TEMPLATE	= lib
CONFIG	+= qt plugin warn_off
#CONFIG	+= x86_64
#VAA3DPATH = external/vaa3d/src/v3d_external
INCLUDEPATH	+= $$VAA3DPATH/v3d_main/basic_c_fun
INCLUDEPATH	+= $$VAA3DPATH/v3d_main/common_lib/include

HEADERS	+= orion_matlab_plugin.hxx
SOURCES	+= orion_matlab_plugin.cxx
SOURCES	+= $$VAA3DPATH/v3d_main/basic_c_fun/v3d_message.cpp
SOURCES	+= $$VAA3DPATH/v3d_main/basic_c_fun/basic_surf_objs.cpp

TARGET	= $$qtLibraryTarget(orion_matlab)
DESTDIR	= $$VAA3DPATH/bin/plugins/bigneuronhackathon/orion_matlab/
