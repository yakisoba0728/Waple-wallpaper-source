// Function: FUN_14040d570
// Addr: 14040d570
// Size: 36 bytes


void FUN_14040d570(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  
  bVar10 = *(byte *)(param_4 + 2);
  if ((bVar10 >> 5 & 1) != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if ((char)bVar10 < '\0') {
    if (*(uint *)(param_1 + 7) < 8) {
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 7) * 4 + 0x18) =
           *(undefined4 *)(param_2 + 0x5c);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  if (((uint)*(byte *)(param_4 + 4) * 0x100 + (uint)*(byte *)(param_4 + 5) != 0xffff) &&
     (uVar2 = *(uint *)(param_1 + 7), uVar2 != 0)) {
    lVar3 = param_1[1];
    uVar9 = (uint)*(byte *)(lVar3 + 9) * 0x10000 + (uint)*(byte *)(lVar3 + 10) * 0x100 +
            (uint)*(byte *)(lVar3 + 8) * 0x1000000 + (uint)*(byte *)(lVar3 + 0xb);
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    if (2 < (uint)(0xffffffff / (ulonglong)uVar2)) {
      pbVar11 = (byte *)(param_1[2] +
                        ((ulonglong)CONCAT11(*(byte *)(param_4 + 4),*(byte *)(param_4 + 5)) &
                        0xfffffffffffffffe));
      cVar5 = FUN_14036f190(*param_1 + 0x28,pbVar11,uVar2 * 2,uVar9);
      if (cVar5 != '\0') {
        bVar10 = 0;
        uVar2 = *(uint *)(*(longlong *)(*param_1 + 8) + 0xb0);
        do {
          if ((int)param_1[7] == 0) {
            return;
          }
          uVar6 = (int)param_1[7] - 1;
          *(uint *)(param_1 + 7) = uVar6;
          uVar6 = *(uint *)((longlong)param_1 + (ulonglong)uVar6 * 4 + 0x18);
          if (uVar6 < *(uint *)(param_2 + 0x60)) {
            lVar3 = (ulonglong)uVar6 * 0x14;
            uVar8 = (ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1];
            lVar4 = *(longlong *)(param_2 + 0x80);
            bVar10 = (byte)uVar8 & 1;
            uVar8 = uVar8 & 0xfffe;
            if ((*(uint *)(param_2 + 0x38) & 0xfffffffe) == 4) {
              if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
                if ((*(uint *)(*(longlong *)(param_2 + 0x70) + 4 + lVar3) & uVar2) != 0) {
                  iVar7 = (int)((ulonglong)
                                ((longlong)(short)uVar8 *
                                 *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x58) + 0x8000) >>
                               0x10);
                  *(int *)(lVar4 + lVar3) = *(int *)(lVar4 + lVar3) + iVar7;
                  piVar1 = (int *)(lVar4 + 8 + lVar3);
                  *piVar1 = *piVar1 + iVar7;
                }
              }
              else if (uVar8 == 0x8000) {
                *(undefined1 *)(lVar4 + 0x12 + lVar3) = 0;
                *(undefined2 *)(lVar4 + 0x10 + lVar3) = 0;
                *(undefined4 *)(lVar4 + 0xc + lVar3) = 0;
              }
              else if (*(char *)(lVar4 + 0x12 + lVar3) != '\0') {
                piVar1 = (int *)(lVar4 + 0xc + lVar3);
                *piVar1 = *piVar1 + (int)((ulonglong)
                                          ((longlong)(short)uVar8 *
                                           *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x60) +
                                          0x8000) >> 0x10);
                *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 8;
              }
            }
            else if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
              if ((*(uint *)(*(longlong *)(param_2 + 0x70) + 4 + lVar3) & uVar2) != 0) {
                piVar1 = (int *)(lVar4 + 4 + lVar3);
                *piVar1 = *piVar1 + (int)((ulonglong)
                                          ((longlong)(short)uVar8 *
                                           *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x60) +
                                          0x8000) >> 0x10);
                piVar1 = (int *)(lVar4 + 0xc + lVar3);
                *piVar1 = *piVar1 + (int)((ulonglong)
                                          ((longlong)(short)uVar8 *
                                           *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x60) +
                                          0x8000) >> 0x10);
              }
            }
            else if (uVar8 == 0x8000) {
              *(undefined1 *)(lVar4 + 0x12 + lVar3) = 0;
              *(undefined2 *)(lVar4 + 0x10 + lVar3) = 0;
              *(undefined4 *)(lVar4 + 8 + lVar3) = 0;
            }
            else if (*(char *)(lVar4 + 0x12 + lVar3) != '\0') {
              piVar1 = (int *)(lVar4 + 8 + lVar3);
              *piVar1 = *piVar1 + (int)((ulonglong)
                                        ((longlong)(short)uVar8 *
                                         *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x58) +
                                        0x8000) >> 0x10);
              *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 8;
            }
          }
          pbVar11 = pbVar11 + (ulonglong)uVar9 * 2;
        } while (bVar10 == 0);
        return;
      }
    }
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}

