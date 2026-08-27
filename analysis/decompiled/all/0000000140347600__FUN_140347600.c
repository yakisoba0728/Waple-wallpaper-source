// Function: FUN_140347600
// Addr: 140347600
// Size: 524 bytes


void FUN_140347600(longlong param_1,char param_2,uint param_3,short *param_4,ushort *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int local_res8 [2];
  char local_res10;
  uint local_48;
  int local_44 [3];
  
  puVar1 = *(undefined8 **)(param_1 + 0x2e8);
  if (param_2 == '\0') {
    lVar8 = 0x4c8;
    lVar6 = 0x15a;
    lVar9 = 0x430;
  }
  else {
    lVar8 = 0x4cc;
    lVar6 = 0x1ba;
    lVar9 = 0x434;
  }
  uVar3 = *(ushort *)(lVar6 + param_1);
  local_res10 = param_2;
  if (uVar3 != 0) {
    local_44[0] = *(int *)(lVar8 + param_1);
    uVar10 = *(int *)(lVar9 + param_1) + local_44[0];
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    if (param_3 < uVar3) {
      if (local_44[0] + param_3 * 4 + 4 <= uVar10) {
        local_res8[0] = FUN_1402f5c50(uVar2);
        if (local_res8[0] == 0) {
          uVar3 = FUN_1402f5ac0(uVar2,local_res8);
          *param_5 = uVar3;
          if (local_res8[0] == 0) {
            sVar4 = FUN_1402f5ac0(uVar2,local_res8);
            *param_4 = sVar4;
            if (local_res8[0] == 0) goto LAB_1403476dc;
          }
        }
      }
    }
    else {
      local_44[0] = local_44[0] + (uint)uVar3 * 4;
      if (local_44[0] - 2U <= uVar10) {
        local_res8[0] = FUN_1402f5c50(uVar2);
        if (local_res8[0] == 0) {
          uVar5 = FUN_1402f5ac0(uVar2,local_res8);
          *param_5 = uVar5;
          if (local_res8[0] == 0) {
            if (local_44[0] + (param_3 - uVar3) * 2 + 2 <= uVar10) {
              local_res8[0] = FUN_1402f5c50(uVar2);
              if (local_res8[0] == 0) {
                sVar4 = FUN_1402f5ac0(uVar2,local_res8);
                *param_4 = sVar4;
                goto LAB_1403476dc;
              }
            }
            *param_4 = 0;
            goto LAB_1403476dc;
          }
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
LAB_1403476dc:
  if ((puVar1 != (undefined8 *)0x0) && ((*(uint *)(param_1 + 8) & 0x8000) != 0)) {
    local_48 = (uint)*param_5;
    local_44[0] = (int)*param_4;
    if (local_res10 == '\0') {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_1,param_3,&local_48);
      }
      pcVar7 = (code *)puVar1[1];
    }
    else {
      if ((code *)puVar1[3] != (code *)0x0) {
        (*(code *)puVar1[3])(param_1,param_3,&local_48);
      }
      pcVar7 = (code *)puVar1[4];
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(param_1,param_3,local_44);
    }
    *param_5 = (ushort)local_48;
    *param_4 = (short)local_44[0];
  }
  return;
}

