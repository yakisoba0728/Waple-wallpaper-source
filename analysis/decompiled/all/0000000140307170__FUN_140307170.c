// Function: FUN_140307170
// Addr: 140307170
// Size: 48 bytes


undefined8 FUN_140307170(longlong param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (((*(longlong *)(param_1 + 0x408) != 0) || (uVar3 = FUN_1403074a0(param_1,0), (int)uVar3 == 0))
     && ((puVar1 = *(uint **)(param_1 + 0x408), *(longlong *)(puVar1 + 2) != 0 ||
         (uVar3 = FUN_1403140a0(param_1,0,0,1), (int)uVar3 == 0)))) {
    uVar7 = param_2;
    if (*puVar1 < param_2) {
      uVar7 = *puVar1;
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar7);
        func_0x000140421870(param_3,0,(ulonglong)uVar7 << 2);
      }
    }
    else {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar5;
        if (3 < uVar7) {
          puVar2 = *(uint **)(puVar1 + 4);
          if (((puVar2 + (uVar7 - 1) < param_3) || (param_3 + (uVar7 - 1) < puVar2)) &&
             ((puVar1 + 4 < param_3 || (param_3 + (uVar7 - 1) < puVar1 + 4)))) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_3,puVar2,(ulonglong)uVar7 << 2);
          }
        }
        do {
          uVar4 = (int)uVar6 + 1;
          uVar5 = (ulonglong)uVar4;
          param_3[uVar6] = *(uint *)(uVar6 * 4 + *(longlong *)(puVar1 + 4));
          uVar6 = uVar5;
        } while (uVar4 < uVar7);
      }
    }
    if ((uint)uVar5 < param_2) {
      func_0x000140421870(param_3 + uVar5,0,(ulonglong)(param_2 - (uint)uVar5) << 2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

