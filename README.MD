1. set VCPKG_ROOT in environment variables.
   
   VCPKG_ROOT should be set to the root of your vcpkg installation. For more information, see [vcpkg environment variables](https://github.com/microsoft/vcpkg/blob/master/docs/users/config-environment.md).

2. should set/change CMAKE_MAKE_PROGRAM in CMakePresets.json 
	
	if use vstudio can remove it.

3. should install need Library width vcpkg 
	
	>>vcpkg install curl:x64-windows-static
	
	
	
	
	
ref:

   if enable binary cache,we don't rebuild in manifest mode  if installed in classic mode with same revision
   
   https://github.com/microsoft/vcpkg/issues/18666#issuecomment-869398592