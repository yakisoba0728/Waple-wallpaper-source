// Function: FUN_140352070
// Addr: 140352070
// Size: 154 bytes


ulonglong FUN_140352070(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                       uint param_6,uint param_7)

{
  ulonglong in_RAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((int)param_6 <= (int)param_5) && ((int)param_3 <= (int)param_7)) {
    if ((int)param_5 <= (int)param_7) {
      param_7 = -param_1[1] & param_5;
    }
    if ((int)param_6 <= (int)param_3) {
      param_6 = -param_1[1];
      in_RAX = (ulonglong)param_6;
      param_6 = (param_3 - 1) + param_1[1] & param_6;
      if (param_3 == param_6) {
        param_6 = param_6 + param_1[1];
      }
    }
    if ((int)param_6 <= (int)param_7) {
      piVar4 = *(int **)(param_1 + 0xc);
      iVar3 = (int)(param_7 - param_6) >> ((byte)*param_1 & 0x1f);
      iVar2 = iVar3 + 1;
      in_RAX = (ulonglong)iVar2;
      if (*(int **)(param_1 + 10) <= piVar4 + in_RAX) {
        param_1[0xe] = 0x62;
        return CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
      }
      iVar5 = param_4 - param_2;
      if (iVar5 == 0) {
        do {
          *piVar4 = param_2;
          piVar4 = piVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      else {
        iVar2 = param_5 - param_3;
        in_RAX = ((longlong)(int)(param_6 - param_3) * (longlong)iVar5) / (longlong)iVar2;
        param_2 = param_2 + (int)in_RAX;
        *piVar4 = param_2;
        piVar4 = piVar4 + 1;
        if (iVar3 != 0) {
          iVar6 = (param_6 - param_3) * iVar5 - (int)in_RAX * iVar2;
          iVar1 = (int)(((longlong)(int)param_1[1] * (longlong)iVar5) / (longlong)iVar2);
          iVar5 = iVar5 * param_1[1] - iVar1 * iVar2;
          if (param_4 < param_2) {
            iVar6 = -iVar6;
            in_RAX = 0xffffffff;
            iVar5 = -iVar5;
          }
          else {
            in_RAX = 1;
          }
          do {
            param_2 = param_2 + iVar1;
            iVar6 = iVar6 + iVar5;
            if (iVar2 <= iVar6) {
              iVar6 = iVar6 - iVar2;
              param_2 = param_2 + (int)in_RAX;
            }
            *piVar4 = param_2;
            piVar4 = piVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      *(int **)(param_1 + 0xc) = piVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

