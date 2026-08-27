// Function: FUN_140333a60
// Addr: 140333a60
// Size: 119 bytes


int FUN_140333a60(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_1;
  iVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_140440fc0)[iVar3] == cVar1) {
      for (; iVar3 < 0x4a; iVar3 = iVar3 + 1) {
        if (*(&PTR_s_Ascender_140440fc0)[iVar3] != cVar1) {
          return 0x4b;
        }
        iVar2 = strncmp((&PTR_s_Ascender_140440fc0)[iVar3],param_1,(ulonglong)param_2);
        if (iVar2 == 0) {
          return iVar3;
        }
      }
    }
    iVar3 = iVar3 + 1;
    if (0x49 < iVar3) {
      return 0x4b;
    }
  } while( true );
}

