// Function: FUN_1403754e0
// Addr: 1403754e0
// Size: 280 bytes


undefined8 FUN_1403754e0(int *param_1,longlong param_2,ulonglong *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar4 = (ulonglong)(uint)param_1[6];
  local_res8 = *param_3;
  lVar3 = param_2 + 0x1c;
  pcVar2 = "OUT-OF-RANGE";
  uVar5 = lVar3 - *(longlong *)(param_1 + 2);
  if (uVar5 <= uVar4) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar3,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar3,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  if (uVar5 <= uVar4) {
    local_res10 = (ulonglong)*(byte *)(param_2 + 0x19) +
                  (ulonglong)*(byte *)(param_2 + 0x18) * 0x100 + param_2;
    cVar1 = FUN_1404093d0(param_2 + 0x18,param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_14036add0(param_1,(ulonglong)*(byte *)(param_2 + 0x19) +
                                    (ulonglong)*(byte *)(param_2 + 0x18) * 0x100 + param_2,
                            local_res8 & 0xff,&local_res10,&local_res8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

