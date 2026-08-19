// Function: FUN_14013c4d0
// Addr: 14013c4d0
// Size: 2646 bytes


/* WARNING: Removing unreachable block (ram,0x00014013caf9) */
/* WARNING: Removing unreachable block (ram,0x00014013c934) */
/* WARNING: Removing unreachable block (ram,0x00014013c93a) */
/* WARNING: Removing unreachable block (ram,0x00014013c94b) */
/* WARNING: Removing unreachable block (ram,0x00014013c960) */
/* WARNING: Removing unreachable block (ram,0x00014013c967) */
/* WARNING: Removing unreachable block (ram,0x00014013c96c) */
/* WARNING: Removing unreachable block (ram,0x00014013c986) */
/* WARNING: Removing unreachable block (ram,0x00014013c998) */
/* WARNING: Removing unreachable block (ram,0x00014013c9ad) */
/* WARNING: Removing unreachable block (ram,0x00014013c9b4) */
/* WARNING: Removing unreachable block (ram,0x00014013c9b9) */
/* WARNING: Removing unreachable block (ram,0x00014013c5df) */
/* WARNING: Removing unreachable block (ram,0x00014013ce7b) */
/* WARNING: Removing unreachable block (ram,0x00014013ce81) */
/* WARNING: Removing unreachable block (ram,0x00014013ce92) */
/* WARNING: Removing unreachable block (ram,0x00014013cea7) */
/* WARNING: Removing unreachable block (ram,0x00014013ceae) */
/* WARNING: Removing unreachable block (ram,0x00014013ceb3) */
/* WARNING: Removing unreachable block (ram,0x00014013cecd) */
/* WARNING: Removing unreachable block (ram,0x00014013ceda) */
/* WARNING: Removing unreachable block (ram,0x00014013ceef) */
/* WARNING: Removing unreachable block (ram,0x00014013cef6) */
/* WARNING: Removing unreachable block (ram,0x00014013cefe) */
/* WARNING: Removing unreachable block (ram,0x00014013cf00) */

void FUN_14013c4d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong local_res10;
  longlong local_res18;
  longlong *local_res20;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined8 ***local_158;
  int local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 ***local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong local_120;
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
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar11 = auStack_178;
  uVar12 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  local_res20 = (longlong *)0x0;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_res20);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (local_res20 != (longlong *)0x0) {
    local_res10 = local_res10 & 0xffffffff00000000;
    (**(code **)(*local_res20 + 0x18))(local_res20,&local_res10);
    if ((uint)local_res10 != 0) {
      do {
        local_78 = (longlong *)0x0;
        (**(code **)(*local_res20 + 0x20))(local_res20,uVar12,&DAT_14048b060,&local_78);
        plVar2 = local_78;
        if (local_78 != (longlong *)0x0) {
          local_108 = 0;
          local_e8 = 0;
          local_100 = 0xf;
          local_e0 = 0xf;
          local_d8 = 0xffffffff;
          uStack_110 = 0;
          local_118 = (undefined8 ****)0x0;
          uStack_f0 = 0;
          local_f8 = (undefined8 ****)0x0;
          if (local_78 != (longlong *)0x0) {
            local_70 = 0;
            uStack_68 = 0;
            (**(code **)(*local_78 + 0x20))(local_78,&local_70);
            local_80 = 0;
            iVar5 = (*DAT_140426b90)(&local_70,&local_80);
            uVar8 = local_80;
            if (-1 < iVar5) {
              uVar6 = 0;
              local_138 = (undefined8 ****)0x0;
              uStack_130 = 0;
              local_128 = 0;
              local_120 = 0;
              uVar7 = FUN_1402d6b70(local_80);
              FUN_140016240(&local_138,uVar8,uVar7);
              if (local_128 == 0) {
LAB_14013c70e:
                local_100 = 0xf;
                uStack_a0 = 0;
                local_a8 = (undefined8 ****)0x0;
              }
              else {
                local_140 = 0;
                ppppuVar9 = &local_138;
                if (7 < local_120) {
                  ppppuVar9 = (undefined8 ****)local_138;
                }
                local_148 = 0;
                local_150 = 0;
                local_158 = (undefined8 ****)0x0;
                iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar9);
                if (iVar5 < 1) goto LAB_14013c70e;
                FUN_140016a10(&local_c8,(longlong)iVar5,0);
                local_158 = &local_c8;
                if (0xf < uStack_b0) {
                  local_158 = local_c8;
                }
                local_140 = 0;
                ppppuVar9 = &local_138;
                if (7 < local_120) {
                  ppppuVar9 = (undefined8 ****)local_138;
                }
                local_148 = 0;
                local_150 = iVar5;
                (*DAT_140426608)(0xfde9,0,ppppuVar9,local_128 & 0xffffffff);
                local_a8 = local_c8;
                uStack_a0 = uStack_c0;
                local_100 = uStack_b0;
                uVar6 = local_b8;
              }
              local_118 = local_a8;
              uStack_110 = uStack_a0;
              local_108 = uVar6;
              if (7 < local_120) {
                FUN_140016b60(&local_138,local_138);
              }
              (*DAT_140426b80)(local_80);
            }
            local_res18 = 0;
            (**(code **)(*plVar2 + 0x28))(plVar2,&local_res18);
            if (local_res18 != 0) {
              if (*(int *)(local_res18 + 4) != 0) {
                uVar8 = *(undefined8 *)(local_res18 + 0x10);
                local_128 = 0;
                local_138 = (undefined8 ****)0x0;
                uStack_130 = 0;
                local_120 = 0;
                uVar6 = FUN_1402d6b70(uVar8);
                FUN_140016240(&local_138,uVar8,uVar6);
                if (local_128 == 0) {
LAB_14013c871:
                  local_b8 = 0;
                  uStack_c0 = 0;
                  local_c8 = (undefined8 ****)0x0;
                  uStack_b0 = 0xf;
                }
                else {
                  local_140 = 0;
                  ppppuVar9 = &local_138;
                  if (7 < local_120) {
                    ppppuVar9 = (undefined8 ****)local_138;
                  }
                  local_148 = 0;
                  local_150 = 0;
                  local_158 = (undefined8 ****)0x0;
                  iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar9);
                  if (iVar5 < 1) goto LAB_14013c871;
                  FUN_140016a10(&local_a8,(longlong)iVar5,0);
                  local_158 = &local_a8;
                  if (0xf < uStack_90) {
                    local_158 = local_a8;
                  }
                  local_140 = 0;
                  ppppuVar9 = &local_138;
                  if (7 < local_120) {
                    ppppuVar9 = (undefined8 ****)local_138;
                  }
                  local_148 = 0;
                  local_150 = iVar5;
                  (*DAT_140426608)(0xfde9,0,ppppuVar9,local_128 & 0xffffffff);
                  local_c8 = local_a8;
                  uStack_c0 = uStack_a0;
                  local_b8 = local_98;
                  uStack_b0 = uStack_90;
                }
                FUN_14000df10(&local_f8,&local_c8);
                if (0xf < uStack_b0) {
                  uVar10 = uStack_b0 + 1;
                  ppppuVar9 = (undefined8 ****)local_c8;
                  if (0xfff < uVar10) {
                    ppppuVar9 = (undefined8 ****)local_c8[-1];
                    if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar9)))
                    goto UNWIND_INFO_14013cf27_UnwindCodes_108__UnwindOpCode;
                    uVar10 = uStack_b0 + 0x28;
                  }
                  func_0x00014028b040(ppppuVar9,uVar10);
                  return;
                }
                if (7 < local_120) {
                  FUN_140016b60(&local_138,local_138);
                }
              }
              lVar4 = local_res18;
              if (local_res18 != 0) {
                LOCK();
                piVar1 = (int *)(local_res18 + 0x18);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  uVar8 = FUN_1402ed5b4();
                  func_0x0001402ed5a8(uVar8,0,lVar4);
                }
                else if (iVar5 + -1 < 0) goto UNWIND_INFO_14013cf27_UnwindCodes_112__OffsetInProlog;
                local_res18 = 0;
              }
            }
          }
          FUN_14013e600(&local_60,&local_118);
          if (0xf < local_e0) {
            uVar10 = local_e0 + 1;
            ppppuVar9 = (undefined8 ****)local_f8;
            if (0xfff < uVar10) {
              ppppuVar9 = (undefined8 ****)local_f8[-1];
              if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar9)))
              goto UNWIND_INFO_14013cf27_UnwindCodes_108__UnwindOpCode;
              uVar10 = local_e0 + 0x28;
            }
            func_0x00014028b040(ppppuVar9,uVar10);
            return;
          }
          if (0xf < local_100) {
            uVar10 = local_100 + 1;
            ppppuVar9 = (undefined8 ****)local_118;
            if (0xfff < uVar10) {
              ppppuVar9 = (undefined8 ****)local_118[-1];
              if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)ppppuVar9)))
              goto UNWIND_INFO_14013cf27_UnwindCodes_108__UnwindOpCode;
              uVar10 = local_100 + 0x28;
            }
            func_0x00014028b040(ppppuVar9,uVar10);
            return;
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)local_res10);
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
      local_res20 = (longlong *)0x0;
    }
  }
  uVar8 = 0;
  local_88 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),&local_88);
  plVar2 = local_88;
  local_108 = 0;
  local_100 = 0xf;
  local_e8 = 0;
  uVar10 = 0xf;
  local_e0 = 0xf;
  local_d8 = 0xffffffff;
  uStack_110 = 0;
  local_118 = (undefined8 ****)0x0;
  uStack_f0 = 0;
  local_f8 = (undefined8 ****)0x0;
  if (local_88 == (longlong *)0x0) goto LAB_14013cf22;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*local_88 + 0x20))(local_88,&local_70);
  local_res18 = 0;
  iVar5 = (*DAT_140426b90)(&local_70,&local_res18);
  lVar4 = local_res18;
  if (-1 < iVar5) {
    local_128 = 0;
    local_138 = (undefined8 ****)0x0;
    uStack_130 = 0;
    local_120 = 0;
    uVar6 = FUN_1402d6b70(local_res18);
    FUN_140016240(&local_138,lVar4,uVar6);
    if (local_128 == 0) {
LAB_14013cc1e:
      uStack_c0 = 0;
      local_c8 = (undefined8 ****)0x0;
      local_100 = 0xf;
    }
    else {
      local_140 = 0;
      ppppuVar9 = &local_138;
      if (7 < local_120) {
        ppppuVar9 = (undefined8 ****)local_138;
      }
      local_148 = 0;
      local_150 = 0;
      local_158 = (undefined8 ****)0x0;
      iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar9);
      if (iVar5 < 1) goto LAB_14013cc1e;
      FUN_140016a10(&local_a8,(longlong)iVar5,0);
      local_158 = &local_a8;
      if (0xf < uStack_90) {
        local_158 = local_a8;
      }
      local_140 = 0;
      ppppuVar9 = &local_138;
      if (7 < local_120) {
        ppppuVar9 = (undefined8 ****)local_138;
      }
      local_148 = 0;
      local_150 = iVar5;
      (*DAT_140426608)(0xfde9,0,ppppuVar9,local_128 & 0xffffffff);
      local_c8 = local_a8;
      uStack_c0 = uStack_a0;
      local_100 = uStack_90;
      uVar8 = local_98;
    }
    uStack_110 = uStack_c0;
    local_118 = local_c8;
    local_108 = uVar8;
    if (7 < local_120) {
      uVar10 = local_120 * 2 + 2;
      ppppuVar9 = (undefined8 ****)local_138;
      if (uVar10 < 0x1000) {
LAB_14013cc8f:
        func_0x00014028b040(ppppuVar9,uVar10);
        return;
      }
      ppppuVar9 = (undefined8 ****)local_138[-1];
      if ((ulonglong)((longlong)local_138 + (-8 - (longlong)ppppuVar9)) < 0x20) {
        uVar10 = local_120 * 2 + 0x29;
        goto LAB_14013cc8f;
      }
      goto UNWIND_INFO_14013cf27_UnwindCodes_108__UnwindOpCode;
    }
    (*DAT_140426b80)(local_res18);
  }
  local_res10 = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_res10);
  if (local_res10 == 0) goto LAB_14013cf22;
  uVar8 = 0;
  if (*(int *)(local_res10 + 4) != 0) {
    uVar6 = *(undefined8 *)(local_res10 + 0x10);
    local_128 = 0;
    local_138 = (undefined8 ****)0x0;
    uStack_130 = 0;
    local_120 = 0;
    uVar7 = FUN_1402d6b70(uVar6);
    FUN_140016240(&local_138,uVar6,uVar7);
    if (local_128 == 0) {
LAB_14013cdcf:
      uStack_c0 = 0;
      local_c8 = (undefined8 ****)0x0;
    }
    else {
      local_140 = 0;
      ppppuVar9 = &local_138;
      if (7 < local_120) {
        ppppuVar9 = (undefined8 ****)local_138;
      }
      local_148 = 0;
      local_150 = 0;
      local_158 = (undefined8 ****)0x0;
      iVar5 = (*DAT_140426608)(0xfde9,0,ppppuVar9);
      if (iVar5 < 1) goto LAB_14013cdcf;
      FUN_140016a10(&local_a8,(longlong)iVar5,0);
      local_158 = &local_a8;
      if (0xf < uStack_90) {
        local_158 = local_a8;
      }
      local_140 = 0;
      ppppuVar9 = &local_138;
      if (7 < local_120) {
        ppppuVar9 = (undefined8 ****)local_138;
      }
      local_148 = 0;
      local_150 = iVar5;
      (*DAT_140426608)(0xfde9,0,ppppuVar9,local_128 & 0xffffffff);
      local_c8 = local_a8;
      uStack_c0 = uStack_a0;
      uVar8 = local_98;
      uVar10 = uStack_90;
    }
    local_f8 = local_c8;
    uStack_f0 = uStack_c0;
    local_e8 = uVar8;
    local_e0 = uVar10;
    if (7 < local_120) {
      uVar10 = local_120 * 2 + 2;
      ppppuVar9 = (undefined8 ****)local_138;
      if (0xfff < uVar10) {
        ppppuVar9 = (undefined8 ****)local_138[-1];
        if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppuVar9))) {
UNWIND_INFO_14013cf27_UnwindCodes_108__UnwindOpCode:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar11 = auStack_170;
UNWIND_INFO_14013cf27_UnwindCodes_112__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar11 + -8) = 0x14013d010;
          FUN_1402c98b4();
        }
        uVar10 = local_120 * 2 + 0x29;
      }
      func_0x00014028b040(ppppuVar9,uVar10);
      return;
    }
  }
  uVar10 = local_res10;
  if (local_res10 != 0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 0x18);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      uVar8 = FUN_1402ed5b4();
      func_0x0001402ed5a8(uVar8,0,uVar10);
    }
    else if (iVar5 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
    local_res10 = 0;
  }
LAB_14013cf22:
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017090(&local_a8,&local_118);
}

