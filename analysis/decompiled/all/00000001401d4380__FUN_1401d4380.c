// Function: FUN_1401d4380
// Addr: 1401d4380
// Size: 47 bytes


void FUN_1401d4380(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar3 = puVar2[2];
    if ((lVar3 == param_2) && (*(int *)(lVar3 + 8) != 1)) {
      *(undefined4 *)(lVar3 + 8) = 0;
    }
  }
  return;
}

