// Function: FID_conflict:_wsplitpath_s
// Addr: 1402bfec4
// Size: 99 bytes


/* Library Function - Multiple Matches With Different Base Names
    _splitpath_s
    _wsplitpath_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__wsplitpath_s
          (wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSize,wchar_t *_Dir,size_t _DirSize,
          wchar_t *_Filename,size_t _FilenameSize,wchar_t *_Ext,size_t _ExtSize)

{
  errno_t eVar1;
  wchar_t *local_48;
  size_t local_40;
  wchar_t *local_38;
  size_t local_30;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  size_t local_10;
  
  local_30 = _DirSize;
  local_28 = _Filename;
  local_20 = _FilenameSize;
  local_18 = _Ext;
  local_10 = _ExtSize;
  local_48 = _Drive;
  local_40 = _DriveSize;
  local_38 = _Dir;
  eVar1 = FUN_1402bfc44(_FullPath,&local_48,0,0);
  return eVar1;
}

