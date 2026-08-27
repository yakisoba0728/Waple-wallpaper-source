// Function: FUN_1403491b0
// Addr: 1403491b0
// Size: 275 bytes


char * FUN_1403491b0(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int local_res18 [2];
  
  pcVar2 = (char *)FUN_1402f7fa0(param_1,*(ushort *)(param_3 + 8) + 1,local_res18);
  if (local_res18[0] != 0) {
    return (char *)0x0;
  }
  local_res18[0] = FUN_1402f5c50(param_2,*(undefined4 *)(param_3 + 0xc));
  if ((local_res18[0] == 0) &&
     (local_res18[0] = FUN_1402f4fe0(param_2,*(undefined2 *)(param_3 + 8)), local_res18[0] == 0)) {
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
    FUN_1402f5100(param_2);
    if (pcVar5 != pcVar2) {
      return pcVar2;
    }
  }
  FUN_1402f7f90(param_1,pcVar2);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined2 *)(param_3 + 8) = 0;
  FUN_1402f7f90(param_1,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_3 + 0x10) = 0;
  return (char *)0x0;
}

