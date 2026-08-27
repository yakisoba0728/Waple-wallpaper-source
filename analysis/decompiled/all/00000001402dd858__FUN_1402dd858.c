// Function: FUN_1402dd858
// Addr: 1402dd858
// Size: 178 bytes


int FUN_1402dd858(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_1404e4420; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1404e4428 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_1402c9cf8(*(undefined8 *)(DAT_1404e4428 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1404e4428 + lVar4 * 8) + 0x30));
      FUN_1402d9040(*(undefined8 *)(DAT_1404e4428 + lVar4 * 8));
      *(undefined8 *)(DAT_1404e4428 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}

