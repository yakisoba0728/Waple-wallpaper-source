// Function: FUN_14009b7b0
// Addr: 14009b7b0
// Size: 1567 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14009b7b0(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_44;
  
  lVar10 = *(longlong *)(param_1[0xe] + 0x20);
  if ((lVar10 != 0) && (plVar2 = *(longlong **)(lVar10 + 0x60), plVar2 != (longlong *)0x0)) {
    pcVar8 = (char *)FUN_14028af20(0x68);
    local_68 = 0;
    uStack_60 = 0;
    plVar1 = (longlong *)(pcVar8 + 0x40);
    *pcVar8 = '\0';
    *plVar1 = 0;
    pcVar8[0x30] = '\0';
    pcVar8[0x31] = '\0';
    pcVar8[0x32] = '\0';
    pcVar8[0x33] = '\0';
    pcVar8[0x34] = '\0';
    pcVar8[0x35] = '\0';
    pcVar8[0x36] = '\0';
    pcVar8[0x37] = '\0';
    pcVar8[0x38] = '\0';
    pcVar8[0x39] = '\0';
    pcVar8[0x3a] = '\0';
    pcVar8[0x3b] = '\0';
    pcVar8[0x3c] = '\0';
    pcVar8[0x3d] = '\0';
    pcVar8[0x3e] = '\0';
    pcVar8[0x3f] = '\0';
    pcVar8[0x48] = '\0';
    pcVar8[0x49] = '\0';
    pcVar8[0x4a] = '\0';
    pcVar8[0x4b] = '\0';
    pcVar8[0x4c] = '\0';
    pcVar8[0x4d] = '\0';
    pcVar8[0x4e] = '\0';
    pcVar8[0x4f] = '\0';
    pcVar8[0x50] = '\0';
    pcVar8[0x51] = '\0';
    pcVar8[0x52] = '\0';
    pcVar8[0x53] = '\0';
    pcVar8[0x54] = '\0';
    pcVar8[0x55] = '\0';
    pcVar8[0x56] = '\0';
    pcVar8[0x57] = '\0';
    pcVar8[0x58] = '\0';
    pcVar8[0x59] = '\0';
    pcVar8[0x5a] = '\0';
    pcVar8[0x5b] = '\0';
    pcVar8[0x5c] = '\0';
    pcVar8[0x5d] = '\0';
    pcVar8[0x5e] = '\0';
    pcVar8[0x5f] = '\0';
    pcVar8[0x60] = '\0';
    pcVar8[0x61] = '\0';
    pcVar8[0x62] = '\0';
    pcVar8[99] = '\0';
    pcVar8[100] = '\0';
    pcVar8[0x65] = '\0';
    pcVar8[0x66] = '\0';
    pcVar8[0x67] = '\0';
    pcVar8[4] = '\0';
    pcVar8[5] = '\0';
    pcVar8[6] = '\0';
    pcVar8[7] = '\0';
    pcVar8[8] = '\0';
    pcVar8[9] = '\0';
    pcVar8[10] = '\0';
    pcVar8[0xb] = '\0';
    pcVar8[0xc] = '\0';
    pcVar8[0xd] = '\0';
    pcVar8[0xe] = '\0';
    pcVar8[0xf] = '\0';
    pcVar8[0x10] = '\0';
    pcVar8[0x11] = '\0';
    pcVar8[0x12] = '\0';
    pcVar8[0x13] = '\0';
    uStack_5c = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    pcVar8[0x14] = '\0';
    pcVar8[0x15] = '\0';
    pcVar8[0x16] = '\0';
    pcVar8[0x17] = '\0';
    pcVar8[0x18] = '\0';
    pcVar8[0x19] = '\0';
    pcVar8[0x1a] = '\0';
    pcVar8[0x1b] = '\0';
    pcVar8[0x1c] = '\0';
    pcVar8[0x1d] = '\0';
    pcVar8[0x1e] = '\0';
    pcVar8[0x1f] = '\0';
    pcVar8[0x20] = '\0';
    pcVar8[0x21] = '\0';
    pcVar8[0x22] = '\0';
    pcVar8[0x23] = '\0';
    pcVar8[0x20] = '\0';
    pcVar8[0x21] = '\0';
    pcVar8[0x22] = '\0';
    pcVar8[0x23] = '\0';
    pcVar8[0x24] = '\0';
    pcVar8[0x25] = '\0';
    pcVar8[0x26] = '\0';
    pcVar8[0x27] = '\0';
    pcVar8[0x28] = '\0';
    pcVar8[0x29] = '\0';
    pcVar8[0x2a] = '\0';
    pcVar8[0x2b] = '\0';
    pcVar8[0x2c] = '\0';
    pcVar8[0x2d] = '\0';
    pcVar8[0x2e] = '\0';
    pcVar8[0x2f] = '\0';
    (**(code **)(*plVar2 + 0x50))(plVar2,pcVar8 + 4);
    local_c8 = *(undefined8 *)(pcVar8 + 4);
    uStack_c0 = *(undefined8 *)(pcVar8 + 0xc);
    *pcVar8 = *(int *)(pcVar8 + 0x14) == 10;
    bVar17 = *(int *)(pcVar8 + 0x14) == 10;
    local_b8 = (undefined4)*(undefined8 *)(pcVar8 + 0x14);
    uStack_a4 = 0x20000;
    if (bVar17) {
      uStack_a4 = 0;
    }
    uStack_b4 = 1;
    uStack_b0 = 0;
    uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(pcVar8 + 0x28) >> 0x20);
    uStack_ac = 3;
    if (bVar17) {
      uStack_ac = 0;
    }
    uStack_a8 = 0;
    if (bVar17) {
      uStack_a8 = 8;
    }
    (**(code **)(**(longlong **)param_1[0xe] + 0x28))
              (*(longlong **)param_1[0xe],&local_c8,0,pcVar8 + 0x30);
    if ((1 < *(uint *)(pcVar8 + 0x18)) && (*(longlong *)(pcVar8 + 0x38) == 0)) {
      local_c8 = *(undefined8 *)(pcVar8 + 4);
      uStack_c0 = *(undefined8 *)(pcVar8 + 0xc);
      local_b8 = (undefined4)*(undefined8 *)(pcVar8 + 0x14);
      uStack_b4 = 1;
      uStack_b0 = 0;
      uStack_a4 = (undefined4)*(undefined8 *)(pcVar8 + 0x28);
      uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(pcVar8 + 0x28) >> 0x20);
      uStack_ac = 0;
      uStack_a8 = 0;
      (**(code **)(**(longlong **)param_1[0xe] + 0x28))
                (*(longlong **)param_1[0xe],&local_c8,0,pcVar8 + 0x38);
    }
    bVar16 = 0;
    if (*(longlong *)(pcVar8 + 0x30) != 0) {
      plVar3 = *(longlong **)(param_1[0xe] + 8);
      if (*(uint *)(pcVar8 + 0x18) < 2) {
        (**(code **)(*plVar3 + 0x178))(plVar3,*(longlong *)(pcVar8 + 0x30),plVar2);
      }
      else {
        in_stack_ffffffffffffff20 =
             CONCAT44((int)(in_stack_ffffffffffffff20 >> 0x20),*(undefined4 *)(pcVar8 + 0x14));
        (**(code **)(*plVar3 + 0x1c8))
                  (plVar3,*(undefined8 *)(pcVar8 + 0x38),0,plVar2,0,in_stack_ffffffffffffff20);
        (**(code **)(**(longlong **)(param_1[0xe] + 8) + 0x178))
                  (*(longlong **)(param_1[0xe] + 8),*(undefined8 *)(pcVar8 + 0x30),
                   *(undefined8 *)(pcVar8 + 0x38));
      }
      if (*pcVar8 != '\0') {
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          local_c8 = *(undefined8 *)(pcVar8 + 4);
          uStack_c0 = *(undefined8 *)(pcVar8 + 0xc);
          local_b8 = 0x1c;
          uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(pcVar8 + 0x28) >> 0x20);
          uStack_a8 = 0x20;
          uStack_a4 = 0;
          uStack_ac = 0;
          uStack_b4 = 1;
          uStack_b0 = 0;
          (**(code **)(**(longlong **)param_1[0xe] + 0x28))
                    (*(longlong **)param_1[0xe],&local_c8,0,plVar1);
          lVar10 = *plVar1;
        }
        if (*(longlong *)(pcVar8 + 0x48) == 0) {
          local_c8 = *(undefined8 *)(pcVar8 + 4);
          uStack_c0 = *(undefined8 *)(pcVar8 + 0xc);
          local_b8 = 0x1c;
          uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(pcVar8 + 0x28) >> 0x20);
          uStack_a4 = 0x20000;
          uStack_ac = 3;
          uStack_a8 = 0;
          uStack_b4 = 1;
          uStack_b0 = 0;
          (**(code **)(**(longlong **)param_1[0xe] + 0x28))
                    (*(longlong **)param_1[0xe],&local_c8,0,pcVar8 + 0x48);
          lVar10 = *plVar1;
        }
        if (*(longlong *)(pcVar8 + 0x58) == 0) {
          (**(code **)(**(longlong **)param_1[0xe] + 0x48))
                    (*(longlong **)param_1[0xe],lVar10,0,pcVar8 + 0x58);
        }
        if (*(longlong *)(pcVar8 + 0x60) == 0) {
          uVar9 = FUN_14028af20(0x170);
          in_stack_ffffffffffffff20 = CONCAT44((int)(in_stack_ffffffffffffff20 >> 0x20),1);
          uVar9 = FUN_1400eb440(uVar9,"_rt_editor_backbuffer_resolve",*(undefined8 *)(pcVar8 + 0x30)
                                ,*(undefined4 *)(pcVar8 + 0x14),2,in_stack_ffffffffffffff20,
                                param_1[1],param_1[0xe]);
          *(undefined8 *)(pcVar8 + 0x60) = uVar9;
          FUN_14014c8f0(param_1[1] + 0x1520,pcVar8 + 0x60);
        }
        if (*(longlong *)(pcVar8 + 0x50) == 0) {
          local_98 = &local_res8;
          local_78 = _DAT_140492aa0;
          uStack_70 = _UNK_140492aa8;
          local_90 = &stack0x00000010;
          local_58 = (undefined4)_DAT_140492e40;
          uStack_54 = (undefined4)((ulonglong)_DAT_140492e40 >> 0x20);
          uStack_50 = (undefined4)_UNK_140492e48;
          uStack_4c = (undefined4)((ulonglong)_UNK_140492e48 >> 0x20);
          local_68 = _DAT_140492bc0;
          uStack_60 = (undefined4)_UNK_140492bc8;
          uStack_5c = (undefined4)((ulonglong)_UNK_140492bc8 >> 0x20);
          local_48 = 0;
          local_44 = 0x40000000;
          local_res8 = 0;
          local_resc = 7;
          uVar5 = FUN_140098c30(&local_98);
          uVar9 = (**(code **)(*param_1 + 0x48))
                            (param_1,uVar5,&local_78,3,0,
                             in_stack_ffffffffffffff20 & 0xffffffffffffff00);
          *(undefined8 *)(pcVar8 + 0x50) = uVar9;
        }
        (**(code **)(**(longlong **)(param_1[0xe] + 8) + 0x108))
                  (*(longlong **)(param_1[0xe] + 8),1,pcVar8 + 0x58,0);
        (**(code **)(*param_1 + 0x88))
                  (param_1,0,0,*(undefined4 *)(pcVar8 + 4),*(undefined4 *)(pcVar8 + 8));
        lVar10 = FUN_14014ff70(param_1[1] + 0x1630,"materials/util/backbufferpassthrough.json");
        *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(pcVar8 + 0x60);
        FUN_140155fc0(lVar10);
        (**(code **)(**(longlong **)(pcVar8 + 0x50) + 8))();
        FUN_140157430(lVar10);
        if (*(longlong **)(param_1[0xe] + 0x20) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1[0xe] + 0x20) + 0x48))();
        }
        (**(code **)(**(longlong **)(param_1[0xe] + 8) + 0x178))
                  (*(longlong **)(param_1[0xe] + 8),*(undefined8 *)(pcVar8 + 0x48),*plVar1);
      }
      lVar10 = 0x48;
      if (*pcVar8 == '\0') {
        lVar10 = 0x30;
      }
      lVar10 = *(longlong *)(pcVar8 + lVar10);
      if (lVar10 != 0) {
        iVar6 = (**(code **)(**(longlong **)(param_1[0xe] + 8) + 0x70))
                          (*(longlong **)(param_1[0xe] + 8),lVar10,0,1,0,&local_88);
        if (-1 < iVar6) {
          uVar15 = *(uint *)(pcVar8 + 8);
          uVar11 = *(uint *)(pcVar8 + 4);
          if (uVar15 * uVar11 * 4 == param_3) {
            uVar13 = 0;
            if (uVar15 != 0) {
              do {
                iVar6 = uVar11 * uVar13;
                uVar14 = 0;
                if (uVar11 != 0) {
                  do {
                    uVar11 = *(uint *)(local_88 +
                                      (longlong)
                                      (int)(uVar14 + (((uVar15 - uVar13) + -1) * local_80 >> 2)) * 4
                                      );
                    uVar12 = (uVar11 >> 0x10 ^ uVar11) & 0xff;
                    iVar7 = uVar14 + iVar6;
                    uVar14 = uVar14 + 1;
                    *(uint *)(param_2 + (longlong)iVar7 * 4) =
                         (uVar12 << 0x10 | uVar12) ^ uVar11 | 0xff000000;
                    uVar11 = *(uint *)(pcVar8 + 4);
                  } while (uVar14 < uVar11);
                }
                uVar15 = *(uint *)(pcVar8 + 8);
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar15);
            }
            bVar16 = 1;
          }
          (**(code **)(**(longlong **)(param_1[0xe] + 8) + 0x78))
                    (*(longlong **)(param_1[0xe] + 8),lVar10,0);
        }
      }
    }
    if (*(longlong **)(pcVar8 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pcVar8 + 0x58) + 0x10))();
      pcVar8[0x58] = '\0';
      pcVar8[0x59] = '\0';
      pcVar8[0x5a] = '\0';
      pcVar8[0x5b] = '\0';
      pcVar8[0x5c] = '\0';
      pcVar8[0x5d] = '\0';
      pcVar8[0x5e] = '\0';
      pcVar8[0x5f] = '\0';
    }
    if (*(longlong **)(pcVar8 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pcVar8 + 0x30) + 0x10))();
      pcVar8[0x30] = '\0';
      pcVar8[0x31] = '\0';
      pcVar8[0x32] = '\0';
      pcVar8[0x33] = '\0';
      pcVar8[0x34] = '\0';
      pcVar8[0x35] = '\0';
      pcVar8[0x36] = '\0';
      pcVar8[0x37] = '\0';
    }
    if (*(longlong **)(pcVar8 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pcVar8 + 0x38) + 0x10))();
      pcVar8[0x38] = '\0';
      pcVar8[0x39] = '\0';
      pcVar8[0x3a] = '\0';
      pcVar8[0x3b] = '\0';
      pcVar8[0x3c] = '\0';
      pcVar8[0x3d] = '\0';
      pcVar8[0x3e] = '\0';
      pcVar8[0x3f] = '\0';
    }
    plVar2 = *(longlong **)(pcVar8 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(longlong *)(pcVar8 + 0x40) = 0;
    }
    if (*(longlong **)(pcVar8 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pcVar8 + 0x48) + 0x10))();
      pcVar8[0x48] = '\0';
      pcVar8[0x49] = '\0';
      pcVar8[0x4a] = '\0';
      pcVar8[0x4b] = '\0';
      pcVar8[0x4c] = '\0';
      pcVar8[0x4d] = '\0';
      pcVar8[0x4e] = '\0';
      pcVar8[0x4f] = '\0';
    }
    FUN_14014cc70(param_1[1] + 0x1520,pcVar8 + 0x60,1);
    puVar4 = *(undefined8 **)(pcVar8 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar4 = *(undefined8 **)(pcVar8 + 0x50);
    pcVar8[0x60] = '\0';
    pcVar8[0x61] = '\0';
    pcVar8[0x62] = '\0';
    pcVar8[99] = '\0';
    pcVar8[100] = '\0';
    pcVar8[0x65] = '\0';
    pcVar8[0x66] = '\0';
    pcVar8[0x67] = '\0';
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    pcVar8[0x50] = '\0';
    pcVar8[0x51] = '\0';
    pcVar8[0x52] = '\0';
    pcVar8[0x53] = '\0';
    pcVar8[0x54] = '\0';
    pcVar8[0x55] = '\0';
    pcVar8[0x56] = '\0';
    pcVar8[0x57] = '\0';
    thunk_FUN_14028af80(pcVar8,0x68);
    return (ulonglong)bVar16;
  }
  return param_1[0xe] & 0xffffffffffffff00;
}

