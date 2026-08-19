// Function: FUN_1400df550
// Addr: 1400df550
// Size: 195 bytes


undefined8 * FUN_1400df550(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)((undefined8 *)*param_1)[1];
  cVar2 = *(char *)((longlong)puVar3 + 0x19);
  puVar1 = (undefined8 *)*param_1;
  while (cVar2 == '\0') {
    cVar2 = func_0x000140038d00(puVar3 + 4,param_3);
    if (cVar2 < '\0') {
      puVar4 = (undefined8 *)puVar3[2];
      puVar3 = puVar1;
    }
    else {
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar1 = puVar3;
    puVar3 = puVar4;
    cVar2 = *(char *)((longlong)puVar4 + 0x19);
  }
  if ((*(char *)((longlong)puVar1 + 0x19) == '\0') &&
     (cVar2 = func_0x000140038d00(param_3,puVar1 + 4), -1 < cVar2)) {
    *param_2 = puVar1;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_1[1] != 0x1745d1745d1745d) {
    puVar3 = (undefined8 *)func_0x00014028aff0(0xb0);
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14003a820();
}

