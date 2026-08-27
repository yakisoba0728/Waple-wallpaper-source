// Function: FUN_14008f6a0
// Addr: 14008f6a0
// Size: 1236 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14008f6a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  double local_res10 [3];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  ulonglong uStack_170;
  longlong local_168;
  int iStack_15c;
  undefined **local_158 [5];
  longlong *local_130;
  longlong *local_128;
  longlong *local_110;
  longlong *local_108;
  int *local_f8;
  int *local_f0;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined ***pppuStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  
  local_res10[0] = 0.0;
  lVar9 = *(longlong *)(param_2 + 8);
  local_198 = 0;
  local_190 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = (longlong *)0x0;
  if (lVar9 == *(longlong *)(param_2 + 0x10)) {
    local_1a8 = (undefined4 *)0x0;
    uVar8 = 0xf;
  }
  else {
    FUN_140017480(&local_1a8,lVar9,*(longlong *)(param_2 + 0x10) - lVar9);
    uVar8 = local_190;
  }
  lVar9 = local_198;
  local_c0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_158[0] = (undefined **)&DAT_1404855f8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pppuStack_80 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_140474098;
  local_b8 = 0;
  local_b0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_cc = 0x78;
  local_158[1] = (undefined **)0x0;
  FUN_140013870(&local_c8);
  pppuStack_80 = local_158 + 2;
  local_78 = 0;
  local_70 = FUN_140013490(&local_c8,0x20);
  if (pppuStack_80 == (undefined ***)0x0) {
    FUN_140013b50(&local_c8,(uint)local_b8 | 4,0);
  }
  *(undefined ***)((longlong)local_158 + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       &PTR_LAB_140485600;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       *(int *)((longlong)local_158[0] + 4) + -0x90;
  FUN_140012b80(local_158 + 2);
  local_158[2] = &PTR_FUN_1404740b8;
  if (uVar8 < 0x10) {
    iVar11 = 0x11;
    puVar4 = (undefined4 *)FUN_14028af20(0x11);
    *puVar4 = (undefined4)local_1a8;
    puVar4[1] = local_1a8._4_4_;
    puVar4[2] = (undefined4)uStack_1a0;
    puVar4[3] = uStack_1a0._4_4_;
  }
  else {
    iVar11 = (int)uVar8 + 1;
    puVar4 = local_1a8;
  }
  local_e0 = lVar9 + (longlong)puVar4;
  *local_128 = (longlong)puVar4;
  *local_108 = (longlong)puVar4;
  *local_f0 = iVar11;
  *local_130 = (longlong)puVar4;
  *local_110 = (longlong)puVar4;
  *local_f8 = (int)local_e0 - (int)puVar4;
  local_d8 = 0x23;
  iVar11 = *(int *)((longlong)local_158[0] + 4);
  uVar5 = FUN_140291a30();
  FUN_140092bf0((longlong)local_158 + (longlong)iVar11,&local_1a8,uVar5);
  if ((uStack_1a0 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*uStack_1a0 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  plVar7 = (longlong *)FUN_140092a80(local_158,local_res10);
  uVar12 = SUB84(local_res10[0],0);
  uVar13 = (uint)((ulonglong)local_res10[0] >> 0x20);
  if ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) != 0) {
    if (local_res10[0] == DAT_140492988) {
      uVar12 = (uint)DAT_140492990;
      uVar13 = (uint)((ulonglong)DAT_140492990 >> 0x20);
    }
    else {
      if (local_res10[0] != DAT_140492a30) {
        if ((double)CONCAT44(uVar13 & _UNK_140492fd4,uVar12 & _DAT_140492fd0) < _DAT_140492fb0) {
          lVar9 = *(longlong *)(param_2 + 8);
          local_198 = 0;
          local_190 = 0;
          local_1a8 = (undefined4 *)0x0;
          uStack_1a0 = (longlong *)0x0;
          if (lVar9 == *(longlong *)(param_2 + 0x10)) {
            local_190 = 0xf;
            local_1a8 = (undefined4 *)0x0;
          }
          else {
            FUN_140017480(&local_1a8,lVar9,*(longlong *)(param_2 + 0x10) - lVar9);
          }
          uVar5 = FUN_14002fd20(&local_68,&DAT_140485270,&local_1a8);
          plVar7 = (longlong *)FUN_1400532a0(uVar5,"\' is not a number.",0x12);
          local_188 = *plVar7;
          uStack_180 = (uint)plVar7[1];
          uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
          local_178 = plVar7[2];
          uStack_170 = plVar7[3];
          plVar7[2] = 0;
          plVar7[3] = 0xf;
          *(undefined1 *)plVar7 = 0;
          bVar3 = FUN_1400904e0(param_1,&local_188,param_2,0);
          uVar8 = (ulonglong)bVar3;
          if (0xf < uStack_170) {
            uVar10 = uStack_170 + 1;
            lVar9 = local_188;
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(local_188 + -8);
              if (0x1f < (local_188 - lVar9) - 8U) goto LAB_14008fb6c;
              uVar10 = uStack_170 + 0x28;
            }
            thunk_FUN_14028af80(lVar9,uVar10);
          }
          if (0xf < local_50) {
            lVar2 = CONCAT71(uStack_67,local_68);
            uVar10 = local_50 + 1;
            lVar9 = lVar2;
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(lVar2 + -8);
              if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_14008fb6c;
              uVar10 = local_50 + 0x28;
            }
            thunk_FUN_14028af80(lVar9,uVar10);
          }
          local_58 = 0;
          local_50 = 0xf;
          local_68 = 0;
          if (0xf < local_190) {
            uVar10 = local_190 + 1;
            puVar4 = local_1a8;
            if (0xfff < uVar10) {
              puVar4 = *(undefined4 **)(local_1a8 + -2);
              if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)puVar4))) {
LAB_14008fb6c:
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                pcVar1 = (code *)swi(3);
                uVar8 = (*pcVar1)();
                return uVar8;
              }
              uVar10 = local_190 + 0x28;
            }
            thunk_FUN_14028af80(puVar4,uVar10);
          }
          goto LAB_14008f958;
        }
        goto LAB_14008f8d6;
      }
      uVar12 = (uint)DAT_140492a38;
      uVar13 = (uint)((ulonglong)DAT_140492a38 >> 0x20);
    }
    local_res10[0] = (double)CONCAT44(uVar13,uVar12);
  }
LAB_14008f8d6:
  lVar2 = param_3[1];
  uStack_180 = CONCAT31(uStack_180._1_3_,3);
  *(uint *)(param_3 + 1) = uStack_180 & 0xfffffeff;
  local_188 = *param_3;
  *param_3 = CONCAT44(uVar13,uVar12);
  lVar9 = param_3[2];
  param_3[2] = 0;
  uStack_170 = param_3[3];
  local_168 = param_3[4];
  param_3[3] = 0;
  param_3[4] = 0;
  uStack_180 = (int)lVar2;
  local_178 = lVar9;
  FUN_140086d30(&local_188);
  if (lVar9 != 0) {
    FUN_140017240(lVar9 + 0x40);
    FUN_140017240(lVar9 + 0x20);
    FUN_140017240(lVar9);
    thunk_FUN_14028af80(lVar9,0x60);
  }
  uVar8 = 1;
LAB_14008f958:
  *(undefined ***)((longlong)local_158 + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       &PTR_LAB_140485600;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       *(int *)((longlong)local_158[0] + 4) + -0x90;
  FUN_140014ae0(local_158 + 2);
  *(undefined ***)((longlong)local_158 + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       &PTR_LAB_140474098;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)((longlong)local_158[0] + 4)) =
       *(int *)((longlong)local_158[0] + 4) + -0x18;
  local_c8 = std::ios_base::vftable;
  FUN_14028c430(&local_c8);
  return uVar8;
}

