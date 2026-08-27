// Function: FUN_1400b6320
// Addr: 1400b6320
// Size: 178 bytes


ulonglong FUN_1400b6320(longlong param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = param_3[1];
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x62);
  uVar5 = param_2[1];
  if (uVar7 == 0) {
    if (uVar3 < uVar5) {
      lVar2 = *param_2;
      lVar4 = lVar2 - uVar3;
      do {
        pcVar1 = (char *)(lVar2 + uVar3);
        *pcVar1 = *pcVar1 + (*(byte *)(lVar4 + uVar3) >> 1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
      return uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    if (uVar5 < uVar7) {
      uVar7 = uVar5;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        if (uVar3 <= uVar5) break;
        *(char *)(uVar5 + *param_2) =
             *(char *)(uVar5 + *param_2) + (*(byte *)(uVar5 + *param_3) >> 1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    if (uVar3 < uVar7) {
      lVar2 = *param_2;
      lVar4 = *param_3;
      lVar6 = lVar2 - uVar3;
      do {
        pcVar1 = (char *)(lVar2 + uVar3);
        *pcVar1 = *pcVar1 + (char)((uint)*(byte *)(lVar6 + uVar3) + (uint)*(byte *)(lVar4 + uVar3)
                                  >> 1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar7);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

