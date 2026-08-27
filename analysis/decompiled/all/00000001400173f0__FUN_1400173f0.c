// Function: FUN_1400173f0
// Addr: 1400173f0
// Size: 116 bytes


ulonglong FUN_1400173f0(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = *param_2;
  uVar4 = uVar2 + 1;
  *param_2 = uVar4;
  if (uVar4 == 0) {
    *param_2 = *param_2 - 1;
    return 0;
  }
  if (0xfff < uVar4) {
    uVar2 = uVar2 + 0x28;
    if (uVar4 < uVar2) {
      lVar3 = FUN_14028af20(uVar2);
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar3 = (*pcVar1)();
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar5;
      *param_2 = *param_2 - 1;
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = FUN_14028af20();
  *param_2 = *param_2 - 1;
  return uVar4;
}

