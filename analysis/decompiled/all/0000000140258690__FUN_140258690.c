// Function: FUN_140258690
// Addr: 140258690
// Size: 543 bytes


ulonglong FUN_140258690(longlong param_1,float *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x550);
  uVar2 = uVar1;
  if (9 < *(byte *)(param_1 + 0x550)) {
switchD_1402586b5_caseD_0:
    return uVar2 & 0xffffffffffffff00;
  }
  uVar2 = (ulonglong)(&switchD_1402586b5::switchdataD_1402589a4)[uVar1] + 0x1400000d0;
  switch(uVar1) {
  case 0:
    goto switchD_1402586b5_caseD_0;
  case 1:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = param_2[8];
    fVar19 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    fVar18 = (*(float *)(lVar3 + 0x10c) - *(float *)(lVar3 + 0x104)) * DAT_140492790;
    fVar17 = (*(float *)(lVar3 + 0x100) - *(float *)(lVar3 + 0x108)) * DAT_140492790;
    goto LAB_140258775;
  case 2:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = (float)(*(uint *)(lVar3 + 0x104) ^ DAT_1404930c0);
    fVar15 = param_2[8] * 0.0;
    fVar16 = param_2[9] * 0.0;
    fVar17 = param_2[10] * 0.0;
    fVar18 = param_2[0xb] * 0.0;
    fVar19 = (*(float *)(lVar3 + 0x100) - *(float *)(lVar3 + 0x108)) * DAT_140492790;
    goto LAB_1402586df;
  case 3:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = param_2[8];
    fVar19 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    fVar18 = (float)(*(uint *)(lVar3 + 0x104) ^ DAT_1404930c0);
    fVar17 = (float)(*(uint *)(lVar3 + 0x108) ^ DAT_1404930c0);
LAB_140258775:
    param_2[0xc] = *param_2 * fVar17 + param_2[4] * fVar18 + fVar7 * 0.0 + param_2[0xc];
    param_2[0xd] = param_2[1] * fVar17 + param_2[5] * fVar18 + fVar19 * 0.0 + param_2[0xd];
    param_2[0xe] = param_2[2] * fVar17 + param_2[6] * fVar18 + fVar15 * 0.0 + param_2[0xe];
    param_2[0xf] = param_2[3] * fVar17 + param_2[7] * fVar18 + fVar16 * 0.0 + param_2[0xf];
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  case 4:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar15 = param_2[8] * 0.0;
    fVar16 = param_2[9] * 0.0;
    fVar17 = param_2[10] * 0.0;
    fVar18 = param_2[0xb] * 0.0;
    fVar19 = (float)(*(uint *)(lVar3 + 0x108) ^ DAT_1404930c0);
    fVar7 = (*(float *)(lVar3 + 0x10c) - *(float *)(lVar3 + 0x104)) * DAT_140492790;
    goto LAB_1402586df;
  case 5:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar3 + 0x10c);
    fVar12 = fVar7 * param_2[4];
    fVar13 = fVar7 * param_2[5];
    fVar14 = fVar7 * param_2[6];
    fVar7 = fVar7 * param_2[7];
    fVar8 = (float)(*(uint *)(lVar3 + 0x108) ^ DAT_1404930c0);
    fVar15 = param_2[8] * 0.0;
    fVar16 = param_2[9] * 0.0;
    fVar17 = param_2[10] * 0.0;
    fVar18 = param_2[0xb] * 0.0;
    fVar19 = *param_2;
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    fVar6 = param_2[3];
    fVar9 = fVar8;
    fVar10 = fVar8;
    fVar11 = fVar8;
    goto LAB_1402586f1;
  case 6:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar3 + 0x10c);
    fVar19 = (*(float *)(lVar3 + 0x100) - *(float *)(lVar3 + 0x108)) * DAT_140492790;
    param_2[0xd] = fVar19 * param_2[1] + fVar7 * param_2[5] + param_2[9] * 0.0 + param_2[0xd];
    param_2[0xc] = fVar19 * *param_2 + fVar7 * param_2[4] + param_2[8] * 0.0 + param_2[0xc];
    *(ulonglong *)(param_2 + 0xe) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar19 +
                  (float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar7 +
                  (float)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20) * 0.0 +
                  (float)((ulonglong)*(undefined8 *)(param_2 + 0xe) >> 0x20),
                  (float)*(undefined8 *)(param_2 + 2) * fVar19 +
                  (float)*(undefined8 *)(param_2 + 6) * fVar7 +
                  (float)*(undefined8 *)(param_2 + 10) * 0.0 + (float)*(undefined8 *)(param_2 + 0xe)
                 );
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  case 7:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar3 + 0x10c);
    break;
  case 8:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = (*(float *)(lVar3 + 0x10c) - *(float *)(lVar3 + 0x104)) * DAT_140492790;
    break;
  case 9:
    lVar3 = *(longlong *)(param_1 + 200);
    fVar7 = (float)(*(uint *)(lVar3 + 0x104) ^ DAT_1404930c0);
  }
  fVar15 = param_2[8] * 0.0;
  fVar16 = param_2[9] * 0.0;
  fVar17 = param_2[10] * 0.0;
  fVar18 = param_2[0xb] * 0.0;
  fVar19 = *(float *)(lVar3 + 0x100);
LAB_1402586df:
  fVar12 = param_2[4] * fVar7;
  fVar13 = param_2[5] * fVar7;
  fVar14 = param_2[6] * fVar7;
  fVar7 = param_2[7] * fVar7;
  fVar8 = *param_2;
  fVar4 = fVar19;
  fVar5 = fVar19;
  fVar6 = fVar19;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
LAB_1402586f1:
  param_2[0xc] = fVar8 * fVar19 + fVar12 + fVar15 + param_2[0xc];
  param_2[0xd] = fVar9 * fVar4 + fVar13 + fVar16 + param_2[0xd];
  param_2[0xe] = fVar10 * fVar5 + fVar14 + fVar17 + param_2[0xe];
  param_2[0xf] = fVar11 * fVar6 + fVar7 + fVar18 + param_2[0xf];
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}

