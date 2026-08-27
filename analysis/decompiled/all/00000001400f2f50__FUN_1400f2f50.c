// Function: FUN_1400f2f50
// Addr: 1400f2f50
// Size: 217 bytes


ulonglong FUN_1400f2f50(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_10;
  uint local_c;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x90) = 1;
  UNLOCK();
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x92);
  *(byte *)(param_1 + 0x92) = 1;
  uVar2 = (ulonglong)bVar1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    if (((~(byte)(*(uint *)(uVar2 + 0x118) >> 0x12) & 1) != 0) && (*(int *)(param_1 + 0x130) == 0))
    {
      LOCK();
      *(undefined1 *)(param_1 + 0x138) = 1;
      UNLOCK();
      plVar3 = (longlong *)FUN_14028af20(0x10);
      plVar3[1] = (longlong)FUN_1400f3930;
      *plVar3 = param_1;
      lVar4 = FUN_1402ca17c(0,0,FUN_140082eb0,plVar3,0,&local_10);
      if (lVar4 == 0) {
        local_10 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (*(int *)(param_1 + 0x130) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140015110();
      }
      uVar2 = (ulonglong)local_c;
      *(undefined4 *)(param_1 + 0x130) = local_10;
      *(uint *)(param_1 + 0x134) = local_c;
      *(longlong *)(param_1 + 0x128) = lVar4;
    }
  }
  return uVar2;
}

