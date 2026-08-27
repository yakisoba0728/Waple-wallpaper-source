// Function: FUN_14030c9d0
// Addr: 14030c9d0
// Size: 1082 bytes


int FUN_14030c9d0(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  ushort uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  lVar6 = param_1[3];
  piVar4 = (int *)0x0;
  iVar12 = 0;
  iVar11 = 0;
  local_res8[0] = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x98);
  uVar3 = *(ushort *)(lVar6 + 0x62);
  uVar8 = (ulonglong)uVar3;
  local_res10 = uVar8 * 8 + 8;
  *(longlong *)(*(longlong *)(lVar6 + 0x68) + uVar8 * 8) = param_1[0xb];
  local_res20 = uVar8 * 8 + 0x18;
  uVar7 = uVar3 + 4;
  *(longlong *)(local_res10 + *(longlong *)(lVar6 + 0x68)) = param_1[0xc];
  local_res18 = uVar8 * 8 + 0x10;
  *(longlong *)(local_res18 + *(longlong *)(lVar6 + 0x68)) = param_1[0x1f];
  *(longlong *)(local_res20 + *(longlong *)(lVar6 + 0x68)) = param_1[0x20];
  if ((((*(uint *)(*param_1 + 4) & 0x7fff0000) == 0) && ((*(uint *)(*param_1 + 8) & 0x8000) == 0))
     || ((piVar4 = (int *)FUN_1402f7ff0(uVar2,8,0,uVar7,0,local_res8), local_res8[0] == 0 &&
         (local_res8[0] = FUN_14030f580(param_1,lVar6 + 0x60,piVar4), local_res8[0] == 0)))) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      uVar3 = *(short *)(lVar6 + 0x62) + 4;
      *(ushort *)(param_1 + 0x14) = uVar3;
      *(undefined2 *)((longlong)param_1 + 0xa2) = *(undefined2 *)(lVar6 + 0x60);
      param_1[0x15] = *(longlong *)(lVar6 + 0x88);
      param_1[0x16] = *(longlong *)(lVar6 + 0x68);
      param_1[0x17] = *(longlong *)(lVar6 + 0x90);
      param_1[0x18] = *(longlong *)(lVar6 + 0x70);
      param_1[0x19] = *(longlong *)(lVar6 + 0x78);
      *(undefined2 *)(param_1 + 0x1a) = 0;
      FUN_1404210f0(param_1[0x17],param_1[0x16],(ulonglong)uVar3 << 3);
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      piVar9 = *(int **)(lVar6 + 0x68);
      piVar1 = piVar9 + (ulonglong)uVar7 * 2;
      iVar11 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
      iVar12 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
      if (((*(uint *)(*param_1 + 4) & 0x7fff0000) == 0) && ((*(uint *)(*param_1 + 8) & 0x8000) == 0)
         ) {
        if (piVar9 < piVar1) {
          do {
            lVar5 = (longlong)*piVar9 * (longlong)iVar11;
            *piVar9 = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
            piVar9[1] = (int)((ulonglong)
                              ((longlong)piVar9[1] * (longlong)iVar12 + 0x8000 +
                              ((longlong)piVar9[1] * (longlong)iVar12 >> 0x3f)) >> 0x10);
            piVar9 = piVar9 + 2;
          } while (piVar9 < piVar1);
        }
      }
      else if (piVar9 < piVar1) {
        piVar10 = piVar4;
        do {
          lVar5 = (longlong)*piVar10 * (longlong)iVar11;
          *piVar9 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + 0x20 >> 6;
          piVar9[1] = (int)((ulonglong)
                            ((longlong)piVar10[1] * (longlong)iVar12 + 0x8000 +
                            ((longlong)piVar10[1] * (longlong)iVar12 >> 0x3f)) >> 0x10) + 0x20 >> 6;
          piVar9 = piVar9 + 2;
          piVar10 = piVar10 + 2;
        } while (piVar9 < piVar1);
      }
    }
    if (((*(byte *)(*param_1 + 0x410) & 2) == 0) || ((*(uint *)(param_1 + 4) & 2) != 0)) {
      param_1[0xb] = *(longlong *)(*(longlong *)(lVar6 + 0x68) + uVar8 * 8);
      param_1[0xc] = *(longlong *)(local_res10 + *(longlong *)(lVar6 + 0x68));
    }
    else {
      lVar5 = (longlong)(int)param_1[0xb] * (longlong)iVar11;
      *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
      lVar5 = (longlong)(int)param_1[0xc] * (longlong)iVar11;
      *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
    }
    uVar7 = *(uint *)(param_1 + 4) & 2;
    if (((*(byte *)(*param_1 + 0x410) & 0x10) == 0) || (uVar7 != 0)) {
      param_1[0x1f] = *(longlong *)(local_res18 + *(longlong *)(lVar6 + 0x68));
      param_1[0x20] = *(longlong *)(local_res20 + *(longlong *)(lVar6 + 0x68));
      if (uVar7 != 0) goto LAB_14030cde8;
    }
    else {
      lVar6 = (longlong)(int)param_1[0x1f] * (longlong)iVar11;
      *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
      lVar6 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)iVar12;
      *(int *)((longlong)param_1 + 0xfc) =
           (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
      lVar6 = (longlong)(int)param_1[0x20] * (longlong)iVar11;
      *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
      lVar6 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)iVar12;
      *(int *)((longlong)param_1 + 0x104) =
           (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    }
    local_res8[0] = FUN_14030b6f0(param_1,0);
  }
LAB_14030cde8:
  FUN_1402f7f90(uVar2,piVar4);
  return local_res8[0];
}

