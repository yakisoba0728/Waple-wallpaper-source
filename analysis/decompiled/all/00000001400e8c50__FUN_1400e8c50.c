// Function: FUN_1400e8c50
// Addr: 1400e8c50
// Size: 930 bytes


/* WARNING: Removing unreachable block (ram,0x0001400e8f89) */
/* WARNING: Removing unreachable block (ram,0x0001400e8fc8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1400e8c50(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 local_res8;
  undefined1 local_res9 [7];
  byte local_res10;
  undefined1 local_res11 [7];
  byte local_res18;
  undefined1 local_res19 [7];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 *******local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *******local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 *******local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  
  puVar16 = auStack_d8;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar19 = 0;
  pppppppuVar15 = (undefined8 *******)(ulonglong)param_2;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) goto LAB_1400e8f51;
  FUN_1400e9b10(*(undefined8 *)(param_1 + 0x18),local_98,&local_res10,local_res11);
  FUN_1400e72d0(*(undefined8 *)(param_1 + 0x18),&local_b8,&local_res18,local_res19);
  uVar5 = local_88;
  uVar11 = local_a8;
  puVar12 = &local_b8;
  if (0xf < local_a0) {
    puVar12 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
  }
  pppppppuVar15 = local_98;
  if (0xf < local_80) {
    pppppppuVar15 = local_98[0];
  }
  uVar17 = local_88;
  if (local_a8 < local_88) {
    uVar17 = local_a8;
  }
  iVar7 = func_0x0001404210c0(pppppppuVar15,puVar12,uVar17);
  if (iVar7 == 0) {
    if (uVar5 < uVar11) {
      cVar6 = -1;
      goto LAB_1400e8d03;
    }
    if (uVar11 < uVar5) goto LAB_1400e8d01;
  }
  else {
    if (iVar7 < 0) {
      cVar6 = -1;
    }
    else {
LAB_1400e8d01:
      cVar6 = '\x01';
    }
LAB_1400e8d03:
    if ('\0' < cVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c410(8);
    }
  }
  do {
    pppppppuVar15 = *(undefined8 ********)(param_1 + 0x18);
    local_res8 = (undefined1)uVar19;
    FUN_140053de0(local_78,&local_res8,local_res9);
    pppppppuVar10 = local_78;
    if (0xf < local_60) {
      pppppppuVar10 = local_78[0];
    }
    pppppppuVar8 = local_78;
    if (0xf < local_60) {
      pppppppuVar8 = local_78[0];
    }
    (*(code *)(**pppppppuVar15)[4])
              (*pppppppuVar15,local_58,pppppppuVar8,local_68 + (longlong)pppppppuVar10);
    uVar17 = local_40;
    uVar5 = local_48;
    pppppppuVar10 = local_58[0];
    uVar11 = local_88;
    param_3 = (byte)pppppppuVar8;
    if (0xf < local_60) {
      uVar11 = local_60 + 1;
      pppppppuVar10 = local_78[0];
      if (0xfff < uVar11) {
        pppppppuVar10 = (undefined8 *******)local_78[0][-1];
        if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)pppppppuVar10)))
        goto LAB_1400e8f4a;
        uVar11 = local_60 + 0x28;
      }
      func_0x00014028b040(pppppppuVar10,uVar11);
      return;
    }
    pppppppuVar15 = local_58;
    if (0xf < local_40) {
      pppppppuVar15 = local_58[0];
    }
    pppppppuVar8 = local_98;
    if (0xf < local_80) {
      pppppppuVar8 = local_98[0];
    }
    uVar18 = local_88;
    if (local_48 < local_88) {
      uVar18 = local_48;
    }
    iVar7 = func_0x0001404210c0(pppppppuVar8,pppppppuVar15);
    uVar4 = local_a8;
    pppppppuVar15 = pppppppuVar10;
    if (iVar7 == 0) {
      if (uVar11 < uVar5) {
        cVar6 = -1;
        goto LAB_1400e8de9;
      }
      if (uVar5 < uVar11) goto LAB_1400e8de7;
LAB_1400e8df1:
      puVar12 = &local_b8;
      if (0xf < local_a0) {
        puVar12 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
      }
      pppppppuVar8 = local_58;
      if (0xf < uVar17) {
        pppppppuVar8 = pppppppuVar10;
      }
      uVar18 = uVar5;
      if (local_a8 < uVar5) {
        uVar18 = local_a8;
      }
      iVar7 = func_0x0001404210c0(pppppppuVar8,puVar12);
      if (iVar7 == 0) {
        if (uVar5 < uVar4) {
          cVar6 = -1;
          goto LAB_1400e8e35;
        }
        if (uVar4 < uVar5) goto LAB_1400e8e33;
      }
      else {
        if (iVar7 < 0) {
          cVar6 = -1;
        }
        else {
LAB_1400e8e33:
          cVar6 = '\x01';
        }
LAB_1400e8e35:
        if ('\0' < cVar6) goto LAB_1400e8e7c;
      }
      uVar18 = *(ulonglong *)(lVar1 + 0x28);
      if (uVar18 == 0) {
        func_0x00014028aff0(0x20);
        return;
      }
      *(byte *)(uVar18 + (uVar19 >> 3)) =
           *(byte *)(uVar18 + (uVar19 >> 3)) | (byte)(1 << ((uint)uVar19 & 7));
      pppppppuVar15 = local_58[0];
      uVar17 = local_40;
    }
    else {
      if (iVar7 < 0) {
        cVar6 = -1;
      }
      else {
LAB_1400e8de7:
        cVar6 = '\x01';
      }
LAB_1400e8de9:
      if (cVar6 < '\x01') goto LAB_1400e8df1;
    }
LAB_1400e8e7c:
    param_3 = (byte)uVar18;
    if (0xf < uVar17) {
      uVar11 = uVar17 + 1;
      pppppppuVar10 = pppppppuVar15;
      if (0xfff < uVar11) {
        pppppppuVar10 = (undefined8 *******)pppppppuVar15[-1];
        pppppppuVar15 =
             (undefined8 *******)((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar10));
        if ((undefined8 *******)0x1f < pppppppuVar15) goto LAB_1400e8f4a;
        uVar11 = uVar17 + 0x28;
      }
      func_0x00014028b040(pppppppuVar10,uVar11);
      return;
    }
    uVar14 = (uint)uVar19 + 1;
    uVar19 = (ulonglong)uVar14;
  } while (uVar14 < 0x100);
  if (local_a0 < 0x10) {
    uVar19 = 0;
    local_a8 = 0;
    local_a0 = 0xf;
    local_b8 = 0;
    if (local_80 < 0x10) {
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        func_0x0001400e8600(*(longlong *)(lVar1 + 0x38),local_res10);
        func_0x0001400e8600(*(undefined8 *)(lVar1 + 0x38),local_res18);
        return;
      }
      func_0x00014028aff0(0x10);
      return;
    }
    uVar11 = local_80 + 1;
    pppppppuVar10 = local_98[0];
    if (uVar11 < 0x1000) {
LAB_1400e8f3c:
      func_0x00014028b040(pppppppuVar10,uVar11);
      return;
    }
    pppppppuVar10 = (undefined8 *******)local_98[0][-1];
    if ((ulonglong)((longlong)local_98[0] + (-8 - (longlong)pppppppuVar10)) < 0x20) {
      uVar11 = local_80 + 0x28;
      goto LAB_1400e8f3c;
    }
  }
  else {
    lVar3 = CONCAT71(uStack_b7,local_b8);
    uVar11 = local_a0 + 1;
    lVar9 = lVar3;
    if (uVar11 < 0x1000) {
LAB_1400e8ef3:
      func_0x00014028b040(lVar9,uVar11);
      return;
    }
    lVar9 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar9) - 8U < 0x20) {
      uVar11 = local_a0 + 0x28;
      goto LAB_1400e8ef3;
    }
  }
LAB_1400e8f4a:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar16 = auStack_d0;
LAB_1400e8f51:
  if (param_3 < (byte)pppppppuVar15) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar16 + -8) = 0x1400e902e;
    FUN_14028c410(8);
  }
  if (*(ulonglong *)(lVar1 + 0x28) != uVar19) {
    uVar14 = (uint)pppppppuVar15;
    while (uVar14 <= param_3) {
      uVar13 = (uint)pppppppuVar15;
      uVar19 = ((ulonglong)pppppppuVar15 & 0xffffffff) >> 3;
      uVar14 = uVar13 + 1;
      pppppppuVar15 = (undefined8 *******)(ulonglong)uVar14;
      *(byte *)(*(longlong *)(lVar1 + 0x28) + uVar19) =
           *(byte *)(*(longlong *)(lVar1 + 0x28) + uVar19) | (byte)(1 << (uVar13 & 7));
    }
    return;
  }
  *(PEx64_UnwindInfo **)(puVar16 + -8) = &UNWIND_INFO_1400e8f6a;
  func_0x00014028aff0(0x20);
  return;
}

