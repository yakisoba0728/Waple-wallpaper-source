// Function: FUN_1402f7910
// Addr: 1402f7910
// Size: 30 bytes


longlong FUN_1402f7910(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1402f9140();
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

