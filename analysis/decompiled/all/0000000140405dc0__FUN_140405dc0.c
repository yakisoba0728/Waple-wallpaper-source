// Function: FUN_140405dc0
// Addr: 140405dc0
// Size: 397 bytes


undefined8 FUN_140405dc0(longlong param_1,int *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  
  if (param_3 < 0x3fffffff) {
    uVar4 = param_3 * 4;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
        ((uint)(param_2[4] - (int)param_1) < uVar4)) ||
       (param_2[7] = param_2[7] + param_3 * -4, param_2[7] < 1)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    pcVar3 = "OUT-OF-RANGE";
    if (cVar6 != '\0') {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                  (ulonglong)uVar4 + param_1,uVar4,*(longlong *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4),pcVar3);
    if (cVar6 != '\0') {
      iVar2 = param_2[0xe];
      uVar5 = 0;
      if (param_3 != 0) {
        do {
          puVar1 = (undefined1 *)(param_1 + uVar5 * 4);
          if ((uint)*(byte *)(param_1 + uVar5 * 4) * 0x1000000 + (uint)(byte)puVar1[1] * 0x10000 +
              (uint)(byte)puVar1[2] * 0x100 + -1 + (uint)(byte)puVar1[3] < 0xfffffffe) {
            cVar6 = FUN_140409580(puVar1,param_2,param_1);
            if (cVar6 == '\0') {
              return 0;
            }
            cVar6 = FUN_14036f0c0(param_2,(ulonglong)(byte)puVar1[3] +
                                          ((ulonglong)(byte)puVar1[2] +
                                          (ulonglong)CONCAT11(*puVar1,puVar1[1]) * 0x100) * 0x100 +
                                          param_1,iVar2 + 7U >> 3,1);
            if (cVar6 == '\0') {
              return 0;
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < param_3);
      }
      return 1;
    }
  }
  return 0;
}

