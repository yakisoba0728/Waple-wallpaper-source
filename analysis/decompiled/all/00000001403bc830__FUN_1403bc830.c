// Function: FUN_1403bc830
// Addr: 1403bc830
// Size: 119 bytes


undefined1 * FUN_1403bc830(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 != (undefined1 *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)*param_1;
    if (puVar2 == puVar1) {
      *param_1 = 0;
    }
    UNLOCK();
    if (puVar2 == puVar1) {
      if ((*(int *)(puVar2 + 0x24) != 0) || (*(int *)(puVar2 + 4) != 0)) {
        *(undefined4 *)(puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
      }
      return puVar2;
    }
  }
  puVar2 = (undefined1 *)_calloc_base(1,0x30);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    return puVar2;
  }
  return (undefined1 *)0x0;
}

