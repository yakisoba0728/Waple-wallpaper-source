// Function: FUN_1403070a0
// Addr: 1403070a0
// Size: 298 bytes


undefined8 FUN_1403070a0(longlong param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((*(longlong *)(param_1 + 0x408) == 0) && (uVar3 = FUN_1403073d0(param_1,0), (int)uVar3 != 0))
  {
    return uVar3;
  }
  puVar1 = *(uint **)(param_1 + 0x408);
  if ((*(longlong *)(puVar1 + 2) == 0) && (uVar3 = FUN_140313fd0(param_1,0,0,1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar7 = param_2;
  if (*puVar1 < param_2) {
    uVar7 = *puVar1;
  }
  if (*(char *)(param_1 + 0x401) == '\0') {
    uVar6 = 0;
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        uVar4 = (int)uVar5 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar5 = uVar6;
      } while (uVar4 < uVar7);
      FUN_1404217a0(param_3,0,(ulonglong)uVar7 << 2);
    }
  }
  else {
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar6;
      if (3 < uVar7) {
        puVar2 = *(uint **)(puVar1 + 4);
        if (((puVar2 + (uVar7 - 1) < param_3) || (param_3 + (uVar7 - 1) < puVar2)) &&
           ((puVar1 + 4 < param_3 || (param_3 + (uVar7 - 1) < puVar1 + 4)))) {
          FUN_1404210f0(param_3,puVar2,(ulonglong)uVar7 << 2);
          do {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar4 < uVar7);
          goto LAB_140307197;
        }
      }
      do {
        uVar4 = (int)uVar5 + 1;
        uVar6 = (ulonglong)uVar4;
        param_3[uVar5] = *(uint *)(uVar5 * 4 + *(longlong *)(puVar1 + 4));
        uVar5 = uVar6;
      } while (uVar4 < uVar7);
    }
  }
LAB_140307197:
  if ((uint)uVar6 < param_2) {
    FUN_1404217a0(param_3 + uVar6,0,(ulonglong)(param_2 - (uint)uVar6) << 2);
  }
  return 0;
}

