// Function: isspace
// Addr: 1402d5840
// Size: 166 bytes


/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_1404e45dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1404dc590 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_1402d9894();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,8,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}

