// Function: FUN_1403330d0
// Addr: 1403330d0
// Size: 145 bytes


undefined4 FUN_1403330d0(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *local_res8;
  
  pcVar2 = (char *)*param_1;
  local_res8 = pcVar2;
  uVar1 = FUN_140332d30(&local_res8,param_2,10);
  if (local_res8 == pcVar2) {
    return 0;
  }
  if ((local_res8 < param_2) && (*local_res8 == '#')) {
    pcVar2 = local_res8 + 1;
    local_res8 = pcVar2;
    uVar1 = FUN_140332d30(&local_res8,param_2,uVar1);
    if (local_res8 == pcVar2) {
      return 0;
    }
  }
  *param_1 = local_res8;
  return uVar1;
}

