// Function: FUN_140334280
// Addr: 140334280
// Size: 587 bytes


void FUN_140334280(int param_1,uint param_2,int param_3,int *param_4,int param_5,char param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  *param_4 = 0;
  if ((param_5 == 0) && (param_6 == '\0')) {
    return;
  }
  if (param_1 < 0x28f) {
    return;
  }
  iVar4 = 0;
  if (param_6 == '\0') goto LAB_1403344b7;
  lVar7 = (longlong)(param_3 + param_5) * (longlong)param_1;
  iVar4 = param_7[6];
  iVar5 = param_7[1];
  iVar6 = 0x1f;
  uVar12 = (uint)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
  if (uVar12 != 0) {
    for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar3 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar8 = iVar4 * 0x10000;
  iVar9 = iVar8;
  if (iVar3 + iVar6 < 0x2e) {
    iVar9 = (int)((ulonglong)
                  (((longlong)(int)uVar12 * (longlong)(int)param_2 >> 0x3f) + 0x8000 +
                  (longlong)(int)uVar12 * (longlong)(int)param_2) >> 0x10);
  }
  iVar6 = *param_7 << 0x10;
  if (iVar9 < iVar6) {
    iVar4 = FUN_1402efa10(iVar5 << 0x10,param_2);
  }
  else {
    iVar3 = param_7[2];
    iVar10 = param_7[5];
    iVar1 = param_7[4];
    iVar11 = param_7[3];
    iVar2 = param_7[7];
    if (iVar9 < iVar3 << 0x10) {
      iVar9 = iVar3 - *param_7;
      iVar6 = FUN_1402efa10(iVar6,param_2);
      if (iVar9 == 0) {
LAB_1403343f0:
        iVar5 = FUN_1402efa10(iVar3 << 0x10,param_2);
        if (iVar1 - iVar3 != 0) {
          iVar4 = FUN_1402f20b0(uVar12 - iVar5,iVar10 - iVar11,iVar1 - iVar3);
          iVar5 = FUN_1402efa10(iVar11 << 0x10,param_2);
          iVar4 = iVar4 + iVar5;
          goto LAB_140334480;
        }
LAB_140334438:
        iVar9 = iVar4 - iVar1;
        iVar6 = FUN_1402efa10(iVar1 << 0x10,param_2);
        if (iVar9 == 0) goto LAB_140334460;
        iVar11 = iVar2 - iVar10;
      }
      else {
        iVar11 = iVar11 - iVar5;
        iVar10 = iVar5;
      }
      iVar4 = FUN_1402f20b0(uVar12 - iVar6,iVar11,iVar9);
      iVar5 = FUN_1402efa10(iVar10 << 0x10,param_2);
      iVar4 = iVar4 + iVar5;
    }
    else {
      if (iVar9 < iVar1 << 0x10) goto LAB_1403343f0;
      if (iVar9 < iVar8) goto LAB_140334438;
LAB_140334460:
      iVar4 = FUN_1402efa10(iVar2 << 0x10,param_2);
    }
  }
LAB_140334480:
  *param_4 = iVar4;
  iVar4 = FUN_1402efa10(iVar4,param_1 * 2);
LAB_1403344b7:
  *param_4 = param_5 / 2 + iVar4;
  return;
}

