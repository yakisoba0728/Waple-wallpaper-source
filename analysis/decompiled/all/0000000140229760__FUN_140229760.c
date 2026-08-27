// Function: FUN_140229760
// Addr: 140229760
// Size: 164 bytes


void FUN_140229760(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_48 [72];
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x30);
  *(undefined1 *)(lVar1 + 0x1ca) = 1;
  *(undefined8 **)(lVar1 + 0x30) = puVar2 + 8;
  puVar2[8] = *puVar2;
  puVar2[9] = puVar2[1];
  puVar2[10] = puVar2[2];
  puVar2[0xb] = puVar2[3];
  *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)((longlong)puVar2 + 0x24);
  *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)((longlong)puVar2 + 0x6c) = *(undefined4 *)((longlong)puVar2 + 0x2c);
  *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(puVar2 + 6);
  *(undefined4 *)((longlong)puVar2 + 0x74) = *(undefined4 *)((longlong)puVar2 + 0x34);
  *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(puVar2 + 7);
  *(undefined4 *)((longlong)puVar2 + 0x7c) = *(undefined4 *)((longlong)puVar2 + 0x3c);
  plVar4 = *(longlong **)(*param_1 + 0x30);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    lVar1 = param_1[0x75];
    *plVar4 = param_1[0x74];
    plVar4[1] = lVar1;
    lVar1 = param_1[0x77];
    plVar4[2] = param_1[0x76];
    plVar4[3] = lVar1;
    lVar1 = param_1[0x79];
    plVar4[4] = param_1[0x78];
    plVar4[5] = lVar1;
    lVar1 = param_1[0x7b];
    plVar4[6] = param_1[0x7a];
    plVar4[7] = lVar1;
    return;
  }
  plVar3 = (longlong *)FUN_14005ecb0(local_48);
  lVar1 = plVar3[1];
  *plVar4 = *plVar3;
  plVar4[1] = lVar1;
  lVar1 = plVar3[3];
  plVar4[2] = plVar3[2];
  plVar4[3] = lVar1;
  lVar1 = plVar3[5];
  plVar4[4] = plVar3[4];
  plVar4[5] = lVar1;
  lVar1 = plVar3[7];
  plVar4[6] = plVar3[6];
  plVar4[7] = lVar1;
  return;
}

