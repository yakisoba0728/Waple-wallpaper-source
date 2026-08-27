// Function: FUN_140342270
// Addr: 140342270
// Size: 593 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140342270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_50;
  uint local_48;
  ushort local_44 [2];
  int local_40;
  ushort local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  local_44[0] = 0;
  local_34 = FUN_1402f54a0(param_2);
  local_40 = FUN_1402f58c0(param_2,&local_48);
  if (local_48 != 0) {
    return (ulonglong)local_48;
  }
  uVar8 = FUN_1402f5610(param_2,&DAT_140450d68,&local_40);
  local_48 = (uint)uVar8;
  if (local_48 != 0) {
    return uVar8;
  }
  if (local_40 == 0x4f54544f) {
    uVar10 = local_3c;
    if (local_3c == 0) {
      return 2;
    }
  }
  else {
    uVar8 = FUN_140348dd0(&local_40,param_2,local_44);
    uVar10 = local_44[0];
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  local_48 = 0;
  *(int *)(param_1 + 0xf0) = local_40;
  local_50 = &local_48;
  *(ushort *)(param_1 + 0xf4) = uVar10;
  local_58 = 0;
  uVar9 = FUN_1402f7ff0(uVar9,0x10,0);
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  if (local_48 != 0) {
    return (ulonglong)local_48;
  }
  uVar8 = FUN_1402f5c50(param_2,local_34 + 0xc);
  local_48 = (uint)uVar8;
  if (local_48 != 0) {
    return uVar8;
  }
  uVar8 = FUN_1402f4fe0(param_2,(ulonglong)local_3c << 4);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar10 = 0;
  local_48 = 0;
  if ((ushort)uVar8 < local_3c) {
    uVar11 = 0;
    do {
      iVar3 = FUN_1402f5200(param_2);
      uVar4 = FUN_1402f5200(param_2);
      uVar5 = FUN_1402f5200(param_2);
      uVar6 = FUN_1402f5200(param_2);
      if (uVar5 <= *(uint *)(param_2 + 8)) {
        uVar7 = *(uint *)(param_2 + 8) - uVar5;
        if (uVar7 < uVar6) {
          if ((iVar3 != 0x686d7478) && (iVar3 != 0x766d7478)) goto LAB_140342465;
          uVar6 = uVar7 & 0xfffffffc;
        }
        uVar2 = 0;
        if (uVar10 != 0) {
          do {
            if (*(int *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 0x10) == iVar3)
            goto LAB_140342465;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar10);
        }
        lVar1 = *(longlong *)(param_1 + 0xf8);
        uVar8 = (ulonglong)uVar10;
        uVar10 = uVar10 + 1;
        *(int *)(lVar1 + uVar8 * 0x10) = iVar3;
        *(undefined4 *)(lVar1 + 4 + uVar8 * 0x10) = uVar4;
        *(uint *)(lVar1 + 8 + uVar8 * 0x10) = uVar5;
        *(uint *)(lVar1 + 0xc + uVar8 * 0x10) = uVar6;
      }
LAB_140342465:
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_3c);
  }
  *(ushort *)(param_1 + 0xf4) = uVar10;
  FUN_1402f5100(param_2);
  if (uVar10 == 0) {
    return 2;
  }
  return (ulonglong)local_48;
}

