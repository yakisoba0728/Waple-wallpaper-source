// Function: FUN_1402cd928
// Addr: 1402cd928
// Size: 490 bytes


/* WARNING: Removing unreachable block (ram,0x0001402cdaf2) */

undefined8 FUN_1402cd928(char *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  
  lVar1 = 0;
  do {
    lVar8 = lVar1;
    cVar3 = *param_1;
    if ((cVar3 != (&DAT_14042e580)[lVar8]) && (cVar3 != (&DAT_14042e584)[lVar8])) {
      *param_2 = *param_2 + -1;
      if ((cVar3 != '\0') && (*(char *)*param_2 != cVar3)) {
        puVar6 = (undefined4 *)FUN_1402caf34();
        *puVar6 = 0x16;
        FUN_1402cad8c();
      }
      uVar7 = 7;
      goto LAB_1402cdb07;
    }
    cVar3 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar3;
    lVar1 = lVar8 + 1;
  } while (lVar8 + 1 != 3);
  lVar1 = *param_2;
  iVar9 = (int)lVar8 + 0x14;
  *param_2 = lVar1 + -1;
  if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
    piVar5 = (int *)FUN_1402caf34();
    *piVar5 = iVar9;
    FUN_1402cad8c();
  }
  param_3 = (char *)*param_2;
  cVar3 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar3;
  pcVar2 = (char *)*param_2;
  if (cVar3 == '(') {
    cVar3 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    *param_1 = cVar3;
    cVar3 = FUN_1402cdb5c(param_1,param_2);
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      cVar3 = *param_1;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_1402caf34();
        *piVar5 = iVar9;
        FUN_1402cad8c();
      }
      return 5;
    }
    cVar4 = FUN_1402cdb14(param_1,param_2);
    cVar3 = *param_1;
    if (cVar4 != '\0') {
      lVar1 = *param_2;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_1402caf34();
        *piVar5 = iVar9;
        FUN_1402cad8c();
      }
      return 6;
    }
    while (cVar3 != ')') {
      if (cVar3 == '\0') {
        *param_2 = *param_2 + -1;
LAB_1402cdb02:
        uVar7 = 4;
LAB_1402cdb07:
        *param_1 = '\0';
        *param_2 = (longlong)param_3;
        return uVar7;
      }
      if ((((9 < (byte)(cVar3 - 0x30U)) && (0x19 < (byte)(cVar3 + 0x9fU))) &&
          (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        *param_2 = *param_2 + -1;
        if (*(char *)*param_2 != cVar3) {
          piVar5 = (int *)FUN_1402caf34();
          *piVar5 = iVar9;
          FUN_1402cad8c();
        }
        goto LAB_1402cdb02;
      }
      cVar3 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      *param_1 = cVar3;
    }
  }
  else {
    *param_2 = (longlong)(pcVar2 + -1);
    if ((cVar3 != '\0') && (pcVar2[-1] != cVar3)) {
      piVar5 = (int *)FUN_1402caf34();
      *piVar5 = iVar9;
      FUN_1402cad8c();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}

