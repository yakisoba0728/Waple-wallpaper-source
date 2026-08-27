// Function: FUN_140061280
// Addr: 140061280
// Size: 1730 bytes


void FUN_140061280(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  float *param_5,int *param_6)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *_Buf1;
  int iVar11;
  undefined1 *puVar12;
  undefined8 *_Buf2;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  float *local_1d8;
  int *local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined1 local_178 [32];
  undefined1 local_158;
  undefined1 local_157;
  char local_156;
  byte local_155;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  byte local_b5;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 *local_38;
  undefined8 *local_30;
  
  uVar6 = FUN_140086de0(param_3,"direction","");
  lVar7 = FUN_140086de0(param_3,"position","");
  cVar4 = FUN_1400886e0(uVar6);
  if (cVar4 == '\0') {
    return;
  }
  if (2 < *(byte *)(lVar7 + 8) - 1) {
    return;
  }
  fVar16 = (float)FUN_140086220(lVar7);
  if (fVar16 <= 0.0) {
    return;
  }
  if (DAT_140492704 <= fVar16) {
    return;
  }
  iVar5 = FUN_140085ee0(uVar6);
  FUN_140016fc0(local_178,param_4);
  local_158 = *(undefined1 *)(param_4 + 0x20);
  local_14c = *(int *)(param_4 + 0x2c);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  uStack_128 = *(undefined8 *)(param_4 + 0x50);
  local_157 = *(undefined1 *)(param_4 + 0x21);
  local_148 = *(int *)(param_4 + 0x30);
  local_156 = *(undefined1 *)(param_4 + 0x22);
  local_144 = *(int *)(param_4 + 0x34);
  local_155 = *(byte *)(param_4 + 0x23);
  local_140 = *(int *)(param_4 + 0x38);
  local_154 = *(undefined4 *)(param_4 + 0x24);
  local_13c = *(int *)(param_4 + 0x3c);
  local_150 = *(int *)(param_4 + 0x28);
  local_138 = *(int *)(param_4 + 0x40);
  local_120 = *(undefined4 *)(param_4 + 0x58);
  uStack_11c = *(undefined4 *)(param_4 + 0x5c);
  uStack_118 = *(undefined4 *)(param_4 + 0x60);
  uStack_114 = *(undefined4 *)(param_4 + 100);
  local_134 = *(int *)(param_4 + 0x44);
  FUN_140016fc0(local_110,param_4 + 0x68);
  local_f0 = *(undefined4 *)(param_4 + 0x88);
  local_e8 = *(undefined8 *)(param_4 + 0x90);
  FUN_140016fc0(local_d8,param_4);
  local_b8 = *(undefined1 *)(param_4 + 0x20);
  local_90 = *(undefined4 *)(param_4 + 0x48);
  uStack_8c = *(undefined4 *)(param_4 + 0x4c);
  uStack_88 = *(undefined4 *)(param_4 + 0x50);
  uStack_84 = *(undefined4 *)(param_4 + 0x54);
  local_b7 = *(undefined1 *)(param_4 + 0x21);
  local_80 = *(undefined8 *)(param_4 + 0x58);
  uStack_78 = *(undefined8 *)(param_4 + 0x60);
  local_b6 = *(undefined1 *)(param_4 + 0x22);
  local_b5 = *(byte *)(param_4 + 0x23);
  local_b4 = *(undefined4 *)(param_4 + 0x24);
  local_b0 = *(int *)(param_4 + 0x28);
  local_ac = *(int *)(param_4 + 0x2c);
  local_a8 = *(undefined8 *)(param_4 + 0x30);
  local_a0 = *(int *)(param_4 + 0x38);
  local_9c = *(int *)(param_4 + 0x3c);
  local_98 = *(undefined8 *)(param_4 + 0x40);
  FUN_140016fc0(local_70,param_4 + 0x68);
  local_50 = *(undefined4 *)(param_4 + 0x88);
  local_48 = *(undefined8 *)(param_4 + 0x90);
  *(byte *)(param_4 + 0x23) = *(byte *)(param_4 + 0x23) | 1;
  local_156 = (char)*param_6 + '\x01';
  iVar11 = *param_6 + 2;
  *param_6 = iVar11;
  local_b6 = (undefined1)iVar11;
  FUN_14003a8b0(&local_1c8,param_1,&DAT_140477f2c);
  FUN_14003a8b0(&local_1a8,param_1,&DAT_140477f30);
  local_155 = local_155 | 2;
  local_b5 = local_b5 | 2;
  if (iVar5 == 1) {
    iVar11 = *(int *)(param_4 + 0x34);
    iVar5 = *(int *)(param_4 + 0x2c);
    fVar16 = (float)FUN_140086220(lVar7);
    iVar11 = (int)(fVar16 * (float)(iVar11 - iVar5));
    local_ac = local_ac + iVar11;
    local_144 = local_14c + iVar11;
    local_134 = local_13c + iVar11;
    local_9c = local_9c + iVar11;
  }
  else {
    iVar11 = *(int *)(param_4 + 0x30);
    iVar5 = *(int *)(param_4 + 0x28);
    fVar16 = (float)FUN_140086220(lVar7);
    iVar11 = (int)(fVar16 * (float)(iVar11 - iVar5));
    local_b0 = local_b0 + iVar11;
    local_148 = local_150 + iVar11;
    local_138 = local_140 + iVar11;
    local_a0 = local_a0 + iVar11;
  }
  puVar12 = &local_1c8;
  if (0xf < local_1b0) {
    puVar12 = (undefined1 *)CONCAT71(uStack_1c7,local_1c8);
  }
  lVar7 = FUN_140086de0(param_2,puVar12,puVar12 + local_1b8);
  puVar14 = auStack_1f8;
  puVar12 = &local_1a8;
  if (0xf < local_190) {
    puVar12 = (undefined1 *)CONCAT71(uStack_1a7,local_1a8);
  }
  lVar8 = FUN_140086de0(param_2,puVar12,puVar12 + local_198);
  local_188 = lVar8;
  if (*(char *)(lVar7 + 8) == '\a') {
    local_1d0 = param_6;
    local_1d8 = param_5;
    FUN_140061280(&local_1c8,param_2,lVar7,local_178);
  }
  else {
    uVar13 = 0xcbf29ce484222325;
    puVar12 = &local_1c8;
    if (0xf < local_1b0) {
      puVar12 = (undefined1 *)CONCAT71(uStack_1c7,local_1c8);
    }
    uVar10 = 0;
    if (local_1b8 != 0) {
      do {
        pbVar1 = puVar12 + uVar10;
        uVar10 = uVar10 + 1;
        uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
      } while (uVar10 < local_1b8);
    }
    FUN_1400110a0(param_5,&local_38,&local_1c8,uVar13);
    puVar9 = local_30;
    if (local_30 != (undefined8 *)0x0) goto LAB_1400617f4;
    if (*(longlong *)(param_5 + 4) == 0x147ae147ae147ae) goto LAB_140061936;
    puVar9 = (undefined8 *)FUN_14028af20(200);
    FUN_140016fc0(puVar9 + 2,&local_1c8);
    puVar9[10] = 0;
    puVar9[0x17] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0xf;
    *(undefined1 *)(puVar9 + 6) = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
    puVar9[0x15] = 0;
    puVar9[0x16] = 0xf;
    *(undefined1 *)(puVar9 + 0x13) = 0;
    puVar9[0x18] = 0;
    fVar16 = (float)(*(longlong *)(param_5 + 4) + 1) / (float)*(ulonglong *)(param_5 + 0xe);
    if (*param_5 <= fVar16 && fVar16 != *param_5) {
      FUN_14007cf50(param_5);
      puVar15 = *(undefined8 **)
                 (*(longlong *)(param_5 + 6) + 8 + (uVar13 & *(ulonglong *)(param_5 + 0xc)) * 0x10);
      local_38 = *(undefined8 **)(param_5 + 2);
      lVar8 = local_188;
      if (puVar15 != *(undefined8 **)(param_5 + 2)) {
        _Size = puVar9[4];
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_5 + 6) + (uVar13 & *(ulonglong *)(param_5 + 0xc)) * 0x10);
        while( true ) {
          _Buf2 = puVar15 + 2;
          if (0xf < (ulonglong)puVar15[5]) {
            _Buf2 = (undefined8 *)*_Buf2;
          }
          if ((ulonglong)puVar9[5] < 0x10) {
            _Buf1 = puVar9 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar9[2];
          }
          if ((_Size == puVar15[4]) &&
             ((_Size == 0 || (iVar11 = memcmp(_Buf1,_Buf2,_Size), iVar11 == 0)))) break;
          local_38 = puVar15;
          lVar8 = local_188;
          if (puVar15 == puVar2) goto LAB_1400617a9;
          puVar15 = (undefined8 *)puVar15[1];
        }
        local_38 = (undefined8 *)*puVar15;
        lVar8 = local_188;
      }
    }
LAB_1400617a9:
    puVar15 = (undefined8 *)local_38[1];
    *(longlong *)(param_5 + 4) = *(longlong *)(param_5 + 4) + 1;
    *puVar9 = local_38;
    puVar9[1] = puVar15;
    *puVar15 = puVar9;
    local_38[1] = puVar9;
    lVar7 = *(longlong *)(param_5 + 6);
    uVar13 = *(ulonglong *)(param_5 + 0xc) & uVar13;
    puVar2 = *(undefined8 **)(lVar7 + uVar13 * 0x10);
    if (puVar2 == *(undefined8 **)(param_5 + 2)) {
      *(undefined8 **)(lVar7 + uVar13 * 0x10) = puVar9;
LAB_1400617ef:
      *(undefined8 **)(lVar7 + 8 + uVar13 * 0x10) = puVar9;
    }
    else if (puVar2 == local_38) {
      *(undefined8 **)(lVar7 + uVar13 * 0x10) = puVar9;
    }
    else if (*(undefined8 **)(lVar7 + 8 + uVar13 * 0x10) == puVar15) goto LAB_1400617ef;
LAB_1400617f4:
    FUN_140061950(puVar9 + 6,local_178);
  }
  if (*(char *)(lVar8 + 8) == '\a') {
    local_1d0 = param_6;
    local_1d8 = param_5;
    FUN_140061280(&local_1a8,param_2,lVar8,local_d8);
  }
  else {
    uVar6 = FUN_1400790b0(param_5,&local_1a8);
    FUN_140061950(uVar6,local_d8);
  }
  if (local_190 < 0x10) {
LAB_14006187d:
    local_198 = 0;
    local_190 = 0xf;
    local_1a8 = 0;
    if (local_1b0 < 0x10) goto LAB_1400618cd;
    lVar8 = CONCAT71(uStack_1c7,local_1c8);
    uVar13 = local_1b0 + 1;
    lVar7 = lVar8;
    if (0xfff < uVar13) {
      lVar7 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar7) - 8U) goto LAB_14006192f;
      uVar13 = local_1b0 + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar13);
LAB_1400618cd:
    local_1b8 = 0;
    local_1b0 = 0xf;
    local_1c8 = 0;
    FUN_140017240(local_70);
    FUN_140017240(local_d8);
    FUN_140017240(local_110);
    FUN_140017240(local_178);
    return;
  }
  lVar8 = CONCAT71(uStack_1a7,local_1a8);
  uVar13 = local_190 + 1;
  lVar7 = lVar8;
  if (uVar13 < 0x1000) {
LAB_140061878:
    thunk_FUN_14028af80(lVar7,uVar13);
    goto LAB_14006187d;
  }
  lVar7 = *(longlong *)(lVar8 + -8);
  if ((lVar8 - lVar7) - 8U < 0x20) {
    uVar13 = local_190 + 0x28;
    goto LAB_140061878;
  }
LAB_14006192f:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar14 = auStack_1f0;
LAB_140061936:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_140061942;
  FUN_14028c2e0("unordered_map/set too long");
}

