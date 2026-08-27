// Function: FUN_140325860
// Addr: 140325860
// Size: 542 bytes


ulonglong FUN_140325860(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  ushort uVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  
  uVar7 = FUN_1402f5c50(param_2,param_3 + param_4);
  if ((int)uVar7 == 0) {
    uVar7 = FUN_1402f4fe0(param_2,(ulonglong)param_5);
    if ((int)uVar7 == 0) {
      pcVar3 = *(char **)(param_2 + 0x38);
      if ((param_5 == 0) || ((char)uVar7 <= *pcVar3)) {
        uVar6 = FUN_140325a80(param_1,pcVar3,pcVar3 + param_5);
        FUN_1402f5100(param_2);
        return (ulonglong)uVar6;
      }
      uVar6 = *(uint *)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x28);
      uVar5 = FUN_1403255b0(param_1);
      FUN_1402f5100(param_2);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(param_1 + 0x18);
        if (uVar5 == uVar6) {
          uVar7 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar2 = *(ushort *)(lVar4 + 0x1a);
            lVar1 = ((ulonglong)uVar11 + (ulonglong)uVar6) * 0x18;
            uVar8 = FUN_140325860(param_1,param_2,param_3,
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar1),
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x20) + 0x14 +
                                   ((ulonglong)uVar11 + (ulonglong)uVar6) * 0x18));
            uVar7 = uVar8 & 0xffffffff;
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            piVar12 = (int *)(*(longlong *)(param_1 + 0x20) + lVar1);
            iVar13 = (uint)*(ushort *)(lVar4 + 0x1a) - (uint)uVar2;
            if ((*piVar12 == 0x10000) && (piVar12[1] == 0x10000)) {
              iVar10 = 0;
              piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)uVar2 * 8);
              if (0 < iVar13) {
                do {
                  iVar10 = iVar10 + 1;
                  *piVar9 = *piVar9 + piVar12[2];
                  piVar9[1] = piVar9[1] + piVar12[3];
                  piVar9 = piVar9 + 2;
                } while (iVar10 < iVar13);
              }
            }
            else {
              iVar10 = 0;
              piVar9 = (int *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)uVar2 * 8);
              if (0 < iVar13) {
                do {
                  iVar10 = iVar10 + 1;
                  *piVar9 = (int)((ulonglong)
                                  ((longlong)*piVar12 * (longlong)*piVar9 +
                                  ((longlong)*piVar12 * (longlong)*piVar9 >> 0x3f) + 0x8000) >> 0x10
                                 ) + piVar12[2];
                  piVar9[1] = (int)((ulonglong)
                                    ((longlong)piVar9[1] * (longlong)piVar12[1] + 0x8000 +
                                    ((longlong)piVar9[1] * (longlong)piVar12[1] >> 0x3f)) >> 0x10) +
                              piVar12[3];
                  piVar9 = piVar9 + 2;
                } while (iVar10 < iVar13);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar5 - uVar6);
        }
      }
      else {
        uVar7 = (ulonglong)uVar5;
      }
    }
  }
  return uVar7;
}

