// Function: FUN_14035a850
// Addr: 14035a850
// Size: 366 bytes


ulonglong FUN_14035a850(undefined8 *param_1,uint param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  puVar1 = (uint *)(param_1 + 0x21e);
  uVar6 = *puVar1;
  uVar5 = 0;
  uVar4 = param_4;
  if (param_2 < uVar6) {
    if (uVar6 - param_2 <= (*(int *)(param_1 + 0x21f) - (int)param_1) - 0xf0U) {
      param_1[0x21f] = param_1[0x21f] - (ulonglong)(uVar6 - param_2);
      *puVar1 = param_2;
      goto joined_r0x00014035a93a;
    }
    iVar2 = FUN_1402f5c50(*param_1,0);
    if (iVar2 != 0) {
      return 0;
    }
    param_1[3] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 9;
    param_1[0x220] = puVar1;
    param_1[0x21f] = puVar1;
    *puVar1 = 0;
    uVar6 = 0;
  }
  if (param_2 != uVar6) {
    param_2 = param_2 - uVar6;
    uVar3 = param_2;
    if ((uint)(*(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f)) < param_2) {
      uVar3 = *(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f);
    }
    param_1[0x21f] = param_1[0x21f] + (ulonglong)uVar3;
    *puVar1 = uVar3 + uVar6;
    for (param_2 = param_2 - uVar3; param_2 != 0; param_2 = param_2 - uVar6) {
      uVar6 = 0x1000;
      if (param_2 < 0x1000) {
        uVar6 = param_2;
      }
      uVar3 = FUN_14035ac00(param_1 + 3,0,uVar6);
      if (uVar3 < uVar6) {
        return 0;
      }
      *puVar1 = *puVar1 + uVar6;
    }
  }
joined_r0x00014035a93a:
  while( true ) {
    if (uVar4 == 0) {
      return uVar5;
    }
    uVar6 = param_4;
    if ((uint)(*(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f)) < param_4) {
      uVar6 = *(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x21f);
    }
    FUN_1404210f0(uVar5 + param_3,param_1[0x21f],uVar6);
    param_1[0x21f] = param_1[0x21f] + (ulonglong)uVar6;
    uVar5 = (ulonglong)((int)uVar5 + uVar6);
    *puVar1 = *puVar1 + uVar6;
    param_4 = param_4 - uVar6;
    if (param_4 == 0) break;
    param_1[0x21f] = param_1 + 0x1e;
    uVar4 = FUN_14035ac00(param_1 + 3,param_1 + 0x1e,0x1000);
    param_1[0x220] = (ulonglong)uVar4 + param_1[0x21f];
  }
  return uVar5;
}

