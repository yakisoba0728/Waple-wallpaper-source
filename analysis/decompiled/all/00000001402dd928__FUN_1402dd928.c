// Function: FUN_1402dd928
// Addr: 1402dd928
// Size: 35 bytes


int FUN_1402dd928(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  FUN_1402d6370(8);
  for (iVar3 = 3; iVar3 != iRam00000001404e44f0; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(lRam00000001404e44f8 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = func_0x0001402c9dc8(*(undefined8 *)(lRam00000001404e44f8 + lVar4 * 8)),
         iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      (*DAT_140426568)(*(longlong *)(lRam00000001404e44f8 + lVar4 * 8) + 0x30);
      FUN_1402d9110(*(undefined8 *)(lRam00000001404e44f8 + lVar4 * 8));
      *(undefined8 *)(lRam00000001404e44f8 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}

