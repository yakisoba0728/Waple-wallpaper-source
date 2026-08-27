// Function: FUN_140236600
// Addr: 140236600
// Size: 228 bytes


void FUN_140236600(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_48 [64];
  
  *(byte *)((longlong)param_1 + 0x93d) = *(byte *)((longlong)param_1 + 0x93d) & 0xfe;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x80))();
  lVar1 = plVar6[1];
  param_1[0xcc] = *plVar6;
  param_1[0xcd] = lVar1;
  lVar1 = plVar6[3];
  param_1[0xce] = plVar6[2];
  param_1[0xcf] = lVar1;
  lVar1 = plVar6[5];
  param_1[0xd0] = plVar6[4];
  param_1[0xd1] = lVar1;
  lVar1 = plVar6[7];
  param_1[0xd2] = plVar6[6];
  param_1[0xd3] = lVar1;
  lVar1 = param_1[0x58];
  puVar8 = *(undefined8 **)(lVar1 + 0x30);
  *(undefined1 *)(lVar1 + 0x1ca) = 1;
  *(undefined8 **)(lVar1 + 0x30) = puVar8 + 8;
  puVar8[8] = *puVar8;
  puVar8[9] = puVar8[1];
  puVar8[10] = puVar8[2];
  puVar8[0xb] = puVar8[3];
  *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar8 + 4);
  *(undefined4 *)((longlong)puVar8 + 100) = *(undefined4 *)((longlong)puVar8 + 0x24);
  *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(puVar8 + 5);
  *(undefined4 *)((longlong)puVar8 + 0x6c) = *(undefined4 *)((longlong)puVar8 + 0x2c);
  *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar8 + 6);
  *(undefined4 *)((longlong)puVar8 + 0x74) = *(undefined4 *)((longlong)puVar8 + 0x34);
  *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(puVar8 + 7);
  *(undefined4 *)((longlong)puVar8 + 0x7c) = *(undefined4 *)((longlong)puVar8 + 0x3c);
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    puVar8 = *(undefined8 **)(param_1[0x58] + 0x30);
    puVar7 = (undefined8 *)FUN_14005ecb0(local_48);
    uVar5 = puVar7[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar5;
    uVar5 = puVar7[3];
    puVar8[2] = puVar7[2];
    puVar8[3] = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x24);
    uVar3 = *(undefined4 *)(puVar7 + 5);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
    *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar7 + 4);
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar2;
    *(undefined4 *)(puVar8 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x34);
    uVar3 = *(undefined4 *)(puVar7 + 7);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x3c);
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar7 + 6);
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
    *(undefined4 *)(puVar8 + 7) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  }
  FUN_1402366f0(param_1 + 0x58);
  lVar1 = param_1[0x58];
  plVar6 = (longlong *)(lVar1 + 0x30);
  *plVar6 = *plVar6 + -0x40;
  *(undefined1 *)(lVar1 + 0x1ca) = 1;
  return;
}

