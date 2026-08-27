// Function: FUN_1402585c0
// Addr: 1402585c0
// Size: 787 bytes


ulonglong FUN_1402585c0(longlong param_1,float *param_2)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
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
  
  pcVar1 = (char *)(ulonglong)*(byte *)(param_1 + 0x550);
  pcVar3 = pcVar1;
  if (9 < *(byte *)(param_1 + 0x550)) {
switchD_1402585e5_caseD_0:
    return (ulonglong)pcVar3 & 0xffffffffffffff00;
  }
  pcVar3 = IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_1402585e5::switchdataD_1402588d4)[(longlong)pcVar1];
  switch(pcVar1) {
  case (char *)0x0:
    goto switchD_1402585e5_caseD_0;
  case (char *)0x1:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = param_2[8];
    fVar19 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    fVar18 = (*(float *)(lVar2 + 0x10c) - *(float *)(lVar2 + 0x104)) * DAT_1404926c0;
    fVar17 = (*(float *)(lVar2 + 0x100) - *(float *)(lVar2 + 0x108)) * DAT_1404926c0;
    goto LAB_1402586a5;
  case (char *)0x2:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = (float)(*(uint *)(lVar2 + 0x104) ^ DAT_140492ff0);
    fVar15 = param_2[8] * 0.0;
    fVar16 = param_2[9] * 0.0;
    fVar17 = param_2[10] * 0.0;
    fVar18 = param_2[0xb] * 0.0;
    fVar19 = (*(float *)(lVar2 + 0x100) - *(float *)(lVar2 + 0x108)) * DAT_1404926c0;
    goto LAB_14025860f;
  case (char *)0x3:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = param_2[8];
    fVar19 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    fVar18 = (float)(*(uint *)(lVar2 + 0x104) ^ DAT_140492ff0);
    fVar17 = (float)(*(uint *)(lVar2 + 0x108) ^ DAT_140492ff0);
LAB_1402586a5:
    param_2[0xc] = *param_2 * fVar17 + param_2[4] * fVar18 + fVar7 * 0.0 + param_2[0xc];
    param_2[0xd] = param_2[1] * fVar17 + param_2[5] * fVar18 + fVar19 * 0.0 + param_2[0xd];
    param_2[0xe] = param_2[2] * fVar17 + param_2[6] * fVar18 + fVar15 * 0.0 + param_2[0xe];
    param_2[0xf] = param_2[3] * fVar17 + param_2[7] * fVar18 + fVar16 * 0.0 + param_2[0xf];
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  case (char *)0x4:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar15 = param_2[8] * 0.0;
    fVar16 = param_2[9] * 0.0;
    fVar17 = param_2[10] * 0.0;
    fVar18 = param_2[0xb] * 0.0;
    fVar19 = (float)(*(uint *)(lVar2 + 0x108) ^ DAT_140492ff0);
    fVar7 = (*(float *)(lVar2 + 0x10c) - *(float *)(lVar2 + 0x104)) * DAT_1404926c0;
    goto LAB_14025860f;
  case (char *)0x5:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar2 + 0x10c);
    fVar12 = fVar7 * param_2[4];
    fVar13 = fVar7 * param_2[5];
    fVar14 = fVar7 * param_2[6];
    fVar7 = fVar7 * param_2[7];
    fVar8 = (float)(*(uint *)(lVar2 + 0x108) ^ DAT_140492ff0);
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
    goto LAB_140258621;
  case (char *)0x6:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar2 + 0x10c);
    fVar19 = (*(float *)(lVar2 + 0x100) - *(float *)(lVar2 + 0x108)) * DAT_1404926c0;
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
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  case (char *)0x7:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = *(float *)(lVar2 + 0x10c);
    break;
  case (char *)0x8:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = (*(float *)(lVar2 + 0x10c) - *(float *)(lVar2 + 0x104)) * DAT_1404926c0;
    break;
  case (char *)0x9:
    lVar2 = *(longlong *)(param_1 + 200);
    fVar7 = (float)(*(uint *)(lVar2 + 0x104) ^ DAT_140492ff0);
  }
  fVar15 = param_2[8] * 0.0;
  fVar16 = param_2[9] * 0.0;
  fVar17 = param_2[10] * 0.0;
  fVar18 = param_2[0xb] * 0.0;
  fVar19 = *(float *)(lVar2 + 0x100);
LAB_14025860f:
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
LAB_140258621:
  param_2[0xc] = fVar8 * fVar19 + fVar12 + fVar15 + param_2[0xc];
  param_2[0xd] = fVar9 * fVar4 + fVar13 + fVar16 + param_2[0xd];
  param_2[0xe] = fVar10 * fVar5 + fVar14 + fVar17 + param_2[0xe];
  param_2[0xf] = fVar11 * fVar6 + fVar7 + fVar18 + param_2[0xf];
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}

