// Function: FUN_140258050
// Addr: 140258050
// Size: 1322 bytes


void FUN_140258050(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res18;
  float fStackX_1c;
  undefined8 local_c8;
  float local_c0;
  
  fVar19 = DAT_140492704;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    return;
  }
  lVar13 = *(longlong *)(param_1 + 200);
  puVar10 = *(undefined8 **)(lVar13 + 0x30);
  *(undefined1 *)(lVar13 + 0x1ca) = 1;
  *(undefined8 **)(lVar13 + 0x30) = puVar10 + 8;
  puVar10[8] = *puVar10;
  puVar10[9] = puVar10[1];
  puVar10[10] = puVar10[2];
  puVar10[0xb] = puVar10[3];
  puVar10[0xc] = puVar10[4];
  puVar10[0xd] = puVar10[5];
  puVar10[0xe] = puVar10[6];
  puVar10[0xf] = puVar10[7];
  lVar13 = *(longlong *)(param_1 + 0x5a8);
  lVar11 = *(longlong *)(param_1 + 200);
  fVar17 = *(float *)(lVar13 + 0x9c);
  fVar2 = *(float *)(lVar13 + 0x90);
  fVar16 = fVar17 - *(float *)(lVar13 + 0x94);
  fVar18 = *(float *)(lVar13 + 0x98) - fVar2;
  if ((*(byte *)(param_1 + 0x594) & 2) == 0) goto LAB_1402583a8;
  puVar10 = *(undefined8 **)(lVar11 + 0x30);
  *(undefined1 *)(lVar11 + 0x1ca) = 1;
  *(undefined8 **)(lVar11 + 0x30) = puVar10 + 8;
  puVar10[8] = *puVar10;
  puVar10[9] = puVar10[1];
  puVar10[10] = puVar10[2];
  puVar10[0xb] = puVar10[3];
  puVar10[0xc] = puVar10[4];
  puVar10[0xd] = puVar10[5];
  puVar10[0xe] = puVar10[6];
  puVar10[0xf] = puVar10[7];
  if (((*(int *)(param_1 + 800) < 1) && ((*(byte *)(param_1 + 0x304) & 0x10) == 0)) &&
     ((*(byte *)(param_1 + 0x594) & 2) == 0)) {
    fStackX_1c = 0.0;
    local_res18 = 0.0;
  }
  else {
    local_res18 = *(float *)(param_1 + 0x4e8);
    fStackX_1c = *(float *)(param_1 + 0x4ec);
    if (DAT_140492934 <= local_res18) {
      local_res18 = DAT_140492934;
    }
    if (DAT_140492934 <= fStackX_1c) {
      fStackX_1c = DAT_140492934;
    }
  }
  puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x30);
  uVar4 = puVar10[4];
  uVar5 = puVar10[5];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  uVar8 = *puVar10;
  uVar9 = puVar10[1];
  *puVar10 = *puVar10;
  puVar10[1] = puVar10[1];
  puVar10[2] = puVar10[2];
  puVar10[3] = puVar10[3];
  puVar10[4] = puVar10[4];
  puVar10[5] = puVar10[5];
  local_res18 = fVar18 * DAT_1404929ac - local_res18;
  fStackX_1c = fVar16 * DAT_1404929ac - fStackX_1c;
  puVar10[6] = CONCAT44((float)((ulonglong)uVar8 >> 0x20) * local_res18 +
                        (float)((ulonglong)uVar6 >> 0x20) * fStackX_1c +
                        (float)((ulonglong)uVar4 >> 0x20) * 0.0 +
                        (float)((ulonglong)puVar10[6] >> 0x20),
                        (float)uVar8 * local_res18 + (float)uVar6 * fStackX_1c + (float)uVar4 * 0.0
                        + (float)puVar10[6]);
  puVar10[7] = CONCAT44((float)((ulonglong)uVar9 >> 0x20) * local_res18 +
                        (float)((ulonglong)uVar7 >> 0x20) * fStackX_1c +
                        (float)((ulonglong)uVar5 >> 0x20) * 0.0 +
                        (float)((ulonglong)puVar10[7] >> 0x20),
                        (float)uVar9 * local_res18 + (float)uVar7 * fStackX_1c + (float)uVar5 * 0.0
                        + (float)puVar10[7]);
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120) = *(undefined4 *)(param_1 + 0x33c);
  lVar13 = *(longlong *)(param_1 + 200);
  fVar15 = fVar19;
  if ((*(uint *)(lVar13 + 0x118) & 0x2000) != 0) {
    fVar15 = *(float *)(param_1 + 0x4dc);
  }
  fVar3 = *(float *)(param_1 + 0x4d8);
  *(ulonglong *)(lVar13 + 0x124) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x4d0) >> 0x20) * fVar15,
                (float)*(undefined8 *)(param_1 + 0x4d0) * fVar15);
  *(float *)(lVar13 + 300) = fVar15 * fVar3;
  lVar13 = *(longlong *)(param_1 + 0x5c0);
  if (lVar13 == 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 0x400) == 0) &&
       (*(char *)(param_1 + 0x5a0) == '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    pcVar14 = "materials/fonts/fontbackground.json";
    if (bVar12) {
      pcVar14 = "materials/fonts/fontbackground_depth.json";
    }
    lVar13 = FUN_14014ff70(*(longlong *)(param_1 + 200) + 0x1630,pcVar14);
    *(longlong *)(param_1 + 0x5c0) = lVar13;
    if (lVar13 != 0) goto LAB_14025834c;
  }
  else {
LAB_14025834c:
    *(char *)(lVar13 + 0x1f0) = (*(int *)(param_1 + 0x32c) == 0x1f) + '\x01';
    FUN_140155fc0(*(undefined8 *)(param_1 + 0x5c0));
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 8))();
    FUN_140157430(*(undefined8 *)(param_1 + 0x5c0));
  }
  lVar13 = *(longlong *)(param_1 + 200);
  plVar1 = (longlong *)(lVar13 + 0x30);
  *plVar1 = *plVar1 + -0x40;
  *(undefined1 *)(lVar13 + 0x1ca) = 1;
LAB_1402583a8:
  fVar18 = fVar18 * DAT_1404929ac;
  fVar17 = fVar16 * DAT_1404926c0 - fVar17;
  if (fVar2 < 0.0) {
    fVar18 = fVar18 - fVar2;
  }
  puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x30);
  uVar4 = puVar10[4];
  uVar5 = puVar10[5];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  uVar8 = *puVar10;
  uVar9 = puVar10[1];
  *puVar10 = *puVar10;
  puVar10[1] = puVar10[1];
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar10 + 2);
  *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)((longlong)puVar10 + 0x14);
  *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar10 + 3);
  *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)puVar10 + 0x1c);
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar10 + 4);
  *(undefined4 *)((longlong)puVar10 + 0x24) = *(undefined4 *)((longlong)puVar10 + 0x24);
  *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar10 + 5);
  *(undefined4 *)((longlong)puVar10 + 0x2c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
  puVar10[6] = CONCAT44((float)((ulonglong)uVar8 >> 0x20) * fVar18 +
                        (float)((ulonglong)uVar6 >> 0x20) * fVar17 +
                        (float)((ulonglong)uVar4 >> 0x20) * 0.0 +
                        (float)((ulonglong)puVar10[6] >> 0x20),
                        (float)uVar8 * fVar18 + (float)uVar6 * fVar17 + (float)uVar4 * 0.0 +
                        (float)puVar10[6]);
  puVar10[7] = CONCAT44((float)((ulonglong)uVar9 >> 0x20) * fVar18 +
                        (float)((ulonglong)uVar7 >> 0x20) * fVar17 +
                        (float)((ulonglong)uVar5 >> 0x20) * 0.0 +
                        (float)((ulonglong)puVar10[7] >> 0x20),
                        (float)uVar9 * fVar18 + (float)uVar7 * fVar17 + (float)uVar5 * 0.0 +
                        (float)puVar10[7]);
  *(char *)(lVar11 + 0x19d8) = (*(int *)(param_1 + 0x32c) == 0x1f) + '\x01';
  if (*(int *)(param_1 + 0x518) != 0) {
    FUN_140258c40(param_1);
  }
  if ((*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 0x2000) != 0) {
    fVar19 = *(float *)(param_1 + 0x340);
  }
  local_c0 = fVar19 * *(float *)(param_1 + 0x338);
  local_c8 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * fVar19,
                      (float)*(undefined8 *)(param_1 + 0x330) * fVar19);
  FUN_1401b3430(lVar11 + 0x18a0,*(undefined8 *)(param_1 + 0x5a8),0,0,&local_c8,
                *(undefined4 *)(param_1 + 0x33c));
  *(undefined1 *)(lVar11 + 0x19d8) = 1;
  lVar13 = *(longlong *)(param_1 + 200);
  plVar1 = (longlong *)(lVar13 + 0x30);
  *plVar1 = *plVar1 + -0x40;
  *(undefined1 *)(lVar13 + 0x1ca) = 1;
  return;
}

