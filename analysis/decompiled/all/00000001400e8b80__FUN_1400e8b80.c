// Function: FUN_1400e8b80
// Addr: 1400e8b80
// Size: 1000 bytes


/* WARNING: Removing unreachable block (ram,0x0001400e8eb9) */
/* WARNING: Removing unreachable block (ram,0x0001400e8ef8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1400e8b80(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  longlong lVar12;
  undefined8 *******pppppppuVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  uint uVar20;
  ulonglong uVar21;
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
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 *******local_98 [2];
  undefined8 *local_88;
  ulonglong local_80;
  undefined8 *******local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 *******local_58 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  puVar19 = auStack_d8;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar21 = 0;
  pppppppuVar18 = (undefined8 *******)(ulonglong)param_2;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) goto LAB_1400e8e81;
  FUN_1400e9a40(*(undefined8 *)(param_1 + 0x18),local_98,&local_res10,local_res11);
  FUN_1400e7200(*(undefined8 *)(param_1 + 0x18),&local_b8,&local_res18,local_res19);
  puVar6 = local_88;
  puVar10 = local_a8;
  puVar15 = &local_b8;
  if (0xf < local_a0) {
    puVar15 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
  }
  pppppppuVar18 = local_98;
  if (0xf < local_80) {
    pppppppuVar18 = local_98[0];
  }
  puVar9 = local_88;
  if (local_a8 < local_88) {
    puVar9 = local_a8;
  }
  iVar8 = memcmp(pppppppuVar18,puVar15,(size_t)puVar9);
  if (iVar8 == 0) {
    if (puVar6 < puVar10) {
      cVar7 = -1;
      goto LAB_1400e8c33;
    }
    if (puVar10 < puVar6) goto LAB_1400e8c31;
  }
  else {
    if (iVar8 < 0) {
      cVar7 = -1;
    }
    else {
LAB_1400e8c31:
      cVar7 = '\x01';
    }
LAB_1400e8c33:
    if ('\0' < cVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c340(8);
    }
  }
  do {
    pppppppuVar18 = *(undefined8 ********)(param_1 + 0x18);
    local_res8 = (undefined1)uVar21;
    FUN_140053d10(local_78,&local_res8,local_res9);
    ppppppuVar2 = *pppppppuVar18;
    pppppppuVar13 = local_78;
    if (0xf < local_60) {
      pppppppuVar13 = local_78[0];
    }
    pppppppuVar11 = local_78;
    if (0xf < local_60) {
      pppppppuVar11 = local_78[0];
    }
    (*(code *)(*ppppppuVar2)[4])
              (ppppppuVar2,local_58,pppppppuVar11,local_68 + (longlong)pppppppuVar13);
    param_3 = (byte)pppppppuVar11;
    if (0xf < local_60) {
      uVar14 = local_60 + 1;
      pppppppuVar13 = local_78[0];
      if (0xfff < uVar14) {
        pppppppuVar13 = (undefined8 *******)local_78[0][-1];
        if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)pppppppuVar13)))
        goto LAB_1400e8e7a;
        uVar14 = local_60 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar13,uVar14);
    }
    uVar14 = local_40;
    puVar6 = local_48;
    pppppppuVar18 = local_58[0];
    puVar10 = local_88;
    pppppppuVar13 = local_58;
    if (0xf < local_40) {
      pppppppuVar13 = local_58[0];
    }
    pppppppuVar11 = local_98;
    if (0xf < local_80) {
      pppppppuVar11 = local_98[0];
    }
    puVar9 = local_88;
    if (local_48 < local_88) {
      puVar9 = local_48;
    }
    iVar8 = memcmp(pppppppuVar11,pppppppuVar13,(size_t)puVar9);
    puVar5 = local_a8;
    if (iVar8 == 0) {
      if (puVar10 < puVar6) {
        cVar7 = -1;
        goto LAB_1400e8d19;
      }
      if (puVar6 < puVar10) goto LAB_1400e8d17;
LAB_1400e8d21:
      puVar15 = &local_b8;
      if (0xf < local_a0) {
        puVar15 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
      }
      pppppppuVar13 = local_58;
      if (0xf < uVar14) {
        pppppppuVar13 = pppppppuVar18;
      }
      puVar9 = puVar6;
      if (local_a8 < puVar6) {
        puVar9 = local_a8;
      }
      iVar8 = memcmp(pppppppuVar13,puVar15,(size_t)puVar9);
      if (iVar8 == 0) {
        if (puVar6 < puVar5) {
          cVar7 = -1;
          goto LAB_1400e8d65;
        }
        if (puVar5 < puVar6) goto LAB_1400e8d63;
      }
      else {
        if (iVar8 < 0) {
          cVar7 = -1;
        }
        else {
LAB_1400e8d63:
          cVar7 = '\x01';
        }
LAB_1400e8d65:
        if ('\0' < cVar7) goto LAB_1400e8dac;
      }
      puVar9 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_14028af20(0x20);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar9;
      }
      *(byte *)((longlong)puVar9 + (uVar21 >> 3)) =
           *(byte *)((longlong)puVar9 + (uVar21 >> 3)) | (byte)(1 << ((uint)uVar21 & 7));
      pppppppuVar18 = local_58[0];
      uVar14 = local_40;
    }
    else {
      if (iVar8 < 0) {
        cVar7 = -1;
      }
      else {
LAB_1400e8d17:
        cVar7 = '\x01';
      }
LAB_1400e8d19:
      if (cVar7 < '\x01') goto LAB_1400e8d21;
    }
LAB_1400e8dac:
    param_3 = (byte)puVar9;
    pppppppuVar13 = pppppppuVar18;
    if (0xf < uVar14) {
      uVar16 = uVar14 + 1;
      if (0xfff < uVar16) {
        pppppppuVar13 = (undefined8 *******)pppppppuVar18[-1];
        pppppppuVar18 =
             (undefined8 *******)((longlong)pppppppuVar18 + (-8 - (longlong)pppppppuVar13));
        if ((undefined8 *******)0x1f < pppppppuVar18) goto LAB_1400e8e7a;
        uVar16 = uVar14 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar13,uVar16);
    }
    uVar20 = (uint)uVar21 + 1;
    uVar21 = (ulonglong)uVar20;
  } while (uVar20 < 0x100);
  pppppppuVar18 = pppppppuVar13;
  if (0xf < local_a0) {
    lVar4 = CONCAT71(uStack_b7,local_b8);
    uVar14 = local_a0 + 1;
    lVar12 = lVar4;
    if (uVar14 < 0x1000) {
LAB_1400e8e23:
      thunk_FUN_14028af80(lVar12,uVar14);
      goto LAB_1400e8e28;
    }
    lVar12 = *(longlong *)(lVar4 + -8);
    if ((lVar4 - lVar12) - 8U < 0x20) {
      uVar14 = local_a0 + 0x28;
      goto LAB_1400e8e23;
    }
LAB_1400e8e7a:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar19 = auStack_d0;
LAB_1400e8e81:
    if ((byte)pppppppuVar18 <= param_3) {
      if (*(ulonglong *)(lVar1 + 0x28) == uVar21) {
        *(undefined8 *)(puVar19 + -8) = 0x1400e8e9a;
        puVar10 = (undefined8 *)FUN_14028af20(0x20);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar10;
        param_3 = local_res18;
      }
      uVar20 = (uint)pppppppuVar18;
      while (uVar20 <= param_3) {
        uVar17 = (uint)pppppppuVar18;
        uVar21 = ((ulonglong)pppppppuVar18 & 0xffffffff) >> 3;
        uVar20 = uVar17 + 1;
        pppppppuVar18 = (undefined8 *******)(ulonglong)uVar20;
        *(byte *)(*(longlong *)(lVar1 + 0x28) + uVar21) =
             *(byte *)(*(longlong *)(lVar1 + 0x28) + uVar21) | (byte)(1 << (uVar17 & 7));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar19 + -8) = &UNK_1400e8f5e;
    FUN_14028c340(8);
  }
LAB_1400e8e28:
  uVar21 = 0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0xf;
  local_b8 = 0;
  if (local_80 < 0x10) goto LAB_1400e8e71;
  uVar14 = local_80 + 1;
  pppppppuVar13 = local_98[0];
  if (0xfff < uVar14) {
    pppppppuVar13 = (undefined8 *******)local_98[0][-1];
    if (0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pppppppuVar13)))
    goto LAB_1400e8e7a;
    uVar14 = local_80 + 0x28;
  }
  thunk_FUN_14028af80(pppppppuVar13,uVar14);
LAB_1400e8e71:
  puVar10 = *(undefined8 **)(lVar1 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14028af20(0x10);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined8 **)(lVar1 + 0x38) = puVar10;
  }
  FUN_1400e8530(puVar10,local_res10);
  FUN_1400e8530(*(undefined8 *)(lVar1 + 0x38),local_res18);
  return;
}

