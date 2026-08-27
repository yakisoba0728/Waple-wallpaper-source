// Function: FUN_140318c00
// Addr: 140318c00
// Size: 866 bytes


void FUN_140318c00(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *_Str1;
  ulonglong uVar10;
  int iVar11;
  int local_res10 [2];
  int local_res18;
  undefined8 *local_res20;
  
  puVar2 = *(undefined8 **)(param_1 + 0x2a0);
  uVar3 = param_2[4];
  local_res20 = puVar2;
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) {
      return;
    }
LAB_140318c79:
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  local_res18 = (*(code *)param_2[9])(param_2);
  uVar10 = (ulonglong)local_res18;
  if (local_res18 < 0) goto LAB_140318c79;
  if ((*param_2 <= param_2[2]) &&
     (uVar9 = (longlong)(param_2[2] - *param_2) >> 3, (longlong)uVar9 < (longlong)uVar10)) {
    local_res18 = (int)uVar9;
    uVar10 = uVar9 & 0xffffffff;
    if (param_2[0x51] == 0) {
      uVar9 = FUN_1402f7fa0(uVar3,0x28,local_res10);
      param_2[0x51] = uVar9;
      if ((local_res10[0] != 0) ||
         (local_res10[0] = FUN_1402f7650(uVar9,uVar3), local_res10[0] != 0)) goto LAB_140318f1d;
    }
  }
  (*(code *)param_2[8])(param_2);
  if ((int)param_2[3] != 0) {
    return;
  }
  (*(code *)param_2[7])(param_2);
  if (((int)param_2[0x45] != 0) ||
     (local_res10[0] = (**(code **)*puVar2)(param_2 + 0x46,uVar10 & 0xffffffff,uVar3),
     local_res10[0] == 0)) {
    _Str1 = (char *)*param_2;
    if (_Str1 + 4 < (char *)param_2[2]) {
      iVar11 = 0;
      while (iVar5 = strncmp(_Str1,"dup",3), iVar5 == 0) {
        (*(code *)param_2[8])(param_2);
        iVar5 = (*(code *)param_2[9])(param_2);
        pbVar4 = (byte *)param_2[2];
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50);
        (*(code *)param_2[7])(param_2);
        if ((pbVar4 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_140318f22:
          if (lVar8 == 0) {
            *(undefined4 *)(param_2 + 3) = 3;
            return;
          }
          return;
        }
        uVar6 = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        if ((int)uVar6 < 0) goto LAB_140318f22;
        lVar1 = *param_2 + 1;
        if ((longlong)pbVar4 - lVar1 <= (longlong)(int)uVar6) goto LAB_140318f22;
        *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[7])(param_2);
        if (((char *)*param_2 + 4 < (char *)param_2[2]) &&
           (iVar7 = strncmp((char *)*param_2,"put",3), iVar7 == 0)) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[7])(param_2);
        }
        if (param_2[0x51] != 0) {
          FUN_1402f76e0(iVar5,iVar11,param_2[0x51],uVar3);
          iVar5 = iVar11;
        }
        if ((int)param_2[0x45] == 0) {
          if ((int)*(uint *)(param_1 + 0x118) < 0) {
            local_res10[0] = (*(code *)param_2[0x4f])(param_2 + 0x46,iVar5,lVar1,uVar6);
          }
          else {
            if (uVar6 < *(uint *)(param_1 + 0x118)) {
              local_res10[0] = 3;
              goto LAB_140318f1d;
            }
            lVar8 = FUN_1402f7f20(uVar3,lVar1,uVar6,local_res10);
            if (local_res10[0] != 0) goto LAB_140318f1d;
            (*(code *)local_res20[4])(lVar8,uVar6,0x10ea);
            local_res10[0] =
                 (*(code *)param_2[0x4f])
                           (param_2 + 0x46,iVar5,lVar8 + *(int *)(param_1 + 0x118),
                            uVar6 - *(int *)(param_1 + 0x118));
            FUN_1402f7f90(uVar3,lVar8);
          }
          if (local_res10[0] != 0) goto LAB_140318f1d;
        }
        _Str1 = (char *)*param_2;
        if ((char *)param_2[2] <= _Str1 + 4) break;
        iVar11 = iVar11 + 1;
      }
    }
    if ((int)param_2[0x45] != 0) {
      return;
    }
    *(int *)(param_2 + 0x45) = local_res18;
    return;
  }
LAB_140318f1d:
  *(int *)(param_2 + 3) = local_res10[0];
  return;
}

