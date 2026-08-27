// Function: FUN_140405320
// Addr: 140405320
// Size: 427 bytes


undefined8 FUN_140405320(undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *local_res8;
  
  pcVar3 = "OUT-OF-RANGE";
  puVar1 = param_1 + 0x10;
  uVar5 = (longlong)puVar1 - *(longlong *)(param_2 + 2);
  uVar4 = (ulonglong)(uint)param_2[6];
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",puVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",puVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar5 <= uVar4) {
    cVar2 = FUN_140409580(param_1,param_2,param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_14036f0c0(param_2,param_1 + (ulonglong)(byte)param_1[3] +
                                              ((ulonglong)(byte)param_1[2] +
                                              (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) *
                                              0x100,
                            (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                            (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb],1);
      if (cVar2 != '\0') {
        local_res8 = param_1 + (ulonglong)(byte)param_1[3] +
                               ((ulonglong)(byte)param_1[2] +
                               (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100;
        cVar2 = FUN_140409580(param_1 + 4,param_2,param_1);
        if (cVar2 != '\0') {
          cVar2 = FUN_1403754e0(param_2,param_1 + (ulonglong)(byte)param_1[7] +
                                                  ((ulonglong)(byte)param_1[6] +
                                                  (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100
                                                  ) * 0x100,&local_res8);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

