// Function: FUN_1402f79e0
// Addr: 1402f79e0
// Size: 30 bytes


longlong FUN_1402f79e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1402f9210();
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

