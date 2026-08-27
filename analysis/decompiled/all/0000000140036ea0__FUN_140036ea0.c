// Function: FUN_140036ea0
// Addr: 140036ea0
// Size: 824 bytes


void FUN_140036ea0(float *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *_Buf1;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  float fVar18;
  float *local_res8;
  
  uVar9 = *(ulonglong *)(param_1 + 0xe);
  local_res8 = param_1;
  fVar18 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar12 = 0;
  if ((DAT_140492974 <= fVar18) && (fVar18 = fVar18 - DAT_140492974, fVar18 < DAT_140492974)) {
    lVar12 = -0x8000000000000000;
  }
  uVar13 = 8;
  if (8 < (ulonglong)((longlong)fVar18 + lVar12)) {
    uVar13 = (longlong)fVar18 + lVar12;
  }
  uVar14 = uVar9;
  if ((uVar9 < uVar13) && ((0x1ff < uVar9 || (uVar14 = uVar9 * 8, uVar9 * 8 < uVar13)))) {
    uVar14 = uVar13;
  }
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar3 = *(longlong **)(param_1 + 2);
  uVar9 = uVar14 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  pfVar1 = param_1 + 6;
  FUN_140011f50(pfVar1,2L << (bVar11 & 0x3f),plVar3);
  *(longlong *)(param_1 + 0xe) = lVar12;
  *(longlong *)(param_1 + 0xc) = lVar12 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 2);
  do {
    if (plVar7 == plVar3) {
      local_res8 = (float *)0x0;
      FUN_1400394c0(&local_res8);
      return;
    }
    uVar9 = plVar7[5];
    plVar10 = plVar7 + 2;
    plVar4 = (longlong *)*plVar7;
    if (0xf < uVar9) {
      plVar10 = (longlong *)plVar7[2];
    }
    uVar13 = plVar7[4];
    uVar16 = 0;
    uVar14 = 0xcbf29ce484222325;
    if (uVar13 != 0) {
      do {
        pbVar2 = (byte *)((longlong)plVar10 + uVar16);
        uVar16 = uVar16 + 1;
        uVar14 = (uVar14 ^ *pbVar2) * 0x100000001b3;
      } while (uVar16 < uVar13);
    }
    lVar12 = *(longlong *)pfVar1;
    uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
    plVar10 = *(longlong **)(lVar12 + uVar14 * 0x10);
    if (plVar10 == plVar3) {
      *(longlong **)(lVar12 + uVar14 * 0x10) = plVar7;
      *(longlong **)(lVar12 + 8 + uVar14 * 0x10) = plVar7;
    }
    else {
      plVar17 = *(longlong **)(lVar12 + 8 + uVar14 * 0x10);
      plVar15 = plVar17 + 2;
      if (0xf < (ulonglong)plVar17[5]) {
        plVar15 = (longlong *)*plVar15;
      }
      _Buf1 = plVar7 + 2;
      if (0xf < uVar9) {
        _Buf1 = (longlong *)plVar7[2];
      }
      if (uVar13 == plVar17[4]) {
        if ((uVar13 == 0) || (iVar8 = memcmp(_Buf1,plVar15,uVar13), iVar8 == 0)) {
          plVar17 = (longlong *)*plVar17;
          if (plVar17 != plVar7) {
            plVar10 = (longlong *)plVar7[1];
            *plVar10 = (longlong)plVar4;
            puVar5 = (undefined8 *)plVar4[1];
            *puVar5 = plVar17;
            puVar6 = (undefined8 *)plVar17[1];
            *puVar6 = plVar7;
            plVar17[1] = (longlong)puVar5;
            plVar4[1] = (longlong)plVar10;
            plVar7[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar12 + 8 + uVar14 * 0x10) = plVar7;
          goto LAB_140037145;
        }
        plVar10 = *(longlong **)(lVar12 + uVar14 * 0x10);
        uVar9 = plVar7[5];
      }
      if (plVar10 != plVar17) {
        do {
          plVar17 = (longlong *)plVar17[1];
          plVar10 = plVar17 + 2;
          if (0xf < (ulonglong)plVar17[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar9 < 0x10) {
            plVar15 = plVar7 + 2;
          }
          else {
            plVar15 = (longlong *)plVar7[2];
          }
          if (uVar13 == plVar17[4]) {
            if ((uVar13 == 0) || (iVar8 = memcmp(plVar15,plVar10,uVar13), iVar8 == 0)) {
              lVar12 = *plVar17;
              plVar10 = (longlong *)plVar7[1];
              *plVar10 = (longlong)plVar4;
              plVar15 = (longlong *)plVar4[1];
              *plVar15 = lVar12;
              puVar5 = *(undefined8 **)(lVar12 + 8);
              *puVar5 = plVar7;
              *(longlong **)(lVar12 + 8) = plVar15;
              plVar4[1] = (longlong)plVar10;
              plVar7[1] = (longlong)puVar5;
              goto LAB_140037145;
            }
            uVar9 = plVar7[5];
          }
        } while (*(longlong **)(lVar12 + uVar14 * 0x10) != plVar17);
      }
      plVar10 = (longlong *)plVar7[1];
      *plVar10 = (longlong)plVar4;
      puVar5 = (undefined8 *)plVar4[1];
      *puVar5 = plVar17;
      puVar6 = (undefined8 *)plVar17[1];
      *puVar6 = plVar7;
      plVar17[1] = (longlong)puVar5;
      plVar4[1] = (longlong)plVar10;
      plVar7[1] = (longlong)puVar6;
      *(longlong **)(lVar12 + uVar14 * 0x10) = plVar7;
    }
LAB_140037145:
    pfVar1 = local_res8 + 6;
    plVar7 = plVar4;
    param_1 = local_res8;
  } while( true );
}

