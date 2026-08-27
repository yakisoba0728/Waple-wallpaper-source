// Function: FUN_14018ea80
// Addr: 14018ea80
// Size: 966 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_14018ea80(longlong param_1,char *param_2,undefined8 *param_3,undefined4 *param_4,byte param_5)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined8 *******pppppppuVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char *******pppppppcVar13;
  ulonglong uVar14;
  undefined8 *_Buf2;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [40];
  undefined8 *******local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  char *******local_b8 [3];
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  char acStack_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  puVar16 = auStack_108;
  lVar1 = param_1 + (ulonglong)param_5 * 8;
  if (*(longlong *)(lVar1 + 0x428) == 0) {
    lVar7 = FUN_140185960(param_1 + 0x438);
    *(longlong *)(lVar1 + 0x428) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  uVar14 = 0;
  local_98 = 0;
  local_90 = 0;
  local_48 = 0x67452301;
  local_44 = 0xefcdab89;
  local_40 = 0x98badcfe;
  local_3c = 0x10325476;
  local_38 = 0xc3d2e1f0;
  uVar8 = strlen(param_2);
  uVar17 = uVar14;
  if (uVar8 != 0) {
    for (; 0x3f < uVar8; uVar8 = uVar8 - 0x40) {
      FUN_1400802f0(&local_98,param_2);
      local_98 = local_98 + 0x40;
      param_2 = param_2 + 0x40;
      uVar17 = local_90;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      cVar3 = *param_2;
      param_2 = param_2 + 1;
      acStack_88[uVar17] = cVar3;
      uVar17 = local_90 + 1;
      local_90 = uVar17;
    }
  }
  FUN_1400811d0(&local_98,local_b8);
  iVar6 = FUN_140290d80(&DAT_1404dfaf0);
  if (iVar6 != 0) {
LAB_14018ee3d:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb3c == 0x7fffffff) {
    DAT_1404dfb3c = 0x7ffffffe;
    puVar16 = auStack_108;
    goto LAB_14018ee32;
  }
  lVar1 = *(longlong *)(lVar1 + 0x428);
  pppppppcVar13 = (char *******)local_b8;
  if (0xf < local_a0) {
    pppppppcVar13 = local_b8[0];
  }
  iVar6 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar6 != 0) goto LAB_14018ee3d;
  if (DAT_1404dfb8c != 0x7fffffff) {
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = (undefined8 *******)0x0;
    uStack_d0 = 0;
    sVar9 = strlen((char *)pppppppcVar13);
    FUN_140017480(&local_d8,pppppppcVar13,sVar9);
    uVar17 = local_c0;
    pppppppuVar5 = local_d8;
    if (0x28 < local_c8) {
      local_c8 = 0x28;
      pppppppuVar10 = &local_d8;
      if (0xf < local_c0) {
        pppppppuVar10 = local_d8;
      }
      *(undefined1 *)(pppppppuVar10 + 5) = 0;
    }
    uVar8 = local_c8;
    uVar12 = 0xcbf29ce484222325;
    pppppppuVar10 = &local_d8;
    if (0xf < local_c0) {
      pppppppuVar10 = local_d8;
    }
    if (local_c8 != 0) {
      do {
        pbVar2 = (byte *)((longlong)pppppppuVar10 + uVar14);
        uVar14 = uVar14 + 1;
        uVar12 = (uVar12 ^ *pbVar2) * 0x100000001b3;
      } while (uVar14 < local_c8);
    }
    uVar12 = uVar12 & *(ulonglong *)(lVar1 + 0x70);
    lVar7 = *(longlong *)(lVar1 + 0x48);
    lVar15 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + 8 + uVar12 * 0x10);
    if (lVar15 != lVar7) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar12 * 0x10);
      while( true ) {
        _Buf2 = (undefined8 *)(lVar15 + 0x10);
        if (0xf < *(ulonglong *)(lVar15 + 0x28)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        pppppppuVar10 = &local_d8;
        if (0xf < uVar17) {
          pppppppuVar10 = pppppppuVar5;
        }
        if ((uVar8 == *(ulonglong *)(lVar15 + 0x20)) &&
           ((uVar8 == 0 || (iVar6 = memcmp(pppppppuVar10,_Buf2,uVar8), iVar6 == 0))))
        goto LAB_14018ecff;
        if (lVar15 == lVar1) break;
        lVar15 = *(longlong *)(lVar15 + 8);
      }
    }
    lVar15 = 0;
LAB_14018ecff:
    if ((lVar15 == 0) || (lVar15 == lVar7)) {
      if (0xf < uVar17) {
        uVar8 = uVar17 + 1;
        pppppppuVar10 = pppppppuVar5;
        if (0xfff < uVar8) {
          pppppppuVar10 = (undefined8 *******)pppppppuVar5[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar5 + (-8 - (longlong)pppppppuVar10)))
          goto LAB_14018ee23;
          uVar8 = uVar17 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar10,uVar8);
      }
      uVar11 = 0;
LAB_14018eda3:
      FUN_140290ea0(&DAT_1404dfb40);
      FUN_140290ea0(&DAT_1404dfaf0);
      if (local_a0 < 0x10) {
        return uVar11;
      }
      uVar17 = local_a0 + 1;
      pppppppcVar13 = local_b8[0];
      if (uVar17 < 0x1000) {
LAB_14018eded:
        thunk_FUN_14028af80(pppppppcVar13,uVar17);
        return uVar11;
      }
      pppppppcVar13 = (char *******)local_b8[0][-1];
      if ((char *)((longlong)local_b8[0] + (-8 - (longlong)pppppppcVar13)) < (char *)0x20) {
        uVar17 = local_a0 + 0x28;
        goto LAB_14018eded;
      }
    }
    else {
      uVar11 = thunk_FUN_14028af20(*(undefined4 *)(lVar15 + 0x30));
      *param_3 = uVar11;
      FUN_1404210f0(uVar11,*(undefined8 *)(lVar15 + 0x38),*(undefined4 *)(lVar15 + 0x30));
      *param_4 = *(undefined4 *)(lVar15 + 0x30);
      if (uVar17 < 0x10) {
LAB_14018ed66:
        uVar11 = 1;
        goto LAB_14018eda3;
      }
      uVar8 = uVar17 + 1;
      pppppppuVar10 = pppppppuVar5;
      if (uVar8 < 0x1000) {
LAB_14018ed5e:
        thunk_FUN_14028af80(pppppppuVar10,uVar8);
        goto LAB_14018ed66;
      }
      pppppppuVar10 = (undefined8 *******)pppppppuVar5[-1];
      if ((ulonglong)((longlong)pppppppuVar5 + (-8 - (longlong)pppppppuVar10)) < 0x20) {
        uVar8 = uVar17 + 0x28;
        goto LAB_14018ed5e;
      }
    }
LAB_14018ee23:
    pcVar4 = (code *)swi(0x29);
    DAT_1404dfb8c = (*pcVar4)(5);
    puVar16 = auStack_100;
  }
  DAT_1404dfb8c = DAT_1404dfb8c + -1;
LAB_14018ee32:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_14018ee3c;
  FUN_140290d30(6);
}

