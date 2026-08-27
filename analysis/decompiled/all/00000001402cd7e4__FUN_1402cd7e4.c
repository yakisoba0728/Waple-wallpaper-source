// Function: FUN_1402cd7e4
// Addr: 1402cd7e4
// Size: 323 bytes


undefined8 FUN_1402cd7e4(char *param_1,longlong *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_14042e568)[lVar3] || (cVar2 == (&DAT_14042e56c)[lVar3])))
  {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        puVar1 = (undefined4 *)FUN_1402caf34();
        *puVar1 = 0x16;
        FUN_1402cad8c();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            puVar1 = (undefined4 *)FUN_1402caf34();
            *puVar1 = 0x16;
            FUN_1402cad8c();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        puVar1 = (undefined4 *)FUN_1402caf34();
        *puVar1 = 0x16;
        FUN_1402cad8c();
      }
LAB_1402cd91e:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
  }
  uVar4 = 7;
  goto LAB_1402cd91e;
}

