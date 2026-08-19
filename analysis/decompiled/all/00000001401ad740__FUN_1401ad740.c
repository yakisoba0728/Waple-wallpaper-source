// Function: FUN_1401ad740
// Addr: 1401ad740
// Size: 1314 bytes


void FUN_1401ad740(void)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *in_R9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *in_stack_00000030;
  longlong in_stack_00000038;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [40];
  int local_138;
  undefined8 local_130;
  undefined8 ****local_128;
  undefined8 ****ppppuStack_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  uint *local_100;
  longlong local_f8;
  undefined8 local_f0;
  uint *local_e8;
  longlong local_d8 [4];
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 *****local_88;
  undefined8 *****local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  
  puVar8 = auStack_168;
  if (*in_stack_00000030 != 0) {
    local_e8 = in_stack_00000030;
    local_130 = 0;
    local_108 = 0;
    puVar11 = in_stack_00000030;
    puVar12 = in_stack_00000030;
    do {
      local_138 = 0;
      iVar9 = 0;
      local_100 = puVar12;
      local_f8 = local_108;
      local_f0 = local_130;
      do {
        iVar4 = local_138;
        lVar5 = *in_R9;
        uVar7 = (ulonglong)iVar9;
        if ((ulonglong)((in_R9[1] - lVar5 >> 3) * -0x5555555555555555) <= uVar7) {
          if (7 < (int)in_R9[3]) goto LAB_1401adcd2;
          FUN_1401ab890(local_80);
          iVar9 = (int)in_R9[3];
          local_88 = local_80[0];
          if (iVar9 < 8) {
            *(int *)(in_R9 + 3) = (int)in_R9[3] + 1;
            local_128 = (undefined8 ****)0x0;
            ppppuStack_120 = (undefined8 *****)0x0;
            if ((&DAT_140484d18)[(longlong)iVar9 * 0x10] == '\0') {
              local_118 = 0;
              local_128 = (undefined8 *****)0x0;
            }
            else {
              local_118 = 0;
              ppppppuVar6 = local_80;
              if (0xf < local_68) {
                ppppppuVar6 = (undefined8 ******)local_80[0];
              }
              local_110 = 0;
              if (0x7fffffffffffffff < local_70) goto LAB_1401ade74;
              if (0xf < local_70) {
                uVar7 = local_70 | 0xf;
                if (uVar7 < 0x8000000000000000) {
                  if (uVar7 < 0x16) {
                    uVar7 = 0x16;
                  }
                  uVar1 = uVar7 + 1;
                  if (uVar1 == 0) {
                    local_128 = (undefined8 ****)0x0;
                    local_118 = local_70;
                    local_110 = uVar7;
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(0,ppppppuVar6,local_70 + 1);
                  }
                  if (uVar1 < 0x1000) {
                    func_0x00014028aff0(uVar1);
                    return;
                  }
                  uVar7 = uVar7 + 0x28;
                  if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    FUN_140017440();
                  }
                }
                else {
                  uVar7 = 0x8000000000000027;
                }
                func_0x00014028aff0(uVar7);
                return;
              }
              local_118 = local_70;
              local_128 = *ppppppuVar6;
              ppppuStack_120 = ppppppuVar6[1];
            }
            local_110 = 0xf;
            func_0x000140421ed0((&PTR_s_LIGHTS_SHADOW_MAPPING_140484d10)[(longlong)iVar9 * 2]);
            return;
          }
          if (0xf < local_68) {
            uVar7 = local_68 + 1;
            ppppppuVar6 = (undefined8 ******)local_80[0];
            if (0xfff < uVar7) {
              ppppppuVar6 = (undefined8 ******)local_80[0][-1];
              if (0x1f < (ulonglong)((longlong)local_80[0] + (-8 - (longlong)ppppppuVar6)))
              goto LAB_1401ade6d;
              uVar7 = local_68 + 0x28;
            }
            func_0x00014028b040(ppppppuVar6,uVar7);
            return;
          }
          lVar10 = local_f8;
          puVar11 = local_e8;
          if (iVar4 == 0) goto LAB_1401adcd2;
          break;
        }
        lVar10 = *(longlong *)(lVar5 + 8 + uVar7 * 0x18);
        local_f0 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
        local_f8 = lVar10;
        local_138 = func_0x0001402f0130(lVar10);
        iVar9 = iVar9 + 1;
      } while (local_138 == 0);
      if (lVar10 != local_108) {
        uVar2 = *puVar12;
        if ((uVar2 != 0x200d) &&
           ((0x20 < uVar2 || ((0x100002600U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)))) {
          if ((local_108 != 0) && (puVar11 < puVar12)) {
            local_b0 = local_108;
            local_d8[2] = 0;
            local_d8[1] = 0;
            local_d8[0] = 0;
            local_a0 = 0;
            local_a8 = local_130;
            local_d8[3] = 3;
            local_98 = 0;
            lStack_90 = 0;
            FUN_1401b4eb0(local_d8,puVar11,(longlong)puVar12 - (longlong)puVar11 >> 2);
            local_b8 = (undefined4)((longlong)puVar11 - (longlong)in_stack_00000030 >> 2);
            if (*(longlong *)(in_stack_00000038 + 8) == *(longlong *)(in_stack_00000038 + 0x10)) {
              FUN_1401b6340(in_stack_00000038,*(longlong *)(in_stack_00000038 + 8),local_d8);
            }
            else {
              FUN_1401b6f70();
              *(longlong *)(in_stack_00000038 + 8) = *(longlong *)(in_stack_00000038 + 8) + 0x50;
            }
            if (local_a0 != 0) {
              uVar7 = (lStack_90 - local_a0 >> 4) * 0x10;
              lVar5 = local_a0;
              if (0xfff < uVar7) {
                if (0x1f < (local_a0 - *(longlong *)(local_a0 + -8)) - 8U) goto LAB_1401ade6d;
                uVar7 = uVar7 + 0x27;
                lVar5 = *(longlong *)(local_a0 + -8);
              }
              func_0x00014028b040(lVar5,uVar7);
              return;
            }
            if (3 < (ulonglong)local_d8[3]) {
              uVar7 = local_d8[3] * 4 + 4;
              lVar5 = local_d8[0];
              if (0xfff < uVar7) {
                lVar5 = *(longlong *)(local_d8[0] + -8);
                if (0x1f < (local_d8[0] - lVar5) - 8U) goto LAB_1401ade6d;
                uVar7 = local_d8[3] * 4 + 0x2b;
              }
              func_0x00014028b040(lVar5,uVar7);
              return;
            }
          }
          local_130 = local_f0;
          puVar11 = puVar12;
          local_108 = lVar10;
          local_e8 = puVar12;
        }
      }
LAB_1401adcd2:
      puVar12 = puVar12 + 1;
    } while (*puVar12 != 0);
    if (local_108 == 0) {
      return;
    }
    if (puVar12 <= puVar11) {
      return;
    }
    local_d8[2] = 0;
    local_d8[1] = 0;
    local_d8[0] = 0;
    local_a0 = 0;
    local_d8[3] = 3;
    local_98 = 0;
    lStack_90 = 0;
    local_100 = puVar12;
    local_b0 = local_108;
    local_a8 = local_130;
    FUN_1401b4eb0(local_d8,puVar11,(longlong)puVar12 - (longlong)puVar11 >> 2);
    local_b8 = (undefined4)((longlong)puVar11 - (longlong)in_stack_00000030 >> 2);
    if (*(longlong *)(in_stack_00000038 + 8) == *(longlong *)(in_stack_00000038 + 0x10)) {
      FUN_1401b6340(in_stack_00000038,*(longlong *)(in_stack_00000038 + 8),local_d8);
    }
    else {
      FUN_1401b6f70();
      *(longlong *)(in_stack_00000038 + 8) = *(longlong *)(in_stack_00000038 + 8) + 0x50;
    }
    if (local_a0 != 0) {
      uVar7 = (lStack_90 - local_a0 >> 4) * 0x10;
      lVar5 = local_a0;
      if (0xfff < uVar7) {
        if (0x1f < (local_a0 - *(longlong *)(local_a0 + -8)) - 8U) goto LAB_1401ade6d;
        uVar7 = uVar7 + 0x27;
        lVar5 = *(longlong *)(local_a0 + -8);
      }
      func_0x00014028b040(lVar5,uVar7);
    }
    if (3 < (ulonglong)local_d8[3]) {
      uVar7 = local_d8[3] * 4 + 4;
      lVar5 = local_d8[0];
      if (0xfff < uVar7) {
        lVar5 = *(longlong *)(local_d8[0] + -8);
        if (0x1f < (local_d8[0] - lVar5) - 8U) {
LAB_1401ade6d:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar8 = auStack_160;
LAB_1401ade74:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar8 + -8) = &UNK_1401ade79;
          FUN_1400173b0();
        }
        uVar7 = local_d8[3] * 4 + 0x2b;
      }
      func_0x00014028b040(lVar5,uVar7);
    }
  }
  return;
}

