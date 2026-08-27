// Function: FUN_140342ea0
// Addr: 140342ea0
// Size: 1342 bytes


ulonglong FUN_140342ea0(undefined8 param_1,undefined4 *param_2,uint param_3,uint param_4,
                       uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *_Buf1;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_78;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  void *local_50;
  uint local_48;
  undefined8 local_40;
  
  puVar8 = *(undefined8 **)(param_2 + 0xb4);
  uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  local_res20[0] = param_4;
  local_58 = param_3;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1402f04b0(uVar10,&DAT_14043bd54);
    if (puVar8 == (undefined8 *)0x0) {
      return 0xb;
    }
    *(undefined8 **)(param_2 + 0xb4) = puVar8;
    *(undefined8 *)(param_2 + 0xa8) = *puVar8;
  }
  uVar9 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(undefined8 *)(param_2 + 0xb6) = uVar9;
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    uVar9 = FUN_1402f0420(uVar10,"truetype");
    uVar9 = FUN_1402f81e0(uVar9,"multi-masters",0);
    *(undefined8 *)(param_2 + 0xb8) = uVar9;
  }
  if (*(longlong *)(param_2 + 0xba) == 0) {
    uVar10 = FUN_1402f0420(uVar10,"truetype");
    uVar10 = FUN_1402f81e0(uVar10,"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xba) = uVar10;
  }
  if (*(longlong *)(param_2 + 0xbc) == 0) {
    uVar10 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xbc) = uVar10;
  }
  uVar11 = FUN_14034bf60(param_1,param_2,local_res18,&param_5);
  local_res20[0] = (uint)uVar11;
  if (local_res20[0] != 0) {
    return uVar11;
  }
  uVar13 = -param_3;
  if ((int)-param_3 < 0) {
    uVar13 = param_3;
  }
  uVar17 = uVar13 & 0xffff;
  uVar6 = uVar17;
  if (((int)param_3 < 0) && (uVar6 = uVar17 - 1, uVar17 == 0)) {
    uVar6 = uVar17;
  }
  if ((int)param_2[0x38] <= (int)uVar6) {
    if (-1 < (int)param_3) {
      return 6;
    }
    uVar6 = 0;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uVar11 = FUN_1402f5c50(uVar10,*(undefined4 *)
                                 (*(longlong *)(param_2 + 0x3a) + (longlong)(int)uVar6 * 4));
  local_res20[0] = (uint)uVar11;
  if (local_res20[0] != 0) {
    return uVar11;
  }
  uVar11 = (*(code *)puVar8[0x18])(param_2,uVar10);
  local_res20[0] = (uint)uVar11;
  if (local_res20[0] != 0) {
    return uVar11;
  }
  local_40 = *(undefined8 *)(param_2 + 0x26);
  iVar16 = (int)uVar13 >> 0x10;
  local_50 = (void *)0x0;
  local_5c = iVar16;
  iVar7 = (**(code **)(param_2 + 0xa8))(param_2,0x66766172,uVar10,&local_68);
  if ((((iVar7 == 0) && (0x13 < local_68)) &&
      (param_5 = FUN_1402f58c0(uVar10,local_res20), local_res20[0] == 0)) &&
     ((uVar1 = FUN_1402f5ac0(uVar10,local_res20), local_res20[0] == 0 &&
      (local_res20[0] = FUN_1402f5c90(uVar10,2), local_res20[0] == 0)))) {
    uVar2 = FUN_1402f5ac0(uVar10,local_res20);
    uVar13 = (uint)uVar2;
    if (local_res20[0] != 0) goto LAB_1403431c9;
    uVar3 = FUN_1402f5ac0(uVar10,local_res20);
    uVar6 = (uint)uVar3;
    if (local_res20[0] != 0) goto LAB_1403431c9;
    uVar4 = FUN_1402f5ac0(uVar10,local_res20);
    uVar17 = (uint)uVar4;
    local_60 = (uint)uVar4;
    if (local_res20[0] != 0) goto LAB_1403431c9;
    uVar5 = FUN_1402f5ac0(uVar10,local_res20);
    local_64 = (uint)uVar5;
    if (local_res20[0] != 0) goto LAB_1403431c9;
    local_78 = (uint)uVar1;
    if (((param_5 == 0x10000) && (uVar3 == 0x14)) && (uVar6 = 0x14, (ushort)(uVar2 - 1) < 0x3ffe)) {
      if (((((uint)uVar5 == (uint)uVar2 * 4 + 4) || ((uint)uVar5 == (uint)uVar2 * 4 + 6)) &&
          (uVar4 < 0x7f00)) &&
         ((uint)uVar4 * (uint)uVar5 + local_78 + ((uint)uVar2 + (uint)uVar2 * 4) * 4 <= local_68)) {
        param_2[0x104] = param_2[0x104] | 1;
        param_5 = 0x14;
        goto LAB_1403431ec;
      }
    }
  }
  else {
LAB_1403431c9:
    uVar13 = 0;
    local_78 = 0;
    uVar6 = 0;
    local_64 = 0;
  }
  uVar17 = 0;
  local_60 = 0;
  param_5 = uVar6;
LAB_1403431ec:
  if ((*(byte *)(param_2 + 0x104) & 1) == 0) {
    _Buf1 = (void *)0x0;
  }
  else {
    uVar6 = uVar13 * 4;
    local_48 = uVar6;
    _Buf1 = (void *)FUN_1402f7fa0(local_40,uVar6,local_res20);
    if ((local_res20[0] == 0) &&
       (local_50 = (void *)FUN_1402f7fa0(local_40,uVar6,local_res20), local_res20[0] == 0)) {
      iVar7 = FUN_1402f54a0(uVar10);
      uVar6 = param_5;
      uVar15 = 0;
      iVar16 = iVar7 + local_78 + -8;
      pvVar14 = _Buf1;
      if (uVar13 != 0) {
        do {
          local_res20[0] = FUN_1402f5530(uVar10,iVar16,pvVar14,4);
          iVar16 = iVar16 + uVar6;
          uVar15 = uVar15 + 1;
          pvVar14 = (void *)((longlong)pvVar14 + 4);
        } while (uVar15 < uVar13);
      }
      uVar15 = local_48;
      uVar6 = local_64;
      uVar12 = 0;
      iVar16 = uVar13 * param_5 + -0xc + iVar7 + local_78;
      uVar13 = uVar17;
      if (uVar17 != 0) {
        uVar11 = (ulonglong)local_48;
        do {
          local_res20[0] = FUN_1402f5530(uVar10,iVar16,local_50,uVar15);
          iVar7 = memcmp(_Buf1,local_50,uVar11);
          uVar13 = local_60;
          if (iVar7 == 0) break;
          uVar12 = uVar12 + 1;
          iVar16 = iVar16 + (uVar6 & 0xffff);
        } while (uVar12 < uVar17);
      }
      param_2[0x109] = uVar12 + 1;
      bVar18 = uVar12 == uVar17;
      iVar16 = local_5c;
      uVar17 = uVar13;
      if (bVar18) {
        uVar17 = (uint)(ushort)((short)uVar13 + 1);
      }
    }
  }
  FUN_1402f7f90(local_40,_Buf1);
  FUN_1402f7f90(local_40,local_50);
  iVar7 = (**(code **)(param_2 + 0xa8))(param_2,0x676c7966,uVar10,0);
  if (((iVar7 != 0) &&
      (iVar7 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,uVar10,0), iVar7 != 0)) &&
     (iVar7 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,uVar10,0), iVar7 == 0)) {
    uVar17 = 0;
  }
  if ((int)(uVar17 & 0xffff) < iVar16) {
    if (-1 < (int)local_58) {
      return 6;
    }
    uVar17 = 0;
  }
  param_2[3] = uVar17 << 0x10;
  *param_2 = param_2[0x38];
  param_2[1] = local_58;
  return (ulonglong)local_res20[0];
}

