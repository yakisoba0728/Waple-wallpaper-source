// Function: FUN_1400f3020
// Addr: 1400f3020
// Size: 9 bytes


ulonglong FUN_1400f3020(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uStack_10;
  uint uStack_c;
  
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
      plVar3 = (longlong *)func_0x00014028aff0(0x10);
      plVar3[1] = (longlong)FUN_1400f3a00;
      *plVar3 = param_1;
      lVar4 = FUN_1402ca24c(0,0,0x140082f80,plVar3,0,&uStack_10);
      if (lVar4 == 0) {
        uStack_10 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(6);
      }
      if (*(int *)(param_1 + 0x130) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400151e0();
      }
      uVar2 = (ulonglong)uStack_c;
      *(undefined4 *)(param_1 + 0x130) = uStack_10;
      *(uint *)(param_1 + 0x134) = uStack_c;
      *(longlong *)(param_1 + 0x128) = lVar4;
    }
  }
  return uVar2;
}

