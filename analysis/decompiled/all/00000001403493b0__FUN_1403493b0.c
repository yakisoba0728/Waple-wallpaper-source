// Function: FUN_1403493b0
// Addr: 1403493b0
// Size: 283 bytes


char * FUN_1403493b0(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int local_res18 [2];
  
  pcVar2 = (char *)FUN_1402f7fa0(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,local_res18);
  if (local_res18[0] != 0) {
    return (char *)0x0;
  }
  local_res18[0] = FUN_1402f5c50(param_2,*(undefined4 *)(param_3 + 0xc));
  if ((local_res18[0] == 0) &&
     (local_res18[0] = FUN_1402f4fe0(param_2,*(undefined2 *)(param_3 + 8)), local_res18[0] == 0)) {
    pcVar3 = *(char **)(param_2 + 0x38);
    pcVar4 = pcVar2;
    for (uVar5 = (uint)(*(ushort *)(param_3 + 8) >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
      if ((*pcVar3 == '\0') && (iVar1 = (*param_4)((int)pcVar3[1]), iVar1 != 0)) {
        *pcVar4 = pcVar3[1];
        pcVar4 = pcVar4 + 1;
      }
      pcVar3 = pcVar3 + 2;
    }
    *pcVar4 = '\0';
    FUN_1402f5100(param_2);
    if (pcVar4 != pcVar2) {
      return pcVar2;
    }
  }
  FUN_1402f7f90(param_1,pcVar2);
  *(undefined2 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  FUN_1402f7f90(param_1,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_3 + 0x10) = 0;
  return (char *)0x0;
}

