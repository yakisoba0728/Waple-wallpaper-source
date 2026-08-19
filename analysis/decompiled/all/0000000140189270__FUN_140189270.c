// Function: FUN_140189270
// Addr: 140189270
// Size: 61 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140189270(longlong param_1,float param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  bool bVar16;
  float fVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStackX_8;
  undefined1 auStack_f8 [224];
  
  puVar7 = *(undefined8 **)(param_1 + 0x160);
  for (puVar21 = *(undefined8 **)(param_1 + 0x158); puVar21 != puVar7; puVar21 = puVar21 + 1) {
    (**(code **)(*(longlong *)*puVar21 + 0x48))();
  }
  lVar23 = *(longlong *)(param_1 + 0x200);
  lVar24 = *(longlong *)(param_1 + 0x1f8);
  plVar25 = (longlong *)0x0;
  if (lVar23 != lVar24) {
    do {
      plVar25 = *(longlong **)(lVar23 + -8);
      lVar23 = lVar23 + -8;
      if (((*(byte *)(plVar25 + 0x24) & 1) != 0) &&
         ((plVar25[0x30] == 0 || (cVar18 = FUN_1401850e0(), cVar18 != '\0')))) break;
      plVar25 = (longlong *)0x0;
    } while (lVar23 != lVar24);
  }
  fVar38 = DAT_140492900;
  fVar17 = DAT_1404927d4;
  fVar34 = DAT_140492790;
  plVar8 = *(longlong **)(param_1 + 0x310);
  if ((plVar8 == *(longlong **)(param_1 + 0x318)) || (*plVar8 == plVar8[1])) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  cVar18 = (char)*(uint *)(param_1 + 0xe0);
  lVar23 = 0x144;
  if ((*(uint *)(param_1 + 0xe0) & 8) == 0) {
    lVar23 = 0x140;
  }
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + lVar23);
  if (plVar25 != (longlong *)0x0) {
    lVar23 = (**(code **)(*plVar25 + 0x80))(plVar25);
    uVar2 = *(undefined4 *)(lVar23 + 0x38);
    uVar5 = *(undefined4 *)(lVar23 + 0x30);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(lVar23 + 0x34);
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
    lVar23 = (**(code **)(*plVar25 + 0x80))(plVar25);
    uVar3 = *(undefined8 *)(lVar23 + 0x24);
    uVar4 = *(undefined8 *)(lVar23 + 0x34);
    *(float *)(param_1 + 0xfc) = *(float *)(lVar23 + 0x30) - *(float *)(lVar23 + 0x20);
    *(ulonglong *)(param_1 + 0x100) =
         CONCAT44((float)((ulonglong)uVar4 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20),
                  (float)uVar4 - (float)uVar3);
    lVar23 = (**(code **)(*plVar25 + 0x80))(plVar25);
    uVar2 = *(undefined4 *)(lVar23 + 0x18);
    uVar5 = *(undefined4 *)(lVar23 + 0x10);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(lVar23 + 0x14);
    *(undefined4 *)(param_1 + 0x110) = uVar2;
    *(undefined4 *)(param_1 + 0x108) = uVar5;
    iVar6 = (int)plVar25[0x5c];
    if (((iVar6 < 0) ||
        ((ulonglong)(plVar25[0x59] - plVar25[0x58] >> 3) <= (ulonglong)(longlong)iVar6)) ||
       (lVar23 = *(longlong *)(plVar25[0x58] + (longlong)iVar6 * 8), lVar23 == 0)) {
      uVar2 = *(undefined4 *)((longlong)plVar25 + 0x2dc);
    }
    else {
      uVar2 = *(undefined4 *)(lVar23 + 0x338);
    }
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    if ((*(uint *)(param_1 + 0xe0) & 8) == 0) {
      iVar6 = (int)plVar25[0x5c];
      if (((iVar6 < 0) ||
          ((ulonglong)(plVar25[0x59] - plVar25[0x58] >> 3) <= (ulonglong)(longlong)iVar6)) ||
         (lVar23 = *(longlong *)(plVar25[0x58] + (longlong)iVar6 * 8), lVar23 == 0)) {
        uVar2 = (undefined4)plVar25[0x5b];
      }
      else {
        uVar2 = *(undefined4 *)(lVar23 + 0x33c);
      }
      *(undefined4 *)(param_1 + 0x148) = uVar2;
    }
    if ((char)*(uint *)(param_1 + 0xe0) < '\0') {
      FUN_140199650(param_1,(undefined4 *)(param_1 + 0xf0),param_1 + 0xfc);
    }
    goto code_r0x000140189be2;
  }
  if (bVar16) {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 300);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x13c);
    if (cVar18 < '\0') {
      FUN_140199650(param_1,(undefined8 *)(param_1 + 0xf0));
    }
    goto code_r0x000140189be2;
  }
  uVar26 = (ulonglong)*(uint *)(param_1 + 0xe4);
  lVar24 = (ulonglong)*(uint *)(param_1 + 0xe8) * 0x2c;
  uVar27 = (ulonglong)(*(uint *)(param_1 + 0xe8) + 1);
  lVar23 = plVar8[uVar26 * 4];
  fVar36 = *(float *)(lVar24 + lVar23);
  uVar19 = (plVar8[uVar26 * 4 + 1] - lVar23 >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (*(float *)(param_1 + 0xec) < fVar36) {
    if (uVar27 < uVar19) {
      fStackX_8 = *(float *)(uVar27 * 0x2c + lVar23);
    }
    else {
      fStackX_8 = 0.0;
    }
    fStackX_8 = fStackX_8 + fVar36;
code_r0x000140189ac7:
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar24 + 4 + lVar23);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar24 + 0xc + lVar23);
    *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(lVar24 + 0x10 + lVar23);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(lVar24 + 0x18 + lVar23);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar24 + 0x1c + lVar23);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar24 + 0x24 + lVar23);
    fVar36 = *(float *)(lVar24 + 0x28 + lVar23);
  }
  else {
    if (uVar19 <= uVar27) {
      fStackX_8 = *(float *)(plVar8 + uVar26 * 4 + 3) - fVar36;
      goto code_r0x000140189ac7;
    }
    fVar29 = *(float *)(lVar24 + 4 + lVar23);
    fVar35 = *(float *)(lVar24 + 8 + lVar23);
    fVar30 = *(float *)(lVar24 + 0xc + lVar23);
    lVar20 = uVar27 * 0x2c;
    fStackX_8 = *(float *)(lVar20 + lVar23);
    fVar28 = *(float *)(lVar20 + 4 + lVar23);
    fVar32 = *(float *)(lVar20 + 8 + lVar23);
    fVar37 = *(float *)(lVar20 + 0xc + lVar23);
    fVar33 = (*(float *)(param_1 + 0xec) - fVar36) / (fStackX_8 - fVar36);
    fVar31 = (fVar28 - fVar29) * fVar34;
    fVar36 = fVar33 * fVar33;
    fVar42 = fVar36 * fVar33;
    fVar41 = fVar42 - fVar36;
    fVar44 = fVar36 * fVar38 - (fVar42 + fVar42);
    fVar43 = ((fVar42 + fVar42) - fVar36 * fVar38) + fVar17;
    fVar33 = (fVar42 - (fVar36 + fVar36)) + fVar33;
    fVar34 = (fVar32 - fVar35) * fVar34;
    fVar38 = (fVar37 - fVar30) * DAT_140492790;
    *(float *)(param_1 + 0xf0) =
         ((fVar29 - fVar29) * DAT_140492790 + fVar31) * fVar33 + fVar43 * fVar29 +
         ((fVar28 - fVar28) * DAT_140492790 + fVar31) * fVar41 + fVar44 * fVar28;
    fVar28 = DAT_140492790;
    fVar36 = (fVar37 - fVar37) * DAT_140492790;
    *(float *)(param_1 + 0xf4) =
         ((fVar35 - fVar35) * DAT_140492790 + fVar34) * fVar33 + fVar43 * fVar35 +
         ((fVar32 - fVar32) * DAT_140492790 + fVar34) * fVar41 + fVar44 * fVar32;
    fVar32 = DAT_140492790;
    *(float *)(param_1 + 0xf8) =
         ((fVar30 - fVar30) * fVar28 + fVar38) * fVar33 + fVar43 * fVar30 +
         (fVar36 + fVar38) * fVar41 + fVar44 * fVar37;
    fVar37 = DAT_140492790;
    fVar34 = *(float *)(lVar20 + 0x10 + lVar23);
    fVar38 = *(float *)(lVar24 + 0x10 + lVar23);
    fVar36 = *(float *)(lVar20 + 0x14 + lVar23);
    fVar29 = *(float *)(lVar24 + 0x14 + lVar23);
    fVar35 = *(float *)(lVar20 + 0x18 + lVar23);
    fVar30 = *(float *)(lVar24 + 0x18 + lVar23);
    fVar31 = (fVar34 - fVar38) * fVar28;
    fVar28 = (fVar36 - fVar29) * fVar28;
    fVar40 = (fVar35 - fVar30) * fVar32;
    fVar39 = (fVar29 - fVar29) * DAT_140492790;
    fVar42 = (fVar36 - fVar36) * DAT_140492790;
    *(float *)(param_1 + 0xfc) =
         ((fVar38 - fVar38) * DAT_140492790 + fVar31) * fVar33 + fVar43 * fVar38 +
         ((fVar34 - fVar34) * fVar32 + fVar31) * fVar41 + fVar44 * fVar34;
    *(float *)(param_1 + 0x100) =
         (fVar39 + fVar28) * fVar33 + fVar43 * fVar29 + (fVar42 + fVar28) * fVar41 + fVar44 * fVar36
    ;
    fVar28 = DAT_140492790;
    *(float *)(param_1 + 0x104) =
         ((fVar30 - fVar30) * fVar37 + fVar40) * fVar33 + fVar43 * fVar30 +
         ((fVar35 - fVar35) * fVar37 + fVar40) * fVar41 + fVar44 * fVar35;
    fVar34 = *(float *)(lVar20 + 0x1c + lVar23);
    fVar38 = *(float *)(lVar24 + 0x1c + lVar23);
    fVar32 = (fVar34 - fVar38) * fVar28;
    fVar36 = *(float *)(lVar20 + 0x20 + lVar23);
    fVar29 = *(float *)(lVar24 + 0x20 + lVar23);
    fVar35 = *(float *)(lVar20 + 0x24 + lVar23);
    fVar30 = *(float *)(lVar24 + 0x24 + lVar23);
    fVar37 = (fVar36 - fVar29) * fVar28;
    fVar39 = (fVar35 - fVar30) * fVar28;
    fVar42 = (fVar29 - fVar29) * DAT_140492790;
    fVar31 = (fVar36 - fVar36) * DAT_140492790;
    *(float *)(param_1 + 0x108) =
         ((fVar38 - fVar38) * DAT_140492790 + fVar32) * fVar33 + fVar43 * fVar38 +
         ((fVar34 - fVar34) * fVar28 + fVar32) * fVar41 + fVar44 * fVar34;
    *(float *)(param_1 + 0x10c) =
         (fVar42 + fVar37) * fVar33 + fVar43 * fVar29 + (fVar31 + fVar37) * fVar41 + fVar44 * fVar36
    ;
    fVar34 = DAT_140492790;
    *(float *)(param_1 + 0x110) =
         ((fVar30 - fVar30) * DAT_140492790 + fVar39) * fVar33 + fVar43 * fVar30 +
         ((fVar35 - fVar35) * DAT_140492790 + fVar39) * fVar41 + fVar44 * fVar35;
    fVar38 = *(float *)(lVar24 + 0x28 + lVar23);
    fVar36 = *(float *)(lVar20 + 0x28 + lVar23);
    fVar29 = (fVar36 - fVar38) * fVar34;
    fVar36 = ((fVar38 - fVar38) * fVar34 + fVar29) * fVar33 + fVar43 * fVar38 +
             ((fVar36 - fVar36) * fVar34 + fVar29) * fVar41 + fVar44 * fVar36;
    fVar38 = DAT_140492900;
  }
  *(float *)(param_1 + 0x114) = fVar36;
  if (cVar18 < '\0') {
    FUN_140199650(param_1,param_1 + 0xf0,param_1 + 0xfc);
  }
  fVar36 = param_2 + *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0xec) = fVar36;
  if (fStackX_8 < fVar36) {
    uVar22 = *(int *)(param_1 + 0xe8) + 1;
    if (((ulonglong)((plVar8[uVar26 * 4 + 1] - plVar8[uVar26 * 4] >> 2) * 0x2e8ba2e8ba2e8ba3) <=
         (ulonglong)uVar22) ||
       (pfVar1 = (float *)((ulonglong)uVar22 * 0x2c + plVar8[uVar26 * 4]),
       *(float *)(plVar8 + uVar26 * 4 + 3) < *pfVar1 ||
       *(float *)(plVar8 + uVar26 * 4 + 3) == *pfVar1)) {
      uVar22 = *(int *)(param_1 + 0xe4) + 1;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      if ((ulonglong)(*(longlong *)(param_1 + 0x318) - *(longlong *)(param_1 + 0x310) >> 5) <=
          (ulonglong)uVar22) {
        uVar22 = 0;
      }
      *(uint *)(param_1 + 0xe4) = uVar22;
    }
    else {
      *(uint *)(param_1 + 0xe8) = uVar22;
    }
  }
code_r0x000140189be2:
  fVar36 = *(float *)(param_1 + 0x148);
  if (_UNK_1404929d0 <= *(float *)(param_1 + 0x148)) {
    fVar36 = _UNK_1404929d0;
  }
  fVar29 = DAT_140492724;
  if (DAT_140492724 <= fVar36) {
    fVar29 = fVar36;
  }
  *(float *)(param_1 + 0x148) = fVar29;
  if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
    lVar23 = *(longlong *)(param_1 + 0xd8);
    if ((*(uint *)(lVar23 + 0x118) & 0x200200) == 0) {
      fVar36 = *(float *)(param_1 + 0x33c);
    }
    else {
      fVar36 = 0.0;
    }
    fVar29 = 0.0;
    if (0.0 <= *(float *)(lVar23 + 0x8c)) {
      fVar29 = *(float *)(lVar23 + 0x8c);
    }
    fVar30 = fVar17 - *(float *)(lVar23 + 0x90);
    fVar35 = fVar17;
    if (fVar29 <= fVar17) {
      fVar35 = fVar29;
    }
    fVar29 = 0.0;
    if (0.0 <= fVar30) {
      fVar29 = fVar30;
    }
    fVar30 = fVar17;
    if (fVar29 <= fVar17) {
      fVar30 = fVar29;
    }
    if ((*(uint *)(lVar23 + 0x118) >> 0xb & 1) != 0) {
      fVar35 = fVar17 - fVar35;
    }
    fVar29 = *(float *)(param_1 + 0x354);
    fVar28 = *(float *)(param_1 + 0x358);
    fVar35 = fVar29 * fVar34 * (fVar17 - fVar36) + fVar29 * fVar35 * fVar36 +
             *(float *)(param_1 + 0xf0);
    fVar36 = fVar28 * fVar34 * (fVar17 - fVar36) + fVar30 * fVar28 * fVar36 +
             *(float *)(param_1 + 0xf4);
    if (0.0 < *(float *)(param_1 + 0x338)) {
      param_2 = (fVar17 - *(float *)(param_1 + 0x338) / fVar38) * DAT_140492938 * param_2;
      if (fVar17 <= param_2) {
        param_2 = fVar17;
      }
      fVar35 = (fVar35 - *(float *)(param_1 + 0x340)) * param_2 + *(float *)(param_1 + 0x340);
      fVar36 = (fVar36 - *(float *)(param_1 + 0x344)) * param_2 + *(float *)(param_1 + 0x344);
    }
    *(float *)(param_1 + 0x340) = fVar35;
    *(float *)(param_1 + 0x344) = fVar36;
    fVar28 = *(float *)(param_1 + 0x344) / fVar28;
    fVar38 = 0.0;
    if (0.0 <= fVar28) {
      fVar38 = fVar28;
    }
    fVar29 = *(float *)(param_1 + 0x340) / fVar29;
    fVar36 = fVar17;
    if (fVar38 <= fVar17) {
      fVar36 = fVar38;
    }
    fVar38 = 0.0;
    if (0.0 <= fVar29) {
      fVar38 = fVar29;
    }
    fVar29 = fVar17;
    if (fVar38 <= fVar17) {
      fVar29 = fVar38;
    }
    *(float *)(lVar23 + 0x9c) = fVar29;
    *(float *)(lVar23 + 0xa0) = fVar36;
    lVar23 = *(longlong *)(param_1 + 0xd8);
    if ((*(uint *)(lVar23 + 0x118) & 0x800) != 0) {
      *(float *)(lVar23 + 0x9c) = fVar17 - *(float *)(lVar23 + 0x9c);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  lVar23 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(lVar23 + 0x68) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(lVar23 + 0x70) = uVar2;
  puVar21 = (undefined8 *)
            func_0x00014019d9f0(auStack_f8,*(longlong *)(param_1 + 0xd8) + 0x68,param_1 + 0xfc,
                                param_1 + 0x108);
  uVar3 = puVar21[1];
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0xd8) + 0x38);
  uVar4 = puVar21[2];
  uVar15 = puVar21[3];
  uVar2 = *(undefined4 *)(puVar21 + 4);
  uVar5 = *(undefined4 *)((longlong)puVar21 + 0x24);
  uVar9 = *(undefined4 *)(puVar21 + 5);
  uVar10 = *(undefined4 *)((longlong)puVar21 + 0x2c);
  uVar11 = *(undefined4 *)(puVar21 + 6);
  uVar12 = *(undefined4 *)((longlong)puVar21 + 0x34);
  uVar13 = *(undefined4 *)(puVar21 + 7);
  uVar14 = *(undefined4 *)((longlong)puVar21 + 0x3c);
  *puVar7 = *puVar21;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar15;
  *(undefined4 *)(puVar7 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar5;
  *(undefined4 *)(puVar7 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar10;
  *(undefined4 *)(puVar7 + 6) = uVar11;
  *(undefined4 *)((longlong)puVar7 + 0x34) = uVar12;
  *(undefined4 *)(puVar7 + 7) = uVar13;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar14;
  if ((*(byte *)(param_1 + 0xe0) & 0x10) != 0) {
    func_0x00014018b390(param_1);
  }
  if ((*(byte *)(param_1 + 0xe0) & 8) != 0) {
    lVar23 = *(longlong *)(param_1 + 0xd8);
    *(float *)(lVar23 + 0x68) = (float)*(int *)(lVar23 + 0x84) * fVar34 + *(float *)(lVar23 + 0x68);
    lVar23 = *(longlong *)(param_1 + 0xd8);
    *(float *)(lVar23 + 0x6c) = (float)*(int *)(lVar23 + 0x88) * fVar34 + *(float *)(lVar23 + 0x6c);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x70) = 0x44fa0000;
  }
  return;
}

