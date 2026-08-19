// Function: FUN_14027b830
// Addr: 14027b830
// Size: 260 bytes


void FUN_14027b830(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  double dVar13;
  undefined1 local_38 [32];
  
  uVar8 = (uint)((char)param_2[3] != '\0');
  if (*(uint *)((longlong)param_1 + 0x14) != uVar8) {
    *(uint *)((longlong)param_1 + 0x14) = uVar8;
    *param_1 = *param_1 + (longlong)((*(int *)((longlong)param_1 + 0xc) + -1) * (int)param_1[2]);
    *(int *)(param_1 + 2) = -(int)param_1[2];
  }
  dVar5 = DAT_140492828;
  plVar12 = (longlong *)*param_2;
  if (plVar12 != (longlong *)param_2[1]) {
    do {
      plVar10 = (longlong *)*plVar12;
      if (plVar10 != (longlong *)plVar12[1]) {
        lVar6 = ((longlong *)plVar12[1])[-1];
        do {
          plVar4 = (longlong *)*plVar10;
          uVar8 = *(uint *)(plVar4 + 1) & *(uint *)(lVar6 + 8);
          if ((uVar8 & uVar8 - 1) == 0) {
            pdVar7 = (double *)(**(code **)(*plVar4 + 0x20))(plVar4,local_38,0);
            dVar13 = (double)FUN_14041a5d0((*pdVar7 + (double)param_1[5]) * (double)param_1[3] -
                                           dVar5);
            iVar11 = (int)dVar13;
            dVar13 = (double)FUN_14041a5d0(((double)param_1[6] + pdVar7[1]) * (double)param_1[4] -
                                           dVar5);
            if ((((iVar11 < (int)param_1[1]) &&
                 (iVar9 = (int)dVar13, iVar9 < *(int *)((longlong)param_1 + 0xc))) &&
                (iVar1 = iVar11 + 1, -1 < iVar1)) && (iVar2 = iVar9 + 1, -1 < iVar2)) {
              if ((-1 < iVar11) && (-1 < iVar9)) {
                pbVar3 = (byte *)(*param_1 + (longlong)(iVar9 * (int)param_1[2]) + (longlong)iVar11)
                ;
                *pbVar3 = *pbVar3 | 2;
              }
              if ((iVar1 < (int)param_1[1]) && (-1 < iVar9)) {
                pbVar3 = (byte *)(*param_1 + 1 +
                                 (longlong)(iVar9 * (int)param_1[2]) + (longlong)iVar11);
                *pbVar3 = *pbVar3 | 2;
              }
              if ((-1 < iVar11) && (iVar2 < *(int *)((longlong)param_1 + 0xc))) {
                pbVar3 = (byte *)(*param_1 + (longlong)(iVar2 * (int)param_1[2]) + (longlong)iVar11)
                ;
                *pbVar3 = *pbVar3 | 2;
              }
              if ((iVar1 < (int)param_1[1]) && (iVar2 < *(int *)((longlong)param_1 + 0xc))) {
                pbVar3 = (byte *)(*param_1 + 1 +
                                 (longlong)(iVar2 * (int)param_1[2]) + (longlong)iVar11);
                *pbVar3 = *pbVar3 | 2;
              }
            }
          }
          lVar6 = *plVar10;
          plVar10 = plVar10 + 1;
        } while (plVar10 != (longlong *)plVar12[1]);
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != (longlong *)param_2[1]);
  }
  return;
}

