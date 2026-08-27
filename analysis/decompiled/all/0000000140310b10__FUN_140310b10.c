// Function: FUN_140310b10
// Addr: 140310b10
// Size: 1031 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140310b10(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_58;
  uint local_54;
  int local_50;
  ushort local_4c;
  ushort local_4a;
  int local_48;
  ushort local_44;
  ushort local_42;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  lVar4 = *(longlong *)(param_1 + 0x408);
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  uVar8 = (**(code **)(param_1 + 0x2a0))(param_1,0x67766172,lVar3,&local_54);
  local_58 = (uint)uVar8;
  if (local_58 != 0) {
    return uVar8;
  }
  iVar6 = FUN_1402f54a0(lVar3);
  uVar8 = FUN_1402f5610(lVar3,&DAT_14043bd00,&local_50);
  local_58 = (uint)uVar8;
  if (local_58 != 0) {
    return uVar8;
  }
  if ((((local_50 != 0x10000) || (local_4c != **(ushort **)(lVar4 + 0x18))) ||
      (local_54 >> 1 < (uint)local_4a * (uint)local_4c)) ||
     (local_54 < ((local_42 & 1) + 1) * (local_44 + 1) * 2)) {
    return 8;
  }
  *(uint *)(lVar4 + 0x90) = local_54;
  uVar8 = FUN_1402f4fe0(lVar3);
  local_58 = (uint)uVar8;
  if (local_58 != 0) {
    return uVar8;
  }
  local_60 = &local_58;
  puVar12 = *(undefined1 **)(lVar3 + 0x38);
  uVar8 = 0;
  local_68 = 0;
  lVar9 = FUN_1402f7ff0(uVar5,4,0);
  *(longlong *)(lVar4 + 0x88) = lVar9;
  if (local_58 == 0) {
    lVar11 = *(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38);
    if ((local_42 & 1) == 0) {
      if (lVar11 < (longlong)(ulonglong)((uint)local_44 * 2)) goto LAB_140310d02;
      uVar15 = 0;
      uVar8 = 0;
      do {
        puVar1 = puVar12 + 1;
        lVar11 = uVar8 * 4;
        uVar2 = *puVar12;
        puVar12 = puVar12 + 2;
        *(uint *)(lVar11 + lVar9) = local_40 + iVar6 + (uint)CONCAT11(uVar2,*puVar1) * 2;
        uVar16 = *(uint *)(lVar11 + *(longlong *)(lVar4 + 0x88));
        if (uVar16 < uVar15) {
          *(uint *)(lVar11 + *(longlong *)(lVar4 + 0x88)) = uVar15;
          uVar16 = uVar15;
        }
        uVar15 = uVar16;
        lVar9 = *(longlong *)(lVar4 + 0x88);
        if (local_54 + iVar6 < *(uint *)(lVar11 + lVar9)) {
          *(uint *)(lVar11 + lVar9) = local_54 + iVar6;
          lVar9 = *(longlong *)(lVar4 + 0x88);
        }
        uVar16 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar16;
      } while (uVar16 <= local_44);
LAB_140310d7f:
      *(uint *)(lVar4 + 0x80) = (uint)local_44;
      FUN_1402f5100(lVar3);
      if (local_4a == 0) goto LAB_140310eb1;
      local_58 = FUN_1402f5c50(lVar3,local_48 + iVar6);
      if ((local_58 == 0) &&
         (local_58 = FUN_1402f4fe0(lVar3,(uint)local_4a * (uint)local_4c * 2), local_58 == 0)) {
        pbVar13 = *(byte **)(lVar3 + 0x38);
        local_60 = &local_58;
        local_68 = 0;
        uVar10 = FUN_1402f7ff0(uVar5,4,0,(uint)local_4a * (uint)local_4c);
        *(undefined8 *)(lVar4 + 0x70) = uVar10;
        if (local_58 == 0) {
          uVar15 = 0;
          if (local_4a != 0) {
            do {
              pbVar14 = pbVar13;
              uVar16 = 0;
              if (local_4c != 0) {
                do {
                  pbVar14 = pbVar13 + 2;
                  uVar7 = uVar16 + 1;
                  *(uint *)(*(longlong *)(lVar4 + 0x70) +
                           (ulonglong)(local_4c * uVar15 + uVar16) * 4) =
                       ((int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1]) << 2;
                  pbVar13 = pbVar14;
                  uVar16 = uVar7;
                } while (uVar7 < local_4c);
              }
              uVar15 = uVar15 + 1;
              pbVar13 = pbVar14;
            } while (uVar15 < local_4a);
          }
          local_60 = &local_58;
          local_68 = 0;
          uVar10 = FUN_1402f80b0(uVar5,4,0,local_4a);
          *(undefined8 *)(lVar4 + 0x78) = uVar10;
          if (local_58 == 0) {
            *(uint *)(lVar4 + 0x68) = (uint)local_4a;
            FUN_1402f5100(lVar3);
            goto LAB_140310eb1;
          }
        }
        goto LAB_140310ee8;
      }
    }
    else {
      if ((longlong)((ulonglong)local_44 * 4) <= lVar11) {
        uVar17 = uVar8;
        do {
          lVar11 = uVar8 * 4;
          *(int *)(lVar11 + lVar9) =
               CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),puVar12[3]) +
               local_40 + iVar6;
          uVar15 = *(uint *)(lVar11 + *(longlong *)(lVar4 + 0x88));
          if (uVar15 < (uint)uVar17) {
            *(uint *)(lVar11 + *(longlong *)(lVar4 + 0x88)) = (uint)uVar17;
          }
          else {
            uVar17 = (ulonglong)uVar15;
          }
          lVar9 = *(longlong *)(lVar4 + 0x88);
          if (local_54 + iVar6 < *(uint *)(lVar11 + lVar9)) {
            *(uint *)(lVar11 + lVar9) = local_54 + iVar6;
            lVar9 = *(longlong *)(lVar4 + 0x88);
          }
          uVar15 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar15;
          puVar12 = puVar12 + 4;
        } while (uVar15 <= local_44);
        goto LAB_140310d7f;
      }
LAB_140310d02:
      local_58 = 8;
    }
  }
  else {
LAB_140310ee8:
    FUN_1402f5100(lVar3);
  }
  FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x88));
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x80) = 0;
LAB_140310eb1:
  return (ulonglong)local_58;
}

