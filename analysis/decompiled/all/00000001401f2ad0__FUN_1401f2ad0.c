// Function: FUN_1401f2ad0
// Addr: 1401f2ad0
// Size: 2439 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401f2ad0(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint *puVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_res8;
  int local_resc;
  undefined8 local_148;
  float local_140 [2];
  undefined8 local_138;
  float local_130 [2];
  undefined8 local_128;
  float local_120 [2];
  undefined1 local_118 [224];
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return;
  }
  if ((param_1[0x30] != 0) && (cVar6 = FUN_140185010(), cVar6 == '\0')) {
    return;
  }
  if (param_1[0x5f] == 0) {
    return;
  }
  plVar15 = param_1 + 0x5c;
  iVar7 = (int)*plVar15;
  if ((iVar7 < 0) || ((ulonglong)(param_1[0x59] - param_1[0x58] >> 3) <= (ulonglong)(longlong)iVar7)
     ) {
LAB_1401f2ba9:
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(param_1[0x58] + (longlong)iVar7 * 8);
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0x104) & 0x40000000) == 0) goto LAB_1401f2e7d;
      *(uint *)(lVar8 + 0x104) = *(uint *)(lVar8 + 0x104) & 0xbfffffff;
      *(undefined4 *)(lVar8 + 0xfc) = 0;
      goto LAB_1401f2ba9;
    }
  }
  if ((char)param_1[0x6a] == '\0') {
    *(int *)plVar15 = -1;
    if (param_1[0x5f] != 0) {
      if (param_1[0x65] == param_1[0x66]) {
        puVar3 = (undefined8 *)param_1[0x5e];
        for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
          puVar14 = (uint *)param_1[0x66];
          local_res8 = *(uint *)(puVar4 + 2);
          if (puVar14 == (uint *)param_1[0x67]) {
            uVar18 = (longlong)puVar14 - param_1[0x65];
            lVar8 = (longlong)uVar18 >> 2;
            if (lVar8 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_140013050();
            }
            uVar1 = lVar8 + 1;
            uVar12 = param_1[0x67] - param_1[0x65] >> 2;
            if (0x3fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar20 = 0x3fffffffffffffff;
            }
            else {
              uVar20 = (uVar12 >> 1) + uVar12;
              if (uVar20 < uVar1) {
                uVar20 = uVar1;
              }
            }
            lVar8 = FUN_1400399f0(uVar12,uVar20);
            uVar18 = uVar18 & 0xfffffffffffffffc;
            *(uint *)(uVar18 + lVar8) = local_res8;
            puVar5 = (uint *)param_1[0x65];
            if (puVar14 == (uint *)param_1[0x66]) {
              lVar19 = param_1[0x66] - (longlong)puVar5;
              lVar9 = lVar8;
              puVar14 = puVar5;
            }
            else {
              FUN_1404210f0(lVar8,puVar5,(longlong)puVar14 - (longlong)puVar5);
              lVar9 = lVar8 + 4 + uVar18;
              lVar19 = param_1[0x66] - (longlong)puVar14;
            }
            FUN_1404210f0(lVar9,puVar14,lVar19);
            FUN_140038af0(param_1 + 0x65,lVar8,uVar1,uVar20);
          }
          else {
            *puVar14 = local_res8;
            param_1[0x66] = param_1[0x66] + 4;
          }
        }
      }
      plVar15 = param_1 + 0x5c;
      local_resc = (int)(param_1[0x66] - param_1[0x65] >> 2) + -1;
      local_res8 = 0;
      iVar7 = FUN_140077e10(&local_res8,param_1[0x69]);
      lVar8 = param_1[0x65];
      uVar18 = (ulonglong)iVar7;
      piVar2 = (int *)(lVar8 + uVar18 * 4);
      if (param_1[0x66] - lVar8 >> 2 != 0) {
        iVar7 = 0;
        do {
          iVar13 = (int)uVar18;
          iVar16 = *(int *)(lVar8 + (longlong)iVar13 * 4);
          if ((*(char *)((longlong)param_1 + 0x344) == '\0') || ((int)param_1[0x68] != iVar16)) {
            lVar8 = lVar8 + (longlong)iVar13 * 4;
            lVar9 = lVar8 + 4;
            FUN_1404210f0(lVar8,lVar9,param_1[0x66] - lVar9);
            goto LAB_1401f2e4d;
          }
          uVar18 = (ulonglong)(longlong)(iVar13 + 1) % (ulonglong)(param_1[0x66] - lVar8 >> 2);
          iVar7 = iVar7 + 1;
        } while ((ulonglong)(longlong)iVar7 < (ulonglong)(param_1[0x66] - lVar8 >> 2));
      }
      iVar16 = *piVar2;
      FUN_1404210f0(piVar2,piVar2 + 1,param_1[0x66] - (longlong)(piVar2 + 1));
LAB_1401f2e4d:
      param_1[0x66] = param_1[0x66] + -4;
      *(int *)plVar15 = iVar16;
      *(undefined1 *)((longlong)param_1 + 0x344) = 1;
      *(int *)(param_1 + 0x68) = (int)*plVar15;
      lVar8 = *(longlong *)(param_1[0x58] + (longlong)(int)*plVar15 * 8);
    }
  }
  else if ((char)param_1[0x6a] == '\x01') {
    lVar9 = param_1[0x58];
    uVar18 = param_1[0x59] - lVar9 >> 3;
    if (0 < (int)uVar18) {
      while( true ) {
        iVar7 = (int)(((longlong)(int)*plVar15 + 1U) % (ulonglong)(param_1[0x59] - lVar9 >> 3));
        *(int *)plVar15 = iVar7;
        lVar8 = *(longlong *)(lVar9 + (longlong)iVar7 * 8);
        if ((*(byte *)(lVar8 + 0xf0) & 1) != 0) break;
        uVar17 = (int)uVar18 - 1;
        uVar18 = (ulonglong)uVar17;
        if ((int)uVar17 < 1) {
          return;
        }
      }
    }
  }
  if (lVar8 == 0) {
    return;
  }
LAB_1401f2e7d:
  FUN_1401a9f60(param_2,lVar8 + 0xf8,0);
  fVar22 = *(float *)(lVar8 + 0xfc);
  fVar27 = *(float *)(lVar8 + 0xf8);
  fVar21 = (float)FUN_14041d0c0(fVar22,fVar27);
  iVar16 = *(int *)(lVar8 + 0x108);
  iVar7 = iVar16 + -1;
  fVar21 = fVar21 / fVar27;
  iVar11 = (int)(fVar22 / fVar27);
  iVar13 = iVar7;
  if (iVar11 <= iVar7) {
    iVar13 = iVar11;
  }
  if (iVar13 < 1) {
    iVar7 = 0;
  }
  else if (iVar11 <= iVar7) {
    iVar7 = iVar11;
  }
  if (iVar7 + 1 <= iVar16) {
    iVar16 = iVar7 + 1;
  }
  lVar9 = (**(code **)(*param_1 + 0x80))(param_1);
  fVar32 = (float)*(undefined8 *)(lVar9 + 0x20);
  fVar29 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x20) >> 0x20);
  fVar22 = *(float *)(lVar9 + 0x28);
  local_148 = *(longlong *)(lVar9 + 0x30);
  fVar30 = (float)local_148;
  uVar18 = (ulonglong)local_148 >> 0x20;
  local_120[0] = *(float *)(lVar9 + 0x38);
  fVar27 = fVar29 * fVar29 + fVar32 * fVar32 + fVar22 * fVar22;
  local_140[0] = local_120[0];
  if (fVar27 < 0.0) {
    fVar27 = (float)FUN_14041ad10(fVar27);
  }
  else {
    fVar27 = SQRT(fVar27);
  }
  fVar31 = DAT_140492704;
  fVar27 = DAT_140492704 / fVar27;
  local_120[0] = local_120[0] - fVar22 * fVar27 * DAT_140492858;
  fVar28 = (float)*(undefined8 *)(lVar9 + 0x10);
  fVar23 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x10) >> 0x20);
  local_128 = CONCAT44((float)uVar18 - fVar29 * fVar27 * _UNK_140492f44,
                       fVar30 - fVar32 * fVar27 * _DAT_140492f40);
  fVar22 = *(float *)(lVar9 + 0x18);
  fVar27 = fVar23 * fVar23 + fVar28 * fVar28 + fVar22 * fVar22;
  if (fVar27 < 0.0) {
    fVar27 = (float)FUN_14041ad10(fVar27);
  }
  else {
    fVar27 = SQRT(fVar27);
  }
  uVar18 = 0;
  fVar27 = fVar31 / fVar27;
  fVar31 = fVar31 - fVar21;
  local_130[0] = fVar22 * fVar27;
  local_138 = CONCAT44(fVar23 * fVar27,fVar28 * fVar27);
  do {
    iVar13 = (int)uVar18;
    if (*(longlong *)(lVar8 + 0x128 + uVar18 * 0x30) != *(longlong *)(lVar8 + 0x130 + uVar18 * 0x30)
       ) {
      lVar9 = lVar8 + uVar18 * 0x30;
      fVar22 = (float)FUN_1401a9bc0(lVar9 + 0x128,iVar16);
      fVar27 = (float)FUN_1401a9bc0(lVar9 + 0x128,iVar7);
      if (iVar13 == 0) {
LAB_1401f30ec:
        pfVar10 = (float *)&local_128;
      }
      else if (iVar13 == 1) {
        pfVar10 = (float *)((longlong)&local_128 + 4);
      }
      else {
        if (iVar13 != 2) goto LAB_1401f30ec;
        pfVar10 = local_120;
      }
      *pfVar10 = fVar27 * fVar31 + fVar22 * fVar21;
    }
    if (*(longlong *)(lVar8 + 0x1b8 + uVar18 * 0x30) != *(longlong *)(lVar8 + 0x1c0 + uVar18 * 0x30)
       ) {
      lVar9 = lVar8 + uVar18 * 0x30;
      fVar22 = (float)FUN_1401a9bc0(lVar9 + 0x1b8,iVar16);
      fVar27 = (float)FUN_1401a9bc0(lVar9 + 0x1b8,iVar7);
      if (iVar13 == 0) {
LAB_1401f315a:
        pfVar10 = (float *)&local_148;
      }
      else if (iVar13 == 1) {
        pfVar10 = (float *)((longlong)&local_148 + 4);
      }
      else {
        if (iVar13 != 2) goto LAB_1401f315a;
        pfVar10 = local_140;
      }
      *pfVar10 = fVar27 * fVar31 + fVar22 * fVar21;
    }
    if (*(longlong *)(lVar8 + 0x248 + uVar18 * 0x30) != *(longlong *)(lVar8 + 0x250 + uVar18 * 0x30)
       ) {
      lVar9 = lVar8 + uVar18 * 0x30;
      fVar22 = (float)FUN_1401a9bc0(lVar9 + 0x248,iVar16);
      fVar27 = (float)FUN_1401a9bc0(lVar9 + 0x248,iVar7);
      if (iVar13 == 0) {
LAB_1401f31c8:
        pfVar10 = (float *)&local_138;
      }
      else if (iVar13 == 1) {
        pfVar10 = (float *)((longlong)&local_138 + 4);
      }
      else {
        if (iVar13 != 2) goto LAB_1401f31c8;
        pfVar10 = local_130;
      }
      *pfVar10 = fVar27 * fVar31 + fVar22 * fVar21;
    }
    uVar18 = (ulonglong)(iVar13 + 1U);
    if (2 < (int)(iVar13 + 1U)) {
      lVar9 = FUN_14019d920(local_118,&local_148,&local_128,&local_138);
      local_res8 = *(uint *)(lVar9 + 0x20);
      uVar26 = *(undefined4 *)(lVar9 + 0x10);
      fVar22 = *(float *)(lVar9 + 4);
      fVar27 = *(float *)(lVar9 + 0x14);
      fVar32 = *(float *)(lVar9 + 0x24);
      fVar29 = *(float *)(lVar9 + 8);
      fVar30 = *(float *)(lVar9 + 0x18);
      fVar28 = *(float *)(lVar9 + 0x28);
      param_1[0x25] = local_148;
      *(float *)(param_1 + 0x26) = local_140[0];
      *(undefined4 *)(param_1 + 0x1a) = 0;
      fVar23 = (float)FUN_14041c460(uVar26);
      fVar24 = (float)FUN_14041a9c0();
      fVar25 = (float)FUN_14041a2e0(fVar23);
      uVar17 = local_res8 ^ DAT_140492ff0;
      fVar32 = fVar28 * fVar28 + fVar32 * fVar32;
      local_120[0] = fVar23;
      if (fVar32 < 0.0) {
        fVar32 = (float)FUN_14041ad10(fVar32);
      }
      else {
        fVar32 = SQRT(fVar32);
      }
      uVar26 = FUN_14041c460(uVar17,fVar32);
      local_128._4_4_ = uVar26;
      uVar26 = FUN_14041c460(fVar29 * fVar24 - fVar30 * fVar25,fVar27 * fVar25 - fVar22 * fVar24);
      local_128 = CONCAT44(local_128._4_4_,uVar26);
      FUN_1401dd630(param_1,&local_128);
      if ((*(uint *)(param_1[0x19] + 0x118) >> 10 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x33c) = 0x42480000;
        if (*(longlong *)(lVar8 + 0x308) != *(longlong *)(lVar8 + 0x310)) {
          fVar22 = (float)FUN_1401a9bc0(lVar8 + 0x308,iVar16);
          fVar27 = (float)FUN_1401a9bc0(lVar8 + 0x308,iVar7);
          *(float *)(lVar8 + 0x33c) = fVar27 * fVar31 + fVar22 * fVar21;
        }
      }
      else {
        *(undefined4 *)(lVar8 + 0x338) = 0x3f800000;
        if (*(longlong *)(lVar8 + 0x2d8) != *(longlong *)(lVar8 + 0x2e0)) {
          fVar22 = (float)FUN_1401a9bc0(lVar8 + 0x2d8,iVar16);
          fVar27 = (float)FUN_1401a9bc0(lVar8 + 0x2d8,iVar7);
          *(float *)(lVar8 + 0x338) = fVar27 * fVar31 + fVar22 * fVar21;
        }
      }
      return;
    }
  } while( true );
}

