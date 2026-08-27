// Function: FUN_14039ddb0
// Addr: 14039ddb0
// Size: 3469 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14039ddb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
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
  code *local_120;
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
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_1c8;
  uVar10 = *(undefined8 *)(*param_1 + 0x30);
  uVar8 = *param_2;
  local_178 = (undefined2)uVar8;
  uStack_176 = (undefined2)((ulonglong)uVar8 >> 0x10);
  iStack_174 = (int)((ulonglong)uVar8 >> 0x20);
  iStack_170 = (int)param_2[1];
  iStack_16c = (int)((ulonglong)param_2[1] >> 0x20);
  cVar4 = FUN_1402f0690(uVar10,&local_178,local_a8);
  uVar6 = local_a0;
  if (cVar4 == '\0') {
    return;
  }
  local_118 = param_1;
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
    cVar4 = FUN_1402f06e0(uVar10,&local_a0,&local_178);
    local_160 = local_148;
    local_158 = local_140;
    while (cVar4 != '\0') {
      local_138 = (longlong *)CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
      local_148 = local_160;
      local_140 = local_158;
      if (((((longlong **)local_160[1] == &local_148) ||
           (((longlong **)local_160[1])[2] != local_138)) && (0 < (int)param_1[0xe])) &&
         (0 < *(int *)((longlong)param_1 + 0x74))) {
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
        local_b8 = CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
        uStack_b0 = CONCAT44(iStack_16c,iStack_170);
        FUN_14039ddb0(param_1,&local_b8);
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      }
      cVar4 = FUN_1402f06e0(uVar10,&local_a0,&local_178);
      local_160 = local_148;
      local_158 = local_140;
    }
    local_160[2] = (longlong)local_158;
    goto LAB_14039df27;
  case 2:
    sVar3 = (ushort)local_a0;
    uVar10 = 0;
    if ((local_a0 & 0xffff) == 0xffff) {
      local_168[0] = *(uint *)((longlong)param_1 + 0x3c);
      local_168[0] = ((local_168[0] & 0xff) * (int)local_a0._2_2_ >> 0xe ^ local_168[0]) & 0xff ^
                     local_168[0];
    }
    else {
      lVar1 = param_1[2];
      local_1a8 = uVar10;
      if (*(longlong *)(lVar1 + 0x98) != 0) {
        local_1a8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x80);
      }
      iVar5 = (**(code **)(lVar1 + 0x90))(lVar1,param_1[3],local_a0 & 0xffff,local_168);
      if (iVar5 == 0) {
        if ((local_a0 & 0xffff) < *(uint *)(param_1 + 6)) {
          puVar7 = (uint *)(param_1[5] + (ulonglong)(ushort)local_a0 * 4);
        }
        else {
          puVar7 = (uint *)&DAT_14045dd10;
        }
        uVar6 = *puVar7;
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
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x40);
    }
    local_1a8 = uVar10;
    (**(code **)(lVar1 + 0x50))(lVar1,param_1[3],sVar3 == -1);
    break;
  case 4:
    local_128 = &local_a0;
    local_120 = FUN_14039d030;
    local_110 = &LAB_14039d2b0;
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
    local_188 = (float)local_6c * DAT_1404925f0;
    local_1a0 = (float)local_78 * DAT_1404925f0;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_180 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x50);
    }
    local_190 = CONCAT44(local_190._4_4_,(float)local_70 * DAT_1404925f0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_74 * DAT_1404925f0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404925f0);
    (**(code **)(lVar1 + 0x60))(lVar1,param_1[3],&local_128);
    break;
  case 6:
    local_128 = &local_a0;
    local_120 = FUN_14039d030;
    local_110 = &LAB_14039d2b0;
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
    local_188 = (float)local_6c * DAT_1404925f0;
    local_1a0 = (float)local_78 * DAT_1404925f0;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_180 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x58);
    }
    local_190 = CONCAT44(local_190._4_4_,(float)local_70 * DAT_1404925f0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_74 * DAT_1404925f0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404925f0);
    (**(code **)(lVar1 + 0x68))(lVar1,param_1[3],&local_128);
    break;
  case 8:
    local_128 = &local_a0;
    local_120 = FUN_14039d030;
    local_110 = &LAB_14039d2b0;
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
    local_1a0 = ((float)local_78 * DAT_1404925f0 + DAT_140492704) * DAT_140492834;
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_190 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x60);
    }
    local_198 = CONCAT44(local_198._4_4_,
                         ((float)local_74 * DAT_1404925f0 + DAT_140492704) * DAT_140492834);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_7c * DAT_1404925f0);
    (**(code **)(lVar1 + 0x70))(lVar1,param_1[3],&local_128);
    break;
  case 10:
    FUN_1403f58e0(param_1[2],param_1[3],param_1[1]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 8));
    lVar1 = param_1[2];
    uVar10 = 0;
    local_1a8 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_1a8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x18);
    }
    (**(code **)(lVar1 + 0x28))(lVar1,param_1[3],local_90,param_1[1]);
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 8));
    FUN_1403f5800(param_1[2],param_1[3],param_1[1]);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039ddb0(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    lVar1 = param_1[2];
    uVar8 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
    }
    (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar8);
    lVar1 = param_1[2];
    uVar8 = uVar10;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x38);
    }
    (**(code **)(lVar1 + 0x48))(lVar1,param_1[3],uVar8);
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
    }
    (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar10);
    break;
  case 0xb:
    plVar11 = (longlong *)(ulonglong)local_a0;
    local_160 = param_1 + 8;
    uVar8 = 0;
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
    if (((longlong **)param_1[9] == &local_160) || (((longlong **)param_1[9])[2] != plVar11)) {
      local_150 = plVar11;
      FUN_1403f58e0(param_1[2],param_1[3],param_1[1]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 8));
      cVar4 = FUN_1403b4880(param_1[2],param_1[3],plVar11,param_1[1]);
      if (cVar4 == '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 8));
        lVar1 = param_1[2];
        uVar9 = uVar8;
        if (*(longlong *)(lVar1 + 0x98) != 0) {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
        }
        (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar9);
        local_178 = 0;
        uStack_176 = 0;
        iStack_174 = 0;
        iStack_170 = 0;
        iStack_16c = 0;
        cVar4 = FUN_1402f0110(uVar10,uVar6,1,&local_178);
        if (cVar4 != '\0') {
          cVar4 = FUN_1402f00a0(uVar10,local_a0,local_68);
          if (cVar4 != '\0') {
            uVar6 = FUN_1403cf3a0(*(undefined8 *)(param_1[1] + 0x20));
            fVar13 = (float)uVar6;
            iVar5 = *(int *)(param_1[1] + 0x28);
            fVar2 = fVar13;
            if (iVar5 != 0) {
              fVar2 = (float)iVar5;
            }
            iVar5 = *(int *)(param_1[1] + 0x2c);
            fVar14 = fVar13;
            if (iVar5 != 0) {
              fVar14 = (float)iVar5;
            }
            local_1a0 = (float)local_54 * (fVar13 / fVar14);
            lVar1 = param_1[2];
            local_198 = uVar8;
            if (*(longlong *)(lVar1 + 0x98) != 0) {
              local_198 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x20);
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_58 * (fVar13 / fVar2));
            (**(code **)(lVar1 + 0x30))(lVar1,param_1[3]);
          }
          if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
            local_b8 = CONCAT44(iStack_174,CONCAT22(uStack_176,local_178));
            uStack_b0 = CONCAT44(iStack_16c,iStack_170);
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
            *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
            FUN_14039ddb0(param_1,&local_b8);
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
          }
          if (cVar4 != '\0') {
            lVar1 = param_1[2];
            if (*(longlong *)(lVar1 + 0x98) != 0) {
              uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x38);
            }
            (**(code **)(lVar1 + 0x48))(lVar1,param_1[3],uVar8);
          }
        }
        local_160[2] = (longlong)local_158;
        goto LAB_14039df27;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 8));
      lVar1 = param_1[2];
      if (*(longlong *)(lVar1 + 0x98) != 0) {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,param_1[3],uVar8);
    }
    local_160[2] = (longlong)local_158;
LAB_14039df27:
    if (local_158 != (longlong *)0x0) {
      *local_158 = (longlong)local_160;
    }
    bVar12 = (char)*local_160 == '\0';
    if (!bVar12) {
      local_160[1] = *(longlong *)(local_160[1] + 8);
    }
    *(bool *)local_160 = bVar12;
    break;
  case 0xc:
    local_1a0 = (float)local_80 * DAT_1404925f0;
    local_190 = CONCAT44(local_190._4_4_,(float)local_7c * DAT_1404925f0);
    local_198 = CONCAT44(local_198._4_4_,(float)local_88 * DAT_1404925f0);
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_8c * DAT_1404925f0);
    FUN_1403f5cc0(param_1[2],param_1[3],(float)local_90 * DAT_1404925f0,
                  (float)local_84 * DAT_1404925f0);
    goto LAB_14039e721;
  case 0xe:
    FUN_1403f5d40(param_1[2],param_1[3],(float)local_90 * DAT_1404925f0,
                  (float)local_8c * DAT_1404925f0);
    goto LAB_14039e721;
  case 0x10:
    local_1a0 = (float)local_84 * DAT_1404925f0;
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404925f0);
    FUN_1403f5ad0(param_1[2],param_1[3],(float)local_90 * DAT_1404925f0,
                  (float)local_8c * DAT_1404925f0);
    goto LAB_14039e721;
  case 0x18:
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404925f0);
    FUN_1403f59c0(param_1[2],param_1[3],(float)local_90 * DAT_1404925f0,
                  (float)local_8c * DAT_1404925f0);
    goto LAB_14039e721;
  case 0x1c:
    local_1a0 = (float)local_84 * DAT_1404925f0;
    local_1a8 = CONCAT44(local_1a8._4_4_,(float)local_88 * DAT_1404925f0);
    FUN_1403f5b80(param_1[2],param_1[3],(float)local_90 * DAT_1404925f0,
                  (float)local_8c * DAT_1404925f0);
LAB_14039e721:
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039ddb0(param_1,&local_178);
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
    uVar8 = 0;
    uVar10 = uVar8;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x68);
    }
    (**(code **)(lVar1 + 0x78))(lVar1,param_1[3],uVar10);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (undefined2)local_88;
      uStack_176 = (undefined2)((uint)local_88 >> 0x10);
      iStack_174 = local_84;
      iStack_170 = local_80;
      iStack_16c = local_7c;
      FUN_14039ddb0(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    lVar1 = param_1[2];
    uVar10 = uVar8;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x68);
    }
    (**(code **)(lVar1 + 0x78))(lVar1,param_1[3],uVar10);
    if ((0 < (int)param_1[0xe]) && (0 < *(int *)((longlong)param_1 + 0x74))) {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      local_178 = (ushort)local_a0;
      uStack_176 = local_a0._2_2_;
      iStack_174 = (int)local_9c;
      iStack_170 = (int)((ulonglong)local_9c >> 0x20);
      iStack_16c = local_94;
      FUN_14039ddb0(param_1,&local_178);
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    }
    switch(local_90) {
    default:
      uVar10 = uVar8;
      break;
    case 1:
      uVar10 = 1;
      break;
    case 2:
      uVar10 = 2;
      break;
    case 3:
      uVar10 = 3;
      break;
    case 4:
      uVar10 = 4;
      break;
    case 5:
      uVar10 = 5;
      break;
    case 6:
      uVar10 = 6;
      break;
    case 7:
      uVar10 = 7;
      break;
    case 8:
      uVar10 = 8;
      break;
    case 9:
      uVar10 = 9;
      break;
    case 10:
      uVar10 = 10;
      break;
    case 0xb:
      uVar10 = 0xb;
      break;
    case 0xc:
      uVar10 = 0xc;
      break;
    case 0xd:
      uVar10 = 0xd;
      break;
    case 0xe:
      uVar10 = 0xe;
      break;
    case 0xf:
      uVar10 = 0xf;
      break;
    case 0x10:
      uVar10 = 0x10;
      break;
    case 0x11:
      uVar10 = 0x11;
      break;
    case 0x12:
      uVar10 = 0x12;
      break;
    case 0x13:
      uVar10 = 0x13;
      break;
    case 0x14:
      uVar10 = 0x14;
      break;
    case 0x15:
      uVar10 = 0x15;
      break;
    case 0x16:
      uVar10 = 0x16;
      break;
    case 0x17:
      uVar10 = 0x17;
      break;
    case 0x18:
      uVar10 = 0x18;
      break;
    case 0x19:
      uVar10 = 0x19;
      break;
    case 0x1a:
      uVar10 = 0x1a;
      break;
    case 0x1b:
      uVar10 = 0x1b;
    }
    lVar1 = param_1[2];
    uVar9 = uVar8;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
    }
    (**(code **)(lVar1 + 0x88))(lVar1,param_1[3],uVar10,uVar9);
    lVar1 = param_1[2];
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
    }
    (**(code **)(lVar1 + 0x88))(lVar1,param_1[3],3,uVar8);
  }
  return;
}

