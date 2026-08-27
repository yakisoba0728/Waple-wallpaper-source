// Function: FUN_14018ee50
// Addr: 14018ee50
// Size: 1214 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14018ee50(longlong param_1,char *param_2,byte param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  size_t sVar10;
  undefined8 *******pppppppuVar11;
  ulonglong uVar12;
  char *******pppppppcVar13;
  ulonglong uVar14;
  longlong *_Buf2;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [40];
  undefined8 *******local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  char *******local_e0 [3];
  ulonglong local_c8;
  longlong local_b8;
  ulonglong local_b0;
  char acStack_a8 [64];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [16];
  
  puVar18 = auStack_138;
  lVar1 = param_1 + (ulonglong)param_3 * 8;
  if (*(longlong *)(lVar1 + 0x428) == 0) {
    lVar8 = FUN_140185960(param_1 + 0x438,param_3);
    *(longlong *)(lVar1 + 0x428) = lVar8;
    if (lVar8 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x20000000;
  uVar14 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_68 = 0x67452301;
  local_64 = 0xefcdab89;
  local_60 = 0x98badcfe;
  local_5c = 0x10325476;
  local_58 = 0xc3d2e1f0;
  uVar9 = strlen(param_2);
  uVar19 = uVar14;
  if (uVar9 != 0) {
    for (; 0x3f < uVar9; uVar9 = uVar9 - 0x40) {
      FUN_1400802f0(&local_b8,param_2);
      local_b8 = local_b8 + 0x40;
      param_2 = param_2 + 0x40;
      uVar19 = local_b0;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      cVar3 = *param_2;
      param_2 = param_2 + 1;
      acStack_a8[uVar19] = cVar3;
      uVar19 = local_b0 + 1;
      local_b0 = uVar19;
    }
  }
  FUN_1400811d0(&local_b8,local_e0);
  iVar7 = FUN_140290d80(&DAT_1404dfaf0);
  lVar8 = DAT_1404e8ee8;
  if (iVar7 != 0) {
LAB_14018f305:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb3c == 0x7fffffff) {
    DAT_1404dfb3c = 0x7ffffffe;
    puVar18 = auStack_138;
    goto LAB_14018f2fa;
  }
  lVar1 = *(longlong *)(lVar1 + 0x428);
  pppppppcVar13 = (char *******)local_e0;
  if (0xf < local_c8) {
    pppppppcVar13 = local_e0[0];
  }
  iVar7 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar7 != 0) goto LAB_14018f305;
  if (DAT_1404dfb8c != 0x7fffffff) {
    local_108 = (undefined8 *******)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = lVar1;
    sVar10 = strlen((char *)pppppppcVar13);
    FUN_140017480(&local_108,pppppppcVar13,sVar10);
    uVar19 = local_f0;
    pppppppuVar6 = local_108;
    if (0x28 < local_f8) {
      local_f8 = 0x28;
      pppppppuVar11 = &local_108;
      if (0xf < local_f0) {
        pppppppuVar11 = local_108;
      }
      *(undefined1 *)(pppppppuVar11 + 5) = 0;
    }
    uVar9 = local_f8;
    uVar20 = 0xcbf29ce484222325;
    pppppppuVar11 = &local_108;
    if (0xf < local_f0) {
      pppppppuVar11 = local_108;
    }
    uVar12 = 0xcbf29ce484222325;
    if (local_f8 != 0) {
      do {
        pbVar2 = (byte *)((longlong)pppppppuVar11 + uVar14);
        uVar14 = uVar14 + 1;
        uVar12 = (uVar12 ^ *pbVar2) * 0x100000001b3;
      } while (uVar14 < local_f8);
    }
    uVar12 = uVar12 & *(ulonglong *)(lVar1 + 0x70);
    plVar15 = *(longlong **)(lVar1 + 0x48);
    plVar16 = *(longlong **)(*(longlong *)(lVar1 + 0x58) + 8 + uVar12 * 0x10);
    if (plVar16 != plVar15) {
      plVar15 = *(longlong **)(*(longlong *)(lVar1 + 0x58) + uVar12 * 0x10);
      while( true ) {
        _Buf2 = plVar16 + 2;
        if (0xf < (ulonglong)plVar16[5]) {
          _Buf2 = (longlong *)*_Buf2;
        }
        pppppppuVar11 = &local_108;
        if (0xf < uVar19) {
          pppppppuVar11 = pppppppuVar6;
        }
        if ((uVar9 == plVar16[4]) &&
           ((uVar9 == 0 || (iVar7 = memcmp(pppppppuVar11,_Buf2,uVar9), iVar7 == 0)))) {
          plVar15 = *(longlong **)(lVar1 + 0x48);
          goto LAB_14018f10b;
        }
        if (plVar16 == plVar15) break;
        plVar16 = (longlong *)plVar16[1];
      }
      plVar15 = *(longlong **)(lVar1 + 0x48);
    }
    plVar16 = (longlong *)0x0;
LAB_14018f10b:
    if ((plVar16 == (longlong *)0x0) || (plVar16 == plVar15)) {
      if (0xf < uVar19) {
        uVar9 = uVar19 + 1;
        pppppppuVar11 = pppppppuVar6;
        if (0xfff < uVar9) {
          pppppppuVar11 = (undefined8 *******)pppppppuVar6[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar6 + (-8 - (longlong)pppppppuVar11)))
          goto LAB_14018f2eb;
          uVar9 = uVar19 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar11,uVar9);
      }
      uVar17 = 0;
LAB_14018f26a:
      FUN_140290ea0(&DAT_1404dfb40);
      FUN_140290ea0(&DAT_1404dfaf0);
      if (local_c8 < 0x10) {
        return uVar17;
      }
      uVar19 = local_c8 + 1;
      pppppppcVar13 = local_e0[0];
      if (uVar19 < 0x1000) {
LAB_14018f2b6:
        thunk_FUN_14028af80(pppppppcVar13,uVar19);
        return uVar17;
      }
      pppppppcVar13 = (char *******)local_e0[0][-1];
      if ((char *)((longlong)local_e0[0] + (-8 - (longlong)pppppppcVar13)) < (char *)0x20) {
        uVar19 = local_c8 + 0x28;
        goto LAB_14018f2b6;
      }
    }
    else {
      thunk_FUN_14028af80();
      if ((ulonglong)plVar16[5] < 0x10) {
        plVar15 = plVar16 + 2;
      }
      else {
        plVar15 = (longlong *)plVar16[2];
      }
      uVar9 = 0;
      if (plVar16[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)plVar15 + uVar9);
          uVar9 = uVar9 + 1;
          uVar20 = (uVar20 ^ *pbVar2) * 0x100000001b3;
        } while (uVar9 < (ulonglong)plVar16[4]);
      }
      lVar4 = *(longlong *)(lVar1 + 0x58);
      uVar20 = *(ulonglong *)(lVar1 + 0x70) & uVar20;
      plVar15 = *(longlong **)(lVar4 + uVar20 * 0x10);
      if (*(longlong **)(lVar4 + 8 + uVar20 * 0x10) == plVar16) {
        if (plVar15 == plVar16) {
          uVar17 = *(undefined8 *)(lVar1 + 0x48);
          *(undefined8 *)(lVar4 + uVar20 * 0x10) = uVar17;
          *(undefined8 *)(lVar4 + 8 + uVar20 * 0x10) = uVar17;
        }
        else {
          *(longlong *)(lVar4 + 8 + uVar20 * 0x10) = plVar16[1];
        }
      }
      else if (plVar15 == plVar16) {
        *(longlong *)(lVar4 + uVar20 * 0x10) = *plVar16;
      }
      lVar4 = *plVar16;
      *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + -1;
      *(longlong *)plVar16[1] = lVar4;
      *(longlong *)(lVar4 + 8) = plVar16[1];
      FUN_140017240(plVar16 + 2);
      thunk_FUN_14028af80(plVar16,0x40);
      *(undefined1 *)(lVar1 + 0x84) = 0;
      FUN_1401e42c0(lVar8 + 0x28,local_48,&local_e8);
      if (uVar19 < 0x10) {
LAB_14018f22d:
        uVar17 = 1;
        goto LAB_14018f26a;
      }
      uVar9 = uVar19 + 1;
      pppppppuVar11 = pppppppuVar6;
      if (uVar9 < 0x1000) {
LAB_14018f225:
        thunk_FUN_14028af80(pppppppuVar11,uVar9);
        goto LAB_14018f22d;
      }
      pppppppuVar11 = (undefined8 *******)pppppppuVar6[-1];
      if ((ulonglong)((longlong)pppppppuVar6 + (-8 - (longlong)pppppppuVar11)) < 0x20) {
        uVar9 = uVar19 + 0x28;
        goto LAB_14018f225;
      }
    }
LAB_14018f2eb:
    pcVar5 = (code *)swi(0x29);
    DAT_1404dfb8c = (*pcVar5)(5);
    puVar18 = auStack_130;
  }
  DAT_1404dfb8c = DAT_1404dfb8c + -1;
LAB_14018f2fa:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_14018f304;
  FUN_140290d30(6);
}

