// Function: FUN_14038c420
// Addr: 14038c420
// Size: 511 bytes


int * FUN_14038c420(int *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  char cVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar6 = *(byte **)(param_1 + 2);
  if (pbVar6 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return param_2;
  }
  uVar10 = param_1[6];
  pcVar8 = "OUT-OF-RANGE";
  pbVar1 = pbVar6 + 0x14;
  iVar9 = 1;
  if (0x13 < uVar10) {
    pcVar8 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                pbVar6,*(undefined8 *)(param_1 + 4),pcVar8);
  if ((0x13 < uVar10) && ((uint)pbVar6[1] + (uint)*pbVar6 * 0x100 == iVar9)) {
    bVar2 = pbVar6[7];
    bVar3 = pbVar6[5];
    bVar4 = pbVar6[4];
    bVar5 = pbVar6[6];
    cVar7 = FUN_140409580(pbVar6 + 8,param_1,pbVar6);
    if ((cVar7 != '\0') &&
       (cVar7 = FUN_140409660(pbVar6 + (ulonglong)pbVar6[0xb] +
                                       ((ulonglong)pbVar6[10] +
                                       (ulonglong)CONCAT11(pbVar6[8],pbVar6[9]) * 0x100) * 0x100,
                              param_1,((uint)bVar5 * 0x100 + (uint)bVar2) *
                                      ((uint)bVar4 * 0x100 + (uint)bVar3)), cVar7 != '\0')) {
      if ((pbVar6[0xf] & 1) == 0) {
        cVar7 = FUN_14036f0c0(param_1,pbVar1,param_1[0xe] + 1,2);
      }
      else {
        cVar7 = FUN_14036edf0();
      }
      if (cVar7 != '\0') {
        FUN_1403beff0(param_1);
        if ((char)param_2[1] == '\0') {
          return param_2;
        }
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
    }
  }
  FUN_1403beff0(param_1);
  FUN_140414150(param_2);
  return (int *)&DAT_14045dd10;
}

