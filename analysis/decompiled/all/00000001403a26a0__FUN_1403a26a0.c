// Function: FUN_1403a26a0
// Addr: 1403a26a0
// Size: 332 bytes


void FUN_1403a26a0(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4,char param_5,
                  char param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3 & 0xffffffff;
  uVar5 = (uint)param_4;
  if ((param_6 == '\0') || (*(char *)(param_1 + 0x59) == '\0')) {
    if (param_5 == '\0') {
      if (uVar5 <= (uint)param_3) {
        return;
      }
      do {
        uVar4 = (int)uVar3 + 1;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + uVar3 * 0x14);
        *puVar1 = *puVar1 | param_2;
        uVar3 = (ulonglong)uVar4;
      } while (uVar4 < uVar5);
      return;
    }
    uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),param_3,param_4,0xffffffff);
  }
  else {
    if (param_5 == '\0') {
      if ((uint)param_3 < *(uint *)(param_1 + 100)) {
        do {
          uVar4 = (int)uVar3 + 1;
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 4 + uVar3 * 0x14);
          *puVar1 = *puVar1 | param_2;
          uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 100));
      }
      uVar4 = *(uint *)(param_1 + 0x5c);
      if (uVar5 <= uVar4) {
        return;
      }
      do {
        uVar3 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + uVar3 * 0x14);
        *puVar1 = *puVar1 | param_2;
      } while (uVar4 < uVar5);
      return;
    }
    uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x5c),
                          param_4,0xffffffff);
    uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x78),uVar3,
                          *(undefined4 *)(param_1 + 100),uVar2);
    FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x78),uVar3,*(undefined4 *)(param_1 + 100),uVar2
                  ,param_2);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x5c);
  }
  FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x70),uVar3,param_4 & 0xffffffff,uVar2,param_2);
  return;
}

