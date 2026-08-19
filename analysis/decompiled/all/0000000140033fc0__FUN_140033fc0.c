// Function: FUN_140033fc0
// Addr: 140033fc0
// Size: 571 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_140033fc0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  int local_res20 [2];
  ulonglong in_stack_ffffffffffffff58;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86 [2];
  undefined1 auStack_84 [12];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar15 = *(uint *)(param_4 + 0x18) & 0x3000;
  local_58 = 0;
  local_50 = 0xf;
  uStack_60 = 0;
  local_68 = (undefined8 *****)0x0;
  if (uVar15 == 0x3000) {
    iVar7 = 0xd;
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = *(ulonglong *)(param_4 + 0x20);
    if ((longlong)uVar11 < 1) {
      if (uVar11 == 0) {
        if (uVar15 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 6;
      }
    }
    else {
      iVar7 = (int)uVar11;
    }
  }
  uVar17 = (uint)((ulonglong)param_6 >> 0x20);
  lVar12 = (longlong)iVar7;
  bVar16 = (uVar17 >> 0x14 & 0x7ff) != 0x7ff;
  if (((uVar15 == 0x2000) && (bVar16)) &&
     (uVar15 = (uint)param_6 & _DAT_1404930a0, uVar17 = uVar17 & _UNK_1404930a4,
     DAT_140492980 <= (double)CONCAT44(uVar17,uVar15) &&
     (double)CONCAT44(uVar17,uVar15) != DAT_140492980)) {
    local_res20[0] = 0;
    FUN_1402ca440((uint)param_6,local_res20);
    iVar7 = -local_res20[0];
    if (-local_res20[0] < 0) {
      iVar7 = local_res20[0];
    }
    lVar12 = lVar12 + (iVar7 * 0x7597) / 100000;
  }
  uVar1 = lVar12 + 0x32;
  if (local_58 < uVar1) {
    uVar13 = uVar1 - local_58;
    if (uVar13 <= local_50 - local_58) {
      pppppuVar8 = &local_68;
      if (0xf < local_50) {
        pppppuVar8 = (undefined8 *****)local_68;
      }
      lVar12 = (longlong)pppppuVar8 + local_58;
      local_58 = uVar1;
      puVar9 = (undefined4 *)func_0x000140421870(lVar12,0,uVar13);
      return puVar9;
    }
    FUN_140016d90(&local_68,uVar13,(undefined1)local_res20[0],uVar13,
                  in_stack_ffffffffffffff58 & 0xffffffffffffff00);
  }
  else {
    pppppuVar8 = &local_68;
    if (0xf < local_50) {
      pppppuVar8 = (undefined8 *****)local_68;
    }
    local_58 = uVar1;
    *(undefined1 *)((longlong)pppppuVar8 + uVar1) = 0;
  }
  local_88 = 0x25;
  uVar15 = *(uint *)(param_4 + 0x18);
  if (!bVar16) {
    uVar15 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  }
  puVar10 = (undefined2 *)&local_87;
  if ((uVar15 & 0x20) != 0) {
    local_87 = 0x2b;
    puVar10 = (undefined2 *)local_86;
  }
  if ((uVar15 & 0x10) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)local_86;
    if ((uVar15 & 0x20) != 0) {
      puVar10 = (undefined2 *)(local_86 + 1);
    }
  }
  *puVar10 = 0x2a2e;
  uVar17 = uVar15 & 0x3000;
  if ((uVar15 & 4) == 0) {
    if (uVar17 == 0x2000) {
      uVar6 = 0x66;
      goto LAB_1400341ec;
    }
    if (uVar17 == 0x3000) {
      uVar6 = 0x61;
      goto LAB_1400341ec;
    }
    uVar6 = 0x67;
    uVar14 = 0x65;
  }
  else {
    if (uVar17 == 0x2000) {
      uVar6 = 0x46;
      goto LAB_1400341ec;
    }
    if (uVar17 == 0x3000) {
      uVar6 = 0x41;
      goto LAB_1400341ec;
    }
    uVar6 = 0x47;
    uVar14 = 0x45;
  }
  if (uVar17 == 0x1000) {
    uVar6 = uVar14;
  }
LAB_1400341ec:
  *(undefined1 *)(puVar10 + 1) = uVar6;
  pppppuVar8 = &local_68;
  if (0xf < local_50) {
    pppppuVar8 = (undefined8 *****)local_68;
  }
  *(undefined1 *)((longlong)puVar10 + 3) = 0;
  iVar7 = FUN_140016370(pppppuVar8,local_58,&local_88,uVar11 & 0xffffffff,param_6);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  if (iVar7 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
  }
  else {
    pppppuVar8 = &local_68;
    if (0xf < local_50) {
      pppppuVar8 = (undefined8 *****)local_68;
    }
    uStack_78 = *param_3;
    uStack_74 = uVar3;
    uStack_70 = uVar4;
    uStack_6c = uVar5;
    FUN_1400357b0(param_1,param_2,&uStack_78,param_4,param_5,pppppuVar8,(longlong)iVar7,bVar16);
  }
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pppppuVar8 = (undefined8 *****)local_68;
    if (0xfff < uVar11) {
      pppppuVar8 = (undefined8 *****)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppuVar8))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar9 = (undefined4 *)(*pcVar2)();
        return puVar9;
      }
      uVar11 = local_50 + 0x28;
    }
    func_0x00014028b040(pppppuVar8,uVar11);
  }
  return param_2;
}

