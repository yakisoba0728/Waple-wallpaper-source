// Function: FUN_1400ab030
// Addr: 1400ab030
// Size: 20 bytes


/* WARNING: Removing unreachable block (ram,0x0001400ab159) */
/* WARNING: Removing unreachable block (ram,0x0001400ab147) */
/* WARNING: Removing unreachable block (ram,0x0001400ab33b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1400ab030(int *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iStackX_8;
  byte *pbStack_68;
  ulonglong uStack_58;
  longlong lStack_50;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar7 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar7 = "#base: disabled by previous error";
    }
    return pcVar7;
  }
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0x12] == 0) || (param_1[0x12] == 1)) {
    lVar12 = *param_2;
    uStack_58 = 0;
    lStack_50 = 0;
    if (lVar12 != 0) {
      uStack_58 = param_2[2] + lVar12;
      lStack_50 = lVar12;
    }
    if (param_1[0x13] == 0) {
      lVar12 = cpuid_Extended_Feature_Enumeration_info(7);
      pcVar8 = FUN_1400ac760;
      if ((*(uint *)(lVar12 + 4) >> 8 & 1) == 0) {
        pcVar8 = *(code **)(param_1 + 0x18);
      }
      *(code **)(param_1 + 0x18) = pcVar8;
code_r0x0001400ab174:
      pcVar7 = (char *)0x0;
      pbStack_68 = (byte *)0x0;
      uVar14 = 0;
      param_2[2] = uStack_58 - *param_2;
      uVar6 = _UNK_140492e08;
      uVar5 = _UNK_140492e00;
      pbVar15 = (byte *)0x0;
      lVar12 = *param_3;
      if (lVar12 != 0) {
        pbVar15 = (byte *)(param_3[3] + lVar12);
        pbStack_68 = (byte *)(param_3[2] + lVar12);
      }
      iStackX_8 = param_1[0x14];
      if (iStackX_8 == 0) goto code_r0x0001400ab226;
      uVar14 = param_1[0x28ad];
      pcVar9 = pcVar7;
      if (iStackX_8 == 1) goto code_r0x0001400ab240;
      if (iStackX_8 == 2) goto code_r0x0001400ab29a;
      if (iStackX_8 == 3) goto code_r0x0001400ab78c;
      if (iStackX_8 == 4) {
        while( true ) {
          pcVar7 = (char *)func_0x0001400ace10(param_1,param_2,param_3);
          pbVar15 = (byte *)(param_3[3] + *param_3);
          if (pcVar7 != (char *)0x0) break;
          if ((char)param_1[0x11] != '\0') goto code_r0x0001400ab226;
          while( true ) {
            plVar21 = param_3 + 3;
            *plVar21 = (longlong)pbVar15 - *param_3;
            pcVar9 = (char *)(**(code **)(param_1 + 0x18))(param_1,param_2,param_3);
            pbVar15 = (byte *)(*param_3 + *plVar21);
            if ((pcVar9 != (char *)0x0) && (*pcVar9 == '#')) goto code_r0x0001400ab897;
            if ((char)param_1[0x11] == '\0') break;
code_r0x0001400ab226:
            while( true ) {
              pcVar9 = pcVar7;
              if (uVar14 != 0) goto code_r0x0001400ab888;
              while ((uint)param_1[0xb] < 3) {
                iStackX_8 = 1;
code_r0x0001400ab240:
                if (pbVar15 == pbStack_68) {
                  pcVar7 = "$base: short read";
                  bVar3 = true;
                  goto code_r0x0001400ab868;
                }
                bVar1 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                param_1[10] = param_1[10] | (uint)bVar1 << (sbyte)(param_1[0xb] & 3U);
                param_1[0xb] = param_1[0xb] & 3U | 8;
              }
              uVar13 = param_1[10];
              param_1[10] = uVar13 >> 3;
              uVar14 = uVar13 & 1;
              param_1[0xb] = param_1[0xb] - 3;
              uVar13 = uVar13 & 6;
              if (uVar13 != 0) break;
              lVar12 = *param_3;
              iStackX_8 = 2;
              param_3[3] = (longlong)pbVar15 - lVar12;
code_r0x0001400ab29a:
              lVar2 = *param_2;
              if (lVar2 == 0) {
                lVar18 = 0;
                lVar20 = 0;
              }
              else {
                lVar18 = param_2[2] + lVar2;
                lVar20 = lVar18;
                if ((char)param_2[5] == '\0') {
                  lVar20 = param_2[1] + lVar2;
                }
              }
              if (lVar12 == 0) {
                puVar16 = (uint *)0x0;
                puVar22 = puVar16;
              }
              else {
                puVar16 = (uint *)(param_3[3] + lVar12);
                puVar22 = (uint *)(param_3[2] + lVar12);
              }
              iVar11 = param_1[0x15];
              uVar13 = 0;
              if (iVar11 == 0) {
                if (((uint)param_1[0xb] < 8) && ((uint)param_1[10] >> ((byte)param_1[0xb] & 7) == 0)
                   ) {
                  param_1[10] = 0;
                  param_1[0xb] = 0;
                  goto code_r0x0001400ab36b;
                }
                pcVar7 = "#deflate: internal error: inconsistent n_bits";
              }
              else {
                uVar13 = param_1[0x28ae];
                if (iVar11 == 1) {
code_r0x0001400ab36b:
                  if ((longlong)puVar22 - (longlong)puVar16 < 4) {
                    param_1[0x28b0] = 0;
                    param_1[0x28b1] = 0;
                    iVar11 = 2;
                    goto joined_r0x0001400ab3ad;
                  }
                  uVar23 = (ulonglong)*puVar16;
                  puVar16 = puVar16 + 1;
code_r0x0001400ab37d:
                  uVar13 = (uint)(ushort)uVar23;
                  if (((uint)(uVar23 >> 0x10) & 0xffff) + uVar13 == 0xffff)
                  goto code_r0x0001400ab428;
                  pcVar7 = "#deflate: inconsistent stored block length";
                }
                else {
                  if (iVar11 == 2) {
joined_r0x0001400ab3ad:
                    while (puVar16 != puVar22) {
                      uVar10 = *(ulonglong *)(param_1 + 0x28b0);
                      uVar23 = uVar10 & 0xffffffffffffff;
                      *(ulonglong *)(param_1 + 0x28b0) = uVar23;
                      bVar1 = (byte)(uVar10 >> 0x38);
                      uVar4 = *puVar16;
                      puVar16 = (uint *)((longlong)puVar16 + 1);
                      uVar23 = (ulonglong)(byte)uVar4 << (bVar1 & 0x3f) | uVar23;
                      *(ulonglong *)(param_1 + 0x28b0) = uVar23;
                      if (bVar1 == 0x18) goto code_r0x0001400ab37d;
                      *(ulonglong *)(param_1 + 0x28b0) = (ulonglong)(bVar1 + 8) << 0x38 | uVar23;
                    }
code_r0x0001400ab40d:
                    pcVar7 = "$base: short read";
                  }
                  else {
                    if ((iVar11 != 3) && (iVar11 != 4)) {
                      param_1[0x28ae] = uVar13;
                      pcVar7 = (char *)0x0;
                      param_1[0x15] = 0;
                      goto code_r0x0001400ab4a9;
                    }
code_r0x0001400ab428:
                    uVar23 = lVar20 - lVar18;
                    if ((ulonglong)uVar13 <= (ulonglong)(lVar20 - lVar18)) {
                      uVar23 = (ulonglong)uVar13;
                    }
                    uVar10 = (longlong)puVar22 - (longlong)puVar16;
                    if (uVar23 <= (ulonglong)((longlong)puVar22 - (longlong)puVar16)) {
                      uVar10 = uVar23;
                    }
                    if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(lVar18,puVar16,uVar10);
                    }
                    if (uVar13 == 0) {
                      param_1[0x15] = 0;
                      pcVar7 = (char *)0x0;
                      goto code_r0x0001400ab4a9;
                    }
                    if (lVar20 != lVar18) {
                      iVar11 = 4;
                      goto code_r0x0001400ab40d;
                    }
                    pcVar7 = "$base: short write";
                    iVar11 = 3;
                  }
                  param_1[0x28ae] = uVar13;
                  param_1[0x15] = iVar11;
                }
              }
code_r0x0001400ab4a9:
              if (*param_2 != 0) {
                param_2[2] = lVar18 - *param_2;
              }
              lVar12 = *param_3;
              if (lVar12 != 0) {
                param_3[3] = (longlong)puVar16 - lVar12;
              }
              pbVar15 = (byte *)(param_3[3] + lVar12);
              if (pcVar7 != (char *)0x0) goto code_r0x0001400ab4e7;
            }
            if (uVar13 == 2) {
              *(undefined8 *)((longlong)param_1 + 0xa171) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa179) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa181) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa189) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa191) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa199) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1a1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1a9) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1b1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1b9) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1c1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1c9) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1d1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1d9) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1e1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1e9) = uVar6;
              *(undefined8 *)((longlong)param_1 + 0xa1f1) = uVar5;
              *(undefined8 *)((longlong)param_1 + 0xa1f9) = uVar6;
              *(undefined4 *)((longlong)param_1 + 0xa201) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa205) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa209) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa20d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa211) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa215) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa219) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa21d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa221) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa225) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa229) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa22d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa231) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa235) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa239) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa23d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa241) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa245) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa249) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa24d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa251) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa255) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa259) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa25d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa261) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa265) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa269) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa26d) = 0x9090909;
              *(undefined4 *)((longlong)param_1 + 0xa271) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa275) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa279) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa27d) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa281) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa285) = 0x7070707;
              *(undefined4 *)((longlong)param_1 + 0xa289) = 0x8080808;
              *(undefined4 *)((longlong)param_1 + 0xa28d) = 0x8080808;
              *(undefined4 *)((longlong)param_1 + 0xa291) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa295) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa299) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa29d) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa2a1) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa2a5) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa2a9) = 0x5050505;
              *(undefined4 *)((longlong)param_1 + 0xa2ad) = 0x5050505;
              pcVar7 = (char *)FUN_1400ac200(param_1,0,0,0x120,0x101);
              if (((pcVar7 != (char *)0x0) && (*pcVar7 == '#')) ||
                 ((pcVar7 = (char *)FUN_1400ac200(param_1,1,0x120,0x140,0), pcVar7 != (char *)0x0 &&
                  (*pcVar7 == '#')))) {
                pcVar9 = pcVar7;
                if (*pcVar7 != '#') {
                  if (*pcVar7 == '$') {
                    pcVar9 = "#base: cannot return a suspension";
                  }
                  else {
code_r0x0001400ab888:
                    param_1[0x14] = 0;
                    pcVar9 = pcVar7;
                  }
                }
                goto code_r0x0001400ab897;
              }
            }
            else {
              if (uVar13 != 4) {
                pcVar9 = "#deflate: bad block";
                goto code_r0x0001400ab897;
              }
              param_3[3] = (longlong)pbVar15 - *param_3;
              iStackX_8 = 3;
code_r0x0001400ab78c:
              pcVar7 = (char *)FUN_1400abb00(param_1,param_3);
              pbVar15 = (byte *)(param_3[3] + *param_3);
              pcVar9 = pcVar7;
              if (pcVar7 != (char *)0x0) goto code_r0x0001400ab4e7;
            }
            *(undefined1 *)(param_1 + 0x11) = 0;
            pcVar7 = pcVar9;
          }
          *plVar21 = *plVar21;
          iStackX_8 = 4;
        }
code_r0x0001400ab4e7:
        if (*pcVar7 != '$') goto code_r0x0001400ab866;
        bVar3 = true;
      }
      else {
code_r0x0001400ab866:
        bVar3 = false;
      }
code_r0x0001400ab868:
      param_1[0x28ad] = uVar14;
      iVar11 = 0;
      if (bVar3) {
        iVar11 = iStackX_8;
      }
      param_1[0x14] = iVar11;
      pcVar9 = pcVar7;
code_r0x0001400ab897:
      if (*param_3 != 0) {
        param_3[3] = (longlong)pbVar15 - *param_3;
      }
      uVar23 = param_2[2] + *param_2;
      if (pcVar9 == (char *)0x0) {
code_r0x0001400ab8c1:
        param_1[0x13] = 0;
      }
      else if (*pcVar9 == '$') {
        uVar17 = uVar23 - lStack_50;
        uVar19 = uStack_58 - lStack_50;
        uVar10 = uVar17 - uVar19;
        if (uVar17 < uVar19) {
          uVar10 = 0;
        }
        uVar10 = uVar10 + *(ulonglong *)(param_1 + 0xc);
        if (uVar10 < *(ulonglong *)(param_1 + 0xc)) {
          uVar10 = 0xffffffffffffffff;
        }
        *(ulonglong *)(param_1 + 0xc) = uVar10;
        uVar10 = uVar17 - uVar19;
        if (uVar17 < uVar19) {
          uVar10 = 0;
          uStack_58 = 0;
        }
        if (*param_1 == 0x3ccb6c71) {
          if (0x7fff < uVar10) {
            if (0x8000 < uVar10) {
              uStack_58 = uStack_58 + (uVar10 - 0x8000);
              uVar10 = 0x8000;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 0x81c,uStack_58,uVar10);
          }
          uVar17 = 0x8000 - (ulonglong)(param_1[0xe] & 0x7fff);
          uVar23 = uVar10;
          if (uVar17 < uVar10) {
            uVar23 = uVar17;
          }
          if (uVar23 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0((ulonglong)(param_1[0xe] & 0x7fff) + 0x2070 + (longlong)param_1,uStack_58,
                          uVar23);
          }
          if (uVar10 != 0) {
            if (uVar10 < 0x8001) {
              if (uVar10 == 0) {
                uVar14 = 0x8000;
                goto code_r0x0001400aba45;
              }
            }
            else {
              uVar10 = 0x8000;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 0x81c,uStack_58,uVar10);
          }
          uVar13 = param_1[0xe] & 0x7fff;
          uVar14 = uVar13 | 0x8000;
          if ((uint)param_1[0xe] < 0x8000) {
            uVar14 = uVar13;
          }
code_r0x0001400aba45:
          param_1[0xe] = uVar14;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(param_1 + 0x281c,param_1 + 0x81c,0x101);
        }
        if (*pcVar9 == '$') {
          param_1[0x13] = 1;
        }
      }
      else if (*pcVar9 != '#') goto code_r0x0001400ab8c1;
    }
    else {
      if (param_1[0x13] == 1) goto code_r0x0001400ab174;
      pcVar9 = (char *)0x0;
      param_1[0x13] = 0;
      uVar23 = uStack_58;
    }
    if (*param_2 != 0) {
      param_2[2] = uVar23 - *param_2;
    }
    if ((pcVar9 == "$base: short read") && ((char)param_3[5] != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#deflate: truncated input";
    }
    if (pcVar9 == (char *)0x0) {
      param_1[0x12] = 0;
      return (char *)0x0;
    }
    if (*pcVar9 != '$') goto code_r0x0001400abac1;
    iVar11 = 1;
    param_1[0x12] = 1;
    if (*pcVar9 != '$') goto code_r0x0001400abab7;
  }
  else {
    param_1[0x12] = 0;
    pcVar9 = (char *)0x0;
code_r0x0001400abab7:
    iVar11 = 0;
  }
  param_1[1] = iVar11;
  if (pcVar9 == (char *)0x0) {
    return (char *)0x0;
  }
code_r0x0001400abac1:
  if (*pcVar9 != '#') {
    return pcVar9;
  }
  *param_1 = 0x75ae3d2;
  return pcVar9;
}

