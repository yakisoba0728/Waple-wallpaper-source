// Function: FUN_140079f50
// Addr: 140079f50
// Size: 310 bytes


void FUN_140079f50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar1) {
        uVar5 = 0;
        if (plVar2[4] != 0) {
          do {
            uVar5 = uVar5 + 1;
          } while (uVar5 < (ulonglong)plVar2[4]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar2 + 0xe);
      }
    }
    else {
      *(undefined8 *)plVar1[1] = 0;
      if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(*plVar1 + 0x70);
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      if (puVar6 != puVar3) {
        uVar5 = (longlong)puVar3 + (7 - (longlong)puVar6) & 0xfffffffffffffff8;
        if (puVar3 < puVar6) {
          uVar5 = 0;
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        for (uVar5 = uVar5 / 8; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = uVar4;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  return;
}

