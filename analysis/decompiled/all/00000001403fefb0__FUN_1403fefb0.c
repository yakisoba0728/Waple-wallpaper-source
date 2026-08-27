// Function: FUN_1403fefb0
// Addr: 1403fefb0
// Size: 401 bytes


undefined8 FUN_1403fefb0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pcVar5 = "OUT-OF-RANGE";
  lVar1 = param_1 + 0xc;
  uVar8 = lVar1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar7) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if ((uVar8 <= uVar7) && (cVar4 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar4 != '\0')) {
    uVar6 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
    if ((uVar6 != 0) && (cVar4 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0'))
    {
      return 0;
    }
    cVar4 = FUN_1404093d0(param_1 + 4,param_2,param_1);
    if (cVar4 != '\0') {
      uVar6 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
      if ((uVar6 != 0) && (cVar4 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0')
         ) {
        return 0;
      }
      cVar4 = FUN_1404093d0(param_1 + 8,param_2,param_1);
      if (cVar4 != '\0') {
        uVar6 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
        if ((uVar6 != 0) &&
           (cVar4 = FUN_140374f90(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0')) {
          return 0;
        }
        uVar2 = *(undefined1 *)(param_1 + 6);
        uVar3 = *(undefined1 *)(param_1 + 7);
        cVar4 = FUN_1404093d0(param_1 + 10,param_2,param_1);
        if (cVar4 != '\0') {
          uVar6 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
          if ((uVar6 != 0) &&
             (cVar4 = FUN_1404011f0((ulonglong)uVar6 + param_1,param_2,CONCAT11(uVar2,uVar3)),
             cVar4 == '\0')) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

