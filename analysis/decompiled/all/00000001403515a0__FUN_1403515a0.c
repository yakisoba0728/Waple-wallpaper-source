// Function: FUN_1403515a0
// Addr: 1403515a0
// Size: 759 bytes


bool FUN_1403515a0(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  int local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0xc);
  lVar14 = (longlong)param_2;
  piVar10 = (int *)(lVar1 + lVar14 * 8);
  local_res10 = *(int *)(param_1 + 8);
  piVar18 = (int *)(lVar1 + (longlong)param_3 * 8);
  iVar15 = iVar3 * *(int *)(lVar1 + 4 + lVar14 * 8) - local_res10;
  iVar7 = iVar3 * *piVar10 - local_res10;
  iVar5 = iVar3 * *piVar18 - local_res10;
  local_res10 = iVar3 * piVar18[1] - local_res10;
  iVar3 = iVar7;
  iVar12 = iVar5;
  if (param_4 != 0) {
    iVar3 = iVar15;
    iVar12 = local_res10;
    local_res10 = iVar5;
    iVar15 = iVar7;
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  pbVar16 = (byte *)(lVar1 + lVar14);
  if ((*(byte *)(lVar1 + lVar14) & 4) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(lVar1 + lVar14) >> 5;
  }
  if ((*pbVar16 & 3) == 2) {
LAB_1403518c0:
    *(undefined4 *)(param_1 + 0x38) = 0x14;
  }
  else {
    if ((*pbVar16 & 3) == 0) {
      if ((*(byte *)(lVar1 + param_3) & 3) == 1) {
        piVar18 = piVar18 + -2;
        iVar3 = iVar12;
      }
      else {
        iVar3 = (iVar12 + iVar3) / 2;
        local_res10 = (local_res10 + iVar15) / 2;
      }
      piVar10 = piVar10 + -2;
      pbVar16 = pbVar16 + -1;
      iVar15 = local_res10;
    }
    local_res10 = iVar15;
    *(int *)(param_1 + 0x44) = local_res10;
    *(int *)(param_1 + 0x40) = iVar3;
joined_r0x000140351695:
    do {
      if (piVar18 <= piVar10) {
        cVar2 = func_0x000140351fa0(param_1,iVar3,local_res10);
        return cVar2 != '\0';
      }
      pbVar17 = pbVar16 + 1;
      piVar11 = piVar10 + 2;
      if ((pbVar16[1] & 3) == 0) {
        iVar15 = *(int *)(param_1 + 0xc) * piVar10[3] - *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc) * *piVar11 - *(int *)(param_1 + 8);
        piVar10 = piVar11;
        iVar12 = iVar5;
        if (param_4 == 0) {
          iVar12 = iVar15;
          iVar15 = iVar5;
        }
        while( true ) {
          if (piVar18 <= piVar10) {
            cVar2 = FUN_140351150(param_1,iVar15,iVar12,iVar3,local_res10);
            goto code_r0x0001403518ba;
          }
          piVar11 = piVar10 + 2;
          pbVar16 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
          iVar13 = *(int *)(param_1 + 0xc) * piVar10[3] - *(int *)(param_1 + 8);
          iVar7 = *(int *)(param_1 + 0xc) * *piVar11 - *(int *)(param_1 + 8);
          iVar5 = iVar13;
          if (param_4 == 0) {
            iVar5 = iVar7;
            iVar7 = iVar13;
          }
          if ((*pbVar16 & 3) == 1) break;
          if ((*pbVar16 & 3) != 0) goto LAB_1403518c0;
          cVar2 = FUN_140351150(param_1,iVar15,iVar12,(iVar5 + iVar15) / 2,(iVar7 + iVar12) / 2);
          piVar10 = piVar11;
          iVar12 = iVar7;
          iVar15 = iVar5;
          if (cVar2 != '\0') {
            return true;
          }
        }
        cVar2 = FUN_140351150(param_1,iVar15,iVar12,iVar5,iVar7);
      }
      else {
        if ((pbVar16[1] & 3) != 1) {
          if ((piVar18 < piVar10 + 4) || ((pbVar16[2] & 3) != 2)) goto LAB_1403518c0;
          iVar12 = *(int *)(param_1 + 0xc);
          piVar9 = piVar10 + 6;
          iVar15 = *(int *)(param_1 + 8);
          iVar4 = iVar12 * *piVar11 - iVar15;
          iVar6 = iVar12 * piVar10[5] - iVar15;
          iVar13 = iVar12 * piVar10[3] - iVar15;
          iVar8 = iVar12 * piVar10[4] - iVar15;
          iVar5 = iVar4;
          iVar7 = iVar6;
          if (param_4 != 0) {
            iVar5 = iVar13;
            iVar7 = iVar8;
            iVar13 = iVar4;
            iVar8 = iVar6;
          }
          if (piVar18 < piVar9) {
            cVar2 = FUN_140351340(param_1,iVar5,iVar13,iVar8,iVar7,iVar3,local_res10);
code_r0x0001403518ba:
            if (cVar2 != '\0') {
              return true;
            }
            return false;
          }
          iVar4 = iVar12 * piVar10[7] - iVar15;
          iVar15 = iVar12 * *piVar9 - iVar15;
          iVar12 = iVar4;
          if (param_4 == 0) {
            iVar12 = iVar15;
            iVar15 = iVar4;
          }
          cVar2 = FUN_140351340(param_1,iVar5,iVar13,iVar8,iVar7,iVar12,iVar15);
          if (cVar2 != '\0') {
            return true;
          }
          piVar10 = piVar9;
          pbVar16 = pbVar16 + 3;
          goto joined_r0x000140351695;
        }
        iVar15 = *(int *)(param_1 + 0xc) * *piVar11 - *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc) * piVar10[3] - *(int *)(param_1 + 8);
        iVar12 = iVar5;
        if (param_4 == 0) {
          iVar12 = iVar15;
          iVar15 = iVar5;
        }
        cVar2 = func_0x000140351fa0(param_1,iVar12,iVar15);
      }
      piVar10 = piVar11;
      pbVar16 = pbVar17;
    } while (cVar2 == '\0');
  }
  return true;
}

