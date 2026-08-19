// Function: FUN_14008bf10
// Addr: 14008bf10
// Size: 82 bytes


void FUN_14008bf10(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong alStack_48 [3];
  ulonglong uStack_30;
  undefined1 local_28 [32];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x10);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140017090(local_28,lVar3 + 0x20);
    }
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x50) != 0)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        uVar2 = FUN_14008ce60(*(undefined8 *)(param_1 + 8),
                              CONCAT71((int7)((ulonglong)lVar3 >> 8),10));
        FUN_14000cc90(uVar2,param_1 + 0x28);
      }
      alStack_48[2] = *(longlong *)(param_2 + 0x10);
      if (alStack_48[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017090(alStack_48,alStack_48[2] + 0x40);
      }
      alStack_48[1] = 0;
      alStack_48[0] = 0;
      uStack_30 = 0xf;
      FUN_14000cc90(*(undefined8 *)(param_1 + 8),alStack_48);
      if (0xf < uStack_30) {
        uVar4 = uStack_30 + 1;
        lVar3 = alStack_48[0];
        if (0xfff < uVar4) {
          lVar3 = *(longlong *)(alStack_48[0] + -8);
          if (0x1f < (alStack_48[0] - lVar3) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = uStack_30 + 0x28;
        }
        func_0x00014028b040(lVar3,uVar4);
      }
    }
  }
  return;
}

