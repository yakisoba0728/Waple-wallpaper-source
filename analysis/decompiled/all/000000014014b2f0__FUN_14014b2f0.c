// Function: FUN_14014b2f0
// Addr: 14014b2f0
// Size: 1095 bytes


longlong FUN_14014b2f0(ulonglong param_1,int param_2)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  float *pfVar6;
  size_t _Size;
  void *pvVar7;
  float *pfVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  
  uVar16 = 1;
  lVar3 = _calloc_base(1,0xd8);
  if (lVar3 == 0) {
    return 0;
  }
  *(code **)(lVar3 + 0xb0) = FUN_14014b280;
  *(longlong *)(lVar3 + 0x80) = lVar3 + 0xd0;
  pcVar4 = FUN_14014b740;
  if (-1 < param_2) {
    pcVar4 = FUN_14014bc50;
  }
  *(ulonglong *)(lVar3 + 0x50) = param_1;
  *(undefined4 *)(lVar3 + 0x88) = 1;
  uVar17 = param_1 * 2;
  *(code **)(lVar3 + 0x60) = pcVar4;
  puVar2 = *(undefined8 **)(lVar3 + 0x80);
  lVar11 = 0x3f;
  if (uVar17 - 1 != 0) {
    for (; uVar17 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar12 = (char)lVar11 + 1;
  uVar15 = 1L << (bVar12 & 0x3f);
  uVar5 = FUN_140145e60(uVar15,0xffffffff);
  *puVar2 = uVar5;
  if (**(longlong **)(lVar3 + 0x80) != 0) {
    pfVar6 = _aligned_malloc(param_1 * 8,0x20);
    *(float **)(lVar3 + 0xb8) = pfVar6;
    if (pfVar6 != (float *)0x0) {
      _Size = 8L << (bVar12 & 0x3f);
      pvVar7 = _aligned_malloc(_Size,0x20);
      *(void **)(lVar3 + 0xc0) = pvVar7;
      if (pvVar7 != (void *)0x0) {
        pfVar8 = _aligned_malloc(0x10L << (bVar12 & 0x3f),0x20);
        *(float **)(lVar3 + 0xa0) = pfVar8;
        pvVar9 = _aligned_malloc(param_1 << 4,0x20);
        if (pvVar9 != (void *)0x0) {
          FUN_140149360(pvVar9);
          uVar14 = 0;
          uVar18 = 0;
          if (3 < param_1) {
            do {
              uVar10 = uVar18 * 2;
              pfVar6[uVar18 * 2] = *(float *)((longlong)pvVar9 + uVar14 * 8);
              uVar13 = (uVar10 | 1) + uVar14;
              pfVar6[uVar18 * 2 + 1] = *(float *)((longlong)pvVar9 + uVar14 * 8 + 4);
              uVar14 = uVar13 + param_1 * -2;
              if (uVar13 < uVar17) {
                uVar14 = uVar13;
              }
              pfVar6[uVar18 * 2 + 2] = *(float *)((longlong)pvVar9 + uVar14 * 8);
              pfVar6[uVar18 * 2 + 3] = *(float *)((longlong)pvVar9 + uVar14 * 8 + 4);
              uVar13 = uVar14 + 3 + uVar10;
              uVar14 = uVar13 + param_1 * -2;
              if (uVar13 < uVar17) {
                uVar14 = uVar13;
              }
              pfVar6[uVar18 * 2 + 4] = *(float *)((longlong)pvVar9 + uVar14 * 8);
              pfVar6[uVar18 * 2 + 5] = *(float *)((longlong)pvVar9 + uVar14 * 8 + 4);
              uVar13 = uVar14 + 5 + uVar10;
              uVar14 = uVar13 + param_1 * -2;
              if (uVar13 < uVar17) {
                uVar14 = uVar13;
              }
              pfVar6[uVar18 * 2 + 6] = *(float *)((longlong)pvVar9 + uVar14 * 8);
              pfVar6[uVar18 * 2 + 7] = *(float *)((longlong)pvVar9 + uVar14 * 8 + 4);
              uVar10 = uVar14 + 7 + uVar10;
              uVar14 = uVar10 + param_1 * -2;
              if (uVar10 < uVar17) {
                uVar14 = uVar10;
              }
              uVar18 = uVar18 + 4;
            } while (uVar18 < param_1 - 3);
          }
          while (uVar18 < param_1) {
            pfVar6[uVar18 * 2] = *(float *)((longlong)pvVar9 + uVar14 * 8);
            uVar10 = (uVar18 * 2 | 1) + uVar14;
            pfVar6[uVar18 * 2 + 1] = *(float *)((longlong)pvVar9 + uVar14 * 8 + 4);
            uVar18 = uVar18 + 1;
            uVar14 = uVar10 + param_1 * -2;
            if (uVar10 < uVar17) {
              uVar14 = uVar10;
            }
          }
          FUN_1402d3dd0(pvVar9);
        }
        fVar19 = DAT_140492704 / (float)uVar15;
        *pfVar8 = fVar19 * *pfVar6;
        pfVar8[1] = fVar19 * pfVar6[1];
        if (1 < param_1) {
          uVar17 = uVar16;
          if (3 < param_1 - 1) {
            do {
              fVar1 = pfVar6[uVar17 * 2];
              uVar16 = uVar17 + 4;
              lVar11 = _Size + uVar17 * -8;
              *(float *)((longlong)pfVar8 + lVar11) = fVar19 * fVar1;
              pfVar8[uVar17 * 2] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 1];
              *(float *)((longlong)pfVar8 + lVar11 + 4) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 1] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 2];
              *(float *)((longlong)pfVar8 + lVar11 + -8) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 2] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 3];
              *(float *)((longlong)pfVar8 + lVar11 + -4) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 3] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 4];
              *(float *)((longlong)pfVar8 + lVar11 + -0x10) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 4] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 5];
              *(float *)((longlong)pfVar8 + lVar11 + -0xc) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 5] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 6];
              *(float *)((longlong)pfVar8 + lVar11 + -0x18) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 6] = fVar19 * fVar1;
              fVar1 = pfVar6[uVar17 * 2 + 7];
              *(float *)((longlong)pfVar8 + lVar11 + -0x14) = fVar19 * fVar1;
              pfVar8[uVar17 * 2 + 7] = fVar19 * fVar1;
              uVar17 = uVar16;
            } while (uVar16 < param_1 - 3);
            if (param_1 <= uVar16) goto LAB_14014b6d2;
          }
          do {
            fVar1 = pfVar6[uVar17 * 2];
            lVar11 = _Size + uVar17 * -8;
            uVar16 = uVar17 + 1;
            *(float *)((longlong)pfVar8 + lVar11) = fVar19 * fVar1;
            pfVar8[uVar17 * 2] = fVar19 * fVar1;
            fVar1 = pfVar6[uVar17 * 2 + 1];
            *(float *)((longlong)pfVar8 + lVar11 + 4) = fVar19 * fVar1;
            pfVar8[uVar17 * 2 + 1] = fVar19 * fVar1;
            uVar17 = uVar16;
          } while (uVar16 < param_1);
        }
LAB_14014b6d2:
        for (; uVar16 <= uVar15 - param_1; uVar16 = uVar16 + 1) {
          (pfVar8 + uVar16 * 2)[0] = 0.0;
          (pfVar8 + uVar16 * 2)[1] = 0.0;
        }
        (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x60))
                  (**(longlong **)(lVar3 + 0x80),pfVar8,pvVar7);
        return lVar3;
      }
    }
  }
  FUN_14014b280(lVar3);
  return 0;
}

