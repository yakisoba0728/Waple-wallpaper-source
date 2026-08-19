// Function: FUN_140349280
// Addr: 140349280
// Size: 10 bytes


char * FUN_140349280(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int aiStackX_18 [2];
  
  pcVar2 = (char *)FUN_1402f8070(param_1,*(ushort *)(param_3 + 8) + 1,aiStackX_18);
  if (aiStackX_18[0] != 0) {
    return (char *)0x0;
  }
  aiStackX_18[0] = func_0x0001402f5d20(param_2,*(undefined4 *)(param_3 + 0xc));
  if ((aiStackX_18[0] == 0) &&
     (aiStackX_18[0] = FUN_1402f50b0(param_2,*(undefined2 *)(param_3 + 8)), aiStackX_18[0] == 0)) {
    pcVar3 = *(char **)(param_2 + 0x38);
    uVar4 = (uint)*(ushort *)(param_3 + 8);
    pcVar5 = pcVar2;
    if (*(ushort *)(param_3 + 8) != 0) {
      do {
        iVar1 = (*param_4)((int)*pcVar3);
        if (iVar1 != 0) {
          *pcVar5 = *pcVar3;
          pcVar5 = pcVar5 + 1;
        }
        pcVar3 = pcVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *pcVar5 = '\0';
    func_0x0001402f51d0(param_2);
    if (pcVar5 != pcVar2) {
      return pcVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(param_1,pcVar2);
}

