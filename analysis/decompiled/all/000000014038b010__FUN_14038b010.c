// Function: FUN_14038b010
// Addr: 14038b010
// Size: 251 bytes


void FUN_14038b010(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      if (((*(int *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (*(undefined8 **)(param_1 + 0x28) != &DAT_14045dd10)) {
        iVar6 = (uint)*(byte *)(param_3 + 3 + uVar8 * 4) +
                (uint)*(byte *)(param_3 + 2 + uVar8 * 4) * 0x100;
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x40);
        cVar5 = FUN_1403c58e0(*(longlong *)(param_1 + 0x38) + 0x10,iVar6);
        if (cVar5 == cVar1) {
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          *(undefined8 **)(param_1 + 0x20) = &DAT_14045dd10;
          *(undefined8 **)(param_1 + 0x18) = &DAT_14045dd10;
          *(undefined8 **)(param_1 + 0x10) = &DAT_14045dd10;
          (**(code **)(param_1 + 0x30))(param_1,iVar6);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          *(undefined8 *)(param_1 + 0x10) = uVar2;
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          *(undefined8 *)(param_1 + 0x20) = uVar4;
          FUN_1403a29e0(*(undefined8 *)(param_1 + 0x38),iVar6);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < param_2);
  }
  return;
}

