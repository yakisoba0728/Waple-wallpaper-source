// Function: FUN_1400aba30
// Addr: 1400aba30
// Size: 1788 bytes


byte * FUN_1400aba30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint local_res8;
  uint local_res18;
  uint local_res20;
  uint local_b8;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  byte *local_70;
  byte *local_60;
  uint *local_58;
  
  pcVar7 = (char *)0x0;
  bVar17 = 0;
  local_res20 = 0;
  local_res18 = 0;
  local_60 = (byte *)0x0;
  pbVar9 = (byte *)pcVar7;
  if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, pbVar9 = (byte *)0x0, lVar1 != 0)) {
    pbVar9 = (byte *)(param_2[3] + lVar1);
    local_60 = (byte *)(param_2[2] + lVar1);
  }
  iVar5 = *(int *)(param_1 + 0x58);
  bVar2 = true;
  if (iVar5 == 0) {
    uVar8 = *(uint *)(param_1 + 0x28);
    uVar10 = *(uint *)(param_1 + 0x2c);
    pbVar12 = (byte *)pcVar7;
    pbVar15 = (byte *)pcVar7;
    pbVar16 = (byte *)pcVar7;
    pbVar20 = (byte *)pcVar7;
    pbVar21 = (byte *)pcVar7;
    goto LAB_1400abc33;
  }
  uVar8 = *(uint *)(param_1 + 0xa2c8);
  local_res18 = *(uint *)(param_1 + 0xa2d8);
  uVar10 = *(uint *)(param_1 + 0xa2cc);
  uVar18 = *(uint *)(param_1 + 0xa2d0);
  pbVar16 = (byte *)(ulonglong)uVar18;
  local_res20 = *(uint *)(param_1 + 0xa2d4);
  uVar6 = *(uint *)(param_1 + 0xa2e4);
  pbVar21 = (byte *)(ulonglong)uVar6;
  uVar11 = *(uint *)(param_1 + 0xa2dc);
  pbVar12 = (byte *)(ulonglong)uVar11;
  uVar14 = *(uint *)(param_1 + 0xa2e0);
  pbVar15 = (byte *)(ulonglong)uVar14;
  bVar17 = *(byte *)(param_1 + 0xa2e8);
  uVar19 = *(uint *)(param_1 + 0xa2ec);
  pbVar20 = (byte *)(ulonglong)uVar19;
  if (iVar5 == 1) {
    while( true ) {
      uVar19 = (uint)pbVar20;
      uVar14 = (uint)pbVar15;
      uVar11 = (uint)pbVar12;
      uVar18 = (uint)pbVar16;
      local_res8 = (uint)pbVar21;
      if (pbVar9 == local_60) break;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar8 = uVar8 | (uint)bVar4 << ((byte)uVar10 & 0x1f);
      uVar10 = uVar10 + 8;
LAB_1400abc33:
      if (0xd < uVar10) {
        local_b8 = (uVar8 & 0x1f) + 0x101;
        pbVar16 = (byte *)(ulonglong)local_b8;
        if (local_b8 < 0x11f) {
          local_res20 = (uVar8 >> 5 & 0x1f) + 1;
          if (local_res20 < 0x1f) {
            uVar18 = uVar8 >> 10;
            uVar10 = uVar10 - 0xe;
            uVar8 = uVar8 >> 0xe;
            local_res18 = (uVar18 & 0xf) + 4;
            pbVar13 = (byte *)0x0;
            goto LAB_1400abcd0;
          }
          pcVar7 = "#deflate: bad distance code count";
        }
        else {
          pcVar7 = "#deflate: bad literal/length code count";
        }
        goto LAB_1400ac0f9;
      }
      iVar5 = 1;
    }
LAB_1400abff9:
    uVar6 = local_res8;
    pcVar7 = "$base: short read";
  }
  else {
    local_b8 = uVar18;
    if (iVar5 == 2) {
      while( true ) {
        uVar19 = (uint)pbVar20;
        uVar14 = (uint)pbVar15;
        uVar11 = (uint)pbVar12;
        uVar18 = (uint)pbVar16;
        local_res8 = (uint)pbVar21;
        if (pbVar9 == local_60) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 | (uint)bVar4 << ((byte)uVar10 & 0x1f);
        uVar10 = uVar10 + 8;
        while (2 < uVar10) {
          uVar10 = uVar10 - 3;
          bVar4 = (byte)uVar8;
          uVar8 = uVar8 >> 3;
          pbVar13 = (byte *)(ulonglong)((int)pbVar12 + 1);
          *(byte *)((ulonglong)pbVar12[0x14047a660] + 0xa171 + param_1) = bVar4 & 7;
LAB_1400abcd0:
          uVar18 = (uint)pbVar13;
          pbVar12 = pbVar13;
          if (local_res18 <= uVar18) goto joined_r0x0001400abd31;
        }
        iVar5 = 2;
      }
      goto LAB_1400abff9;
    }
    local_res8 = uVar6;
    if (iVar5 == 3) goto LAB_1400abe4d;
    if (iVar5 == 4) {
      while( true ) {
        uVar19 = (uint)pbVar20;
        uVar14 = (uint)pbVar15;
        uVar11 = (uint)pbVar12;
        uVar18 = (uint)pbVar16;
        if (pbVar9 == local_60) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 | (uint)bVar4 << ((byte)uVar10 & 0x1f);
        uVar10 = uVar10 + 8;
        pbVar13 = pbVar12;
LAB_1400abef4:
        if (uVar6 <= uVar10) {
          uVar18 = (int)pbVar20 + (*(uint *)(&DAT_140482730 + (ulonglong)uVar6 * 4) & uVar8);
          pbVar20 = (byte *)(ulonglong)uVar18;
          if (uVar18 != 0) {
            pbVar12 = pbVar13;
            do {
              if (local_res20 + (int)pbVar16 <= (uint)pbVar12) goto LAB_1400ac07f;
              pbVar13 = (byte *)(ulonglong)((uint)pbVar12 + 1);
              pbVar12[param_1 + 0xa171] = bVar17;
              uVar18 = (int)pbVar20 - 1;
              pbVar20 = (byte *)(ulonglong)uVar18;
              pbVar12 = pbVar13;
            } while (uVar18 != 0);
          }
          uVar8 = uVar8 >> ((byte)uVar6 & 0x1f);
          uVar10 = uVar10 - uVar6;
LAB_1400abe10:
          do {
            uVar18 = local_res20 + (int)pbVar16;
            pbVar12 = pbVar13;
            if (uVar18 <= (uint)pbVar13) {
              if ((uint)pbVar13 == uVar18) {
                if (*(char *)(param_1 + 0xa271) == '\0') {
                  pcVar7 = "#deflate: missing end-of-block code";
                }
                else {
                  pcVar7 = (char *)FUN_1400ac130(param_1,0,0,pbVar16,0x101);
                  if ((((byte *)pcVar7 == (byte *)0x0) || (*pcVar7 != 0x23)) &&
                     ((pcVar7 = (char *)FUN_1400ac130(param_1,1,local_b8,uVar18,0),
                      (byte *)pcVar7 == (byte *)0x0 || (*pcVar7 != 0x23)))) {
                    *(uint *)(param_1 + 0x28) = uVar8;
                    *(uint *)(param_1 + 0x2c) = uVar10;
                    *(undefined4 *)(param_1 + 0x58) = 0;
                    pcVar7 = (char *)(byte *)0x0;
                  }
                }
              }
              else {
LAB_1400ac07f:
                pcVar7 = "#deflate: bad Huffman code length count";
              }
              goto LAB_1400ac0f9;
            }
            while( true ) {
              uVar18 = *(uint *)(param_1 + 0x70 + (ulonglong)((uint)pbVar15 & uVar8) * 4);
              uVar6 = uVar18 & 0xf;
              if (uVar6 <= uVar10) break;
              iVar5 = 3;
LAB_1400abe4d:
              uVar19 = (uint)pbVar20;
              uVar14 = (uint)pbVar15;
              uVar11 = (uint)pbVar12;
              uVar18 = (uint)pbVar16;
              if (pbVar9 == local_60) goto LAB_1400abff9;
              bVar4 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              uVar8 = uVar8 | (uint)bVar4 << ((byte)uVar10 & 0x1f);
              uVar10 = uVar10 + 8;
            }
            if ((char)(uVar18 >> 0x18) != -0x80) goto LAB_1400ac074;
            uVar8 = uVar8 >> (sbyte)uVar6;
            uVar10 = uVar10 - uVar6;
            iVar5 = (int)pbVar12;
            if ((uVar18 & 0xf000) != 0) goto code_r0x0001400abe8c;
            pbVar13 = (byte *)(ulonglong)(iVar5 + 1);
            pbVar12[param_1 + 0xa171] = (byte)(uVar18 >> 8);
          } while( true );
        }
        iVar5 = 4;
        pbVar12 = pbVar13;
      }
      goto LAB_1400abff9;
    }
    bVar2 = false;
  }
  local_58 = (uint *)(param_1 + 0xa2ec);
  local_70 = (byte *)(param_1 + 0xa2e8);
  local_78 = (uint *)(param_1 + 0xa2e4);
  local_80 = (uint *)(param_1 + 0xa2e0);
  local_88 = (uint *)(param_1 + 0xa2dc);
  local_90 = (uint *)(param_1 + 0xa2d8);
  iVar3 = 0;
  if (bVar2) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  *(uint *)(param_1 + 0xa2c8) = uVar8;
  *(uint *)(param_1 + 0xa2cc) = uVar10;
  *(uint *)(param_1 + 0xa2d0) = uVar18;
  *(uint *)(param_1 + 0xa2d4) = local_res20;
  *local_90 = local_res18;
  *local_88 = uVar11;
  *local_80 = uVar14;
  *local_78 = uVar6;
  *local_70 = bVar17;
  *local_58 = uVar19;
LAB_1400ac0f9:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar9 - *param_2;
  }
  return (byte *)pcVar7;
joined_r0x0001400abd31:
  while (uVar18 < 0x13) {
    pbVar12 = pbVar13 + 0x14047a660;
    uVar18 = (int)pbVar13 + 1;
    pbVar13 = (byte *)(ulonglong)uVar18;
    *(undefined1 *)((ulonglong)*pbVar12 + 0xa171 + param_1) = 0;
  }
  pcVar7 = (char *)FUN_1400ac130(param_1,0,0,0x13,0xfff);
  if (((byte *)pcVar7 == (byte *)0x0) || (*pcVar7 != 0x23)) {
    pbVar16 = (byte *)(ulonglong)local_b8;
    pbVar15 = (byte *)(ulonglong)((1 << ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x1f)) - 1);
    pbVar13 = (byte *)0x0;
    local_res8 = (uint)pbVar21;
    goto LAB_1400abe10;
  }
  goto LAB_1400ac0f9;
code_r0x0001400abe8c:
  uVar18 = uVar18 & 0xff00;
  pbVar13 = pbVar12;
  if (uVar18 == 0x1000) {
    if (iVar5 == 0) {
      pcVar7 = "#deflate: bad Huffman code length repetition";
      goto LAB_1400ac0f9;
    }
    uVar6 = 2;
    pbVar20 = (byte *)0x3;
    bVar17 = *(byte *)((ulonglong)(iVar5 - 1) + 0xa171 + param_1) & 0xf;
    local_res8 = uVar6;
  }
  else {
    if (uVar18 == 0x1100) {
      uVar6 = 3;
      pbVar20 = (byte *)0x3;
    }
    else {
      if (uVar18 != 0x1200) {
LAB_1400ac074:
        pcVar7 = "#deflate: internal error: inconsistent Huffman decoder state";
        goto LAB_1400ac0f9;
      }
      uVar6 = 7;
      pbVar20 = (byte *)0xb;
    }
    bVar17 = 0;
    local_res8 = uVar6;
  }
  goto LAB_1400abef4;
}

