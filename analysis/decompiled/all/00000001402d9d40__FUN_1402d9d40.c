// Function: FUN_1402d9d40
// Addr: 1402d9d40
// Size: 163 bytes


undefined4 FUN_1402d9d40(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1402d9d99;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_1402d9d99;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar3 = param_1;
      lVar4 = param_2;
      lVar2 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar3[param_3 - (longlong)param_1];
          *pcVar3 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar4 = lVar4 + -1;
          pcVar3 = pcVar3 + 1;
        } while (lVar4 != 0);
        lVar4 = 0;
      }
      else {
        do {
          lVar5 = lVar2;
          cVar1 = pcVar3[param_3 - (longlong)param_1];
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar4 = lVar4 + -1;
        } while ((lVar4 != 0) && (lVar2 = lVar5 + -1, lVar5 + -1 != 0));
        lVar2 = lVar5 + -1;
        if (lVar4 == 0) {
          lVar2 = lVar5;
        }
        if (lVar2 == 0) {
          *pcVar3 = '\0';
        }
      }
      if (lVar4 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    *param_1 = '\0';
  }
LAB_1402d9d99:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

