// Function: FUN_1403b2370
// Addr: 1403b2370
// Size: 4 bytes


double FUN_1403b2370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  dVar8 = 0.0;
  if (*(char *)(param_1 + 0x1200) == '\0') {
    return 0.0;
  }
  lVar6 = *(longlong *)(param_1 + 0x11f0);
  if ((lVar6 == 0) || (uVar3 = *(uint *)(lVar6 + 4), uVar3 != *(uint *)(param_2 + 0x10))) {
    return 0.0;
  }
  uVar7 = 0;
  if (3 < uVar3) {
    lVar5 = *(longlong *)(param_2 + 8);
    lVar6 = *(longlong *)(lVar6 + 8);
    do {
      lVar1 = uVar7 * 4;
      iVar4 = (int)uVar7;
      lVar2 = uVar7 * 8;
      uVar7 = (ulonglong)(iVar4 + 4U);
      dVar8 = dVar8 + (double)*(float *)(lVar6 + lVar1) * *(double *)(lVar5 + lVar2) +
              (double)*(float *)(lVar6 + (ulonglong)(iVar4 + 1) * 4) *
              *(double *)(lVar5 + (ulonglong)(iVar4 + 1) * 8) +
              (double)*(float *)(lVar6 + (ulonglong)(iVar4 + 2) * 4) *
              *(double *)(lVar5 + (ulonglong)(iVar4 + 2) * 8) +
              (double)*(float *)(lVar6 + (ulonglong)(iVar4 + 3) * 4) *
              *(double *)(lVar5 + (ulonglong)(iVar4 + 3) * 8);
      if (uVar3 - 3 <= iVar4 + 4U) goto code_r0x0001403b2432;
    } while( true );
  }
  if (uVar3 == 0) {
    return 0.0;
  }
  lVar5 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(lVar6 + 8);
  do {
    lVar1 = uVar7 * 4;
    lVar2 = uVar7 * 8;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    dVar8 = dVar8 + (double)*(float *)(lVar6 + lVar1) * *(double *)(lVar5 + lVar2);
code_r0x0001403b2432:
  } while ((uint)uVar7 < uVar3);
  return dVar8;
}

