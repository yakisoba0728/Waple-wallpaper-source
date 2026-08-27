// Function: FUN_140361cc0
// Addr: 140361cc0
// Size: 308 bytes


void FUN_140361cc0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  
  lVar9 = param_2 + 8;
  if (param_2 == -9) {
    lVar9 = 0;
  }
  do {
    if (*(int *)(lVar9 + 0x10) == 0) {
      return;
    }
    iVar6 = *(int *)(param_2 + 0x18);
    puVar5 = &DAT_14045dd10;
    if (iVar6 != 0) {
      puVar5 = *(undefined8 **)(param_2 + 0x10);
    }
    uVar4 = (uint)*(byte *)((longlong)puVar5 + 5) +
            (uint)*(byte *)((longlong)puVar5 + 3) * 0x10000 +
            (uint)*(byte *)((longlong)puVar5 + 4) * 0x100 +
            (uint)*(byte *)((longlong)puVar5 + 2) * 0x1000000;
    if (uVar4 == 0) {
      puVar5 = &DAT_14045dd10;
    }
    else {
      puVar5 = (undefined8 *)((ulonglong)uVar4 + *param_1);
    }
    if (*(char *)(param_1[1] + 0x40) == '\0') {
      FUN_14036b6f0(param_1[1] + 0x10,(longlong)puVar5 + 4,
                    (uint)*(byte *)((longlong)puVar5 + 3) +
                    (uint)*(byte *)((longlong)puVar5 + 2) * 0x100,2);
    }
    else {
      FUN_140373360();
    }
    do {
      plVar7 = (longlong *)(param_2 + 0x10);
      if (iVar6 != 0) {
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        iVar6 = iVar6 + -1;
        *plVar7 = *plVar7 + 6;
        *(int *)(param_2 + 0x18) = iVar6;
      }
      lVar3 = 0;
      if (param_2 != -9) {
        lVar3 = param_2 + 8;
      }
      if (*(int *)(lVar3 + 0x10) == 0) break;
      if (iVar6 == 0) {
        puVar5 = &DAT_14045dd10;
      }
      else {
        puVar5 = (undefined8 *)*plVar7;
      }
      pbVar8 = (byte *)((longlong)*(int *)(param_2 + 0x28) + (longlong)puVar5);
      cVar1 = *(char *)(**(longlong **)(param_2 + 0x20) + 0x40);
      cVar2 = FUN_1403c58e0(**(longlong **)(param_2 + 0x20) + 0x10,
                            (uint)pbVar8[1] + (uint)*pbVar8 * 0x100);
    } while (cVar2 == cVar1);
  } while( true );
}

