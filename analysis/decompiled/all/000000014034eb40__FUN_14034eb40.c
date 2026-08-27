// Function: FUN_14034eb40
// Addr: 14034eb40
// Size: 1608 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14034eb40(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  uint *local_b0;
  uint local_a8 [2];
  longlong local_a0;
  int local_98 [2];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  int local_74;
  uint local_70;
  ushort local_6c;
  uint local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = 0;
  local_a8[0] = 0;
  local_80 = param_2;
  uVar7 = FUN_1402f5610(param_1,&DAT_1404517a8,local_78);
  local_a8[0] = (uint)uVar7;
  if (local_a8[0] != 0) {
    return uVar7;
  }
  if (((((local_74 == 0x774f4646) || (local_74 == 0x74746366)) ||
       (local_70 != *(uint *)(param_1 + 8))) ||
      ((0xffe < (ushort)(local_6c - 1) ||
       (local_70 <= ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c)))) ||
     ((local_68 <= (uint)local_6c * 0x10 + 0xc || ((local_68 & 3) != 0)))) {
    return 8;
  }
  if (local_60 == 0) {
    if (local_5c != 0) {
      return 8;
    }
    if (local_58 != 0) {
      return 8;
    }
  }
  else if ((local_5c != 0) && (local_58 == 0)) {
    return 8;
  }
  if ((local_54 == 0) && (local_50 != 0)) {
    return 8;
  }
  local_90 = 0;
  local_88 = 0;
  puVar8 = (undefined1 *)FUN_1402f7fa0(uVar4,0xc,local_a8);
  if (local_a8[0] != 0) {
    lVar9 = 0;
    goto LAB_14034f064;
  }
  lVar9 = FUN_1402f7e90(uVar4,0x48,local_a8);
  local_a0 = lVar9;
  if (local_a8[0] != 0) goto LAB_14034f064;
  *puVar8 = (char)((uint)local_74 >> 0x18);
  puVar8[1] = (char)((uint)local_74 >> 0x10);
  puVar8[2] = (char)((uint)local_74 >> 8);
  puVar8[3] = (undefined1)local_74;
  puVar8[4] = (char)(local_6c >> 8);
  puVar8[5] = (undefined1)local_6c;
  iVar13 = 0x1f;
  if (local_6c != 0) {
    for (; local_6c >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
  puVar8[9] = (byte)iVar13;
  iVar10 = 0x10 << ((byte)iVar13 & 0x1f);
  iVar11 = (uint)local_6c * 0x10 - iVar10;
  puVar8[7] = (char)iVar10;
  puVar8[0xb] = (char)iVar11;
  puVar8[6] = (char)((uint)iVar10 >> 8);
  puVar8[8] = (char)((uint)iVar13 >> 8);
  puVar8[10] = (char)((uint)iVar11 >> 8);
  local_b0 = local_a8;
  local_b8 = (undefined1 *)0x0;
  local_90 = FUN_1402f7ff0(uVar4,0x18,0,local_6c);
  if (local_a8[0] != 0) goto LAB_14034f064;
  local_b0 = local_a8;
  local_b8 = (undefined1 *)0x0;
  local_88 = FUN_1402f7ff0(uVar4,8,0,local_6c);
  if ((local_a8[0] != 0) ||
     (local_a8[0] = FUN_1402f4fe0(param_1,((uint)local_6c + (uint)local_6c * 4) * 4),
     local_a8[0] != 0)) goto LAB_14034f064;
  uVar12 = uVar14;
  if (local_6c != 0) {
    do {
      lVar9 = (longlong)(int)uVar14;
      puVar1 = (uint *)(local_90 + lVar9 * 0x18);
      uVar6 = FUN_1402f5200(param_1);
      *puVar1 = uVar6;
      uVar6 = FUN_1402f5200(param_1);
      puVar1[1] = uVar6;
      uVar6 = FUN_1402f5200(param_1);
      puVar1[2] = uVar6;
      uVar6 = FUN_1402f5200(param_1);
      puVar1[3] = uVar6;
      uVar6 = FUN_1402f5200(param_1);
      puVar1[4] = uVar6;
      uVar6 = *puVar1;
      if (uVar6 <= uVar12) {
        FUN_1402f5100(param_1);
        goto LAB_14034f049;
      }
      uVar14 = uVar14 + 1;
      *(uint **)(local_88 + lVar9 * 8) = puVar1;
      uVar12 = uVar6;
    } while ((int)uVar14 < (int)(uint)local_6c);
  }
  iVar10 = 0;
  FUN_1402f5100(param_1);
  lVar9 = local_88;
  FUN_1402ea670(local_88,local_6c,8,&LAB_140348fa0);
  uVar12 = (uint)local_6c * 0x10 + 0xc;
  uVar14 = ((uint)local_6c + (uint)local_6c * 4) * 4 + 0x2c;
  iVar13 = iVar10;
  if (local_6c != 0) {
    do {
      lVar5 = *(longlong *)(lVar9 + (longlong)iVar13 * 8);
      if ((((*(uint *)(lVar5 + 4) != uVar14) || (uVar6 = *(uint *)(lVar5 + 8), local_70 < uVar6)) ||
          (local_70 - uVar6 < *(uint *)(lVar5 + 4))) ||
         (((uVar3 = *(uint *)(lVar5 + 0xc), local_68 < uVar3 || (local_68 - uVar3 < uVar12)) ||
          (uVar3 < uVar6)))) goto LAB_14034f049;
      *(uint *)(lVar5 + 0x14) = uVar12;
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 + (uVar6 + 3 & 0xfffffffc);
      uVar12 = uVar12 + (uVar3 + 3 & 0xfffffffc);
    } while (iVar13 < (int)(uint)local_6c);
  }
  if (local_60 == 0) {
LAB_14034eed4:
    if (local_54 != 0) {
      uVar14 = uVar14 + 3 & 0xfffffffc;
      if ((local_54 != uVar14) || (local_70 < local_54 + local_50)) goto LAB_14034f049;
      uVar14 = uVar14 + local_50;
    }
    if ((uVar12 == local_68) && (uVar14 == local_70)) {
      local_b0 = local_a8;
      local_b8 = puVar8;
      puVar8 = (undefined1 *)FUN_1402f7ff0(uVar4,1,0xc,local_68);
      lVar9 = local_a0;
      if (local_a8[0] == 0) {
        puVar15 = puVar8 + 0xc;
        if (local_6c != 0) {
          do {
            puVar2 = (undefined4 *)(local_90 + (longlong)iVar10 * 0x18);
            *puVar15 = *(undefined1 *)((longlong)puVar2 + 3);
            puVar15[1] = *(undefined1 *)((longlong)puVar2 + 2);
            puVar15[2] = (char)((uint)*puVar2 >> 8);
            puVar15[3] = *(undefined1 *)puVar2;
            puVar15[4] = *(undefined1 *)((longlong)puVar2 + 0x13);
            puVar15[5] = *(undefined1 *)((longlong)puVar2 + 0x12);
            puVar15[6] = (char)((uint)puVar2[4] >> 8);
            puVar15[7] = *(undefined1 *)(puVar2 + 4);
            puVar15[8] = *(undefined1 *)((longlong)puVar2 + 0x17);
            puVar15[9] = *(undefined1 *)((longlong)puVar2 + 0x16);
            puVar15[10] = (char)((uint)puVar2[5] >> 8);
            puVar15[0xb] = *(undefined1 *)(puVar2 + 5);
            puVar15[0xc] = *(undefined1 *)((longlong)puVar2 + 0xf);
            puVar15[0xd] = *(undefined1 *)((longlong)puVar2 + 0xe);
            puVar15[0xe] = (char)((uint)puVar2[3] >> 8);
            puVar15[0xf] = *(undefined1 *)(puVar2 + 3);
            local_a8[0] = FUN_1402f5c50(param_1,puVar2[1]);
            lVar9 = local_a0;
            if ((local_a8[0] != 0) ||
               (local_a8[0] = FUN_1402f4fe0(param_1,puVar2[2]), lVar9 = local_a0, local_a8[0] != 0))
            goto LAB_14034f064;
            iVar13 = puVar2[3];
            if (puVar2[2] != iVar13) {
              local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,puVar2[2]);
              local_98[0] = iVar13;
              local_a8[0] = FUN_140356fd0(uVar4,puVar8 + (uint)puVar2[5],local_98);
              if (local_a8[0] == 0) {
                if (local_98[0] == puVar2[3]) goto LAB_14034f0e6;
                local_a8[0] = 8;
              }
              FUN_1402f5100(param_1);
              lVar9 = local_a0;
              goto LAB_14034f064;
            }
            FUN_1404210f0(puVar8 + (uint)puVar2[5],*(undefined8 *)(param_1 + 0x38),iVar13);
LAB_14034f0e6:
            puVar15 = puVar15 + 0x10;
            FUN_1402f5100(param_1);
            for (uVar14 = puVar2[3] + puVar2[5]; (uVar14 & 3) != 0; uVar14 = uVar14 + 1) {
              puVar8[uVar14] = 0;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(uint)local_6c);
        }
        lVar9 = local_a0;
        FUN_1402f5480(local_a0,puVar8,local_68);
        lVar5 = local_80;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(param_1 + 0x30);
        *(code **)(lVar9 + 0x28) = FUN_14034c1e0;
        FUN_1402f5190(*(undefined8 *)(local_80 + 0xa0),*(uint *)(local_80 + 8) >> 10 & 1);
        puVar1 = (uint *)(lVar5 + 8);
        *puVar1 = *puVar1 & 0xfffffbff;
        *(longlong *)(lVar5 + 0xa0) = lVar9;
      }
      goto LAB_14034f064;
    }
  }
  else if ((local_60 == uVar14) && (local_60 + local_5c <= local_70)) {
    uVar14 = uVar14 + local_5c;
    goto LAB_14034eed4;
  }
LAB_14034f049:
  local_a8[0] = 8;
  lVar9 = local_a0;
LAB_14034f064:
  FUN_1402f7f90(uVar4,local_90);
  FUN_1402f7f90(uVar4,local_88);
  if (local_a8[0] != 0) {
    FUN_1402f7f90(uVar4,puVar8);
    FUN_1402f4fc0(lVar9);
    FUN_1402f7f90(uVar4,lVar9);
  }
  return (ulonglong)local_a8[0];
}

