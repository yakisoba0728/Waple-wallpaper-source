// Function: FUN_1402febf0
// Addr: 1402febf0
// Size: 956 bytes


undefined8 FUN_1402febf0(longlong *param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  int *piVar14;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined *local_res20;
  
  lVar4 = *param_1;
  uVar11 = 0;
  lVar5 = param_1[2];
  uVar6 = *(undefined8 *)(lVar4 + 0x88);
  if ((int)param_1[1] != 0) {
    do {
      *(undefined2 *)(lVar5 + uVar11 * 2) = 0x1fff;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  iVar8 = FUN_1402f4b80(lVar4);
  if (iVar8 == 0) {
    uVar12 = 0;
    uVar13 = 0xffff;
    puVar7 = PTR_DAT_140439e60;
    while (puVar7 != (undefined *)0x0) {
      puVar7 = (&PTR_DAT_140439e60)[uVar12];
      local_res20 = (&PTR_DAT_140439450)[*(int *)(puVar7 + 8)];
      piVar14 = *(int **)(local_res20 + 8);
      if (piVar14 != (int *)0x0) {
        if (*(int *)(puVar7 + 0x10) == 10) {
          iVar8 = *piVar14;
          uVar3 = uVar12;
          if (*(int *)(puVar7 + 8) != *(int *)(param_1[99] + 0x1c)) {
            uVar3 = uVar13;
          }
          while (uVar13 = uVar3, iVar8 != 0) {
            local_res10[0] = FUN_1402f0060(lVar4,iVar8);
            if (((local_res10[0] != 0) && (local_res10[0] < *(uint *)(param_1 + 1))) &&
               ((*(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) & 0x1fff) == 0x1fff)) {
              *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) = uVar12 | 0x2000;
            }
            for (uVar10 = FUN_1402f0610(lVar4,iVar8,local_res10);
                (local_res10[0] != 0 && (uVar10 <= (uint)piVar14[1]));
                uVar10 = FUN_1402f0610(lVar4,uVar10,local_res10)) {
              if ((local_res10[0] < *(uint *)(param_1 + 1)) &&
                 ((*(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) & 0x1fff) == 0x1fff)) {
                *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) = uVar12 | 0x2000;
              }
            }
            piVar1 = piVar14 + 2;
            piVar14 = piVar14 + 2;
            uVar3 = uVar13;
            iVar8 = *piVar1;
          }
          piVar14 = *(int **)(local_res20 + 0x10);
          iVar8 = *piVar14;
          while (iVar8 != 0) {
            local_res18[0] = FUN_1402f0060(lVar4,iVar8);
            if (((local_res18[0] != 0) && (local_res18[0] < *(uint *)(param_1 + 1))) &&
               (uVar3 = *(ushort *)(lVar5 + (ulonglong)local_res18[0] * 2),
               (uVar3 & 0x1fff) == uVar12)) {
              *(ushort *)(lVar5 + (ulonglong)local_res18[0] * 2) = uVar3 | 0x4000;
            }
            for (uVar10 = FUN_1402f0610(lVar4,iVar8,local_res18);
                (local_res18[0] != 0 && (uVar10 <= (uint)piVar14[1]));
                uVar10 = FUN_1402f0610(lVar4,uVar10,local_res18)) {
              if (local_res18[0] < *(uint *)(param_1 + 1)) {
                uVar3 = *(ushort *)(lVar5 + (ulonglong)local_res18[0] * 2);
                if ((uVar3 & 0x1fff) == uVar12) {
                  *(ushort *)(lVar5 + (ulonglong)local_res18[0] * 2) = uVar3 | 0x4000;
                }
              }
            }
            piVar1 = piVar14 + 2;
            piVar14 = piVar14 + 2;
            iVar8 = *piVar1;
          }
        }
        else {
          FUN_140305b10(param_1,puVar7,lVar5,0);
        }
      }
      uVar12 = uVar12 + 1;
      puVar7 = (&PTR_DAT_140439e60)[uVar12];
    }
    uVar12 = 0;
    puVar7 = PTR_DAT_140439e60;
    while (puVar7 != (undefined *)0x0) {
      if (*(int *)((&PTR_DAT_140439e60)[uVar12] + 0x10) == 10) {
        FUN_140305b10(param_1,(&PTR_DAT_140439e60)[uVar12],lVar5,0);
      }
      uVar12 = uVar12 + 1;
      puVar7 = (&PTR_DAT_140439e60)[uVar12];
    }
    FUN_140305b10(param_1,(&PTR_DAT_140439e60)[uVar13],lVar5,1);
    uVar10 = 0x30;
    do {
      uVar9 = FUN_1402f0060(lVar4);
      if ((uVar9 != 0) && (uVar9 < *(uint *)(param_1 + 1))) {
        puVar2 = (ushort *)(lVar5 + (ulonglong)uVar9 * 2);
        *puVar2 = *puVar2 | 0x8000;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x3a);
  }
  if ((*(int *)(param_1[99] + 0x18) != 0x1fff) && (uVar11 = 0, (int)param_1[1] != 0)) {
    do {
      uVar12 = *(ushort *)(lVar5 + uVar11 * 2);
      puVar2 = (ushort *)(lVar5 + uVar11 * 2);
      if ((uVar12 & 0x1fff) == 0x1fff) {
        uVar12 = uVar12 & 0xe000;
        *puVar2 = uVar12;
        *puVar2 = uVar12 | *(ushort *)(param_1[99] + 0x18);
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  *(undefined8 *)(lVar4 + 0x88) = uVar6;
  return 0;
}

