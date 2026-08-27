// Function: FUN_14038c620
// Addr: 14038c620
// Size: 435 bytes


int * FUN_14038c620(int *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar1 = *(byte **)(param_1 + 2);
  if (pbVar1 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return param_2;
  }
  uVar6 = param_1[6];
  pcVar3 = "OUT-OF-RANGE";
  if (7 < uVar6) {
    pcVar3 = "OK";
  }
  uVar4 = 1;
  FUN_1402fc370("SANITIZE",pbVar1 + 8,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                pbVar1 + 8,pbVar1,*(undefined8 *)(param_1 + 4),pcVar3);
  if ((7 < uVar6) && ((uint)*pbVar1 * 0x100 + (pbVar1[1] - 2) <= uVar4)) {
    cVar2 = FUN_140407fa0(pbVar1 + 4,param_1);
    if (cVar2 != '\0') {
      uVar5 = 0;
      uVar6 = (uint)pbVar1[5] * 0x10000 + (uint)pbVar1[6] * 0x100 + (uint)pbVar1[4] * 0x1000000 +
              (uint)pbVar1[7];
      if (uVar6 != 0) {
        do {
          cVar2 = FUN_140401770(pbVar1 + uVar5 * 0x30 + 8,param_1,pbVar1);
          if (cVar2 == '\0') goto LAB_14038c79c;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar6);
      }
      FUN_1403beff0(param_1);
      if ((char)param_2[1] == '\0') {
        return param_2;
      }
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_14038c79c:
  FUN_1403beff0(param_1);
  FUN_140414150(param_2);
  return (int *)&DAT_14045dd10;
}

