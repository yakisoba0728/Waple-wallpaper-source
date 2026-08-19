// Function: FUN_1402298e0
// Addr: 1402298e0
// Size: 119 bytes


void FUN_1402298e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_48 [72];
  
  lVar1 = *param_1;
  puVar4 = *(undefined8 **)(lVar1 + 0x30);
  *(undefined1 *)(lVar1 + 0x1ca) = 1;
  *(undefined8 **)(lVar1 + 0x30) = puVar4 + 8;
  puVar4[8] = *puVar4;
  puVar4[9] = puVar4[1];
  puVar4[10] = puVar4[2];
  puVar4[0xb] = puVar4[3];
  *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + 0x24);
  *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(puVar4 + 5);
  *(undefined4 *)((longlong)puVar4 + 0x6c) = *(undefined4 *)((longlong)puVar4 + 0x2c);
  *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 6);
  *(undefined4 *)((longlong)puVar4 + 0x74) = *(undefined4 *)((longlong)puVar4 + 0x34);
  *(undefined4 *)(puVar4 + 0xf) = *(undefined4 *)(puVar4 + 7);
  *(undefined4 *)((longlong)puVar4 + 0x7c) = *(undefined4 *)((longlong)puVar4 + 0x3c);
  puVar4 = *(undefined8 **)(*param_1 + 0x30);
  puVar3 = (undefined8 *)FUN_14005ed80(local_48,puVar4,param_1 + 0x74);
  uVar2 = puVar3[1];
  *puVar4 = *puVar3;
  puVar4[1] = uVar2;
  uVar2 = puVar3[3];
  puVar4[2] = puVar3[2];
  puVar4[3] = uVar2;
  uVar2 = puVar3[5];
  puVar4[4] = puVar3[4];
  puVar4[5] = uVar2;
  uVar2 = puVar3[7];
  puVar4[6] = puVar3[6];
  puVar4[7] = uVar2;
  return;
}

