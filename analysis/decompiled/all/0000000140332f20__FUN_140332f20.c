// Function: FUN_140332f20
// Addr: 140332f20
// Size: 464 bytes


/* WARNING: Type propagation algorithm not settling */

int FUN_140332f20(ulonglong *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  byte *local_res20;
  
  pbVar9 = (byte *)*param_1;
  if (pbVar9 < param_2) {
    bVar2 = *pbVar9;
    if ((bVar2 - 0x2b & 0xfd) == 0) {
      pbVar9 = pbVar9 + 1;
      bVar10 = bVar2 == 0x2d;
      if (pbVar9 == param_2) {
        return 0;
      }
      bVar2 = *pbVar9;
      if ((bVar2 - 0x2b & 0xfd) == 0) {
        return 0;
      }
    }
    else {
      bVar10 = false;
    }
    iVar5 = 0;
    bVar3 = false;
    local_res20 = pbVar9;
    if (bVar2 != 0x2e) {
      iVar5 = FUN_1403331a0(&local_res20);
      if (local_res20 == pbVar9) {
        return 0;
      }
      if (iVar5 < 0x8000) {
        iVar5 = iVar5 << 0x10;
      }
      else {
        bVar3 = true;
      }
    }
    bVar4 = false;
    iVar8 = 1;
    pbVar9 = local_res20;
    iVar7 = 0;
    if ((local_res20 < param_2) && (iVar7 = 0, *local_res20 == 0x2e)) {
      while (pbVar9 = pbVar9 + 1, pbVar9 < param_2) {
        bVar2 = *pbVar9;
        if ((((bVar2 < 0x21) && ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
            (0x7f < bVar2)) || (9 < (byte)(&DAT_140441650)[bVar2 & 0x7f])) break;
        if ((iVar8 < 0xccccccc) && (iVar7 < 0xccccccc)) {
          iVar7 = (int)(char)(&DAT_140441650)[bVar2 & 0x7f] + iVar7 * 10;
          if ((iVar5 == 0) && (0 < param_3)) {
            param_3 = param_3 + -1;
          }
          else {
            iVar8 = iVar8 * 10;
          }
        }
      }
    }
    pbVar1 = pbVar9 + 1;
    if ((pbVar1 < param_2) && ((*pbVar9 + 0xbb & 0xdf) == 0)) {
      local_res20 = pbVar1;
      iVar6 = FUN_1403331a0(&local_res20,param_2);
      if (pbVar1 == local_res20) {
        return 0;
      }
      pbVar9 = local_res20;
      if (iVar6 < 0x3e9) {
        if (iVar6 < -1000) {
          bVar4 = true;
        }
        else {
          param_3 = param_3 + iVar6;
        }
      }
      else {
        bVar3 = true;
      }
    }
    *param_1 = (ulonglong)pbVar9;
    if ((iVar5 != 0) || (iVar7 != 0)) {
      if (bVar3) {
LAB_14033316f:
        iVar5 = 0x7fffffff;
      }
      else {
        if (bVar4) {
          return 0;
        }
        for (; 0 < param_3; param_3 = param_3 + -1) {
          if (0xccccccb < iVar5) goto LAB_14033316f;
          if (iVar7 < 0xccccccc) {
            iVar7 = iVar7 * 10;
          }
          else {
            if (iVar8 == 1) goto LAB_14033316f;
            iVar8 = iVar8 / 10;
          }
          iVar5 = iVar5 * 10;
        }
        for (; param_3 < 0; param_3 = param_3 + 1) {
          iVar5 = iVar5 / 10;
          if (iVar8 < 0xccccccc) {
            iVar8 = iVar8 * 10;
          }
          else {
            iVar7 = iVar7 / 10;
          }
          if ((iVar5 == 0) && (iVar7 == 0)) {
            return 0;
          }
        }
        if (iVar7 != 0) {
          iVar7 = func_0x0001402efae0(iVar7,iVar8);
          if (!bVar10) {
            return iVar5 + iVar7;
          }
          return -(iVar5 + iVar7);
        }
      }
      if (!bVar10) {
        return iVar5;
      }
      return -iVar5;
    }
  }
  return 0;
}

