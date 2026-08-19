// Function: FUN_1400ddc30
// Addr: 1400ddc30
// Size: 145 bytes


undefined8 * FUN_1400ddc30(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((undefined8 *)*param_1)[1];
  cVar2 = *(char *)((longlong)puVar5 + 0x19);
  puVar1 = (undefined8 *)*param_1;
  while (cVar2 == '\0') {
    cVar2 = func_0x000140038d00(puVar5 + 4,param_2);
    if (cVar2 < '\0') {
      puVar4 = (undefined8 *)puVar5[2];
      puVar5 = puVar1;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar1 = puVar5;
    puVar5 = puVar4;
    cVar2 = *(char *)((longlong)puVar4 + 0x19);
  }
  if ((*(char *)((longlong)puVar1 + 0x19) == '\0') &&
     (cVar2 = func_0x000140038d00(param_2,puVar1 + 4), -1 < cVar2)) {
    return puVar1 + 8;
  }
  if (param_1[1] != 0x1745d1745d1745d) {
    lVar3 = func_0x00014028aff0(0xb0);
                    /* WARNING: Subroutine does not return */
    FUN_140017090(lVar3 + 0x20,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14003a820();
}

