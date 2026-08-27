// Function: FUN_1400137c0
// Addr: 1400137c0
// Size: 91 bytes


longlong FUN_1400137c0(char *param_1)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  
  sVar2 = strlen(param_1);
  lVar1 = sVar2 + 1;
  lVar3 = _calloc_base(lVar1,1);
  if (lVar3 != 0) {
    if (lVar1 != 0) {
      FUN_1404210f0(lVar3,param_1,lVar1);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

