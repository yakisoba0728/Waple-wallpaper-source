// Function: FUN_1402f7790
// Addr: 1402f7790
// Size: 39 bytes


longlong FUN_1402f7790(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uStackX_1c;
  
  plVar1 = (longlong *)FUN_1402f9140(CONCAT44(uStackX_1c,param_1));
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

