// Function: FUN_14018e3a0
// Addr: 14018e3a0
// Size: 1740 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14018e3a0(longlong param_1,char *param_2,undefined8 param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *_Buf1;
  undefined8 *******pppppppuVar14;
  char *******pppppppcVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [40];
  undefined8 *******local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  char *******local_b8 [3];
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  char acStack_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  puVar20 = auStack_138;
  if (*(longlong *)(param_1 + 0x428 + (ulonglong)param_5 * 8) == 0) {
    lVar7 = FUN_140185960(param_1 + 0x438);
    *(longlong *)(param_1 + 0x428 + (ulonglong)param_5 * 8) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x20000000;
  lVar7 = 0;
  local_90 = 0;
  local_98 = 0;
  local_48 = 0x67452301;
  local_44 = 0xefcdab89;
  local_40 = 0x98badcfe;
  local_3c = 0x10325476;
  local_38 = 0xc3d2e1f0;
  uVar8 = strlen(param_2);
  if (uVar8 != 0) {
    for (; 0x3f < uVar8; uVar8 = uVar8 - 0x40) {
      FUN_1400802f0(&local_98,param_2);
      local_98 = local_98 + 0x40;
      param_2 = param_2 + 0x40;
      lVar7 = local_90;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
      acStack_88[lVar7] = cVar2;
      lVar7 = local_90 + 1;
      local_90 = lVar7;
    }
  }
  FUN_1400811d0(&local_98,local_b8);
  iVar5 = FUN_140290d80(&DAT_1404dfaf0);
  uVar8 = local_a0;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb3c == 0x7fffffff) {
    DAT_1404dfb3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar7 = *(longlong *)(param_1 + 0x428 + (ulonglong)param_5 * 8);
  local_c8 = DAT_1404e8ee8;
  pppppppcVar15 = (char *******)local_b8;
  if (0xf < local_a0) {
    pppppppcVar15 = local_b8[0];
  }
  local_e8 = lVar7;
  iVar5 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  local_c0 = lVar7;
  if (param_4 == 0) {
    uVar22 = 0;
LAB_14018e9a8:
    FUN_140290ea0(&DAT_1404dfb40);
    FUN_140290ea0(&DAT_1404dfaf0);
    if (uVar8 < 0x10) {
      return uVar22;
    }
    uVar18 = uVar8 + 1;
    pppppppcVar15 = local_b8[0];
    if (uVar18 < 0x1000) {
LAB_14018e9ef:
      thunk_FUN_14028af80(pppppppcVar15,uVar18);
      return uVar22;
    }
    pppppppcVar15 = (char *******)local_b8[0][-1];
    if ((ulonglong)((longlong)local_b8[0] + (-8 - (longlong)pppppppcVar15)) < 0x20) {
      uVar18 = uVar8 + 0x28;
      goto LAB_14018e9ef;
    }
  }
  else {
    iVar5 = 0;
    local_f8 = 0;
    local_108 = (undefined8 *******)0x0;
    uStack_100 = 0;
    local_f0 = 0;
    sVar9 = strlen((char *)pppppppcVar15);
    FUN_140017480(&local_108,pppppppcVar15,sVar9);
    uVar8 = local_f0;
    pppppppuVar14 = local_108;
    if (0x28 < local_f8) {
      local_f8 = 0x28;
      pppppppuVar10 = &local_108;
      if (0xf < local_f0) {
        pppppppuVar10 = local_108;
      }
      *(undefined1 *)(pppppppuVar10 + 5) = 0;
    }
    uVar18 = local_f8;
    puVar11 = *(undefined8 **)(lVar7 + 0x48);
    for (puVar17 = (undefined8 *)*puVar11; puVar17 != puVar11; puVar17 = (undefined8 *)*puVar17) {
      sVar9 = puVar17[4];
      puVar12 = puVar17 + 2;
      pppppppuVar10 = &local_108;
      if (0xf < uVar8) {
        pppppppuVar10 = pppppppuVar14;
      }
      if (0xf < (ulonglong)puVar17[5]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      if ((sVar9 != uVar18) ||
         ((sVar9 != 0 && (iVar6 = memcmp(puVar12,pppppppuVar10,sVar9), iVar6 != 0)))) {
        iVar5 = iVar5 + *(int *)(puVar17 + 6);
      }
    }
    if ((uint)(iVar5 + param_4) < 0x186a1) {
      local_e0 = thunk_FUN_14028af20(param_4);
      FUN_1404210f0(local_e0,param_3,param_4);
      uVar18 = local_f0;
      uVar8 = local_f8;
      pppppppuVar14 = local_108;
      uVar23 = 0xcbf29ce484222325;
      pppppppuVar10 = &local_108;
      if (0xf < local_f0) {
        pppppppuVar10 = local_108;
      }
      uVar13 = 0xcbf29ce484222325;
      uVar16 = 0;
      if (local_f8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)pppppppuVar10 + uVar16);
          uVar16 = uVar16 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar16 < local_f8);
      }
      uVar13 = uVar13 & *(ulonglong *)(local_e8 + 0x70);
      lVar7 = *(longlong *)(local_e8 + 0x48);
      lVar19 = *(longlong *)(*(longlong *)(local_e8 + 0x58) + 8 + uVar13 * 0x10);
      if (lVar19 != lVar7) {
        lVar21 = *(longlong *)(*(longlong *)(local_e8 + 0x58) + uVar13 * 0x10);
        while( true ) {
          puVar11 = (undefined8 *)(lVar19 + 0x10);
          if (0xf < *(ulonglong *)(lVar19 + 0x28)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          pppppppuVar10 = &local_108;
          if (0xf < uVar18) {
            pppppppuVar10 = pppppppuVar14;
          }
          if ((uVar8 == *(ulonglong *)(lVar19 + 0x20)) &&
             ((uVar8 == 0 || (iVar5 = memcmp(pppppppuVar10,puVar11,uVar8), iVar5 == 0))))
          goto LAB_14018e71b;
          if (lVar19 == lVar21) break;
          lVar19 = *(longlong *)(lVar19 + 8);
        }
      }
      lVar19 = 0;
LAB_14018e71b:
      lVar21 = local_e8;
      if ((lVar19 == 0) || (lVar19 == lVar7)) {
        pppppppuVar10 = &local_108;
        if (0xf < uVar18) {
          pppppppuVar10 = pppppppuVar14;
        }
        uVar18 = 0;
        if (uVar8 != 0) {
          do {
            pbVar1 = (byte *)((longlong)pppppppuVar10 + uVar18);
            uVar18 = uVar18 + 1;
            uVar23 = (uVar23 ^ *pbVar1) * 0x100000001b3;
          } while (uVar18 < uVar8);
        }
        FUN_1400110a0(local_e8 + 0x40,&local_d8,&local_108,uVar23);
        puVar11 = local_d0;
        if (local_d0 != (undefined8 *)0x0) goto LAB_14018e918;
        if (*(longlong *)(lVar21 + 0x50) == 0x3ffffffffffffff) goto LAB_14018ea28;
        puVar11 = (undefined8 *)FUN_14028af20(0x40);
        FUN_140016fc0(puVar11 + 2,&local_108);
        puVar11[6] = 0;
        puVar11[7] = 0;
        fVar24 = (float)(*(longlong *)(lVar21 + 0x50) + 1) / (float)*(ulonglong *)(lVar21 + 0x78);
        if (fVar24 < *(float *)(lVar21 + 0x40) || fVar24 == *(float *)(lVar21 + 0x40)) {
          puVar17 = (undefined8 *)CONCAT44(uStack_d4,local_d8);
        }
        else {
          FUN_1401e4d60(lVar21 + 0x40);
          uVar8 = uVar23 & *(ulonglong *)(lVar21 + 0x70);
          puVar17 = *(undefined8 **)(lVar21 + 0x48);
          puVar12 = *(undefined8 **)(*(longlong *)(lVar21 + 0x58) + 8 + uVar8 * 0x10);
          if (puVar12 != puVar17) {
            uVar18 = puVar11[5];
            sVar9 = puVar11[4];
            puVar3 = *(undefined8 **)(*(longlong *)(lVar21 + 0x58) + uVar8 * 0x10);
            puVar17 = puVar12;
            while( true ) {
              puVar12 = puVar17 + 2;
              if (0xf < (ulonglong)puVar17[5]) {
                puVar12 = (undefined8 *)*puVar12;
              }
              if (uVar18 < 0x10) {
                _Buf1 = puVar11 + 2;
              }
              else {
                _Buf1 = (undefined8 *)puVar11[2];
              }
              if ((sVar9 == puVar17[4]) &&
                 ((sVar9 == 0 || (iVar5 = memcmp(_Buf1,puVar12,sVar9), iVar5 == 0)))) break;
              lVar21 = local_e8;
              if (puVar17 == puVar3) goto LAB_14018e8cd;
              puVar17 = (undefined8 *)puVar17[1];
            }
            puVar17 = (undefined8 *)*puVar17;
            lVar21 = local_e8;
          }
        }
LAB_14018e8cd:
        puVar12 = (undefined8 *)puVar17[1];
        *(longlong *)(lVar21 + 0x50) = *(longlong *)(lVar21 + 0x50) + 1;
        *puVar11 = puVar17;
        puVar11[1] = puVar12;
        *puVar12 = puVar11;
        puVar17[1] = puVar11;
        lVar7 = *(longlong *)(lVar21 + 0x58);
        uVar23 = *(ulonglong *)(lVar21 + 0x70) & uVar23;
        puVar3 = *(undefined8 **)(lVar7 + uVar23 * 0x10);
        if (puVar3 == *(undefined8 **)(lVar21 + 0x48)) {
          *(undefined8 **)(lVar7 + uVar23 * 0x10) = puVar11;
LAB_14018e913:
          *(undefined8 **)(lVar7 + 8 + uVar23 * 0x10) = puVar11;
        }
        else if (puVar3 == puVar17) {
          *(undefined8 **)(lVar7 + uVar23 * 0x10) = puVar11;
        }
        else if (*(undefined8 **)(lVar7 + 8 + uVar23 * 0x10) == puVar12) goto LAB_14018e913;
LAB_14018e918:
        *(int *)(puVar11 + 6) = param_4;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uStack_d4;
        puVar11[7] = local_e0;
      }
      else {
        thunk_FUN_14028af80(*(undefined8 *)(lVar19 + 0x38));
        *(undefined8 *)(lVar19 + 0x38) = local_e0;
        *(int *)(lVar19 + 0x30) = param_4;
      }
      *(undefined1 *)(lVar21 + 0x84) = 0;
      FUN_1401e42c0(local_c8 + 0x28,&local_d8,&local_c0);
      if (0xf < local_f0) {
        uVar8 = local_f0 + 1;
        pppppppuVar14 = local_108;
        if (0xfff < uVar8) {
          pppppppuVar14 = (undefined8 *******)local_108[-1];
          if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppppuVar14)))
          goto LAB_14018ea21;
          uVar8 = local_f0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar14,uVar8);
      }
      uVar22 = 1;
LAB_14018e98d:
      local_108 = (undefined8 *******)((ulonglong)local_108 & 0xffffffffffffff00);
      local_f0 = 0xf;
      local_f8 = 0;
      uVar8 = local_a0;
      goto LAB_14018e9a8;
    }
    if (uVar8 < 0x10) {
LAB_14018e634:
      uVar22 = 0;
      goto LAB_14018e98d;
    }
    uVar18 = uVar8 + 1;
    pppppppuVar10 = pppppppuVar14;
    if (uVar18 < 0x1000) {
LAB_14018e62c:
      thunk_FUN_14028af80(pppppppuVar10,uVar18);
      goto LAB_14018e634;
    }
    pppppppuVar10 = (undefined8 *******)pppppppuVar14[-1];
    if ((ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar10)) < 0x20) {
      uVar18 = uVar8 + 0x28;
      goto LAB_14018e62c;
    }
  }
LAB_14018ea21:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar20 = auStack_130;
LAB_14018ea28:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_14018ea34;
  FUN_14028c2e0("unordered_map/set too long");
}

