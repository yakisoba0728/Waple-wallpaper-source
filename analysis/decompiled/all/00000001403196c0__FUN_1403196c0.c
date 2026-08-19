// Function: FUN_1403196c0
// Addr: 1403196c0
// Size: 981 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1403196c0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  bool bVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res18 [2];
  
  lVar9 = param_1[4];
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
    pcVar2 = (char *)param_1[0x13];
    plVar17 = param_1 + 2;
    pcVar14 = pcVar2 + *(uint *)(param_1 + 0x14);
    *param_1 = (longlong)pcVar2;
    *plVar17 = (longlong)pcVar14;
    while (pcVar2 < pcVar14) {
      if ((((*pcVar2 == 'e') && (pcVar2 + 9 < pcVar14)) && (pcVar2[1] == 'e')) &&
         (((pcVar2[2] == 'x' && (pcVar2[3] == 'e')) && (pcVar2[4] == 'c')))) {
        *plVar17 = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
        (*(code *)param_1[8])(param_1);
        pbVar13 = (byte *)*param_1;
        pbVar3 = (byte *)*plVar17;
        uVar8 = FUN_140421020(pbVar13,10,(longlong)pbVar3 - (longlong)pbVar13);
        if ((uVar8 == 0) ||
           (uVar10 = FUN_140421020(pbVar13,0xd,(longlong)pbVar3 - (longlong)pbVar13), uVar10 < uVar8
           )) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        while( true ) {
          if (pbVar3 <= pbVar13) {
            return 3;
          }
          bVar1 = *pbVar13;
          if (((bVar1 != 0x20) && (bVar1 != 9)) && (((!bVar4 || (bVar1 != 0xd)) && (bVar1 != 10))))
          break;
          pbVar13 = pbVar13 + 1;
        }
        if (pbVar3 <= pbVar13) {
          return 3;
        }
        plVar17 = param_1 + 0x15;
        uVar16 = ((int)param_1[0x14] - (int)pbVar13) + (int)param_1[0x13];
        if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
          lVar11 = param_1[0x13];
          *plVar17 = lVar11;
          param_1[0x13] = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
        }
        else {
          lVar11 = FUN_1402f8070(lVar9,uVar16 + 1,local_res8);
          *plVar17 = lVar11;
          if (local_res8[0] != 0) {
            return (ulonglong)local_res8[0];
          }
        }
        lVar9 = local_res10;
        *(uint *)(param_1 + 0x16) = uVar16;
        if (((((pbVar3 <= pbVar13 + 3) ||
              (((bVar1 = *pbVar13, 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41))))
             || (((bVar1 = pbVar13[1], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41)
                 ))) ||
            (((bVar1 = pbVar13[2], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41))))
           || (((bVar1 = pbVar13[3], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41)))
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar11,pbVar13,uVar16);
        }
        *param_1 = (longlong)pbVar13;
        (**(code **)(*(longlong *)(local_res10 + 8) + 0x30))(param_1,lVar11,uVar16,local_res18,0);
        *(uint *)(param_1 + 0x16) = local_res18[0];
        *(undefined1 *)((ulonglong)local_res18[0] + *plVar17) = 0;
        goto code_r0x000140319ab7;
      }
      (*(code *)param_1[8])(param_1);
      if ((int)param_1[3] != 0) {
        return 3;
      }
      (*(code *)param_1[7])(param_1);
      pcVar2 = (char *)*param_1;
    }
  }
  else {
    lVar11 = param_1[0x12];
    uVar6 = func_0x0001402f5570(lVar11);
    puVar15 = (uint *)(param_1 + 0x16);
    *puVar15 = 0;
    while( true ) {
      sVar5 = FUN_1402f5b90(lVar11,local_res18);
      iVar12 = 0;
      if (local_res18[0] == 0) {
        if (((ushort)(sVar5 + 0x7fffU) < 2) &&
           (iVar7 = func_0x0001402f5a40(lVar11,local_res18), iVar12 = 0, local_res18[0] == 0)) {
          iVar12 = iVar7;
        }
      }
      else {
        sVar5 = 0;
      }
      if (local_res18[0] != 0) {
        return (ulonglong)local_res18[0];
      }
      if (sVar5 != -0x7ffe) break;
      *puVar15 = *puVar15 + iVar12;
      uVar8 = func_0x0001402f5d60(lVar11,iVar12);
      local_res8[0] = (uint)uVar8;
      if (local_res8[0] != 0) {
        return uVar8;
      }
    }
    if (*puVar15 != 0) {
      uVar8 = func_0x0001402f5d20(lVar11,uVar6);
      local_res8[0] = (uint)uVar8;
      if (local_res8[0] != 0) {
        return uVar8;
      }
      lVar9 = FUN_1402f8070(lVar9,*puVar15,local_res8);
      param_1[0x15] = lVar9;
      if (local_res8[0] != 0) {
        return (ulonglong)local_res8[0];
      }
      *puVar15 = 0;
      while( true ) {
        sVar5 = FUN_1402f5b90(lVar11,local_res18);
        iVar12 = 0;
        if (local_res18[0] == 0) {
          if ((ushort)(sVar5 + 0x7fffU) < 2) {
            iVar7 = func_0x0001402f5a40(lVar11,local_res18);
            iVar12 = 0;
            if (local_res18[0] == 0) {
              iVar12 = iVar7;
            }
          }
        }
        else {
          sVar5 = 0;
        }
        if ((local_res18[0] != 0) || (sVar5 != -0x7ffe)) break;
        uVar8 = func_0x0001402f5580(lVar11,(ulonglong)*puVar15 + param_1[0x15],iVar12);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        *puVar15 = *puVar15 + iVar12;
        local_res8[0] = 0;
      }
      local_res8[0] = 0;
      lVar9 = local_res10;
code_r0x000140319ab7:
      plVar17 = param_1 + 0x15;
      puVar15 = (uint *)(param_1 + 0x16);
      (**(code **)(lVar9 + 0x20))(*plVar17,*puVar15,0xd971);
      if (3 < *puVar15) {
        *(undefined1 *)*plVar17 = 0x20;
        *(undefined1 *)(*plVar17 + 1) = 0x20;
        *(undefined1 *)(*plVar17 + 2) = 0x20;
        *(undefined1 *)(*plVar17 + 3) = 0x20;
        lVar9 = *plVar17;
        param_1[1] = lVar9;
        param_1[2] = (ulonglong)*puVar15 + lVar9;
        *param_1 = lVar9;
        return (ulonglong)local_res8[0];
      }
    }
  }
  return 3;
}

