// Function: FUN_140352800
// Addr: 140352800
// Size: 237 bytes


undefined8 FUN_140352800(longlong param_1,char *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (param_2[lVar2] != "spread"[lVar2]) {
      iVar1 = strcmp(param_2,"flip_sign");
      if (iVar1 == 0) {
        *(bool *)(param_1 + 0x7c) = *param_3 != 0;
        return 0;
      }
      lVar2 = 0;
      do {
        lVar3 = lVar2 + 1;
        if (param_2[lVar2] != (&DAT_140451b8c)[lVar2]) {
          iVar1 = strcmp(param_2,"overlaps");
          if (iVar1 == 0) {
            *(char *)(param_1 + 0x7e) = (char)*param_3;
            return 0;
          }
          return 0xc;
        }
        lVar2 = lVar3;
      } while (lVar3 != 7);
      *(bool *)(param_1 + 0x7d) = *param_3 != 0;
      return 0;
    }
    lVar2 = lVar3;
  } while (lVar3 != 7);
  if (*param_3 - 2U < 0x1f) {
    *(int *)(param_1 + 0x78) = *param_3;
    return 0;
  }
  return 6;
}

