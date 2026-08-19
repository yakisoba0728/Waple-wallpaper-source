// Function: FUN_1400ac760
// Addr: 1400ac760
// Size: 1191 bytes


char * FUN_1400ac760(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  uint uVar11;
  char *pcVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *local_res20;
  undefined8 *local_90;
  longlong local_80;
  longlong local_78;
  
  puVar23 = (undefined8 *)0x0;
  local_80 = 0;
  local_90 = (undefined8 *)0x0;
  if (((param_2 != (longlong *)0x0) && (lVar6 = *param_2, lVar6 != 0)) &&
     (puVar23 = (undefined8 *)(param_2[2] + lVar6), local_90 = puVar23, local_80 = lVar6,
     (char)param_2[5] == '\0')) {
    local_90 = (undefined8 *)(param_2[1] + lVar6);
  }
  local_res20 = (longlong *)0x0;
  local_78 = 0;
  if ((param_3 != (longlong *)0x0) && (lVar6 = *param_3, lVar6 != 0)) {
    local_res20 = (longlong *)(param_3[3] + lVar6);
    local_78 = param_3[2] + lVar6;
  }
  plVar10 = local_res20;
  uVar25 = *(uint *)(param_1 + 0x2c);
  if (uVar25 < 8) {
    uVar27 = (ulonglong)*(uint *)(param_1 + 0x28);
    bVar14 = (byte)uVar25 & 7;
    if (*(uint *)(param_1 + 0x28) >> bVar14 != 0) goto LAB_1400ace04;
    if ((param_2 == (longlong *)0x0) || ((ulonglong)param_2[4] <= *(ulonglong *)(param_1 + 0x30))) {
      uVar4 = *(undefined4 *)(param_1 + 0x3c);
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      iVar21 = (int)*(ulonglong *)(param_1 + 0x30);
      if (param_2 == (longlong *)0x0) {
        iVar21 = iVar21 - (0U >> bVar14);
      }
      else {
        iVar21 = iVar21 - (int)param_2[4];
      }
code_r0x0001400ac8e0:
      while( true ) {
        uVar22 = (longlong)local_90 - (longlong)puVar23;
        if ((uVar22 < 0x10a) || ((ulonglong)(local_78 - (longlong)local_res20) < 8))
        goto UNWIND_INFO_1400acc6b_UnwindCodes_9__UnwindOpCode;
        uVar27 = uVar27 | *local_res20 << (sbyte)(uVar25 & 0x3f);
        local_res20 = (longlong *)((longlong)local_res20 + (ulonglong)(0x3f - (uVar25 & 0x3f) >> 3))
        ;
        uVar19 = *(uint *)(param_1 + 0x70 + ((1L << ((byte)uVar4 & 0x3f)) - 1U & uVar27) * 4);
        uVar25 = (uVar25 | 0x38) - (uVar19 & 0xf);
        uVar27 = uVar27 >> (sbyte)(uVar19 & 0xf);
        if (-1 < (int)uVar19) break;
LAB_1400acc63:
        *(char *)puVar23 = (char)(uVar19 >> 8);
        puVar23 = (undefined8 *)((longlong)puVar23 + 1);
      }
      if (0x3fffffff < uVar19) {
LAB_1400ac9b1:
        uVar24 = uVar19 >> 8;
        if ((uVar19 & 0xf0) != 0) {
          uVar19 = uVar19 >> 4 & 0xf;
          uVar24 = (*(uint *)(&DAT_140482880 + (ulonglong)uVar19 * 8) & (uint)uVar27) +
                   (uVar24 & 0xff);
          uVar27 = uVar27 >> (sbyte)uVar19;
          uVar25 = uVar25 - uVar19;
        }
        uVar19 = *(uint *)(param_1 + 0x1070 + ((1L << ((byte)uVar5 & 0x3f)) - 1U & uVar27) * 4);
        iVar26 = uVar25 - (uVar19 & 0xf);
        uVar28 = uVar27 >> (sbyte)(uVar19 & 0xf);
        if ((byte)(uVar19 >> 0x1c) == 1) {
          uVar19 = *(uint *)(param_1 + 0x1070 +
                            (ulonglong)
                            (((1 << ((byte)(uVar19 >> 4) & 0xf)) - 1U & (uint)uVar28) +
                             (uVar19 >> 8) & 0x3ff) * 4);
          uVar28 = uVar28 >> (sbyte)(uVar19 & 0xf);
          iVar26 = iVar26 - (uVar19 & 0xf);
        }
        if (uVar19 >> 0x18 == 0x40) {
          uVar24 = (uVar24 & 0xff) + 3;
          uVar11 = uVar19 >> 4 & 0xf;
          uVar25 = iVar26 - uVar11;
          uVar27 = uVar28 >> (sbyte)uVar11;
          uVar19 = (*(uint *)(&DAT_140482880 + (ulonglong)uVar11 * 8) & (uint)uVar28) +
                   (uVar19 >> 8) & 0x7fff;
          uVar28 = (ulonglong)(uVar19 + 1);
          if (uVar28 <= (ulonglong)((longlong)puVar23 - local_80)) goto LAB_1400acb5c;
          iVar26 = ((int)local_80 - (int)puVar23) + uVar19;
          uVar15 = iVar26 + 1;
          uVar11 = uVar15;
          if (uVar24 <= uVar15) {
            uVar11 = uVar24;
          }
          bVar7 = uVar24 <= uVar15;
          uVar24 = uVar24 - uVar15;
          if (bVar7) {
            uVar24 = 0;
          }
          if ((uint)(iVar21 + 1 + iVar26) <= *(uint *)(param_1 + 0x38)) goto code_r0x0001400acac0;
          pcVar12 = "#deflate: bad distance";
        }
        else {
          pcVar12 = "#deflate: bad Huffman code";
          if (uVar19 >> 0x18 != 8) {
            pcVar12 = "#deflate: internal error: inconsistent Huffman decoder state";
          }
        }
        goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
      }
      if (uVar19 < 0x20000000) {
        if (uVar19 < 0x10000000) {
          pcVar12 = "#deflate: bad Huffman code";
          if (uVar19 < 0x8000000) {
            pcVar12 = "#deflate: internal error: inconsistent Huffman decoder state";
          }
          goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
        }
        uVar19 = *(uint *)(param_1 + 0x70 +
                          (ulonglong)
                          (((1 << ((byte)(uVar19 >> 4) & 0xf)) - 1U & (uint)uVar27) + (uVar19 >> 8)
                          & 0x3ff) * 4);
        uVar25 = uVar25 - (uVar19 & 0xf);
        uVar27 = uVar27 >> (sbyte)(uVar19 & 0xf);
        if ((int)uVar19 < 0) goto LAB_1400acc63;
        if (0x3fffffff < uVar19) goto LAB_1400ac9b1;
        if (uVar19 < 0x20000000) {
          pcVar12 = "#deflate: internal error: inconsistent Huffman decoder state";
          if ((uVar19 < 0x10000000) && (pcVar12 = "#deflate: bad Huffman code", uVar19 < 0x8000000))
          {
            pcVar12 = "#deflate: internal error: inconsistent Huffman decoder state";
          }
          goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
        }
      }
      *(undefined1 *)(param_1 + 0x44) = 1;
UNWIND_INFO_1400acc6b_UnwindCodes_9__UnwindOpCode:
      if (uVar25 < 0x40) {
        for (; 7 < uVar25; uVar25 = uVar25 - 8) {
          if (local_res20 <= plVar10) {
            pcVar12 = "#deflate: internal error: inconsistent I/O";
            goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
          }
          local_res20 = (longlong *)((longlong)local_res20 + -1);
        }
        uVar19 = (int)(1L << ((byte)uVar25 & 0x3f)) - 1U & (uint)uVar27;
        *(uint *)(param_1 + 0x28) = uVar19;
        *(uint *)(param_1 + 0x2c) = uVar25;
        pcVar12 = (char *)0x0;
        if (uVar19 >> ((byte)uVar25 & 0x1f) != 0) {
          pcVar12 = "#deflate: internal error: inconsistent n_bits";
        }
      }
      else {
        pcVar12 = "#deflate: internal error: inconsistent n_bits";
      }
      goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
    }
    pcVar12 = "#base: bad I/O position";
  }
  else {
LAB_1400ace04:
    pcVar12 = "#deflate: internal error: inconsistent n_bits";
UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode:
    if (param_2 == (longlong *)0x0) goto code_r0x0001400acd16;
  }
  if (*param_2 != 0) {
    param_2[2] = (longlong)puVar23 - *param_2;
  }
code_r0x0001400acd16:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)local_res20 - *param_3;
  }
  return pcVar12;
code_r0x0001400acac0:
  uVar20 = (ulonglong)(((*(uint *)(param_1 + 0x38) - iVar26) - iVar21) - 1 & 0x7fff);
  uVar13 = 0x8101 - uVar20;
  uVar16 = (ulonglong)uVar11;
  if (uVar13 <= uVar11) {
    uVar16 = uVar13;
  }
  if (uVar16 <= uVar22) {
    uVar22 = uVar16;
  }
  if (uVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar23,uVar20 + param_1 + 0x2070,uVar22);
  }
  if (uVar24 != 0) {
    if ((((ulonglong)((longlong)puVar23 - local_80) < uVar28) ||
        ((ulonglong)((longlong)local_90 - (longlong)puVar23) < (ulonglong)uVar24)) ||
       ((ulonglong)((longlong)local_90 - (longlong)puVar23) < (ulonglong)(uVar24 + 8))) {
      pcVar12 = "#deflate: internal error: inconsistent distance";
      goto UNWIND_INFO_1400acc6b_UnwindCodes_69__UnwindOpCode;
    }
LAB_1400acb5c:
    if (uVar19 + 1 < 8) {
      if (uVar19 != 0) {
        puVar2 = (undefined1 *)((longlong)puVar23 - uVar28);
        for (; 2 < uVar24; uVar24 = uVar24 - 3) {
          *(undefined1 *)puVar23 = *puVar2;
          *(undefined1 *)((longlong)puVar23 + 1) = puVar2[1];
          *(undefined1 *)((longlong)puVar23 + 2) = puVar2[2];
          puVar23 = (undefined8 *)((longlong)puVar23 + 3);
          puVar2 = puVar2 + 3;
        }
        for (; uVar24 != 0; uVar24 = uVar24 - 1) {
          uVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          *(undefined1 *)puVar23 = uVar3;
          puVar23 = (undefined8 *)((longlong)puVar23 + 1);
        }
        goto code_r0x0001400ac8e0;
      }
      uVar8 = CONCAT11(*(undefined1 *)((longlong)puVar23 + -1),
                       *(undefined1 *)((longlong)puVar23 + -1));
      uVar9 = CONCAT22(uVar8,uVar8);
      uVar18 = CONCAT44(uVar9,uVar9);
      *puVar23 = uVar18;
      for (; 8 < uVar24; uVar24 = uVar24 - 8) {
        puVar23 = puVar23 + 1;
        *puVar23 = uVar18;
      }
    }
    else {
      puVar17 = (undefined8 *)((longlong)puVar23 - uVar28);
      *puVar23 = *puVar17;
      if (8 < uVar24) {
        do {
          puVar1 = puVar17 + 1;
          puVar17 = puVar17 + 1;
          puVar23 = puVar23 + 1;
          uVar24 = uVar24 - 8;
          *puVar23 = *puVar1;
        } while (8 < uVar24);
        puVar23 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar23);
        goto code_r0x0001400ac8e0;
      }
    }
    puVar23 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar23);
  }
  goto code_r0x0001400ac8e0;
}

