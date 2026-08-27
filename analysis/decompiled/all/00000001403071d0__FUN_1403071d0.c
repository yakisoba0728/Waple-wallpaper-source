// Function: FUN_1403071d0
// Addr: 1403071d0
// Size: 508 bytes


int FUN_1403071d0(longlong param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar5 = 0;
  local_res8[0] = 0;
  if ((*(longlong *)(param_1 + 0x408) != 0) ||
     (local_res8[0] = FUN_1403073d0(param_1,0), local_res8[0] == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x408);
    puVar3 = *(uint **)(lVar2 + 0x18);
    piVar4 = *(int **)(lVar2 + 8);
    uVar8 = *puVar3;
    if (uVar8 < param_2) {
      param_2 = uVar8;
    }
    uVar6 = (ulonglong)param_2;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_1402f80b0(uVar1,4,0,uVar8,0,local_res8);
      *(int **)(lVar2 + 8) = piVar4;
      if (local_res8[0] != 0) goto LAB_1403073a6;
    }
    uVar8 = 0;
    if (param_2 != 0) {
      do {
        if (*piVar4 != *param_3) {
          *piVar4 = *param_3;
          lVar5 = 1;
        }
        param_3 = param_3 + 1;
        piVar4 = piVar4 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2);
    }
    cVar7 = (char)lVar5;
    uVar9 = *puVar3;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      lVar10 = uVar6 * 0x20 + *(longlong *)(puVar3 + 4);
      if (uVar8 < uVar9) {
        do {
          if (*piVar4 != *(int *)(lVar10 + 0xc)) {
            *piVar4 = *(int *)(lVar10 + 0xc);
            lVar5 = 1;
          }
          cVar7 = (char)lVar5;
          uVar9 = *puVar3;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x20;
          piVar4 = piVar4 + 1;
        } while (uVar8 < uVar9);
      }
    }
    else {
      piVar11 = (int *)(*(longlong *)
                         (*(longlong *)(puVar3 + 6) + -0x10 +
                         (ulonglong)(*(uint *)(param_1 + 4) >> 0x10) * 0x10) + uVar6 * 4);
      if (uVar8 < uVar9) {
        do {
          if (*piVar4 != *piVar11) {
            *piVar4 = *piVar11;
            lVar5 = 1;
          }
          cVar7 = (char)lVar5;
          uVar9 = *puVar3;
          uVar8 = uVar8 + 1;
          piVar11 = piVar11 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar8 < uVar9);
      }
    }
    if ((*(longlong *)(lVar2 + 0x10) != 0) && (cVar7 == '\0')) {
      return -1;
    }
    lVar5 = FUN_1402f80b0(uVar1,4,0,uVar9,0,local_res8);
    if (local_res8[0] == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        FUN_140310830(param_1);
      }
      FUN_140311840(param_1,uVar6,*(undefined8 *)(lVar2 + 8),lVar5);
      local_res8[0] = FUN_140313fd0(param_1,*puVar3,lVar5,0);
      if ((local_res8[0] == 0) && (uVar6 = 0, param_2 != 0)) {
        do {
          if (*(int *)(lVar5 + uVar6 * 4) != 0) {
            local_res8[0] = -2;
            break;
          }
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
        } while (uVar8 < param_2);
      }
    }
  }
LAB_1403073a6:
  FUN_1402f7f90(uVar1,lVar5);
  return local_res8[0];
}

