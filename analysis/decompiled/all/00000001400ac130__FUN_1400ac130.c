// Function: FUN_1400ac130
// Addr: 1400ac130
// Size: 1371 bytes


char * FUN_1400ac130(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_res20;
  uint local_308;
  uint local_304;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ushort local_2d8 [12];
  undefined8 uStack_2c0;
  ushort local_2b8 [320];
  
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8[0] = 0;
  local_2d8[1] = 0;
  local_2d8[2] = 0;
  local_2d8[3] = 0;
  local_2d8[4] = 0;
  local_2d8[5] = 0;
  local_2d8[6] = 0;
  local_2d8[7] = 0;
  local_2d8[8] = 0;
  local_2d8[9] = 0;
  local_2d8[10] = 0;
  local_2d8[0xb] = 0;
  uStack_2c0 = 0;
  FUN_1404217a0(local_2b8,0,0x280);
  for (uVar10 = param_3; uVar10 < param_4; uVar10 = uVar10 + 1) {
    uVar9 = (ulonglong)(*(byte *)(param_1 + 0xa171 + (ulonglong)uVar10) & 0xf);
    uVar3 = *(ushort *)((longlong)&local_2f8 + uVar9 * 2);
    if (0x13f < uVar3) goto LAB_1400ac660;
    *(ushort *)((longlong)&local_2f8 + uVar9 * 2) = uVar3 + 1;
  }
  if ((ushort)local_2f8 + param_3 == param_4) {
LAB_1400ac669:
    pcVar5 = "#deflate: no Huffman codes";
  }
  else {
    uVar6 = 1;
    uVar10 = 1;
    do {
      if (0x40000000 < uVar6) goto LAB_1400ac660;
      uVar7 = (uint)*(ushort *)((longlong)&local_2f8 + (ulonglong)uVar10 * 2);
      if (uVar6 * 2 < uVar7) {
        return "#deflate: bad Huffman code (over-subscribed)";
      }
      uVar6 = uVar6 * 2 - uVar7;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x10);
    local_2f8._2_2_ = (short)((ulonglong)local_2f8 >> 0x10);
    if (uVar6 == 0) {
      uVar10 = 0;
      uVar9 = 1;
      do {
        uVar3 = *(ushort *)((longlong)&local_2f8 + uVar9 * 2);
        local_2d8[uVar9] = (ushort)uVar10;
        uVar6 = (uint)uVar3;
        if (0x140 - uVar6 < uVar10) goto LAB_1400ac660;
        uVar10 = uVar10 + uVar6;
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
      } while (uVar6 < 0x10);
      uVar6 = param_3;
      if (uVar10 < 0x121) {
        for (; uVar6 < param_4; uVar6 = uVar6 + 1) {
          bVar2 = *(byte *)(param_1 + 0xa171 + (ulonglong)uVar6);
          if (bVar2 != 0) {
            uVar7 = bVar2 & 0xf;
            uVar3 = local_2d8[uVar7];
            if (0x13f < uVar3) goto LAB_1400ac660;
            local_2b8[uVar3] = (short)uVar6 - (short)param_3;
            local_2d8[uVar7] = uVar3 + 1;
          }
        }
        uVar9 = 1;
        while (local_2f8._2_2_ == 0) {
          if (8 < (uint)uVar9) {
            return "#deflate: bad Huffman minimum code length";
          }
          uVar9 = (ulonglong)((uint)uVar9 + 1);
          local_2f8._2_2_ = *(short *)((longlong)&local_2f8 + uVar9 * 2);
        }
        local_res20 = 0xffffffff;
        uVar9 = 0xf;
        uVar6 = 0xf;
        uStack_2e0._6_2_ = (short)((ulonglong)uStack_2e0 >> 0x30);
        while (uStack_2e0._6_2_ == 0) {
          if ((uint)uVar9 < 2) goto LAB_1400ac669;
          uVar6 = (uint)uVar9 - 1;
          uVar9 = (ulonglong)uVar6;
          uStack_2e0._6_2_ = *(short *)((longlong)&local_2f8 + uVar9 * 2);
        }
        uVar7 = 9;
        if (uVar6 < 10) {
          uVar7 = uVar6;
        }
        *(uint *)(param_1 + 0x3c + (ulonglong)param_2 * 4) = uVar7;
        if (((uVar10 == local_2d8[uVar6]) && (uVar10 == uStack_2c0._6_2_)) &&
           (param_3 + local_2b8[0] < 0x140)) {
          uVar9 = 0;
          uVar7 = 0x200;
          local_304 = 0;
          if (uVar6 < 9) {
            uVar7 = 1 << ((byte)uVar6 & 0x1f);
          }
          local_308 = 0x200;
          uVar11 = 0;
          uVar13 = 0;
          uVar6 = *(byte *)((ulonglong)(param_3 + local_2b8[0]) + 0xa171 + param_1) & 0xf;
          if (param_3 + local_2b8[0] < 0x140) {
            do {
              uVar3 = local_2b8[uVar9];
              uVar14 = *(byte *)(param_1 + 0xa171 + (ulonglong)(uVar3 + param_3)) & 0xf;
              if ((uVar6 < uVar14) &&
                 (uVar13 = uVar13 << ((char)uVar14 - (char)uVar6 & 0x1fU), 0x7fff < uVar13)) break;
              uVar6 = uVar13;
              uVar15 = uVar14;
              if (9 < uVar14) {
                uVar15 = uVar14 - 9;
                uVar16 = uVar13 >> ((byte)uVar15 & 0x1f);
                uVar17 = uVar16 & 0x1ff;
                uVar6 = *(uint *)(&DAT_140482730 + (ulonglong)uVar15 * 4) & uVar13;
                if (local_res20 != uVar17) {
                  uVar7 = 1 << ((byte)uVar15 & 0x1f);
                  uVar11 = uVar14;
                  do {
                    uVar12 = (uint)*(ushort *)((longlong)&local_2f8 + (ulonglong)uVar11 * 2);
                    if (uVar7 <= uVar12) break;
                    uVar7 = uVar7 - uVar12;
                    if (0x40000000 < uVar7) goto LAB_1400ac660;
                    uVar7 = uVar7 * 2;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < 0x10);
                  if (5 < uVar11 - 10) break;
                  uVar7 = 1 << ((byte)(uVar11 - 9) & 0x1f);
                  if (0x400 < uVar7 + local_308) break;
                  *(uint *)((ulonglong)param_2 * 0x1000 + param_1 + 0x70 +
                           ((ulonglong)(byte)(&DAT_14047a680)[uVar17 >> 1] |
                           (ulonglong)((uVar16 & 1) << 8)) * 4) =
                       (local_308 << 4 | uVar11 - 9) << 4 | 0x10000009;
                  uVar11 = local_308;
                  local_res20 = uVar17;
                  local_308 = uVar7 + local_308;
                }
              }
              if (0x1ff < uVar6) break;
              psVar1 = (short *)((longlong)&local_2f8 + (ulonglong)uVar14 * 2);
              sVar4 = *psVar1;
              if (sVar4 == 0) break;
              *psVar1 = sVar4 + -1;
              if (uVar3 == 0x100) {
                uVar16 = 0x20000000;
              }
              else {
                uVar16 = (uint)uVar3;
                if ((uVar3 < 0x100) && (param_2 == 0)) {
                  uVar16 = (uVar16 | 0xff800000) << 8;
                }
                else {
                  if (uVar16 < param_5) break;
                  uVar9 = (ulonglong)(uVar16 - param_5 & 0x1f);
                  if (param_2 == 0) {
                    uVar16 = *(uint *)(&DAT_14047a780 + uVar9 * 4);
                  }
                  else {
                    uVar16 = *(uint *)(&DAT_14047a570 + uVar9 * 4);
                  }
                }
              }
              bVar2 = (&DAT_14047a680)[uVar6 >> 1];
              uVar17 = 1 << ((byte)uVar15 & 0x1f);
              if (uVar17 <= uVar7) {
                uVar12 = uVar7;
                do {
                  uVar12 = uVar12 - uVar17;
                  uVar8 = ((uVar12 | ((uint)bVar2 | (uVar6 & 1) << 8) >> (9 - (byte)uVar15 & 0x1f))
                          & 0x1ff) + uVar11;
                  if (0x3ff < uVar8) goto LAB_1400ac660;
                  *(uint *)((ulonglong)param_2 * 0x1000 + param_1 + 0x70 + (ulonglong)uVar8 * 4) =
                       uVar16 | uVar15;
                } while (uVar17 <= uVar12);
              }
              local_304 = local_304 + 1;
              uVar9 = (ulonglong)local_304;
              if (uVar10 <= local_304) {
                return (char *)0x0;
              }
              uVar13 = uVar13 + 1;
              if ((0x7fff < uVar13) || (uVar6 = uVar14, 0x13f < local_2b8[uVar9] + param_3)) break;
            } while( true );
          }
        }
      }
LAB_1400ac660:
      pcVar5 = "#deflate: internal error: inconsistent Huffman decoder state";
    }
    else {
      if (((param_2 == 1) && (local_2f8._2_2_ == 1)) && ((ushort)local_2f8 + param_3 + 1 == param_4)
         ) {
        uVar10 = 0;
        do {
          if (*(char *)(param_1 + 0xa171 + (ulonglong)(uVar10 + param_3)) == '\x01') {
            *(undefined4 *)(param_1 + 0x40) = 1;
            uVar10 = *(uint *)(&DAT_14047a570 + (ulonglong)uVar10 * 4);
            *(undefined4 *)(param_1 + 0x1074) = 0x8000001;
            *(uint *)(param_1 + 0x1070) = uVar10 | 1;
            return (char *)0x0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x1e);
      }
      pcVar5 = "#deflate: bad Huffman code (under-subscribed)";
    }
  }
  return pcVar5;
}

