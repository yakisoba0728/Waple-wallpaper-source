// Function: FUN_140045b80
// Addr: 140045b80
// Size: 127 bytes


void FUN_140045b80(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_48 [3];
  ulonglong uStack_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  uVar2 = func_0x000140053f10(local_28);
  FUN_14002fdf0(local_48,&DAT_140476cd8,uVar2);
  if (local_10 < 0x10) {
    if (-1 < param_2) {
      lVar3 = func_0x000140087560(param_1 + 0x48,"wpropertiesvd","");
      if (lVar3 == 0) {
        FUN_140045d10(param_1);
        *(int *)(param_1 + 0x98) = param_2;
        if (0xf < uStack_30) {
          uVar4 = uStack_30 + 1;
          lVar3 = local_48[0];
          if (0xfff < uVar4) {
            lVar3 = *(longlong *)(local_48[0] + -8);
            if (0x1f < (local_48[0] - lVar3) - 8U) goto LAB_140045d05;
            uVar4 = uStack_30 + 0x28;
          }
          func_0x00014028b040(lVar3,uVar4);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1 + 0x48,"wpropertiesvd","");
  }
  uVar4 = local_10 + 1;
  lVar3 = local_28[0];
  if (0xfff < uVar4) {
    lVar3 = *(longlong *)(local_28[0] + -8);
    if (0x1f < (local_28[0] - lVar3) - 8U) {
LAB_140045d05:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = local_10 + 0x28;
  }
  func_0x00014028b040(lVar3,uVar4);
  return;
}

