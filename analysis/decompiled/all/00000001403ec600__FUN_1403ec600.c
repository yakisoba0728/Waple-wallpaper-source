// Function: FUN_1403ec600
// Addr: 1403ec600
// Size: 398 bytes


undefined8 FUN_1403ec600(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(uint *)(param_1 + 0x5c) = param_2;
    return 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar5 = *(uint *)(param_1 + 100);
    if (param_2 <= uVar5) {
      if (param_2 < uVar5) {
        uVar6 = *(uint *)(param_1 + 0x5c);
        uVar5 = uVar5 - param_2;
        if (uVar6 < uVar5) {
          uVar6 = uVar5 - uVar6;
          cVar3 = FUN_1403bf1a0(param_1,*(int *)(param_1 + 0x60) + uVar6);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar2 = *(uint *)(param_1 + 0x5c);
          piVar1 = (int *)(param_1 + 0xe0);
          *piVar1 = *piVar1 + (uVar2 - *(int *)(param_1 + 0x60));
          if (*piVar1 < 0) {
            *(undefined1 *)(param_1 + 0x58) = 0;
            return 0;
          }
          FUN_1404210f0(*(longlong *)(param_1 + 0x70) + ((ulonglong)uVar6 + (ulonglong)uVar2) * 0x14
                        ,*(longlong *)(param_1 + 0x70) + (ulonglong)uVar2 * 0x14,
                        (ulonglong)(*(int *)(param_1 + 0x60) - uVar2) * 0x14);
          uVar2 = *(uint *)(param_1 + 0x60);
          if ((uVar2 < uVar6 + *(int *)(param_1 + 0x5c)) &&
             (iVar4 = (uVar6 - uVar2) + *(int *)(param_1 + 0x5c), (iVar4 * 5 & 0x3fffffffU) != 0)) {
            FUN_1404217a0(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar2 * 0x14,0,iVar4 * 0x14);
          }
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + uVar6;
          uVar6 = *(int *)(param_1 + 0x5c) + uVar6;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - uVar5;
        *(uint *)(param_1 + 0x5c) = uVar6 - uVar5;
        FUN_1404210f0(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar6 - uVar5) * 0x14,
                      *(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14,
                      (ulonglong)uVar5 * 0x14);
      }
      return 1;
    }
    param_2 = param_2 - uVar5;
    cVar3 = FUN_1403eaf70(param_1,param_2,param_2);
    if (cVar3 != '\0') {
      FUN_1404210f0(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14,
                    *(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14,
                    (ulonglong)param_2 * 0x14);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
      return 1;
    }
  }
  return 0;
}

