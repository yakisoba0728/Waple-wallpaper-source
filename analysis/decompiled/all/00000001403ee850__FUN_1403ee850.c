// Function: FUN_1403ee850
// Addr: 1403ee850
// Size: 1577 bytes


undefined8
FUN_1403ee850(byte *param_1,longlong param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6,undefined4 param_7,char param_8,char *param_9)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  bool bVar13;
  uint local_res18 [4];
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar14;
  byte **ppbVar15;
  char *local_168;
  longlong *local_160;
  ulonglong local_158;
  undefined1 local_150 [16];
  byte *local_140;
  byte *pbStack_138;
  char *local_130;
  undefined8 uStack_128;
  uint local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_d8;
  uint local_d0;
  uint local_c8;
  char local_b8 [8];
  char **local_b0;
  char **local_a8;
  int local_88;
  int local_84;
  byte *local_78;
  byte *pbStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar11 = (ulonglong)param_3;
  pbVar10 = (byte *)0x0;
  uVar4 = 0;
  local_120 = uVar4;
  if (*(char *)(param_2 + 0x78) != '\0') {
    local_120 = *(uint *)(param_2 + 0x7c);
  }
  uStack_128 = *(undefined8 *)(param_2 + 0x80);
  iVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar12 = (byte *)&DAT_14045dd10;
  if ((iVar8 == 0) ||
     (uVar7 = (uint)param_1[0x1b] * 0x10000 + (uint)param_1[0x1c] * 0x100 +
              (uint)param_1[0x1a] * 0x1000000 + (uint)param_1[0x1d], uVar7 == 0)) {
    pbStack_138 = pbVar10;
    if (iVar8 != 0) goto LAB_1403ee8e3;
LAB_1403ee950:
    local_140 = (byte *)&DAT_14045dd10;
  }
  else {
    pbStack_138 = param_1 + uVar7;
LAB_1403ee8e3:
    uVar7 = (uint)param_1[0x1f] * 0x10000 + (uint)param_1[0x20] * 0x100 +
            (uint)param_1[0x1e] * 0x1000000 + (uint)param_1[0x21];
    if ((uVar7 == 0) || (local_140 = param_1 + uVar7, local_140 == (byte *)0x0)) goto LAB_1403ee950;
  }
  uStack_118 = 0;
  uStack_11c = 0;
  local_130 = local_168;
  ppbVar15 = &local_140;
  uVar3 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe78 >> 0x20),param_7);
  FUN_1403955d0(local_108,param_1,param_4,param_5,param_2,param_6,uVar3,ppbVar15);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_160 = (longlong *)0x0;
  bVar13 = local_b8[0] == '\0';
  if (local_b0 == (char **)0x0) {
    local_b0 = &local_168;
  }
  else {
    if (local_b8[0] == '\0') {
      local_b0 = (char **)*local_b0;
    }
    local_160 = (longlong *)local_a8;
    *local_a8 = (char *)&local_168;
  }
  local_a8 = &local_168;
  local_168 = local_b8;
  local_158 = uVar11;
  local_b8[0] = bVar13;
  if (((uint)*param_1 * 0x100 + (uint)param_1[1] == 0) ||
     (lVar2 = FUN_1403c65c0(param_1,uVar11), lVar2 == 0)) {
    pbVar12 = (byte *)FUN_1403c66c0(param_1,uVar11);
    if ((pbVar12 == (byte *)0x0) || ((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] != param_3)) {
      uVar3 = 0;
      goto LAB_1403eee24;
    }
    uVar9 = (uint)pbVar12[2] * 0x100 + (uint)pbVar12[3];
    uVar5 = (uint)param_1[0xc] * 0x100 + (uint)param_1[0xd];
    uVar7 = uVar4;
    if (uVar9 <= uVar5) {
      uVar7 = uVar5 - uVar9;
    }
    uVar5 = (uint)pbVar12[5] + (uint)pbVar12[4] * 0x100;
    param_1 = param_1 + (((ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100 +
                         (ulonglong)param_1[10]) * 0x40 + (ulonglong)uVar9) * 4 +
                        (ulonglong)param_1[0xb];
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    pbVar12 = param_1 + (ulonglong)uVar5 * 4;
    local_res18[0] = local_c8;
    for (; param_1 != pbVar12; param_1 = param_1 + 4) {
      uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      uVar7 = 1;
      local_c8 = local_res18[0];
      if (uVar5 != 0xffff) {
        pbVar6 = pbVar10;
        if (*(longlong *)(local_f8 + 0x98) != 0) {
          pbVar6 = *(byte **)(*(longlong *)(local_f8 + 0x98) + 0x80);
        }
        iVar8 = (**(code **)(local_f8 + 0x90))(local_f8,local_f0,uVar5,local_res18,pbVar6);
        uVar7 = uVar4;
        if (iVar8 == 0) {
          if (uVar5 < local_d0) {
            pbVar6 = (byte *)(local_d8 + (ulonglong)uVar5 * 4);
          }
          else {
            pbVar6 = (byte *)&DAT_14045dd10;
          }
          local_res18[0] =
               (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
               (uint)pbVar6[3];
        }
      }
      pbVar6 = pbVar10;
      if (*(longlong *)(local_f8 + 0x98) != 0) {
        pbVar6 = *(byte **)(*(longlong *)(local_f8 + 0x98) + 0x18);
      }
      (**(code **)(local_f8 + 0x28))
                (local_f8,local_f0,(uint)*param_1 * 0x100 + (uint)param_1[1],local_e8,pbVar6);
      pbVar6 = pbVar10;
      if (*(longlong *)(local_f8 + 0x98) != 0) {
        pbVar6 = *(byte **)(*(longlong *)(local_f8 + 0x98) + 0x40);
      }
      (**(code **)(local_f8 + 0x50))
                (local_f8,local_f0,uVar7,
                 (uint)(longlong)(float)(local_res18[0] & 0xff) & 0xff | local_res18[0] & 0xffffff00
                 ,pbVar6);
      pbVar6 = pbVar10;
      if (*(longlong *)(local_f8 + 0x98) != 0) {
        pbVar6 = *(byte **)(*(longlong *)(local_f8 + 0x98) + 0x38);
      }
      (**(code **)(local_f8 + 0x48))(local_f8,local_f0,pbVar6);
      local_res18[0] = local_c8;
    }
  }
  else {
    cVar1 = '\x01';
    if (param_8 == '\0') {
LAB_1403eeb77:
      FUN_1403f5800(local_f8,local_f0,param_2);
      if (cVar1 != '\0') goto LAB_1403eeb8b;
    }
    else {
      local_78 = local_140;
      pbStack_70 = pbStack_138;
      local_68 = local_130;
      uStack_60 = uStack_128;
      local_58 = CONCAT44(uStack_11c,local_120);
      uStack_50 = uStack_118;
      if (((uint)*param_1 * 0x100 + (uint)param_1[1] != 0) &&
         (uVar4 = (uint)param_1[0x17] * 0x10000 + (uint)param_1[0x18] * 0x100 +
                  (uint)param_1[0x16] * 0x1000000 + (uint)param_1[0x19], uVar4 != 0)) {
        pbVar12 = param_1 + uVar4;
      }
      cVar1 = FUN_1403c7cf0(pbVar12,param_3,local_150,&local_78);
      if (cVar1 == '\0') {
        param_8 = '\0';
        uVar3 = FUN_1403dce40();
        param_9[4] = '\0';
        param_9[5] = '\0';
        param_9[6] = '\0';
        param_9[7] = '\0';
        *param_9 = '\x01';
        param_9[0xc] = '\0';
        param_9[0xd] = '\0';
        param_9[0xe] = '\0';
        param_9[0xf] = '\0';
        FUN_1403ee850(param_1,param_2,uVar11,uVar3,param_9,param_6,CONCAT44(uVar14,param_7),
                      (ulonglong)ppbVar15 & 0xffffffffffffff00,param_9);
        cVar1 = *param_9;
        goto LAB_1403eeb77;
      }
      FUN_14040a0f0(param_2,local_150);
      (**(code **)(local_f8 + 0x30))(local_f8,local_f0);
      FUN_1403f5800(local_f8,local_f0,param_2);
LAB_1403eeb8b:
      if ((0 < local_88) && (0 < local_84)) {
        local_88 = local_88 + -1;
        local_84 = local_84 + -1;
        FUN_1403786f0(lVar2,local_res18,local_108);
        local_88 = local_88 + 1;
      }
    }
    if (*(longlong *)(local_f8 + 0x98) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(local_f8 + 0x98) + 8);
    }
    (**(code **)(local_f8 + 0x18))(local_f8,local_f0,uVar3);
    if (param_8 != '\0') {
      if (*(longlong *)(local_f8 + 0x98) == 0) {
        (**(code **)(local_f8 + 0x48))(local_f8,local_f0,0);
        uVar3 = 1;
      }
      else {
        (**(code **)(local_f8 + 0x48))
                  (local_f8,local_f0,*(undefined8 *)(*(longlong *)(local_f8 + 0x98) + 0x38));
        uVar3 = 1;
      }
      goto LAB_1403eee24;
    }
  }
  uVar3 = 1;
LAB_1403eee24:
  *(longlong **)(local_168 + 0x10) = local_160;
  if (local_160 != (longlong *)0x0) {
    *local_160 = (longlong)local_168;
  }
  if (*local_168 != '\0') {
    *(undefined8 *)(local_168 + 8) = *(undefined8 *)(*(longlong *)(local_168 + 8) + 8);
  }
  *local_168 = *local_168 == '\0';
  FUN_140415ec0(local_e8);
  return uVar3;
}

