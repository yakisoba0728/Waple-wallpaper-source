// Function: FUN_1401c2e70
// Addr: 1401c2e70
// Size: 119 bytes


undefined2 * FUN_1401c2e70(undefined8 param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = param_2 - (int)param_1;
  if (uVar2 != 0) {
    puVar1 = _aligned_malloc((ulonglong)(uVar2 + 0x10),0x10);
    FUN_1404210f0(puVar1,param_1,uVar2);
    *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0;
    *(undefined1 *)((ulonglong)(uVar2 + 1) + (longlong)puVar1) = 0;
    return puVar1;
  }
  puVar1 = _aligned_malloc(0x10,0x10);
  *puVar1 = 0;
  return puVar1;
}

