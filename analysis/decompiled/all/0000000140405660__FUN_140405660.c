// Function: FUN_140405660
// Addr: 140405660
// Size: 447 bytes


undefined8 FUN_140405660(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *local_res8;
  
  pcVar3 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 0x14;
  uVar6 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar5 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar5) {
    pcVar3 = "OK";
  }
  iVar4 = 1;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar6 <= uVar5) && ((uint)*param_1 * 0x100 + (uint)param_1[1] == iVar4)) &&
     ((uint)param_1[3] + (uint)param_1[2] * 0x100 != 0)) {
    cVar2 = FUN_140409580(param_1 + 8,param_2,param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_140409a20(param_1 + (ulonglong)param_1[0xb] +
                                      ((ulonglong)param_1[10] +
                                      (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) * 0x100,
                            param_2,(uint)param_1[7] + (uint)param_1[6] * 0x100);
      if (cVar2 != '\0') {
        local_res8 = param_1 + (ulonglong)param_1[0x11] +
                               ((ulonglong)param_1[0x10] +
                               (ulonglong)CONCAT11(param_1[0xe],param_1[0xf]) * 0x100) * 0x100;
        cVar2 = FUN_140409580(param_1 + 0xe,param_2,param_1);
        if (cVar2 != '\0') {
          cVar2 = FUN_140374760(param_2,param_1 + (ulonglong)param_1[0x11] +
                                                  ((ulonglong)param_1[0x10] +
                                                  (ulonglong)CONCAT11(param_1[0xe],param_1[0xf]) *
                                                  0x100) * 0x100,param_1 + 0xc,&local_res8);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

