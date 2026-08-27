// Function: FUN_140317db0
// Addr: 140317db0
// Size: 416 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140317db0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4 [3];
  undefined8 local_a8;
  int local_a0 [22];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_b8 = 0;
  (**(code **)(param_2 + 0x78))(param_2,&local_a8,4,local_b4);
  if (local_b4[0] < 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xa2;
  }
  else if ((local_b4[0] == 0) || (4 < local_b4[0])) {
LAB_140317f03:
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    local_b8 = FUN_14031ad50(param_1,0);
    if (local_b8 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x2e0);
      iVar8 = 0;
      if (0 < local_b4[0]) {
        do {
          lVar6 = (longlong)iVar8;
          puVar1 = &local_a8 + lVar6 * 3;
          pcVar4 = (char *)*puVar1;
          if (*pcVar4 == '/') {
            pcVar4 = pcVar4 + 1;
            *puVar1 = pcVar4;
          }
          uVar7 = local_a0[lVar6 * 6] - (int)pcVar4;
          if (uVar7 == 0) goto LAB_140317f03;
          if (*(longlong *)(lVar6 * 8 + 8 + lVar3) != 0) {
            FUN_1402f7f90(uVar2);
          }
          lVar5 = FUN_1402f7fa0(uVar2,uVar7 + 1,&local_b8);
          *(longlong *)(lVar6 * 8 + 8 + lVar3) = lVar5;
          if (local_b8 != 0) break;
          FUN_1404210f0(lVar5,*puVar1,(ulonglong)uVar7);
          iVar8 = iVar8 + 1;
          *(undefined1 *)((ulonglong)uVar7 + lVar5) = 0;
        } while (iVar8 < local_b4[0]);
      }
    }
    *(int *)(param_2 + 0x18) = local_b8;
  }
  return;
}

