// Function: FUN_1403ff150
// Addr: 1403ff150
// Size: 422 bytes


undefined8 FUN_1403ff150(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res8 [2];
  
  pcVar3 = "OUT-OF-RANGE";
  lVar1 = param_1 + 0xc;
  uVar6 = lVar1 - *(longlong *)(param_2 + 2);
  uVar5 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((uVar6 <= uVar5) && (cVar2 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar2 != '\0')) {
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
    if ((uVar4 != 0) && (cVar2 = FUN_140374b40(param_2,(ulonglong)uVar4 + param_1), cVar2 == '\0'))
    {
      return 0;
    }
    cVar2 = FUN_1404093d0(param_1 + 4,param_2,param_1);
    if (cVar2 != '\0') {
      uVar4 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
      if ((uVar4 != 0) && (cVar2 = FUN_140374b40(param_2,(ulonglong)uVar4 + param_1), cVar2 == '\0')
         ) {
        return 0;
      }
      cVar2 = FUN_1404093d0(param_1 + 8,param_2,param_1);
      if (cVar2 != '\0') {
        uVar4 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
        if ((uVar4 != 0) &&
           (cVar2 = FUN_140374f90(param_2,(ulonglong)uVar4 + param_1), cVar2 == '\0')) {
          return 0;
        }
        local_res8[0] = (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100;
        cVar2 = FUN_1404093d0(param_1 + 10,param_2,param_1);
        if (cVar2 != '\0') {
          uVar4 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
          if ((uVar4 != 0) &&
             (cVar2 = FUN_140374ed0(param_2,(ulonglong)uVar4 + param_1,local_res8), cVar2 == '\0'))
          {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

