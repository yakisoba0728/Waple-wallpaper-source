// Function: FUN_1402bb830
// Addr: 1402bb830
// Size: 328 bytes


undefined8 FUN_1402bb830(int *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *local_58;
  undefined8 local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar10 = *param_4 - lVar1;
  uVar8 = *(uint *)(param_4 + 9);
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar8 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar8 * 4 + 1] <= uVar10) &&
            (uVar10 < puVar2[(ulonglong)uVar8 * 4 + 2])) && (puVar2[(ulonglong)uVar8 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar8 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar8 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_1402bb94b;
          }
          if (((*param_1 == -0x1f928c9d) && (DAT_14042c480 != (code *)0x0)) &&
             (iVar3 = func_0x0001402ed430(&DAT_14042c480), iVar3 != 0)) {
            (*DAT_14042c480)(param_1,1);
          }
          func_0x0001402bf6e0((ulonglong)puVar2[(ulonglong)uVar8 * 4 + 4] + lVar1,param_2,1);
          (*DAT_140426530)(param_2,(ulonglong)puVar2[(ulonglong)uVar8 * 4 + 4] + lVar1,param_1,
                           *param_1,param_4[5],param_4[8]);
          FUN_1402bf710();
        }
LAB_1402bb94b:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar2);
    }
  }
  else {
    uVar9 = *puVar2;
    if (uVar8 < uVar9) {
      uVar7 = param_4[4] - lVar1;
      do {
        uVar4 = (ulonglong)uVar8;
        if ((puVar2[uVar4 * 4 + 1] <= uVar10) && (uVar10 < puVar2[uVar4 * 4 + 2])) {
          if ((param_1[1] & 0x20U) != 0) {
            uVar6 = 0;
            if (uVar9 != 0) {
              do {
                if ((((puVar2[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar2[uVar6 * 4 + 2])) &&
                    (puVar2[uVar6 * 4 + 4] == puVar2[uVar4 * 4 + 4])) &&
                   (puVar2[uVar6 * 4 + 3] == puVar2[uVar4 * 4 + 3])) break;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
              } while (uVar5 < uVar9);
            }
            if ((uint)uVar6 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar4 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar8 + 1;
            (*(code *)((ulonglong)puVar2[uVar4 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar7 == puVar2[uVar4 * 4 + 4]) && ((param_1[1] & 0x20U) != 0)) {
            return 1;
          }
        }
        uVar9 = *puVar2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  return 1;
}

