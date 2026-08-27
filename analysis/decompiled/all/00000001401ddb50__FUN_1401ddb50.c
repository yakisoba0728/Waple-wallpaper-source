// Function: FUN_1401ddb50
// Addr: 1401ddb50
// Size: 84 bytes


uint FUN_1401ddb50(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  bVar6 = (*(byte *)(param_1 + 0x120) & 4) != 0;
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  uVar4 = (uint)bVar6;
  for (puVar5 = *(undefined8 **)(param_1 + 0x198); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    iVar2 = FUN_1401ddb50(*puVar5);
    uVar3 = iVar2 + (uint)bVar6;
    if ((int)uVar4 < (int)uVar3) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}

