// Function: FUN_1400df480
// Addr: 1400df480
// Size: 501 bytes


undefined8 *
FUN_1400df480(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *local_58;
  uint local_50;
  
  puVar1 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)puVar1[1];
  uVar12 = 0;
  cVar8 = *(char *)((longlong)puVar11 + 0x19);
  puVar13 = puVar1;
  puVar7 = puVar11;
  while (puVar6 = puVar11, cVar8 == '\0') {
    cVar8 = FUN_140038c30(puVar6 + 4,param_3);
    if (-1 < cVar8) {
      puVar11 = (undefined8 *)*puVar6;
      puVar13 = puVar6;
    }
    else {
      puVar11 = (undefined8 *)puVar6[2];
    }
    uVar12 = (uint)(-1 < cVar8);
    cVar8 = *(char *)((longlong)puVar11 + 0x19);
    puVar7 = puVar6;
  }
  if ((*(char *)((longlong)puVar13 + 0x19) == '\0') &&
     (cVar8 = FUN_140038c30(param_3,puVar13 + 4), -1 < cVar8)) {
    *param_2 = puVar13;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a750();
    }
    plVar9 = (longlong *)FUN_14028af20(0xb0);
    FUN_140016fc0(plVar9 + 4,param_3);
    *(undefined4 *)(plVar9 + 8) = *param_4;
    *(undefined1 *)((longlong)plVar9 + 0x44) = *(undefined1 *)(param_4 + 1);
    *(undefined1 *)((longlong)plVar9 + 0x45) = *(undefined1 *)((longlong)param_4 + 5);
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    lVar5 = *(longlong *)(param_4 + 4);
    plVar9[9] = *(longlong *)(param_4 + 2);
    plVar9[10] = lVar5;
    lVar5 = *(longlong *)(param_4 + 8);
    plVar9[0xb] = *(longlong *)(param_4 + 6);
    plVar9[0xc] = lVar5;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 8) = 0xf;
    *(undefined1 *)(param_4 + 2) = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    plVar9[0x10] = 0;
    lVar5 = *(longlong *)(param_4 + 0xc);
    plVar9[0xd] = *(longlong *)(param_4 + 10);
    plVar9[0xe] = lVar5;
    lVar5 = *(longlong *)(param_4 + 0x10);
    plVar9[0xf] = *(longlong *)(param_4 + 0xe);
    plVar9[0x10] = lVar5;
    *(undefined8 *)(param_4 + 0xe) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0xf;
    *(undefined1 *)(param_4 + 10) = 0;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    uVar2 = param_4[0x13];
    uVar3 = param_4[0x14];
    uVar4 = param_4[0x15];
    *(undefined4 *)(plVar9 + 0x11) = param_4[0x12];
    *(undefined4 *)((longlong)plVar9 + 0x8c) = uVar2;
    *(undefined4 *)(plVar9 + 0x12) = uVar3;
    *(undefined4 *)((longlong)plVar9 + 0x94) = uVar4;
    uVar2 = param_4[0x17];
    uVar3 = param_4[0x18];
    uVar4 = param_4[0x19];
    *(undefined4 *)(plVar9 + 0x13) = param_4[0x16];
    *(undefined4 *)((longlong)plVar9 + 0x9c) = uVar2;
    *(undefined4 *)(plVar9 + 0x14) = uVar3;
    *(undefined4 *)((longlong)plVar9 + 0xa4) = uVar4;
    *(undefined8 *)(param_4 + 0x16) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0xf;
    *(undefined1 *)(param_4 + 0x12) = 0;
    *(undefined4 *)(plVar9 + 0x15) = param_4[0x1a];
    *(undefined4 *)((longlong)plVar9 + 0xac) = param_4[0x1b];
    *plVar9 = (longlong)puVar1;
    plVar9[1] = (longlong)puVar1;
    plVar9[2] = (longlong)puVar1;
    *(undefined2 *)(plVar9 + 3) = 0;
    local_58 = puVar7;
    local_50 = uVar12;
    uVar10 = FUN_1400371e0(param_1,&local_58,plVar9);
    *param_2 = uVar10;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

