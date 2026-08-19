// Function: FUN_14013a390
// Addr: 14013a390
// Size: 2744 bytes


/* WARNING: Removing unreachable block (ram,0x00014013a9d6) */
/* WARNING: Removing unreachable block (ram,0x00014013a81d) */
/* WARNING: Removing unreachable block (ram,0x00014013a823) */
/* WARNING: Removing unreachable block (ram,0x00014013a834) */
/* WARNING: Removing unreachable block (ram,0x00014013a849) */
/* WARNING: Removing unreachable block (ram,0x00014013a850) */
/* WARNING: Removing unreachable block (ram,0x00014013a855) */
/* WARNING: Removing unreachable block (ram,0x00014013a86b) */
/* WARNING: Removing unreachable block (ram,0x00014013a87d) */
/* WARNING: Removing unreachable block (ram,0x00014013a892) */
/* WARNING: Removing unreachable block (ram,0x00014013a899) */
/* WARNING: Removing unreachable block (ram,0x00014013a89e) */
/* WARNING: Removing unreachable block (ram,0x00014013a4a0) */
/* WARNING: Removing unreachable block (ram,0x00014013ad8c) */
/* WARNING: Removing unreachable block (ram,0x00014013ad92) */
/* WARNING: Removing unreachable block (ram,0x00014013ada3) */
/* WARNING: Removing unreachable block (ram,0x00014013adb8) */
/* WARNING: Removing unreachable block (ram,0x00014013adbf) */
/* WARNING: Removing unreachable block (ram,0x00014013adc4) */
/* WARNING: Removing unreachable block (ram,0x00014013adda) */
/* WARNING: Removing unreachable block (ram,0x00014013ade7) */
/* WARNING: Removing unreachable block (ram,0x00014013adfc) */
/* WARNING: Removing unreachable block (ram,0x00014013ae03) */
/* WARNING: Removing unreachable block (ram,0x00014013ae0b) */
/* WARNING: Removing unreachable block (ram,0x00014013ae0d) */

void FUN_14013a390(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined8 ***local_168;
  int local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 ***local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong *local_128 [2];
  undefined8 ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 ***local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar12 = auStack_188;
  uVar13 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  local_res18 = (longlong *)0x0;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_res18);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (local_res18 != (longlong *)0x0) {
    local_res10 = local_res10 & 0xffffffff00000000;
    (**(code **)(*local_res18 + 0x18))(local_res18,&local_res10);
    if ((uint)local_res10 != 0) {
      do {
        local_128[0] = (longlong *)0x0;
        (**(code **)(*local_res18 + 0x20))(local_res18,uVar13,&DAT_14048b128,local_128);
        plVar3 = local_128[0];
        if (local_128[0] != (longlong *)0x0) {
          local_108 = 0;
          local_e8 = 0;
          local_100 = 0xf;
          local_e0 = 0xf;
          local_d8 = 0xffffffff;
          uStack_110 = 0;
          local_118 = (undefined8 ****)0x0;
          uStack_f0 = 0;
          local_f8 = (undefined8 ****)0x0;
          if (local_128[0] != (longlong *)0x0) {
            local_70 = 0;
            uStack_68 = 0;
            (**(code **)(*local_128[0] + 0x20))(local_128[0],&local_70);
            local_78 = 0;
            iVar6 = (*DAT_140426b90)(&local_70,&local_78);
            uVar9 = local_78;
            if (-1 < iVar6) {
              uVar7 = 0;
              local_148 = (undefined8 ****)0x0;
              uStack_140 = 0;
              local_138 = 0;
              local_130 = 0;
              uVar8 = FUN_1402d6b70(local_78);
              FUN_140016240(&local_148,uVar9,uVar8);
              if (local_138 == 0) {
LAB_14013a5cd:
                local_100 = 0xf;
                uStack_a0 = 0;
                local_a8 = (undefined8 ****)0x0;
              }
              else {
                local_150 = 0;
                ppppuVar10 = &local_148;
                if (7 < local_130) {
                  ppppuVar10 = (undefined8 ****)local_148;
                }
                local_158 = 0;
                local_160 = 0;
                local_168 = (undefined8 ****)0x0;
                iVar6 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
                if (iVar6 < 1) goto LAB_14013a5cd;
                FUN_140016a10(&local_c8,(longlong)iVar6,0);
                local_168 = &local_c8;
                if (0xf < uStack_b0) {
                  local_168 = local_c8;
                }
                local_150 = 0;
                ppppuVar10 = &local_148;
                if (7 < local_130) {
                  ppppuVar10 = (undefined8 ****)local_148;
                }
                local_158 = 0;
                local_160 = iVar6;
                (*DAT_140426608)(0xfde9,0,ppppuVar10,local_138 & 0xffffffff);
                local_a8 = local_c8;
                uStack_a0 = uStack_c0;
                local_100 = uStack_b0;
                uVar7 = local_b8;
              }
              local_118 = local_a8;
              uStack_110 = uStack_a0;
              local_108 = uVar7;
              if (7 < local_130) {
                FUN_140016b60(&local_148,local_148);
              }
              (*DAT_140426b80)(local_78);
            }
            local_88 = (longlong *)0x0;
            (**(code **)*plVar3)(plVar3,&DAT_14048b1e8,&local_88);
            if (local_88 != (longlong *)0x0) {
              local_res20 = (longlong *)0x0;
              (**(code **)(*local_88 + 0x28))(local_88,&local_res20);
              if (local_res20 != (longlong *)0x0) {
                if (*(int *)((longlong)local_res20 + 4) != 0) {
                  lVar4 = local_res20[2];
                  local_138 = 0;
                  local_148 = (undefined8 ****)0x0;
                  uStack_140 = 0;
                  local_130 = 0;
                  uVar9 = FUN_1402d6b70(lVar4);
                  FUN_140016240(&local_148,lVar4,uVar9);
                  if (local_138 == 0) {
LAB_14013a74f:
                    local_b8 = 0;
                    uStack_c0 = 0;
                    local_c8 = (undefined8 ****)0x0;
                    uStack_b0 = 0xf;
                  }
                  else {
                    local_150 = 0;
                    ppppuVar10 = &local_148;
                    if (7 < local_130) {
                      ppppuVar10 = (undefined8 ****)local_148;
                    }
                    local_158 = 0;
                    local_160 = 0;
                    local_168 = (undefined8 ****)0x0;
                    iVar6 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
                    if (iVar6 < 1) goto LAB_14013a74f;
                    FUN_140016a10(&local_a8,(longlong)iVar6,0);
                    local_168 = &local_a8;
                    if (0xf < uStack_90) {
                      local_168 = local_a8;
                    }
                    local_150 = 0;
                    ppppuVar10 = &local_148;
                    if (7 < local_130) {
                      ppppuVar10 = (undefined8 ****)local_148;
                    }
                    local_158 = 0;
                    local_160 = iVar6;
                    (*DAT_140426608)(0xfde9,0,ppppuVar10,local_138 & 0xffffffff);
                    local_c8 = local_a8;
                    uStack_c0 = uStack_a0;
                    local_b8 = local_98;
                    uStack_b0 = uStack_90;
                  }
                  FUN_14000df10(&local_f8,&local_c8);
                  if (0xf < uStack_b0) {
                    uVar11 = uStack_b0 + 1;
                    ppppuVar10 = (undefined8 ****)local_c8;
                    if (0xfff < uVar11) {
                      ppppuVar10 = (undefined8 ****)local_c8[-1];
                      if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar10)))
                      goto LAB_14013af0e;
                      uVar11 = uStack_b0 + 0x28;
                    }
                    func_0x00014028b040(ppppuVar10,uVar11);
                    return;
                  }
                  if (7 < local_130) {
                    FUN_140016b60(&local_148,local_148);
                  }
                }
                plVar3 = local_res20;
                if (local_res20 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_res20 + 3;
                  lVar4 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    uVar9 = FUN_1402ed5b4();
                    func_0x0001402ed5a8(uVar9,0,plVar3);
                  }
                  else if ((int)lVar4 + -1 < 0) goto LAB_14013af15;
                }
              }
              if (local_88 != (longlong *)0x0) {
                (**(code **)(*local_88 + 0x10))();
                local_88 = (longlong *)0x0;
              }
            }
          }
          FUN_14013e600(&local_60,&local_118);
          if (0xf < local_e0) {
            uVar11 = local_e0 + 1;
            ppppuVar10 = (undefined8 ****)local_f8;
            if (0xfff < uVar11) {
              ppppuVar10 = (undefined8 ****)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar10)))
              goto LAB_14013af0e;
              uVar11 = local_e0 + 0x28;
            }
            func_0x00014028b040(ppppuVar10,uVar11);
            return;
          }
          if (0xf < local_100) {
            uVar11 = local_100 + 1;
            ppppuVar10 = (undefined8 ****)local_118;
            if (0xfff < uVar11) {
              ppppuVar10 = (undefined8 ****)local_118[-1];
              if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)ppppuVar10)))
              goto LAB_14013af0e;
              uVar11 = local_100 + 0x28;
            }
            func_0x00014028b040(ppppuVar10,uVar11);
            return;
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)local_res10);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
      local_res18 = (longlong *)0x0;
    }
  }
  uVar9 = 0;
  local_80 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),&local_80);
  plVar3 = local_80;
  local_108 = 0;
  local_100 = 0xf;
  local_e8 = 0;
  uVar11 = 0xf;
  local_e0 = 0xf;
  local_d8 = 0xffffffff;
  uStack_110 = 0;
  local_118 = (undefined8 ****)0x0;
  uStack_f0 = 0;
  local_f8 = (undefined8 ****)0x0;
  if (local_80 == (longlong *)0x0) goto LAB_14013ae2d;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*local_80 + 0x20))(local_80,&local_70);
  local_128[0] = (longlong *)0x0;
  iVar6 = (*DAT_140426b90)(&local_70,local_128);
  plVar1 = local_128[0];
  if (-1 < iVar6) {
    local_138 = 0;
    local_148 = (undefined8 ****)0x0;
    uStack_140 = 0;
    local_130 = 0;
    uVar7 = FUN_1402d6b70(local_128[0]);
    FUN_140016240(&local_148,plVar1,uVar7);
    if (local_138 == 0) {
LAB_14013aaf4:
      uStack_c0 = 0;
      local_c8 = (undefined8 ****)0x0;
      local_100 = 0xf;
    }
    else {
      local_150 = 0;
      ppppuVar10 = &local_148;
      if (7 < local_130) {
        ppppuVar10 = (undefined8 ****)local_148;
      }
      local_158 = 0;
      local_160 = 0;
      local_168 = (undefined8 ****)0x0;
      iVar6 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
      if (iVar6 < 1) goto LAB_14013aaf4;
      FUN_140016a10(&local_a8,(longlong)iVar6,0);
      local_168 = &local_a8;
      if (0xf < uStack_90) {
        local_168 = local_a8;
      }
      local_150 = 0;
      ppppuVar10 = &local_148;
      if (7 < local_130) {
        ppppuVar10 = (undefined8 ****)local_148;
      }
      local_158 = 0;
      local_160 = iVar6;
      (*DAT_140426608)(0xfde9,0,ppppuVar10,local_138 & 0xffffffff);
      local_c8 = local_a8;
      uStack_c0 = uStack_a0;
      local_100 = uStack_90;
      uVar9 = local_98;
    }
    uStack_110 = uStack_c0;
    local_118 = local_c8;
    local_108 = uVar9;
    if (7 < local_130) {
      uVar11 = local_130 * 2 + 2;
      ppppuVar10 = (undefined8 ****)local_148;
      if (uVar11 < 0x1000) {
LAB_14013ab63:
        func_0x00014028b040(ppppuVar10,uVar11);
        return;
      }
      ppppuVar10 = (undefined8 ****)local_148[-1];
      if ((ulonglong)((longlong)local_148 + (-8 - (longlong)ppppuVar10)) < 0x20) {
        uVar11 = local_130 * 2 + 0x29;
        goto LAB_14013ab63;
      }
      goto LAB_14013af0e;
    }
    (*DAT_140426b80)(local_128[0]);
  }
  local_res20 = (longlong *)0x0;
  (**(code **)*plVar3)(plVar3,&DAT_14048b1e8,&local_res20);
  uVar9 = 0;
  if (local_res20 == (longlong *)0x0) goto LAB_14013ae2d;
  local_res10 = 0;
  (**(code **)(*local_res20 + 0x28))(local_res20,&local_res10);
  if (local_res10 != 0) {
    if (*(int *)(local_res10 + 4) != 0) {
      uVar7 = *(undefined8 *)(local_res10 + 0x10);
      local_138 = 0;
      local_148 = (undefined8 ****)0x0;
      uStack_140 = 0;
      local_130 = 0;
      uVar8 = FUN_1402d6b70(uVar7);
      FUN_140016240(&local_148,uVar7,uVar8);
      if (local_138 == 0) {
LAB_14013accb:
        uStack_c0 = 0;
        local_c8 = (undefined8 ****)0x0;
      }
      else {
        local_150 = 0;
        ppppuVar10 = &local_148;
        if (7 < local_130) {
          ppppuVar10 = (undefined8 ****)local_148;
        }
        local_158 = 0;
        local_160 = 0;
        local_168 = (undefined8 ****)0x0;
        iVar6 = (*DAT_140426608)(0xfde9,0,ppppuVar10);
        if (iVar6 < 1) goto LAB_14013accb;
        FUN_140016a10(&local_a8,(longlong)iVar6,0);
        local_168 = &local_a8;
        if (0xf < uStack_90) {
          local_168 = local_a8;
        }
        local_150 = 0;
        ppppuVar10 = &local_148;
        if (7 < local_130) {
          ppppuVar10 = (undefined8 ****)local_148;
        }
        local_158 = 0;
        local_160 = iVar6;
        (*DAT_140426608)(0xfde9,0,ppppuVar10,local_138 & 0xffffffff);
        local_c8 = local_a8;
        uStack_c0 = uStack_a0;
        uVar9 = local_98;
        uVar11 = uStack_90;
      }
      local_f8 = local_c8;
      uStack_f0 = uStack_c0;
      local_e8 = uVar9;
      local_e0 = uVar11;
      if (7 < local_130) {
        uVar11 = local_130 * 2 + 2;
        ppppuVar10 = (undefined8 ****)local_148;
        if (0xfff < uVar11) {
          ppppuVar10 = (undefined8 ****)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppuVar10))) {
LAB_14013af0e:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            puVar12 = auStack_180;
LAB_14013af15:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar12 + -8) = &UNK_14013af1a;
            FUN_1402c98b4();
          }
          uVar11 = local_130 * 2 + 0x29;
        }
        func_0x00014028b040(ppppuVar10,uVar11);
        return;
      }
    }
    uVar11 = local_res10;
    if (local_res10 != 0) {
      LOCK();
      piVar2 = (int *)(local_res10 + 0x18);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        uVar9 = FUN_1402ed5b4();
        func_0x0001402ed5a8(uVar9,0,uVar11);
      }
      else if (iVar6 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402c98b4();
      }
    }
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
  }
LAB_14013ae2d:
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
    local_80 = (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017090(&local_a8,&local_118);
}

