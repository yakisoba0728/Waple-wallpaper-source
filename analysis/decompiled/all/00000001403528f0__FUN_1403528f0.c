// Function: FUN_1403528f0
// Addr: 1403528f0
// Size: 201 bytes


undefined8 FUN_1403528f0(longlong param_1,char *param_2,uint *param_3)

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
        *param_3 = (uint)*(byte *)(param_1 + 0x7c);
        return 0;
      }
      lVar2 = 0;
      do {
        lVar3 = lVar2 + 1;
        if (param_2[lVar2] != (&DAT_140451b8c)[lVar2]) {
          iVar1 = strcmp(param_2,"overlaps");
          if (iVar1 == 0) {
            *param_3 = (uint)*(byte *)(param_1 + 0x7e);
            return 0;
          }
          return 0xc;
        }
        lVar2 = lVar3;
      } while (lVar3 != 7);
      *param_3 = (uint)*(byte *)(param_1 + 0x7d);
      return 0;
    }
    lVar2 = lVar3;
  } while (lVar3 != 7);
  *param_3 = *(uint *)(param_1 + 0x78);
  return 0;
}

