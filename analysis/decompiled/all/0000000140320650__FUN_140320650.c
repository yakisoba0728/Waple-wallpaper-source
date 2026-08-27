// Function: FUN_140320650
// Addr: 140320650
// Size: 2884 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140320650(longlong param_1,longlong *param_2,uint param_3,ulonglong param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_938 [32];
  uint *local_918;
  undefined8 local_910;
  code *local_908;
  code *local_900;
  char local_8f8;
  undefined2 local_8f4;
  uint local_8f0;
  int local_8ec;
  uint local_8e8;
  uint local_8e4;
  uint local_8e0;
  undefined8 local_8d8;
  undefined8 *local_8d0;
  undefined8 local_8c8;
  uint local_8c0;
  undefined1 local_8b8 [56];
  uint local_880;
  int local_878;
  int local_874;
  undefined1 local_85e;
  longlong local_858;
  code *local_840;
  undefined4 local_550;
  undefined1 local_547;
  undefined8 local_468;
  int local_460;
  int local_45c;
  undefined8 local_458;
  ushort local_450;
  short local_44e;
  short local_44c;
  ushort local_44a;
  int local_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined1 local_438 [992];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_938;
  lVar17 = *(longlong *)(param_1 + 8);
  uVar25 = (ulonglong)param_3;
  uVar23 = (uint)param_4;
  lVar5 = *(longlong *)(lVar17 + 0x3e0);
  if ((*(int *)(lVar5 + 0x660) == 0xffff) || (*(longlong *)(lVar5 + 0x4e0) == 0)) {
    if (*(uint *)(lVar5 + 0x20) <= param_3) {
      return 6;
    }
  }
  else if (param_3 != 0) {
    if (*(uint *)(lVar5 + 0x4e8) < param_3) {
      return 6;
    }
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x4e0) + uVar25 * 2);
    uVar25 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      return 6;
    }
  }
  local_468 = *(ulonglong *)(lVar17 + 0x2f8);
  local_8d0 = *(undefined8 **)(local_468 + 0x50);
  uVar24 = (uint)uVar25;
  local_8e0 = uVar23;
  if (((((int)param_2[8] != -1) && ((param_4 & 8) == 0)) &&
      (lVar6 = *param_2, (*(uint *)(lVar6 + 4) & 0x7fff0000) == 0)) &&
     ((*(uint *)(lVar6 + 8) & 0x8000) == 0)) {
    local_908 = (code *)&local_458;
    local_910 = param_1 + 0x68;
    local_918 = *(uint **)(lVar6 + 0xa0);
    iVar12 = (**(code **)(*(longlong *)(lVar6 + 0x2d0) + 0x98))(lVar17,(int)param_2[8],uVar25);
    if (iVar12 == 0) {
      *(uint *)(param_1 + 0x30) = (uint)local_458._2_2_ << 6;
      *(uint *)(param_1 + 0x34) = (uint)(ushort)local_458 << 6;
      *(int *)(param_1 + 0x38) = (int)local_458._4_2_ << 6;
      *(int *)(param_1 + 0x3c) = (int)local_458._6_2_ << 6;
      *(uint *)(param_1 + 0x40) = (uint)local_450 << 6;
      *(int *)(param_1 + 0x44) = (int)local_44e << 6;
      *(int *)(param_1 + 0x48) = (int)local_44c << 6;
      *(uint *)(param_1 + 0x4c) = (uint)local_44a << 6;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      iVar12 = (int)local_44c;
      iVar4 = (int)local_44e;
      if ((uVar23 >> 4 & 1) == 0) {
        iVar12 = (int)local_458._6_2_;
        iVar4 = (int)local_458._4_2_;
      }
      *(int *)(param_1 + 0x90) = iVar4;
      *(int *)(param_1 + 0x94) = iVar12;
      local_918 = (uint *)&local_8f4;
      (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,0,uVar25,&local_8f0);
      *(uint *)(param_1 + 0x50) = (uint)local_8f4;
      if ((*(char *)(lVar17 + 400) != '\0') && (*(short *)(lVar17 + 0x1ba) != 0)) {
        local_918 = (uint *)&local_8f4;
        (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,uVar25,&local_8f0);
        *(uint *)(param_1 + 0x54) = (uint)local_8f4;
        return 0;
      }
      if (*(short *)(lVar17 + 0x208) == -1) {
        sVar2 = *(short *)(lVar17 + 0x13e);
        sVar3 = *(short *)(lVar17 + 0x13c);
      }
      else {
        sVar2 = *(short *)(lVar17 + 0x250);
        sVar3 = *(short *)(lVar17 + 0x24e);
      }
      *(int *)(param_1 + 0x54) = (int)sVar3 - (int)sVar2;
      return 0;
    }
  }
  if ((uVar23 >> 0xe & 1) != 0) {
    return 6;
  }
  if (((uVar23 & 0x1100000) == 0x100000) && (*(longlong *)(lVar17 + 0x4e8) != 0)) {
    if (((short)param_2[3] == 0) || (*(short *)((longlong)param_2 + 0x1a) == 0)) {
      return 0x24;
    }
    lVar6 = *(longlong *)(lVar17 + 0x2d0);
    iVar12 = (**(code **)(lVar6 + 0x178))(param_1,uVar25);
    if (iVar12 == 0) {
      iVar12 = *(int *)((longlong)param_2 + 0x1c);
      local_918 = &local_8e8;
      lVar5 = param_2[4];
      *(undefined4 *)(param_1 + 0x60) = 0x53564720;
      (**(code **)(lVar6 + 0x150))(lVar17,0,uVar25,&local_8f0);
      local_918 = (uint *)&local_8f4;
      (**(code **)(lVar6 + 0x150))(lVar17,1,uVar25,&local_8f0);
      lVar17 = (longlong)iVar12 * (ulonglong)(ushort)local_8e8;
      *(uint *)(param_1 + 0x50) = (uint)(ushort)local_8e8;
      *(uint *)(param_1 + 0x54) = (uint)local_8f4;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (longlong)(int)lVar5 * (ulonglong)local_8f4;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      return 0;
    }
  }
  local_8f8 = '\0';
  uVar14 = param_4 >> 1 & 0x7fffffff;
  uVar14 = CONCAT71((int7)(uVar14 >> 8),~(byte)uVar14) & 0xffffffffffffff01;
  bVar15 = ~(byte)param_4 & 1;
  local_8e4 = (uint)uVar14;
  local_8f4 = CONCAT11(local_8f4._1_1_,~(byte)param_4) & 0xff01;
  *(byte *)(param_1 + 0xf9) = bVar15;
  *(char *)(param_1 + 0xf8) = (char)uVar14;
  if (bVar15 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0x10000;
    uVar13 = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar13 = (undefined4)param_2[4];
  }
  *(undefined4 *)(param_1 + 0x100) = uVar13;
  uVar23 = *(uint *)(lVar5 + 0x8a8);
  if (uVar23 == 0) {
    local_448 = *(int *)(lVar5 + 0x60c);
    iStack_444 = *(int *)(lVar5 + 0x610);
    iStack_440 = *(int *)(lVar5 + 0x614);
    iStack_43c = *(int *)(lVar5 + 0x618);
    uVar14 = *(ulonglong *)(lVar5 + 0x624);
    local_458 = uVar14;
  }
  else {
    puVar7 = *(undefined1 **)(lVar5 + 0x10b8);
    bVar21 = 0;
    bVar15 = bVar21;
    if (puVar7 != (undefined1 *)0x0) {
      if (*(char *)(lVar5 + 0x10b0) == '\0') {
        bVar15 = puVar7[uVar25];
      }
      else if (*(char *)(lVar5 + 0x10b0) == '\x03') {
        if (uVar24 - *(int *)(lVar5 + 0x10c4) < *(uint *)(lVar5 + 0x10c8)) {
          bVar15 = *(byte *)(lVar5 + 0x10cc);
        }
        else {
          pbVar18 = puVar7 + 2;
          uVar22 = (uint)CONCAT11(*puVar7,puVar7[1]);
          if (CONCAT11(*puVar7,puVar7[1]) <= uVar24) {
            do {
              bVar15 = *pbVar18;
              pbVar19 = pbVar18 + 3;
              uVar16 = (uint)CONCAT11(pbVar18[1],pbVar18[2]);
              if (uVar24 < uVar16) {
                *(uint *)(lVar5 + 0x10c4) = uVar22;
                *(uint *)(lVar5 + 0x10c8) = uVar16 - uVar22;
                *(byte *)(lVar5 + 0x10cc) = bVar15;
                break;
              }
              pbVar18 = pbVar19;
              bVar15 = bVar21;
              uVar22 = uVar16;
            } while (pbVar19 < puVar7 + *(uint *)(lVar5 + 0x10c0));
          }
        }
      }
    }
    if (uVar23 <= bVar15) {
      bVar15 = (char)uVar23 - 1;
    }
    iVar12 = *(int *)(lVar5 + 0x620);
    lVar6 = lVar5 + (ulonglong)bVar15 * 8;
    lVar8 = *(longlong *)(lVar6 + 0x8b0);
    local_8ec = *(int *)(lVar8 + 0x40);
    local_448 = *(int *)(lVar8 + 0x2c);
    iStack_444 = *(int *)(lVar8 + 0x30);
    iStack_440 = *(int *)(lVar8 + 0x34);
    iStack_43c = *(int *)(lVar8 + 0x38);
    uVar14 = *(ulonglong *)(*(longlong *)(lVar6 + 0x8b0) + 0x44);
    local_458 = uVar14;
    if (iVar12 != local_8ec) {
      uVar13 = FUN_1402f20b0(*(undefined4 *)(param_1 + 0xfc),iVar12,local_8ec);
      *(undefined4 *)(param_1 + 0xfc) = uVar13;
      uVar13 = FUN_1402f20b0(*(undefined4 *)(param_1 + 0x100),iVar12,local_8ec);
      *(undefined4 *)(param_1 + 0x100) = uVar13;
      local_8f8 = '\x01';
    }
  }
  uVar23 = local_8e0;
  local_900 = FUN_14031f220;
  local_908 = FUN_14031f280;
  local_910 = CONCAT44(local_910._4_4_,(int)local_8e0 >> 0x10) & 0xffffffff0000000f;
  local_918 = (uint *)CONCAT71(local_918._1_7_,(char)local_8e4);
  (*(code *)*local_8d0)(local_8b8,lVar17,param_2,param_1);
  if ((uVar23 >> 8 & 1) != 0) {
    local_547 = 1;
  }
  local_8e8 = uVar23 & 0x400;
  local_85e = local_8e8 != 0;
  local_8ec = (*(code *)local_8d0[1])(local_8b8,param_2,uVar25);
  if (local_8ec != 0) {
    return local_8ec;
  }
  puVar9 = *(undefined8 **)(*(longlong *)(lVar17 + 0xd0) + 0x50);
  if (puVar9 == (undefined8 *)0x0) {
    local_8ec = FUN_14031f2f0(*(longlong *)(lVar17 + 0x3e0) + 0x4f0,uVar25,&local_8d8,&local_8f0);
    uVar23 = local_8f0;
  }
  else {
    local_8ec = (**(code **)*puVar9)(puVar9[1],uVar25,&local_8c8);
    local_8d8 = local_8c8;
    uVar23 = local_8c0;
  }
  if (local_8ec != 0) {
    return local_8ec;
  }
  (**(code **)(local_468 + 0x30))(local_438,local_8b8,0);
  local_8ec = (*(code *)local_8d0[2])(local_438,local_8d8,uVar23);
  if ((char)local_8ec == -0x5c) {
    local_8e4 = local_8e4 & 0xffffff00;
    local_8f8 = '\x01';
    *(undefined1 *)(param_1 + 0xf8) = 0;
    local_8ec = (*(code *)local_8d0[2])(local_438,local_8d8,uVar23);
  }
  plVar10 = *(longlong **)(*(longlong *)(lVar17 + 0xd0) + 0x50);
  if (plVar10 == (longlong *)0x0) {
    if (*(longlong *)(*(longlong *)(lVar17 + 0x3e0) + 0x518) == 0) {
      FUN_1402f5c00(*(undefined8 *)(*(longlong *)(lVar17 + 0x3e0) + 0x4f0),&local_8d8);
    }
  }
  else {
    local_8c8 = local_8d8;
    (**(code **)(*plVar10 + 8))(plVar10[1],&local_8c8);
  }
  if (local_8ec == 0) {
    if (*(longlong *)(*(longlong *)(lVar17 + 0xd0) + 0x50) == 0) {
      if (*(longlong *)(lVar5 + 0x510) != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x518);
        uVar24 = *(uint *)(*(longlong *)(lVar5 + 0x510) + uVar25 * 4);
        *(uint *)(param_1 + 0xd8) = uVar23;
        *(ulonglong *)(param_1 + 0xd0) = (ulonglong)uVar24 + lVar6 + -1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    (*local_840)(local_8b8);
    plVar10 = *(longlong **)(*(longlong *)(lVar17 + 0xd0) + 0x50);
    if ((plVar10 != (longlong *)0x0) && (*(code **)(*plVar10 + 0x10) != (code *)0x0)) {
      local_460 = local_878;
      local_45c = local_874;
      local_468 = (ulonglong)local_880;
      local_8ec = (**(code **)(*plVar10 + 0x10))(plVar10[1],uVar25,0,&local_468);
      local_878 = local_460;
      local_874 = local_45c;
      local_880 = (uint)local_468;
      if (local_8ec != 0) {
        return local_8ec;
      }
    }
    if (local_8e8 != 0) {
      lVar17 = *(longlong *)(param_1 + 0xf0);
      *(uint *)(param_1 + 0x38) = local_880;
      *(undefined4 *)(param_1 + 0x40) = local_550;
      *(ulonglong *)(lVar17 + 0x10) = CONCAT44(iStack_444,local_448);
      *(ulonglong *)(lVar17 + 0x18) = CONCAT44(iStack_43c,iStack_440);
      *(ulonglong *)(lVar17 + 0x20) = uVar14;
      *(undefined1 *)(lVar17 + 0xc) = 1;
      return local_8ec;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0xb8) = 4;
    if (*(ushort *)((longlong)param_2 + 0x1a) < 0x18) {
      *(undefined4 *)(param_1 + 0xb8) = 0x104;
    }
    if (*(short *)(lVar17 + 0x15a) == 0) {
      *(undefined4 *)(param_1 + 0x40) = local_550;
      *(undefined4 *)(param_1 + 0x50) = local_550;
    }
    else {
      local_918 = &local_8e8;
      local_8f0 = local_8f0 & 0xffff0000;
      local_8e8 = 0;
      (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,0,uVar25,&local_8f0);
      *(uint *)(param_1 + 0x40) = local_8e8 & 0xffff;
      *(int *)(param_1 + 0x38) = (int)(short)local_8f0;
      *(uint *)(param_1 + 0x50) = local_8e8 & 0xffff;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
    if ((*(char *)(lVar17 + 400) == '\0') || (*(short *)(lVar17 + 0x1ba) == 0)) {
      bVar11 = false;
      if (*(short *)(lVar17 + 0x208) == -1) {
        sVar2 = *(short *)(lVar17 + 0x13e);
        sVar3 = *(short *)(lVar17 + 0x13c);
      }
      else {
        sVar2 = *(short *)(lVar17 + 0x250);
        sVar3 = *(short *)(lVar17 + 0x24e);
      }
      uVar23 = (int)sVar3 - (int)sVar2;
    }
    else {
      local_918 = &local_8e8;
      local_8f0 = local_8f0 & 0xffff0000;
      local_8e8 = local_8e8 & 0xffff0000;
      bVar11 = true;
      (**(code **)(*(longlong *)(lVar17 + 0x2d0) + 0x150))(lVar17,1,uVar25,&local_8f0);
      uVar23 = local_8e8 & 0xffff;
      *(int *)(param_1 + 0x48) = (int)(short)local_8f0;
    }
    *(uint *)(param_1 + 0x4c) = uVar23;
    *(uint *)(param_1 + 0x54) = uVar23;
    if ((((local_448 != 0x10000) || (iStack_43c != 0x10000)) || (iStack_444 != 0)) ||
       (iStack_440 != 0)) {
      FUN_1402f36a0(param_1 + 0x98,&local_448);
      lVar17 = (longlong)*(int *)(param_1 + 0x40) * (longlong)local_448;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iStack_43c;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
    }
    iVar12 = local_458._4_4_;
    if (((int)uVar14 != 0) || (local_458._4_4_ != 0)) {
      FUN_1402f3790(param_1 + 0x98,uVar14 & 0xffffffff,local_458._4_4_);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)uVar14;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar12;
    }
    if (((char)local_8f4 != '\0') || (local_8f8 != '\0')) {
      iVar12 = *(int *)(param_1 + 0xfc);
      iVar4 = *(int *)(param_1 + 0x100);
      if (((char)local_8e4 == '\0') || (local_858 == 0)) {
        uVar23 = (uint)*(ushort *)(param_1 + 0x9a);
        piVar20 = *(int **)(param_1 + 0xa0);
        if (*(ushort *)(param_1 + 0x9a) != 0) {
          do {
            lVar17 = (longlong)*piVar20 * (longlong)iVar12;
            uVar23 = uVar23 - 1;
            *piVar20 = (int)((ulonglong)(lVar17 + (lVar17 >> 0x3f) + 0x8000) >> 0x10);
            lVar17 = (longlong)piVar20[1] * (longlong)iVar4;
            piVar20[1] = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
            piVar20 = piVar20 + 2;
          } while (0 < (int)uVar23);
        }
      }
      lVar17 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar12;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar4;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
    }
    FUN_1402f3050(param_1 + 0x98,&local_468);
    *(uint *)(param_1 + 0x38) = (uint)local_468;
    *(uint *)(param_1 + 0x30) = local_460 - (uint)local_468;
    *(int *)(param_1 + 0x34) = local_45c - local_468._4_4_;
    *(int *)(param_1 + 0x3c) = local_45c;
    if (bVar11) {
      *(uint *)(param_1 + 0x44) = (uint)local_468 - *(int *)(param_1 + 0x40) / 2;
      lVar17 = (longlong)*(int *)(param_1 + 0x100) * (longlong)*(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      return local_8ec;
    }
    if ((local_8e0 & 0x10) != 0) {
      FUN_1402f8f80(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
      return local_8ec;
    }
    return local_8ec;
  }
  return local_8ec;
}

