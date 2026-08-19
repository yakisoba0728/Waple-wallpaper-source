// Function: FUN_140350fe0
// Addr: 140350fe0
// Size: 153 bytes


ulonglong FUN_140350fe0(undefined4 *param_1,int param_2,int *param_3,code *param_4,uint param_5,
                       uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  
  uVar1 = param_3[1];
  uVar6 = (ulonglong)uVar1;
  if ((int)param_5 <= (int)uVar1) {
    lVar10 = (longlong)param_2;
    uVar2 = param_3[lVar10 * 2 + 1];
    if ((int)uVar2 <= (int)param_6) {
      if ((int)uVar1 <= (int)param_6) {
        param_6 = -param_1[1] & uVar1;
      }
      if ((int)param_5 <= (int)uVar2) {
        param_5 = -param_1[1];
        uVar6 = (ulonglong)param_5;
        param_5 = param_1[1] + -1 + uVar2 & param_5;
        if (uVar2 == param_5) {
          param_5 = param_5 + param_1[1];
        }
      }
      if ((int)param_5 <= (int)param_6) {
        piVar8 = *(int **)(param_1 + 0xc);
        iVar5 = (int)(param_6 - param_5) >> ((byte)*param_1 & 0x1f);
        if (piVar8 + (longlong)iVar5 + 1 < *(int **)(param_1 + 10)) {
          do {
            uVar1 = param_3[1];
            iVar5 = *param_3;
            if ((int)param_5 < (int)uVar1) {
              iVar3 = param_1[4];
              piVar9 = param_3 + lVar10 * 2;
              if (((iVar3 < (int)(uVar1 - piVar9[1])) || (iVar7 = iVar5 - *piVar9, iVar3 < iVar7))
                 || (iVar3 < -iVar7)) {
                uVar6 = (*param_4)(param_3);
              }
              else {
                uVar4 = (longlong)(int)((uVar1 - param_5) * iVar7) /
                        (longlong)(int)(uVar1 - piVar9[1]);
                uVar6 = uVar4 & 0xffffffff;
                *piVar8 = iVar5 - (int)uVar4;
                piVar8 = piVar8 + 1;
                param_5 = param_5 + param_1[1];
                piVar9 = param_3 + lVar10 * -2;
              }
            }
            else {
              if (uVar1 == param_5) {
                *piVar8 = iVar5;
                piVar8 = piVar8 + 1;
                param_5 = param_5 + param_1[1];
              }
              uVar6 = -lVar10;
              piVar9 = param_3 + lVar10 * -2;
            }
            param_3 = piVar9;
          } while ((int)param_5 <= (int)param_6);
          uVar6 = uVar6 & 0xffffffffffffff00;
          *(int **)(param_1 + 0xc) = piVar8;
        }
        else {
          param_1[0xe] = 0x62;
          uVar6 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        }
        return uVar6;
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}

