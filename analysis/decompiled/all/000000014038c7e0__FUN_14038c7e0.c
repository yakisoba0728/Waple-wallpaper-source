// Function: FUN_14038c7e0
// Addr: 14038c7e0
// Size: 488 bytes


int * FUN_14038c7e0(int *param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar2 = *(byte **)(param_1 + 2);
  if (pbVar2 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return param_2;
  }
  uVar7 = param_1[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar5 = 1;
  if (7 < uVar7) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar2 + 8,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                pbVar2 + 8,pbVar2,*(undefined8 *)(param_1 + 4),pcVar4);
  if (((uVar7 < 8) || ((uint)*pbVar2 * 0x100 + (uint)pbVar2[1] < uVar5)) ||
     (cVar3 = FUN_140407cc0(pbVar2 + 4,param_1), cVar3 == '\0')) {
LAB_14038c988:
    FUN_1403beff0(param_1);
    FUN_140414150(param_2);
    param_2 = (int *)&DAT_14045dd10;
  }
  else {
    uVar6 = 0;
    uVar7 = (uint)pbVar2[5] * 0x10000 + (uint)pbVar2[6] * 0x100 + (uint)pbVar2[4] * 0x1000000 +
            (uint)pbVar2[7];
    if (uVar7 != 0) {
      do {
        pbVar1 = pbVar2 + uVar6 * 4 + 8;
        cVar3 = FUN_140409580(pbVar1,param_1,pbVar2);
        if ((cVar3 == '\0') ||
           ((uVar5 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000
                     + (uint)pbVar1[3], uVar5 != 0 &&
            (cVar3 = FUN_140375600(param_1,pbVar2 + uVar5), cVar3 == '\0')))) goto LAB_14038c988;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar7);
    }
    FUN_1403beff0(param_1);
    if ((char)param_2[1] != '\0') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  return param_2;
}

