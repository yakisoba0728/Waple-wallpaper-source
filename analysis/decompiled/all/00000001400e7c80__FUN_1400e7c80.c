// Function: FUN_1400e7c80
// Addr: 1400e7c80
// Size: 254 bytes


void FUN_1400e7c80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  
  iVar7 = FUN_1400e8a10(param_1,1);
  uVar3 = extraout_XMM0_Da;
  do {
    if (iVar7 == 0) {
      return;
    }
    if (((iVar7 == 1) && ((*(uint *)(param_1 + 0x60) >> 0x13 & 1) == 0)) &&
       (*(char *)(param_1 + 0x76) == '\0')) {
      func_0x0001400e7590(uVar3,2);
      return;
    }
    if (*(int *)(param_1 + 0x70) == 0x2d) {
      uVar4 = *(undefined1 *)(param_1 + 0x76);
      uVar5 = *(undefined1 *)(param_1 + 0x75);
      FUN_1400e5810(param_1);
      iVar8 = FUN_1400e8a10(param_1,0);
      if (iVar8 == 0) {
        if (iVar7 != 2) {
          FUN_1400e8bd0(param_1 + 0x38,uVar4);
        }
        FUN_1400e8bd0(param_1 + 0x38,uVar5);
        return;
      }
      if ((iVar7 == 2) || (iVar8 == 2)) {
        func_0x0001400e7590(extraout_XMM0_Da_00,8);
        return;
      }
      uVar5 = *(undefined1 *)(param_1 + 0x76);
      if ((*(uint *)(param_1 + 0x68) & 0x100) != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar5);
      }
      FUN_1400e8c50(param_1 + 0x38,uVar4,uVar5);
    }
    else if (iVar7 == 1) {
      uVar10 = (ulonglong)*(byte *)(param_1 + 0x76);
      if ((*(uint *)(param_1 + 0x48) & 0x100) != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 8);
        bVar6 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar10);
        uVar10 = (ulonglong)bVar6;
      }
      lVar2 = *(longlong *)(param_1 + 0x40);
      puVar9 = *(undefined8 **)(lVar2 + 0x28);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)func_0x00014028aff0(0x20);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined8 **)(lVar2 + 0x28) = puVar9;
      }
      *(byte *)((longlong)puVar9 + (uVar10 >> 3)) =
           *(byte *)((longlong)puVar9 + (uVar10 >> 3)) | (byte)(1 << ((uint)uVar10 & 7));
    }
    iVar7 = FUN_1400e8a10(param_1,0);
    uVar3 = extraout_XMM0_Da_01;
  } while( true );
}

