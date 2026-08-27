// Function: FUN_14036f9e0
// Addr: 14036f9e0
// Size: 290 bytes


undefined8 FUN_14036f9e0(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar6 == 1) {
    iVar6 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (*(char *)(param_2 + 0x40) != '\0') {
      uVar4 = FUN_1403734b0(param_2 + 0x10,param_1 + 4,iVar6,2);
      return uVar4;
    }
    uVar4 = FUN_14038dcc0(param_2 + 0x10,1,param_1 + 4,iVar6,2);
    return uVar4;
  }
  if (iVar6 != 2) {
    return 0;
  }
  bVar1 = param_1[2];
  pbVar5 = param_1 + 4;
  bVar2 = param_1[3];
  if (pbVar5 != param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4) {
    do {
      if (*(char *)(param_2 + 0x40) == '\0') {
        cVar3 = FUN_1403a3350(param_2 + 0x10,(uint)pbVar5[1] + (uint)*pbVar5 * 0x100,
                              (uint)pbVar5[3] + (uint)pbVar5[2] * 0x100);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      else {
        FUN_1403bdc00();
      }
      pbVar5 = pbVar5 + 6;
    } while (pbVar5 != param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4);
  }
  return 1;
}

