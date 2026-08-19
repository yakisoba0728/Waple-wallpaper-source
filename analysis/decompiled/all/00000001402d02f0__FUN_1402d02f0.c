// Function: FUN_1402d02f0
// Addr: 1402d02f0
// Size: 375 bytes


ulonglong FUN_1402d02f0(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte bStackX_8;
  uint uStackX_18;
  undefined8 uStack_238;
  ulonglong uStack_228;
  undefined1 local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar15 = *param_1 - 1;
  uVar16 = (ulonglong)uVar15;
  uVar14 = uVar4 - 1;
  if (uVar14 == 0) {
    uVar4 = param_2[1];
    uVar7 = 0;
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      func_0x0001402d0784(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    uVar17 = uVar7;
    if (uVar15 != 0) {
      while (uVar15 != 0xffffffff) {
        lVar8 = uVar16 + 1;
        uVar15 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar15;
        uVar1 = (ulonglong)param_1[lVar8] | uVar7 << 0x20;
        uVar7 = uVar1 % (ulonglong)uVar4;
        uVar17 = (uVar17 << 0x20) + (uVar1 / uVar4 & 0xffffffff);
      }
      *param_1 = 0;
      func_0x0001402d0784(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVar7;
      param_1[2] = 0;
      *param_1 = 1;
      return uVar17;
    }
    uVar14 = param_1[1];
    *param_1 = 0;
    func_0x0001402d0784(param_1 + 1,0x1cc,local_214,0);
    uVar15 = uVar14 % uVar4;
    param_1[1] = uVar15;
    *param_1 = (uint)(uVar15 != 0);
    return (ulonglong)uVar14 / (ulonglong)uVar4;
  }
  if (uVar15 < uVar14) {
    return 0;
  }
  lVar8 = (longlong)(int)uVar15;
  iVar11 = uVar15 - uVar14;
  lVar10 = (longlong)iVar11;
  if (lVar10 <= lVar8) {
    puVar5 = param_1 + lVar8 + 1;
    uVar13 = uVar15;
    do {
      if (*(uint *)((longlong)param_2 + (lVar10 * -4 - (longlong)param_1) + (longlong)puVar5) !=
          *puVar5) {
        if (param_1[(longlong)(int)uVar13 + 1] <= param_2[(longlong)(int)(uVar13 - iVar11) + 1])
        goto code_r0x0001402d047b;
        break;
      }
      uVar13 = uVar13 - 1;
      lVar8 = lVar8 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar10 <= lVar8);
  }
  iVar11 = iVar11 + 1;
code_r0x0001402d047b:
  if (iVar11 == 0) {
    return 0;
  }
  uVar14 = param_2[(ulonglong)uVar14 + 1];
  uStackX_18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  uVar13 = 0;
  uVar7 = 0;
  iVar9 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uVar14 == 0) {
    iVar9 = 0x20;
    bStackX_8 = 0;
  }
  else {
    iVar9 = 0x1f - iVar9;
    bStackX_8 = 0x20 - (char)iVar9;
    if (iVar9 == 0) goto code_r0x0001402d0512;
  }
  uVar6 = uStackX_18 >> (bStackX_8 & 0x1f);
  uStackX_18 = uStackX_18 << ((byte)iVar9 & 0x1f);
  uVar14 = uVar6 | uVar14 << ((byte)iVar9 & 0x1f);
  if (2 < uVar4) {
    uStackX_18 = uStackX_18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (bStackX_8 & 0x1f);
  }
code_r0x0001402d0512:
  iVar11 = iVar11 + -1;
  uStack_228 = 0;
  uVar17 = uVar7;
  if (-1 < iVar11) {
    uVar1 = (ulonglong)uVar14;
    uVar14 = iVar11 + uVar4;
    do {
      uVar15 = uVar13;
      if (uVar14 <= (uint)uVar16) {
        uVar15 = param_1[(ulonglong)uVar14 + 1];
      }
      uVar6 = param_1[(ulonglong)(uVar14 - 2) + 1];
      uVar17 = (ulonglong)uVar6;
      uStack_238 = CONCAT44(uVar15,param_1[(ulonglong)(uVar14 - 1) + 1]);
      if (iVar9 != 0) {
        uStack_238 = (ulonglong)(uVar6 >> (bStackX_8 & 0x3f)) | uStack_238 << ((byte)iVar9 & 0x3f);
        uVar6 = uVar6 << ((byte)iVar9 & 0x1f);
        uVar17 = (ulonglong)uVar6;
        if (2 < uVar14) {
          uVar17 = (ulonglong)(uVar6 | param_1[(ulonglong)(uVar14 - 3) + 1] >> (bStackX_8 & 0x1f));
        }
      }
      uVar2 = uStack_238 / uVar1;
      uStack_238 = uStack_238 % uVar1;
      if (0xffffffff < uVar2) {
        lVar8 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        uStack_238 = uStack_238 + lVar8 * uVar1;
      }
      if (uStack_238 < 0x100000000) {
        uVar3 = uStackX_18 * uVar2;
        do {
          if (uVar3 <= (uStack_238 << 0x20 | uVar17)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - uStackX_18;
          uStack_238 = uStack_238 + uVar1;
        } while (uStack_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar16 = uVar7;
        uVar6 = uVar13;
        puVar5 = param_2;
        if (uVar4 != 0) {
          do {
            uVar16 = uVar16 + puVar5[1] * uVar2;
            uVar17 = uVar16 >> 0x20;
            uVar12 = (uint)uVar16;
            uVar16 = uVar17 + 1;
            if (uVar12 <= param_1[(ulonglong)(uVar6 + iVar11) + 1]) {
              uVar16 = uVar17;
            }
            uVar18 = uVar6 + 1;
            param_1[(ulonglong)(uVar6 + iVar11) + 1] =
                 param_1[(ulonglong)(uVar6 + iVar11) + 1] - uVar12;
            uVar6 = uVar18;
            puVar5 = puVar5 + 1;
          } while (uVar18 < uVar4);
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar7;
          uVar15 = uVar13;
          puVar5 = param_2;
          if (uVar4 != 0) {
            do {
              uVar6 = uVar15 + 1;
              uVar16 = uVar16 + param_1[(ulonglong)(uVar15 + iVar11) + 1] + (ulonglong)puVar5[1];
              param_1[(ulonglong)(uVar15 + iVar11) + 1] = (uint)uVar16;
              uVar16 = uVar16 >> 0x20;
              uVar15 = uVar6;
              puVar5 = puVar5 + 1;
            } while (uVar6 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar16 = (ulonglong)(uVar14 - 1);
      }
      uVar15 = (uint)uVar16;
      uVar14 = uVar14 - 1;
      uVar17 = (uStack_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar11 = iVar11 + -1;
      uStack_228 = uVar17;
    } while (-1 < iVar11);
  }
  uVar15 = uVar15 + 1;
  uVar4 = uVar15;
  if (uVar15 < *param_1) {
    do {
      uVar16 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar16 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar15;
  while( true ) {
    if (uVar15 == 0) {
      return uVar17;
    }
    uVar15 = uVar15 - 1;
    if (param_1[(ulonglong)uVar15 + 1] != 0) break;
    *param_1 = uVar15;
  }
  return uVar17;
}

