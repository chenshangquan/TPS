@echo off
echo tpadlib build begin
rem 创建文件夹

call "%VS100COMNTOOLS%\vsvars32.bat"

echo build clean debug vs2010
@devenv tpadlib.vcxproj /ReBuild "Debug" /Out ..\..\..\10-common\version\CompileInfo\tpadlib_d_2010.txt

echo build clean release vs2010
@devenv tpadlib.vcxproj /ReBuild "Release" /Out ..\..\..\10-common\version\CompileInfo\tpadlib_r_2010.txt

rem 还原现场
call "%VS60COMNTOOLS%\vcvars32.bat"

echo tpadlib build end