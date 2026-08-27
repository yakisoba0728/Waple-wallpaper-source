// Function: FUN_140310830
// Addr: 140310830
// Size: 722 bytes


void FUN_140310830(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ushort *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  undefined8 uVar13;
  undefined4 uVar14;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar10 = *(longlong *)(param_1 + 0x408);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined1 *)(lVar10 + 0x30) = 1;
  local_res10[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x61766172,lVar1,local_res18);
  if (local_res10[0] != 0) {
    return;
  }
  local_res20 = FUN_1402f54a0(lVar1);
  local_res10[0] = FUN_1402f4fe0(lVar1,local_res18[0]);
  if (local_res10[0] != 0) {
    return;
  }
  iVar5 = FUN_1402f5200(lVar1);
  iVar6 = FUN_1402f5200(lVar1);
  if (((iVar5 - 0x10000U & 0xfffeffff) == 0) && (iVar6 == **(int **)(lVar10 + 0x18))) {
    plVar7 = (longlong *)FUN_1402f7e90(uVar2,0x40,local_res10);
    *(longlong **)(lVar10 + 0x38) = plVar7;
    if (local_res10[0] == 0) {
      uVar14 = 0;
      puVar8 = (ushort *)FUN_1402f7ff0(uVar2,0x10,0,iVar6,0,local_res10);
      *plVar7 = (longlong)puVar8;
      if (local_res10[0] == 0) {
        uVar12 = 0;
        if (0 < iVar6) {
          do {
            uVar3 = FUN_1402f52a0(lVar1);
            iVar11 = 0;
            *puVar8 = uVar3;
            if (local_res18[0] < (uint)uVar3 * 4) goto joined_r0x000140310abf;
            uVar13 = 0;
            uVar9 = FUN_1402f7ff0(uVar2,8,0,uVar3,0,local_res10);
            uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
            *(undefined8 *)(puVar8 + 4) = uVar9;
            if (local_res10[0] != 0) goto joined_r0x000140310abf;
            if (*puVar8 != 0) {
              do {
                sVar4 = FUN_1402f52a0(lVar1);
                lVar10 = (longlong)iVar11;
                *(int *)(lVar10 * 8 + *(longlong *)(puVar8 + 4)) = sVar4 * 4;
                sVar4 = FUN_1402f52a0(lVar1);
                uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
                iVar11 = iVar11 + 1;
                *(int *)(lVar10 * 8 + 4 + *(longlong *)(puVar8 + 4)) = sVar4 * 4;
              } while (iVar11 < (int)(uint)*puVar8);
            }
            uVar12 = uVar12 + 1;
            puVar8 = puVar8 + 8;
          } while ((int)uVar12 < iVar6);
        }
        if (0x1ffff < iVar5) {
          iVar6 = FUN_1402f5200(lVar1);
          iVar11 = FUN_1402f5200(lVar1);
          iVar5 = local_res20;
          if (((iVar11 == 0) ||
              (local_res10[0] = FUN_140307e50(param_1,iVar11 + local_res20,plVar7 + 1),
              local_res10[0] == 0)) && (iVar6 != 0)) {
            local_res10[0] =
                 FUN_1403083e0(param_1,iVar6 + iVar5,plVar7 + 5,plVar7 + 1,
                               CONCAT44(uVar14,local_res18[0]));
          }
        }
      }
    }
  }
LAB_140310a9d:
  FUN_1402f5100(lVar1);
  return;
joined_r0x000140310abf:
  while (uVar12 = uVar12 - 1, -1 < (int)uVar12) {
    FUN_1402f7f90(uVar2,*(undefined8 *)(*plVar7 + 8 + (ulonglong)uVar12 * 0x10));
    *(undefined8 *)(*plVar7 + 8 + (ulonglong)uVar12 * 0x10) = 0;
  }
  FUN_1402f7f90(uVar2,*plVar7);
  *plVar7 = 0;
  goto LAB_140310a9d;
}

