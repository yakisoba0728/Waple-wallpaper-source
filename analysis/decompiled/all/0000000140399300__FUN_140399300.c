// Function: FUN_140399300
// Addr: 140399300
// Size: 154 bytes


void FUN_140399300(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  puVar5 = &DAT_14045dd10;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  puVar7 = &DAT_14045dd10;
  if ((undefined8 *)puVar2[0xb] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)puVar2[0xb];
  }
  puVar4 = &DAT_14045dd10;
  uVar1 = *(uint *)(puVar7 + 3);
  if (3 < uVar1) {
    puVar4 = (undefined8 *)puVar7[2];
  }
  iVar6 = 0;
  if ((puVar4 <= puVar5) &&
     (iVar6 = uVar1 - (int)((longlong)puVar5 - (longlong)puVar4),
     (ulonglong)uVar1 <= (ulonglong)((longlong)puVar5 - (longlong)puVar4))) {
    iVar6 = 0;
  }
  puVar5 = &DAT_14045dd10;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  FUN_1403e3650(puVar2 + 4,puVar5,iVar6);
  *(longlong *)(*param_1 + 0x18) = *param_1 + 0x20;
  *(undefined8 *)(*param_1 + 0x10) = param_2;
  return;
}

