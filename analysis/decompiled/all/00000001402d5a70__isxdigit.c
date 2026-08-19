// Function: isxdigit
// Addr: 1402d5a70
// Size: 171 bytes


/* Library Function - Single Match
    isxdigit
   
   Library: Visual Studio 2019 Release */

int __cdecl isxdigit(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_1404e46ac == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1404dc660 + (longlong)_C * 2) & 0x80;
    }
  }
  else {
    lVar2 = FUN_1402d9964();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    FUN_1402d9b18(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x80;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1402d9f60(_C,0x80,0);
      return iVar1;
    }
  }
  return 0;
}

