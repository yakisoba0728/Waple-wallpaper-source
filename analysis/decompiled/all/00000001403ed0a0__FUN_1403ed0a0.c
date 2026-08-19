// Function: FUN_1403ed0a0
// Addr: 1403ed0a0
// Size: 61 bytes


undefined1 FUN_1403ed0a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x70)) ||
       (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x5c))) {
      cVar8 = func_0x0001403bf270(param_1,*(int *)(param_1 + 100) + 1);
      if (cVar8 == '\0') {
        return 0;
      }
      uVar3 = *(uint *)(param_1 + 0x5c);
      lVar5 = *(longlong *)(param_1 + 0x70);
      uVar4 = *(uint *)(param_1 + 100);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar3 * 0x14);
      uVar7 = puVar1[1];
      lVar6 = *(longlong *)(param_1 + 0x78);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14 + 0x10) =
           *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar3 * 0x14);
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return 1;
}

