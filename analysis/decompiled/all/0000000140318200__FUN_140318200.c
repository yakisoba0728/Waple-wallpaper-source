// Function: FUN_140318200
// Addr: 140318200
// Size: 604 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140318200(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  int *local_2b0;
  int local_2a8;
  int local_2a4;
  int local_2a0 [2];
  longlong local_298;
  longlong local_288 [12];
  longlong local_228 [60];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2d8;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  iVar9 = 0;
  local_2a8 = 0;
  (*(code *)param_2[0xf])(param_2,local_288,4,local_2a0);
  if (local_2a0[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_2a0[0] == 0) || (4 < local_2a0[0])) {
LAB_140318418:
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_298 = param_2[2];
    lVar3 = *param_2;
    local_2a8 = FUN_14031ad50(param_1,0);
    if (local_2a8 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x2e0);
      if (0 < local_2a0[0]) {
        do {
          iVar7 = 0;
          lVar8 = (longlong)iVar9;
          *param_2 = local_288[lVar8 * 3];
          param_2[2] = local_288[lVar8 * 3 + 1];
          (*(code *)param_2[0xf])(param_2,local_228,0x14,&local_2a4);
          if ((0x13 < local_2a4 - 1U) ||
             (puVar1 = (undefined1 *)(lVar4 + (lVar8 + 7) * 0x18),
             *(longlong *)(lVar4 + 8 + (lVar8 + 7) * 0x18) != 0)) goto LAB_140318418;
          local_2b0 = &local_2a8;
          local_2b8 = 0;
          uVar6 = FUN_1402f7ff0(uVar2,4,0);
          *(undefined8 *)(puVar1 + 8) = uVar6;
          if (local_2a8 != 0) goto LAB_140318413;
          local_2b0 = &local_2a8;
          local_2b8 = 0;
          uVar6 = FUN_1402f7ff0(uVar2,4,0,local_2a4);
          *(undefined8 *)(puVar1 + 0x10) = uVar6;
          if (local_2a8 != 0) goto LAB_140318413;
          *puVar1 = (char)local_2a4;
          if (0 < local_2a4) {
            do {
              lVar8 = (longlong)iVar7;
              *param_2 = local_228[lVar8 * 3] + 1;
              param_2[2] = local_228[lVar8 * 3 + 1] + -1;
              uVar5 = (*(code *)param_2[9])(param_2);
              *(undefined4 *)(*(longlong *)(puVar1 + 8) + lVar8 * 4) = uVar5;
              uVar5 = (*(code *)param_2[10])(param_2,0);
              iVar7 = iVar7 + 1;
              *(undefined4 *)(*(longlong *)(puVar1 + 0x10) + lVar8 * 4) = uVar5;
            } while (iVar7 < local_2a4);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_2a0[0]);
      }
      param_2[2] = local_298;
      *param_2 = lVar3;
    }
LAB_140318413:
    *(int *)(param_2 + 3) = local_2a8;
  }
  return;
}

