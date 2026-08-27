// Function: FUN_1403c99a0
// Addr: 1403c99a0
// Size: 1775 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403c99a0(longlong param_1,undefined4 param_2,int *param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff20;
  uint uVar16;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar16 = (uint)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (param_4 == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    uVar7 = 0;
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x78);
    }
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x98))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar7);
    return uVar4;
  }
  uVar4 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    uVar6 = uVar4;
    if (lVar5 != 0) {
      uVar6 = *(ulonglong *)(lVar5 + 0x78);
    }
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x98))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar6);
    uVar15 = (undefined4)(uVar6 >> 0x20);
    if (iVar3 != 0) {
      return 1;
    }
  }
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_88 = 0;
  local_78 = 0;
  uVar6 = uVar4;
  do {
    uVar11 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
    uVar6 = (ulonglong)uVar11;
  } while (uVar11 == 0);
  if (uVar11 < 0xaaaaaaa) {
    lVar5 = _realloc_base(0,uVar6 * 0x18);
    uVar12 = uVar11;
    if ((lVar5 == 0) && (lVar5 = local_90, uVar12 = (uint)local_98, (uint)local_98 < uVar11)) {
      local_98 = CONCAT44(local_98._4_4_,-1 - (uint)local_98);
      uVar6 = local_78 & 0xffffffff;
      uVar10 = local_88 & 0xffffffff;
      goto LAB_1403c9ac4;
    }
    local_98._0_4_ = uVar12;
    local_90 = lVar5;
    uVar6 = (ulonglong)local_98._4_4_;
    local_98 = CONCAT44(local_98._4_4_ + 1,(uint)local_98);
    *(undefined8 *)(local_90 + uVar6 * 0x18) = 0x3f800000;
    *(undefined4 *)(local_90 + 8 + uVar6 * 0x18) = 0;
    *(undefined8 *)(local_90 + 0xc + uVar6 * 0x18) = 0x3f800000;
    *(undefined4 *)(local_90 + 0x14 + uVar6 * 0x18) = 0;
    uVar6 = local_78 & 0xffffffff;
    uVar10 = local_88 & 0xffffffff;
  }
  else {
    local_98 = 0xffffffff;
    uVar6 = uVar4;
    uVar10 = uVar4;
LAB_1403c9ac4:
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = (undefined4)((ulonglong)DAT_14045dd10 >> 0x20);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = (undefined4)((ulonglong)DAT_14045dd18 >> 0x20);
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    DAT_1404e4f34 = DAT_14045dd20._4_4_;
  }
  uVar11 = (uint)uVar10;
  if ((int)local_88._4_4_ < (int)uVar11) {
LAB_1403c9b97:
    uVar6 = (ulonglong)local_88._4_4_;
    local_88 = CONCAT44(local_88._4_4_ + 1,(uint)local_88);
    *(undefined8 *)(local_80 + uVar6 * 0x14) = 0;
    *(undefined4 *)(local_80 + 8 + uVar6 * 0x14) = 0;
    *(undefined4 *)(local_80 + 0xc + uVar6 * 0x14) = 0xbf800000;
    *(undefined4 *)(local_80 + 0x10 + uVar6 * 0x14) = 0xbf800000;
    uVar6 = local_78 & 0xffffffff;
  }
  else {
    if (uVar10 >> 0x1f == 0) {
      if (uVar11 < local_88._4_4_ + 1) {
        do {
          uVar12 = (int)uVar10 + 8 + (int)(uVar10 >> 1);
          uVar10 = (ulonglong)uVar12;
        } while (uVar12 < local_88._4_4_ + 1);
        if (0xccccccb < uVar12) {
          local_88 = CONCAT44(local_88._4_4_,~uVar11);
          goto LAB_1403c9b5e;
        }
        if (uVar12 == 0) {
          uVar6 = uVar4;
          if (1 < uVar11 + 1) {
            thunk_FUN_1402d9040(local_80);
          }
        }
        else if ((uVar11 == 0) && (local_80 != 0)) {
          uVar6 = _malloc_base(uVar10 * 0x14);
          if (uVar6 == 0) {
LAB_1403c9c80:
            if (uVar12 <= (uint)local_88) goto LAB_1403c9b97;
            local_88 = CONCAT44(local_88._4_4_,-1 - (uint)local_88);
            uVar6 = local_78 & 0xffffffff;
            goto LAB_1403c9b5e;
          }
          if ((local_88 >> 0x20) * 5 != 0) {
            FUN_1404210f0(uVar6,local_80);
          }
        }
        else {
          uVar6 = _realloc_base(local_80,uVar10 * 0x14);
          if (uVar6 == 0) goto LAB_1403c9c80;
        }
        local_88 = CONCAT44(local_88._4_4_,uVar12);
        local_80 = uVar6;
      }
      goto LAB_1403c9b97;
    }
LAB_1403c9b5e:
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = (undefined4)((ulonglong)DAT_14045dd10 >> 0x20);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = (undefined4)((ulonglong)DAT_14045dd18 >> 0x20);
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  uVar11 = (uint)uVar6;
  if ((int)local_78._4_4_ < (int)uVar11) {
LAB_1403c9cc6:
    uVar6 = (ulonglong)local_78._4_4_;
    local_78 = CONCAT44(local_78._4_4_ + 1,(uint)local_78);
    *(undefined8 *)(local_70 + uVar6 * 0x14) = 2;
    *(undefined4 *)(local_70 + 8 + uVar6 * 0x14) = 0;
    *(undefined4 *)(local_70 + 0xc + uVar6 * 0x14) = 0xbf800000;
    *(undefined4 *)(local_70 + 0x10 + uVar6 * 0x14) = 0xbf800000;
  }
  else {
    if (uVar6 >> 0x1f == 0) {
      if (uVar11 < local_78._4_4_ + 1) {
        do {
          uVar12 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
          uVar6 = (ulonglong)uVar12;
        } while (uVar12 < local_78._4_4_ + 1);
        if (0xccccccb < uVar12) {
          local_78 = CONCAT44(local_78._4_4_,~uVar11);
          goto LAB_1403c9c0e;
        }
        if (uVar12 == 0) {
          uVar6 = uVar4;
          if (1 < uVar11 + 1) {
            thunk_FUN_1402d9040(local_70);
          }
        }
        else if ((uVar11 == 0) && (local_70 != 0)) {
          uVar6 = _malloc_base(uVar6 * 0x14);
          if (uVar6 == 0) {
LAB_1403c9d87:
            if (uVar12 <= (uint)local_78) goto LAB_1403c9cc6;
            local_78 = CONCAT44(local_78._4_4_,-1 - (uint)local_78);
            DAT_1404e4f30 = (undefined4)DAT_14045dd20;
            DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
            DAT_1404e4f20._4_4_ = (undefined4)((ulonglong)DAT_14045dd10 >> 0x20);
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
            _DAT_1404e4f2c = (undefined4)((ulonglong)DAT_14045dd18 >> 0x20);
            goto LAB_1403c9cf2;
          }
          if ((local_78 >> 0x20) * 5 != 0) {
            FUN_1404210f0(uVar6,local_70);
          }
        }
        else {
          uVar6 = _realloc_base(local_70,uVar6 * 0x14);
          if (uVar6 == 0) goto LAB_1403c9d87;
        }
        local_78 = CONCAT44(local_78._4_4_,uVar12);
        local_70 = uVar6;
      }
      goto LAB_1403c9cc6;
    }
LAB_1403c9c0e:
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = (undefined4)((ulonglong)DAT_14045dd10 >> 0x20);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = (undefined4)((ulonglong)DAT_14045dd18 >> 0x20);
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
LAB_1403c9cf2:
  lVar5 = FUN_1403dd010();
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    uVar6 = uVar4;
    if (*(ulonglong **)(lVar5 + 0x98) != (ulonglong *)0x0) {
      uVar6 = **(ulonglong **)(lVar5 + 0x98);
    }
    (**(code **)(lVar5 + 0x10))
              (lVar5,&local_98,DAT_140492704,0,CONCAT44(uVar15,*(float *)(param_1 + 0x4c)),
               DAT_140492704,0,(ulonglong)uVar16 << 0x20,uVar6);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar6 = uVar4;
  if (lVar1 != 0) {
    uVar6 = *(ulonglong *)(lVar1 + 0xa0);
  }
  iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0xc0))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,lVar5,&local_98,0,0,uVar6);
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    uVar6 = uVar4;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x98) + 8);
    }
    (**(code **)(lVar5 + 0x18))(lVar5,&local_98,uVar6);
  }
  if (iVar3 == 0) {
    local_c8 = _DAT_140471b20;
    uStack_c0 = _UNK_140471b28;
    uVar7 = FUN_1403d20a0();
    cVar2 = FUN_1403be440(param_1,param_2,uVar7,&local_c8,1);
    if (cVar2 == '\0') {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      if (lVar5 != 0) {
        uVar4 = *(ulonglong *)(lVar5 + 0x78);
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x98))
                        (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar4);
      if (iVar3 != 0) {
        if (*(float *)(param_1 + 0x4c) != 0.0) {
          iVar9 = *param_3;
          fVar14 = (float)FUN_14041a5c0();
          iVar13 = (int)(fVar14 + (float)iVar9);
          *param_3 = iVar13;
          fVar14 = (float)FUN_140419fa0();
          param_3[2] = (int)(fVar14 + (float)(param_3[2] + iVar9)) - iVar13;
        }
        if ((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x44) != 0)) {
          iVar9 = -*(int *)(param_1 + 0x44);
          if (-1 < *(int *)(param_1 + 0x2c)) {
            iVar9 = *(int *)(param_1 + 0x44);
          }
          param_3[1] = param_3[1] + iVar9;
          param_3[3] = param_3[3] - iVar9;
          iVar9 = -*(int *)(param_1 + 0x40);
          if (-1 < *(int *)(param_1 + 0x28)) {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          if (*(char *)(param_1 + 0x3c) != '\0') {
            *param_3 = *param_3 - iVar9 / 2;
          }
          param_3[2] = param_3[2] + iVar9;
        }
      }
      uVar4 = (ulonglong)(iVar3 != 0);
      goto LAB_1403ca017;
    }
    puVar8 = &local_c8;
  }
  else if (local_78._4_4_ - 1 < local_78._4_4_) {
    lVar5 = local_70 + (ulonglong)(local_78._4_4_ - 1) * 0x14;
    local_b8 = *(undefined8 *)(lVar5 + 4);
    uStack_b0 = *(undefined8 *)(lVar5 + 0xc);
    puVar8 = &local_b8;
  }
  else {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = (undefined4)((ulonglong)DAT_14045dd10 >> 0x20);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = (undefined4)((ulonglong)DAT_14045dd18 >> 0x20);
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    local_b8 = CONCAT44(DAT_1404e4f28,DAT_1404e4f20._4_4_);
    uStack_b0 = CONCAT44((undefined4)DAT_14045dd20,_DAT_1404e4f2c);
    puVar8 = &local_b8;
  }
  puVar8 = (undefined8 *)FUN_14040caa0(puVar8,local_a8,0,0);
  uVar7 = puVar8[1];
  *(undefined8 *)param_3 = *puVar8;
  *(undefined8 *)(param_3 + 2) = uVar7;
  uVar4 = 1;
LAB_1403ca017:
  if (1 < (uint)local_78 + 1) {
    local_78 = local_78 & 0xffffffff;
    thunk_FUN_1402d9040(local_70);
  }
  local_78 = 0;
  local_70 = 0;
  if (1 < (uint)local_88 + 1) {
    local_88 = local_88 & 0xffffffff;
    thunk_FUN_1402d9040(local_80);
  }
  local_88 = 0;
  local_80 = 0;
  if (1 < (uint)local_98 + 1) {
    local_98 = local_98 & 0xffffffff;
    thunk_FUN_1402d9040(local_90);
  }
  return uVar4;
}

