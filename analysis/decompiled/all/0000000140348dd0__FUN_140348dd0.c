// Function: FUN_140348dd0
// Addr: 140348dd0
// Size: 456 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140348dd0(longlong param_1,longlong param_2,short *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  short *local_60;
  int local_58 [2];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  iVar10 = *(int *)(param_1 + 0xc) + 0xc;
  local_60 = param_3;
  uVar7 = FUN_1402f5c50(param_2,iVar10);
  if ((int)uVar7 == 0) {
    sVar8 = 0;
    bVar1 = false;
    uVar9 = 0;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((ushort)uVar7 < *(ushort *)(param_1 + 4)) {
      do {
        bVar3 = bVar6;
        bVar2 = bVar5;
        bVar1 = bVar4;
        local_68[0] = 0;
        local_68[0] = FUN_1402f5610(param_2,&DAT_140450d50,local_58);
        if (local_68[0] != 0) {
          *(ushort *)(param_1 + 4) = uVar9;
          break;
        }
        if ((local_50 <= *(uint *)(param_2 + 8)) &&
           (((local_4c <= *(uint *)(param_2 + 8) - local_50 || (local_58[0] == 0x686d7478)) ||
            (local_58[0] == 0x766d7478)))) {
          if ((local_58[0] == 0x68656164) || (local_58[0] == 0x62686564)) {
            if (local_4c < 0x36) goto LAB_140348f5c;
            uVar7 = FUN_1402f5c50(param_2,local_50 + 0xc);
            local_68[0] = (uint)uVar7;
            if (local_68[0] != 0) {
              return uVar7;
            }
            FUN_1402f58c0(param_2,local_68);
            if (local_68[0] != 0) {
              return (ulonglong)local_68[0];
            }
            uVar7 = FUN_1402f5c50(param_2,(uVar9 + 1) * 0x10 + iVar10);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            bVar1 = true;
            sVar8 = sVar8 + 1;
          }
          else {
            sVar8 = sVar8 + 1;
            if (local_58[0] == 0x53494e47) {
              bVar2 = true;
            }
            else if (local_58[0] == 0x4d455441) {
              bVar3 = true;
            }
          }
        }
        uVar9 = uVar9 + 1;
        bVar4 = bVar1;
        bVar5 = bVar2;
        bVar6 = bVar3;
      } while (uVar9 < *(ushort *)(param_1 + 4));
    }
    *local_60 = sVar8;
    if (sVar8 == 0) {
      uVar7 = 2;
    }
    else if ((bVar1) || ((bVar2 && (bVar3)))) {
      uVar7 = 0;
    }
    else {
LAB_140348f5c:
      uVar7 = 0x8e;
    }
  }
  return uVar7;
}

