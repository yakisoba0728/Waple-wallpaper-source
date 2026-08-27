// Function: FUN_1403433e0
// Addr: 1403433e0
// Size: 2654 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403433e0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                       longlong param_5)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  short sVar17;
  int *piVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  ushort uVar23;
  bool bVar24;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint *local_a0;
  uint local_98;
  char local_94;
  char local_93;
  uint local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  ushort local_68;
  ushort local_66;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  local_88 = *(longlong *)(param_2 + 0x2d0);
  uVar21 = 0;
  bVar5 = false;
  local_94 = '\0';
  local_93 = '\0';
  local_8c = 1;
  bVar6 = false;
  if (0 < param_4) {
    do {
      bVar5 = bVar6;
      iVar7 = *(int *)(param_5 + uVar21 * 0x10);
      if (iVar7 == 0x69677066) {
        local_94 = '\x01';
      }
      else if (iVar7 == 0x69677073) {
        local_93 = '\x01';
      }
      else if (iVar7 == 0x69736278) {
        bVar5 = true;
      }
      uVar14 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar14;
      bVar6 = bVar5;
    } while ((int)uVar14 < param_4);
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
    piVar18 = *(int **)(param_2 + 0xf8);
    piVar20 = piVar18 + (ulonglong)*(ushort *)(param_2 + 0xf4) * 4;
    piVar15 = piVar18;
    if (piVar18 < piVar20) {
      do {
        if ((*piVar15 == 0x676c7966) && (piVar15[3] != 0)) goto LAB_1403434f3;
        piVar15 = piVar15 + 4;
        piVar11 = piVar18;
      } while (piVar15 < piVar20);
      do {
        if ((*piVar11 == 0x43464620) && (piVar11[3] != 0)) goto LAB_1403434f3;
        piVar11 = piVar11 + 4;
      } while (piVar11 < piVar20);
      do {
        if ((*piVar18 == 0x43464632) && (piVar18[3] != 0)) goto LAB_1403434f3;
        piVar18 = piVar18 + 4;
      } while (piVar18 < piVar20);
    }
    bVar6 = false;
  }
  else {
LAB_1403434f3:
    bVar6 = true;
  }
  iVar7 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424c43,param_1,0);
  iVar8 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424454,param_1,0);
  local_70 = (**(code **)(param_2 + 0x2a0))(param_2,0x45424c43,param_1,0);
  local_6c = (**(code **)(param_2 + 0x2a0))(param_2,0x626c6f63,param_1,0);
  iVar9 = (**(code **)(param_2 + 0x2a0))(param_2,0x73626978,param_1,0);
  bVar24 = false;
  local_90 = (uint)(iVar9 == 0);
  if (bVar5) {
    local_90 = 0;
  }
  if ((bVar6) || (*(code **)(local_88 + 0x90) == (code *)0x0)) {
LAB_1403435b4:
    uVar14 = local_90;
    uVar10 = (**(code **)(local_88 + 0x30))(param_2,param_1);
    if (uVar10 != 0) {
      return (ulonglong)uVar10;
    }
  }
  else {
    local_98 = (**(code **)(local_88 + 0x90))(param_2,param_1);
    bVar24 = local_98 == 0;
    if ((local_98 != 0) || (uVar14 = local_90, uVar10 = 0, (char)local_90 != '\0'))
    goto LAB_1403435b4;
  }
  local_98 = uVar10;
  lVar13 = local_88;
  if ((iVar7 == 0) || (iVar8 == 0)) {
    bVar6 = false;
  }
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0x112) - 0x10U)) {
    return 8;
  }
  local_98 = (**(code **)(local_88 + 0x48))(param_2,param_1);
  local_98 = (**(code **)(lVar13 + 0x40))(param_2,param_1);
  local_98 = (**(code **)(lVar13 + 0x60))(param_2,param_1);
  local_98 = (**(code **)(lVar13 + 0x58))(param_2,param_1);
  local_80 = CONCAT44(local_80._4_4_,local_98);
  if (!bVar24) {
    local_98 = (**(code **)(lVar13 + 0x38))(param_2,param_1,0);
    if (local_98 == 0) {
      local_98 = (**(code **)(lVar13 + 200))(param_2,param_1,0);
      uVar21 = (ulonglong)local_98;
      if ((char)local_98 == -0x72) {
        uVar21 = 0x93;
        local_98 = 0x93;
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if ((plVar3 != (longlong *)0x0) && (*(longlong *)(*plVar3 + 0x10) != 0)) {
          uVar21 = 0;
          *(undefined2 *)(param_2 + 0x15a) = 0;
          local_98 = 0;
        }
      }
      if (local_98 != 0) {
        return uVar21;
      }
    }
    else {
      if ((char)local_98 != -0x72) {
        return (ulonglong)local_98;
      }
      if (*(int *)(param_2 + 0xf0) == 0x74727565) {
        bVar6 = false;
        local_98 = 0;
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if (plVar3 == (longlong *)0x0) {
          return 0x8f;
        }
        if (*(longlong *)(*plVar3 + 0x10) == 0) {
          return 0x8f;
        }
        *(undefined2 *)(param_2 + 0x15a) = 0;
        local_98 = 0;
      }
    }
    local_98 = (**(code **)(lVar13 + 0x38))(param_2,param_1,1);
    if ((local_98 == 0) &&
       (local_98 = (**(code **)(lVar13 + 200))(param_2,param_1,1), local_98 == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_98 != -0x72) {
      return (ulonglong)local_98;
    }
    local_98 = (**(code **)(lVar13 + 0x50))(param_2,param_1);
    if (local_98 != 0) {
      *(undefined2 *)(param_2 + 0x208) = 0xffff;
    }
  }
  if ((*(code **)(lVar13 + 0xd0) != (code *)0x0) &&
     ((((iVar7 == 0 || (local_70 == 0)) || (local_6c == 0)) || ((char)uVar14 != '\0')))) {
    local_98 = (**(code **)(lVar13 + 0xd0))(param_2,param_1);
  }
  if (*(code **)(lVar13 + 0xf0) != (code *)0x0) {
    local_98 = (**(code **)(lVar13 + 0xf0))(param_2,param_1);
    local_98 = (**(code **)(lVar13 + 0xf8))(param_2,param_1);
  }
  if (*(code **)(lVar13 + 0x168) != (code *)0x0) {
    local_98 = (**(code **)(lVar13 + 0x168))(param_2,param_1);
  }
  local_98 = (**(code **)(lVar13 + 0x88))(param_2,param_1);
  local_98 = (**(code **)(lVar13 + 0x80))(param_2,param_1);
  local_98 = (**(code **)(lVar13 + 0x70))(param_2,param_1);
  uVar21 = 0;
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(ushort *)(param_2 + 0x248) & 0x100) == 0)) {
    local_98 = FUN_1403440e0(param_2,0x15,param_2 + 0x18);
    if (local_98 != 0) {
      return (ulonglong)local_98;
    }
    uVar14 = 0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (local_94 == '\0') {
        uVar14 = FUN_1403440e0(param_2,0x10,param_2 + 0x18);
        if (uVar14 != 0) {
          return (ulonglong)uVar14;
        }
      }
      local_98 = uVar14;
      uVar14 = local_98;
      if (*(longlong *)(param_2 + 0x18) == 0) {
        uVar14 = FUN_1403440e0(param_2,1,param_2 + 0x18);
        if (uVar14 != 0) {
          return (ulonglong)uVar14;
        }
      }
    }
    local_98 = uVar14;
    uVar14 = FUN_1403440e0(param_2,0x16,param_2 + 0x20);
    if (uVar14 != 0) {
      return (ulonglong)uVar14;
    }
    local_98 = 0;
    if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_140343913;
  }
  else {
    if (local_94 == '\0') {
      local_98 = FUN_1403440e0(param_2,0x10,param_2 + 0x18);
      if (local_98 != 0) {
        return (ulonglong)local_98;
      }
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      uVar14 = FUN_1403440e0(param_2,1,param_2 + 0x18);
      if (uVar14 != 0) {
        return (ulonglong)uVar14;
      }
      local_98 = 0;
    }
LAB_140343913:
    if (local_93 == '\0') {
      local_98 = FUN_1403440e0(param_2,0x11,param_2 + 0x20);
      if (local_98 != 0) {
        return (ulonglong)local_98;
      }
    }
    if (*(longlong *)(param_2 + 0x20) == 0) {
      local_98 = FUN_1403440e0(param_2,2,param_2 + 0x20);
      if (local_98 != 0) {
        return (ulonglong)local_98;
      }
    }
  }
  uVar12 = FUN_1402f8160(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x20),&local_98);
  *(undefined8 *)(param_2 + 0x428) = uVar12;
  if (local_98 != 0) {
    return (ulonglong)local_98;
  }
  uVar14 = *(uint *)(param_2 + 8);
  if (((*(int *)(param_2 + 0x474) - 2U < 2) || (*(longlong *)(param_2 + 0x4e0) != 0)) ||
     (*(longlong *)(param_2 + 0x4e8) != 0)) {
    uVar14 = uVar14 | 0x4000;
  }
  if (bVar6) {
    if ((char)local_90 == '\0') {
      uVar14 = uVar14 | 1;
    }
    else {
      uVar14 = uVar14 | 0x20000;
    }
  }
  uVar10 = uVar14 | 0x18;
  if (((int)local_80 == 0) && (uVar10 = uVar14 | 0x218, *(int *)(param_2 + 0x270) == 0x30000)) {
    uVar10 = uVar14 | 0x18;
  }
  uVar14 = uVar10 | 4;
  if (*(int *)(param_2 + 0x27c) == 0) {
    uVar14 = uVar10;
  }
  uVar10 = uVar14 | 0x20;
  if (*(char *)(param_2 + 400) == '\0') {
    uVar10 = uVar14;
  }
  uVar14 = uVar10 | 0x40;
  if (*(int *)(param_2 + 0x498) == 0) {
    uVar14 = uVar10;
  }
  uVar10 = uVar14 | 0x100;
  if ((*(uint *)(param_2 + 0x410) & 1) == 0) {
    uVar10 = uVar14;
  }
  *(uint *)(param_2 + 8) = uVar10;
  if ((bVar6) && (*(short *)(param_2 + 0x208) != -1)) {
    uVar23 = *(ushort *)(param_2 + 0x248);
    uVar14 = uVar23 & 1;
    if ((uVar23 & 0x200) != 0) {
      uVar14 = 1;
    }
    uVar10 = uVar14 | 2;
    if ((uVar23 & 0x20) == 0) {
      uVar10 = uVar14;
    }
  }
  else {
    uVar14 = (*(ushort *)(param_2 + 300) & 1) * 2;
    uVar10 = uVar14 | 1;
    if ((*(ushort *)(param_2 + 300) & 2) == 0) {
      uVar10 = uVar14;
    }
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar10;
  FUN_14034d400(param_2);
  bVar5 = false;
  uVar19 = uVar21;
  if (*(int *)(param_2 + 0x38) < 1) {
LAB_140343ae4:
    if ((*(uint *)(param_2 + 8) & 0x200) == 0) goto LAB_140343b4e;
    local_74 = 0x10003;
    local_78 = 0x756e6963;
    local_80 = param_2;
    uVar14 = FUN_1402ef870(&DAT_140451350,0,&local_80,0);
    if (((uVar14 != 0) && ((uVar14 & 0xff) != 0xa3)) && ((uVar14 & 0xff) != 7)) {
      return (ulonglong)uVar14;
    }
    local_98 = 0;
    uVar19 = uVar21;
  }
  else {
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)(int)uVar19 * 8);
      puVar16 = &DAT_140451710;
      do {
        if ((*puVar16 == (uint)*(ushort *)(lVar13 + 0xc)) &&
           ((puVar16[1] == (uint)*(ushort *)(lVar13 + 0xe) || (puVar16[1] == 0xffffffff)))) {
          uVar14 = puVar16[2];
          *(uint *)(lVar13 + 8) = uVar14;
          if ((uVar14 == 0x756e6963) || (uVar14 == 0x73796d62)) {
            bVar5 = true;
          }
          goto LAB_140343ad6;
        }
        puVar16 = puVar16 + 3;
      } while (puVar16 < &DAT_140451794);
      *(undefined4 *)(lVar13 + 8) = 0;
LAB_140343ad6:
      uVar14 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_2 + 0x38));
    if (!bVar5) goto LAB_140343ae4;
LAB_140343b4e:
    uVar19 = (ulonglong)local_98;
  }
  uVar14 = *(uint *)(param_2 + 0x478);
  if (uVar14 != 0) {
    uVar23 = *(ushort *)(param_2 + 0x112);
    lVar13 = *(longlong *)(param_2 + 0x98);
    if ((uVar23 == 0) || (*(short *)(param_2 + 0x208) == -1)) {
      uVar23 = 1;
    }
    else {
      local_8c = (uint)*(ushort *)(param_2 + 0x20a);
    }
    local_a0 = &local_98;
    local_a8 = 0;
    local_80 = lVar13;
    uVar12 = FUN_1402f80b0(lVar13,0x10,0,uVar14);
    *(undefined8 *)(param_2 + 0x30) = uVar12;
    if (local_98 != 0) {
      return (ulonglong)local_98;
    }
    local_a0 = &local_98;
    local_a8 = 0;
    lVar13 = FUN_1402f7ff0(lVar13,4,0,uVar14);
    uVar19 = uVar21;
    if (local_98 != 0) {
      return (ulonglong)local_98;
    }
    do {
      lVar4 = *(longlong *)(param_2 + 0x30);
      local_98 = (**(code **)(local_88 + 0xe8))(param_2,uVar19,&local_68);
      if (local_98 == 0) {
        puVar22 = (undefined2 *)(uVar21 * 0x10 + lVar4);
        *puVar22 = (short)(local_54 >> 6);
        puVar22[1] = (short)((int)((uint)local_68 * (int)(short)local_8c + (uint)(uVar23 >> 1)) /
                            (int)(uint)uVar23);
        *(uint *)(puVar22 + 4) = (uint)local_68 << 6;
        *(uint *)(puVar22 + 6) = (uint)local_66 << 6;
        *(uint *)(puVar22 + 2) = (uint)local_66 << 6;
        if ((local_68 != 0) && (local_66 != 0)) {
          *(int *)(lVar13 + uVar21 * 4) = (int)uVar19;
          uVar21 = (ulonglong)((int)uVar21 + 1);
        }
      }
      uVar10 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar10;
    } while (uVar10 < uVar14);
    local_a0 = &local_98;
    local_a8 = lVar13;
    uVar12 = FUN_1402f7ff0(local_80,4,uVar14,uVar21);
    uVar19 = (ulonglong)local_98;
    if ((int)uVar21 != 0) {
      *(undefined8 *)(param_2 + 0x480) = uVar12;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
      *(int *)(param_2 + 0x28) = (int)uVar21;
    }
  }
  uVar14 = *(uint *)(param_2 + 8);
  if ((uVar14 & 3) == 0) {
    uVar14 = uVar14 | 1;
    *(uint *)(param_2 + 8) = uVar14;
  }
  if ((uVar14 & 0x20001) == 0) {
    return uVar19;
  }
  *(int *)(param_2 + 0x58) = (int)*(short *)(param_2 + 0x124);
  *(int *)(param_2 + 0x5c) = (int)*(short *)(param_2 + 0x126);
  *(int *)(param_2 + 0x60) = (int)*(short *)(param_2 + 0x128);
  *(int *)(param_2 + 100) = (int)*(short *)(param_2 + 0x12a);
  *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x248) & 0x80) == 0)) {
    sVar1 = *(short *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar1;
    sVar2 = *(short *)(param_2 + 0x13e);
    *(short *)(param_2 + 0x6c) = sVar2;
    sVar17 = (*(short *)(param_2 + 0x140) - sVar2) + sVar1;
    *(short *)(param_2 + 0x6e) = sVar17;
    if ((sVar1 != 0) || ((sVar2 != 0 || (*(short *)(param_2 + 0x208) == -1)))) goto LAB_140343d55;
    sVar17 = *(short *)(param_2 + 0x24e);
    if ((sVar17 != 0) || (*(short *)(param_2 + 0x250) != 0)) goto LAB_140343d35;
    *(short *)(param_2 + 0x6a) = *(short *)(param_2 + 0x254);
    *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x256);
    sVar17 = *(short *)(param_2 + 0x254) + *(short *)(param_2 + 0x256);
  }
  else {
    sVar17 = *(short *)(param_2 + 0x24e);
LAB_140343d35:
    *(short *)(param_2 + 0x6a) = sVar17;
    *(short *)(param_2 + 0x6c) = *(short *)(param_2 + 0x250);
    sVar17 = (*(short *)(param_2 + 0x252) - *(short *)(param_2 + 0x250)) + sVar17;
  }
  *(short *)(param_2 + 0x6e) = sVar17;
LAB_140343d55:
  *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
  if (*(char *)(param_2 + 400) != '\0') {
    sVar17 = *(short *)(param_2 + 0x1a2);
  }
  *(short *)(param_2 + 0x72) = sVar17;
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x27a);
  *(short *)(param_2 + 0x74) = *(short *)(param_2 + 0x278) - *(short *)(param_2 + 0x27a) / 2;
  return uVar19;
}

