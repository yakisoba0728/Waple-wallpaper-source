// Function: FUN_1402d9090
// Addr: 1402d9090
// Size: 84 bytes


undefined8 FUN_1402d9090(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar2 = param_1;
      do {
        cVar1 = pcVar2[param_3 - (longlong)param_1];
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    *param_1 = '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

