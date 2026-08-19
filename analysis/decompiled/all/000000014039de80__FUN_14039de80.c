// Function: FUN_14039de80
// Addr: 14039de80
// Size: 3438 bytes


void FUN_14039de80(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_180;
  undefined2 local_178;
  undefined2 uStack_176;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  uint local_168 [2];
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 *local_128;
  undefined *local_120;
  longlong *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_1c8;
  uVar12 = *(undefined8 *)(*param_1 + 0x30);
  uVar10 = *param_2;
  local_178 = (undefined2)uVar10;
  uStack_176 = (undefined2)((ulonglong)uVar10 >> 0x10);
  iStack_174 = (int)((ulonglong)uVar10 >> 0x20);
  iStack_170 = (int)param_2[1];
  iStack_16c = (int)((ulonglong)param_2[1] >> 0x20);
  cVar4 = FUN_1402f0760(uVar12,&local_178,local_a8);
  uVar6 = local_a0;
  if (cVar4 == '\0') goto switchD_14039df0c_caseD_3;
  switch(local_a8[0]) {
  case 1:
    local_178 = 0;
    uStack_176 = 0;
    iStack_174 = 0;
    iStack_170 = 0;
    iStack_16c = 0;
    local_148 = param_1 + 0xb;
    local_140 = (longlong *)0x0;
    local_138 = (longlong *)0x0;
    lVar1 = *local_148;
    *(bool *)local_148 = (char)lVar1 == '\0';
    if ((longlong *)param_1[0xc] == (longlong *)0x0) {
      param_1[0xc] = (longlong)&local_148;
    }
    else {
      if ((char)lVar1 == '\0') {
        param_1[0xc] = *(longlong *)param_1[0xc];
      }
      local_140 = (longlong *)param_1[0xd];
      *local_140 = (longlong)&local_148;
    }
    param_1[0xd] = (longlong)&local_148;
    cVar4 = FUN_1402f07b0(uVar12,&local_a0,&local_178);
    plVar8 = local_148;
    plVar7 = local_140;
    while (local_148 = plVar8, local_140 = plVar7, cVar4 != '\0') {
      local_138 = (longlong *)CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
      if (((((longlong **)plVar8[1] == &local_148) || (((longlong **)plVar8[1])[2] != local_138)) &&
          (0 < (int)param_1[0xe])) && (0 < *(int *)((longlong)param_1 + 0x74))) {
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
        local_b8 = CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
        uStack_b0 = CONCAT44(iStack_16c,iStack_170);
        FUN_14039de80(param_1,&local_b8);
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      }
      cVar4 = FUN_1402f07b0(uVar12,&local_a0,&local_178);
      plVar8 = local_148;
      plVar7 = local_140;
    }
    plVar8[2] = (longlong)plVar7;
    goto LAB_14039dff7;
  case 2:
    sVar3 = (ushort)local_a0;
    uVar12 = 0;
    if ((local_a0 & 0xffff) == 0xffff) {
      local_168[0] = *(uint *)((longlong)param_1 + 0x3c);
      local_168[0] = ((local_168[0] & 0xff) * (int)local_a0._2_2_ >> 0xe ^ local_168[0]) & 0xff ^
                     local_168[0];
    }
    else {
      lVar1 = param_1[2];
      local_1a8 = uVar12;
      if (*(longlong *)(lVar1 + 0x98) != 0) {
        local_1a8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x80);
      }
      iVar5 = (**(code **)(lVar1 + 0x90))(lVar1,param_1[3],local_a0 & 0xffff,local_168);
      if (iVar5 == 0) {
        if ((local_a0 & 0xffff) < *(uint *)(param_1 + 6)) {
          puVar9 = (uint *)(param_1[5] + (ulonglong)(ushort)local_a0 * 4);
        }
        else {
          puVar9 = (uint *)&DAT_14045dde0;
        }
        uVar6 = *puVar9;
        local_168[0] = ((uVar6 >> 8 & 0xff | (uVar6 & 0xff) << 8) << 8 | uVar6 >> 0x10 & 0xff) << 8
                       | (int)((uVar6 >> 0x18) * (int)local_a0._2_2_) >> 0xe & 0xffU;
      }
      else {
        local_168[0] = (local_168[0] & 0xff) * (int)local_a0._2_2_ >> 0xe & 0xff |
                       local_168[0] & 0xffffff00;
      }
    }
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x40);
    }
    local_1a8 = uVar12;
    (**(code **)(lVar1 + 0x50))(lVar1,param_1[3],sVar3 == -1);
    break;
  case 4:
    local_128 = &local_a0;
    local_120 = &DAT_14039d100;
    local_110 = &LAB_14039d380;
    local_180 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_188 = (float)local_6c * DAT_1404926c0;
    local_1a0 = (float)local_78 * DAT_1404926c0;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_180 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x50);
    }
    local_190 = CONCAT44(local_190._4_4_,(float)local_70 * DAT_1404926c0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_74 * DAT_1404926c0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404926c0);
    local_118 = param_1;
    (**(code **)(lVar1 + 0x60))(lVar1,param_1[3],&local_128);
    break;
  case 6:
    local_128 = &local_a0;
    local_120 = &DAT_14039d100;
    local_110 = &LAB_14039d380;
    local_180 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_188 = (float)local_6c * DAT_1404926c0;
    local_1a0 = (float)local_78 * DAT_1404926c0;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_180 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x58);
    }
    local_190 = CONCAT44(local_190._4_4_,(float)local_70 * DAT_1404926c0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_74 * DAT_1404926c0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404926c0);
    local_118 = param_1;
    (**(code **)(lVar1 + 0x68))(lVar1,param_1[3],&local_128);
    break;
  case 8:
    local_128 = &local_a0;
    local_120 = &DAT_14039d100;
    local_110 = &LAB_14039d380;
    local_190 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_1a0 = ((float)local_78 * DAT_1404926c0 + DAT_1404927d4) * DAT_140492904;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_190 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x60);
    }
    local_198 = CONCAT44(local_198._4_4_,
                         ((float)local_74 * DAT_1404926c0 + DAT_1404927d4) * DAT_140492904);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404926c0);
    local_118 = param_1;
    (**(code **)(lVar1 + 0x70))(lVar1,param_1[3],&local_128);
    break;
  case 10:
    FUN_1403f59b0(param_1[2],param_1[3],param_1[1]);
    (*DAT_140426578)(*param_1 + 8);
    lVar1 = param_1[2];
    uVar12 = 0;
    local_1a8 = uVar12;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_1a8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x18);
    }
    (**(code **)(lVar1 + 0x28))(lVar1,param_1[3],local_90,param_1[1]);
    (*DAT_140426580)(*param_1 + 8);
    FUN_1403f58d0(param_1[2],param_1[3],param_1[1]);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039de80(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    lVar1 = param_1[2];
    uVar10 = uVar12;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
    }
    (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar10);
    lVar1 = param_1[2];
    uVar10 = uVar12;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x38);
    }
    (**(code **)(lVar1 + 0x48))(lVar1,param_1[3],uVar10);
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
    }
    (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar12);
    break;
  case 0xb:
    plVar8 = (longlong *)(ulonglong)local_a0;
    local_160 = param_1 + 8;
    uVar10 = 0;
    local_158 = (longlong *)0x0;
    lVar1 = *local_160;
    *(bool *)local_160 = (char)lVar1 == '\0';
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      param_1[9] = (longlong)&local_160;
    }
    else {
      if ((char)lVar1 == '\0') {
        param_1[9] = *(longlong *)param_1[9];
      }
      local_158 = (longlong *)param_1[10];
      *local_158 = (longlong)&local_160;
    }
    param_1[10] = (longlong)&local_160;
    local_150 = plVar8;
    if (((longlong **)param_1[9] == &local_160) || (((longlong **)param_1[9])[2] != plVar8)) {
      FUN_1403f59b0(param_1[2],param_1[3],param_1[1]);
      (*DAT_140426578)(*param_1 + 8);
      cVar4 = FUN_1403b4950(param_1[2],param_1[3],plVar8,param_1[1]);
      if (cVar4 == '\0') {
        (*DAT_140426580)(*param_1 + 8);
        lVar1 = param_1[2];
        uVar11 = uVar10;
        if (*(longlong *)(lVar1 + 0x98) != 0) {
          uVar11 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
        }
        (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar11);
        local_178 = 0;
        uStack_176 = 0;
        iStack_174 = 0;
        iStack_170 = 0;
        iStack_16c = 0;
        cVar4 = FUN_1402f01e0(uVar12,uVar6,1,&local_178);
        if (cVar4 != '\0') {
          cVar4 = FUN_1402f0170(uVar12,local_a0,local_68);
          if (cVar4 != '\0') {
            uVar6 = FUN_1403cf470(*(undefined8 *)(param_1[1] + 0x20));
            fVar14 = (float)uVar6;
            iVar5 = *(int *)(param_1[1] + 0x28);
            fVar2 = fVar14;
            if (iVar5 != 0) {
              fVar2 = (float)iVar5;
            }
            iVar5 = *(int *)(param_1[1] + 0x2c);
            fVar15 = fVar14;
            if (iVar5 != 0) {
              fVar15 = (float)iVar5;
            }
            local_1a0 = (float)local_54 * (fVar14 / fVar15);
            lVar1 = param_1[2];
            local_198 = uVar10;
            if (*(longlong *)(lVar1 + 0x98) != 0) {
              local_198 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x20);
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_58 * (fVar14 / fVar2));
            (**(code **)(lVar1 + 0x30))(lVar1,param_1[3]);
          }
          if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
            local_b8 = CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
            uStack_b0 = CONCAT44(iStack_16c,iStack_170);
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
            FUN_14039de80(param_1,&local_b8);
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
          }
          if (cVar4 != '\0') {
            lVar1 = param_1[2];
            if (*(longlong *)(lVar1 + 0x98) != 0) {
              uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x38);
            }
            (**(code **)(lVar1 + 0x48))(lVar1,param_1[3],uVar10);
          }
        }
        local_160[2] = (longlong)local_158;
        plVar7 = local_158;
        plVar8 = local_160;
        goto LAB_14039dff7;
      }
      (*DAT_140426580)();
      lVar1 = param_1[2];
      if (*(longlong *)(lVar1 + 0x98) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar10);
    }
    local_160[2] = (longlong)local_158;
    plVar7 = local_158;
    plVar8 = local_160;
LAB_14039dff7:
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)plVar8;
    }
    bVar13 = (char)*plVar8 == '\0';
    if (!bVar13) {
      plVar8[1] = *(longlong *)(plVar8[1] + 8);
    }
    *(bool *)plVar8 = bVar13;
    break;
  case 0xc:
    local_1a0 = (float)local_80 * DAT_1404926c0;
    local_190 = CONCAT44(local_190._4_4_,(float)local_7c * DAT_1404926c0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_88 * DAT_1404926c0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_8c * DAT_1404926c0);
    func_0x0001403f5d90(param_1[2],param_1[3],(float)local_90 * DAT_1404926c0,
                        (float)local_84 * DAT_1404926c0);
    goto LAB_14039e7f1;
  case 0xe:
    FUN_1403f5e10(param_1[2],param_1[3],(float)local_90 * DAT_1404926c0,
                  (float)local_8c * DAT_1404926c0);
    goto LAB_14039e7f1;
  case 0x10:
    local_1a0 = (float)local_84 * DAT_1404926c0;
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404926c0);
    func_0x0001403f5ba0(param_1[2],param_1[3],(float)local_90 * DAT_1404926c0,
                        (float)local_8c * DAT_1404926c0);
    goto LAB_14039e7f1;
  case 0x18:
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404926c0);
    FUN_1403f5a90(param_1[2],param_1[3],(float)local_90 * DAT_1404926c0,
                  (float)local_8c * DAT_1404926c0);
    goto LAB_14039e7f1;
  case 0x1c:
    local_1a0 = (float)local_84 * DAT_1404926c0;
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404926c0);
    FUN_1403f5c50(param_1[2],param_1[3],(float)local_90 * DAT_1404926c0,
                  (float)local_8c * DAT_1404926c0);
LAB_14039e7f1:
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039de80(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) == 0) {
      (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],0);
    }
    else {
      (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],*(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8))
      ;
    }
    break;
  case 0x20:
    lVar1 = param_1[2];
    uVar10 = 0;
    uVar12 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x68);
    }
    (**(code **)(lVar1 + 0x78))(lVar1,param_1[3],uVar12);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (undefined2)local_88;
      uStack_176 = (undefined2)((uint)local_88 >> 0x10);
      iStack_174 = local_84;
      iStack_170 = local_80;
      iStack_16c = local_7c;
      FUN_14039de80(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    lVar1 = param_1[2];
    uVar12 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x68);
    }
    (**(code **)(lVar1 + 0x78))(lVar1,param_1[3],uVar12);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039de80(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    switch(local_90) {
    default:
      uVar12 = uVar10;
      break;
    case 1:
      uVar12 = 1;
      break;
    case 2:
      uVar12 = 2;
      break;
    case 3:
      uVar12 = 3;
      break;
    case 4:
      uVar12 = 4;
      break;
    case 5:
      uVar12 = 5;
      break;
    case 6:
      uVar12 = 6;
      break;
    case 7:
      uVar12 = 7;
      break;
    case 8:
      uVar12 = 8;
      break;
    case 9:
      uVar12 = 9;
      break;
    case 10:
      uVar12 = 10;
      break;
    case 0xb:
      uVar12 = 0xb;
      break;
    case 0xc:
      uVar12 = 0xc;
      break;
    case 0xd:
      uVar12 = 0xd;
      break;
    case 0xe:
      uVar12 = 0xe;
      break;
    case 0xf:
      uVar12 = 0xf;
      break;
    case 0x10:
      uVar12 = 0x10;
      break;
    case 0x11:
      uVar12 = 0x11;
      break;
    case 0x12:
      uVar12 = 0x12;
      break;
    case 0x13:
      uVar12 = 0x13;
      break;
    case 0x14:
      uVar12 = 0x14;
      break;
    case 0x15:
      uVar12 = 0x15;
      break;
    case 0x16:
      uVar12 = 0x16;
      break;
    case 0x17:
      uVar12 = 0x17;
      break;
    case 0x18:
      uVar12 = 0x18;
      break;
    case 0x19:
      uVar12 = 0x19;
      break;
    case 0x1a:
      uVar12 = 0x1a;
      break;
    case 0x1b:
      uVar12 = 0x1b;
    }
    lVar1 = param_1[2];
    uVar11 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
    }
    (**(code **)(lVar1 + 0x88))(lVar1,param_1[3],uVar12,uVar11);
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
    }
    (**(code **)(lVar1 + 0x88))(lVar1,param_1[3],3,uVar10);
  }
switchD_14039df0c_caseD_3:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_1c8);
  return;
}

