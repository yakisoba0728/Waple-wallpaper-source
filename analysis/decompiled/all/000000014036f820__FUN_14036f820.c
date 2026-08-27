// Function: FUN_14036f820
// Addr: 14036f820
// Size: 441 bytes


undefined8 FUN_14036f820(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      return 0;
    }
    bVar1 = param_1[2];
    pbVar6 = param_1 + 4;
    bVar2 = param_1[3];
    do {
      if (pbVar6 == param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4) {
        return 1;
      }
      if ((uint)pbVar6[5] + (uint)pbVar6[4] * 0x100 != 0) {
        if (*(char *)(param_2 + 0x40) == '\0') {
          cVar3 = FUN_1403a3350(param_2 + 0x10,(uint)pbVar6[1] + (uint)*pbVar6 * 0x100,
                                (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        else {
          FUN_1403bdc00();
        }
      }
      pbVar6 = pbVar6 + 6;
    } while( true );
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar7 != 0) {
    do {
      if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar6 = param_1 + ((ulonglong)uVar5 + 3) * 2;
      }
      else {
        pbVar6 = (byte *)&DAT_14045dd10;
      }
      if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] == 0) {
        if (uVar4 != uVar5) {
          iVar8 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
          if (*(char *)(param_2 + 0x40) == '\0') {
            cVar3 = FUN_1403a3350(param_2 + 0x10,uVar4 + iVar8,iVar8 + uVar5);
            if (cVar3 == '\0') {
              return 0;
            }
          }
          else {
            FUN_1403bdc00();
          }
        }
        uVar4 = uVar5 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  if (uVar4 != uVar7) {
    iVar8 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (*(char *)(param_2 + 0x40) == '\0') {
      cVar3 = FUN_1403a3350(param_2 + 0x10,uVar4 + iVar8,iVar8 + uVar7);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      FUN_1403bdc00();
    }
  }
  return 1;
}

