// Function: FUN_1402919a0
// Addr: 1402919a0
// Size: 5 bytes


undefined8 * FUN_1402919a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)func_0x00014028aff0();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_LAB_14042ac68;
  puVar1[2] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 6) = 0;
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x30;
    puVar1[5] = 0;
    if (lVar4 == 0) goto code_r0x000140291a4f;
  }
  puVar1[5] = 0;
  lVar3 = -1;
  do {
    lVar2 = lVar3;
    lVar3 = lVar2 + 1;
  } while (*(char *)(lVar4 + lVar3) != '\0');
  lVar2 = lVar2 + 2;
  lVar3 = thunk_FUN_1402da070(lVar2);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar3,lVar4,lVar2);
  }
  puVar1[5] = 0;
code_r0x000140291a4f:
  func_0x000140293c80(puVar1,param_1);
  return puVar1;
}

