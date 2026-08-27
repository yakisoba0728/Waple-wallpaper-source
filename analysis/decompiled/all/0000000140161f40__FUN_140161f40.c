// Function: FUN_140161f40
// Addr: 140161f40
// Size: 246 bytes


void FUN_140161f40(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  longlong local_res8;
  
  if ((param_2 != *(ushort *)(param_1 + 3)) || (param_3 != *(ushort *)((longlong)param_1 + 0x1a))) {
    *(short *)(param_1 + 3) = (short)param_2;
    *(short *)((longlong)param_1 + 0x1a) = (short)param_3;
    uVar7 = (ushort)((int)param_2 / *(int *)((longlong)param_1 + 0x1c));
    uVar5 = (ushort)((int)param_3 / *(int *)((longlong)param_1 + 0x1c));
    uVar6 = 2;
    if (2 < uVar7) {
      uVar6 = uVar7;
    }
    *(ushort *)((longlong)param_1 + 0x14) = uVar6;
    uVar7 = 2;
    if (2 < uVar5) {
      uVar7 = uVar5;
    }
    *(ushort *)((longlong)param_1 + 0x16) = uVar7;
    (**(code **)(*param_1 + 0x40))(param_1);
    if (param_1[4] != 0) {
      *(uint *)(param_1[4] + 0x20) = (uint)*(ushort *)((longlong)param_1 + 0x14);
      *(uint *)(param_1[4] + 0x2c) = (uint)*(ushort *)((longlong)param_1 + 0x14);
      *(uint *)(param_1[4] + 0x24) = (uint)*(ushort *)((longlong)param_1 + 0x16);
      *(uint *)(param_1[4] + 0x30) = (uint)*(ushort *)((longlong)param_1 + 0x16);
      lVar1 = param_1[4];
      puVar2 = *(undefined8 **)(lVar1 + 0xf8);
      for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
        plVar4 = (longlong *)puVar3[10];
        local_res8 = lVar1;
        if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_res8);
      }
    }
  }
  return;
}

