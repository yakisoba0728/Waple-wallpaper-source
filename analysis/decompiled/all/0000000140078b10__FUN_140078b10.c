// Function: FUN_140078b10
// Addr: 140078b10
// Size: 144 bytes


void FUN_140078b10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uStackX_8;
  longlong local_res10;
  undefined8 uStackX_18;
  undefined8 *puStackX_20;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        puVar6 = plVar3 + 2;
        local_res10 = *(longlong *)(param_1 + 0x18);
        uStackX_8 = plVar3[1];
        if (0xf < (ulonglong)plVar3[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        uVar4 = 0;
        uVar5 = 0xcbf29ce484222325;
        if (plVar3[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar6 + uVar4);
            uVar4 = uVar4 + 1;
            uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
          } while (uVar4 < (ulonglong)plVar3[4]);
        }
        puStackX_20 = (undefined8 *)
                      ((*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10 + 8 + local_res10);
        uStackX_18 = *puStackX_20;
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar3 + 2);
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      if (*plVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(*plVar2 + 0x10);
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      uStackX_8 = *(undefined8 *)(param_1 + 8);
      func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&uStackX_8
                          ,param_4,plVar2);
    }
  }
  return;
}

