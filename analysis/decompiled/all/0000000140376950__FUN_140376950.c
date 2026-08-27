// Function: FUN_140376950
// Addr: 140376950
// Size: 670 bytes


undefined8 FUN_140376950(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)
             ((ulonglong)*(uint *)(param_3 + 0x14) * 0x230 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    FUN_140371c50(param_1 + 0xc,puVar3,uVar2,param_1 + 0xc);
    for (puVar4 = (undefined2 *)(puVar3 + 0x30); puVar4 != (undefined2 *)(puVar3 + 0x230);
        puVar4 = puVar4 + 1) {
      *puVar4 = 0xffff;
    }
  }
  else if (cVar1 == '\x01') {
    puVar3 = (undefined1 *)
             ((ulonglong)*(uint *)(param_3 + 0x14) * 0x230 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    FUN_1403709e0(param_1 + 0xc,puVar3,uVar2,param_1 + 0xc);
    puVar4 = (undefined2 *)(puVar3 + 0x30);
    if (puVar4 != (undefined2 *)(puVar3 + 0x230)) {
      do {
        *puVar4 = 0xffff;
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined2 *)(puVar3 + 0x230));
      return param_2;
    }
  }
  else if (cVar1 == '\x02') {
    puVar3 = (undefined1 *)
             ((ulonglong)*(uint *)(param_3 + 0x14) * 0x230 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    FUN_140371a00(param_1 + 0xc,puVar3,uVar2,param_1 + 0xc);
    puVar4 = (undefined2 *)(puVar3 + 0x30);
    if (puVar4 != (undefined2 *)(puVar3 + 0x230)) {
      do {
        *puVar4 = 0xffff;
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined2 *)(puVar3 + 0x230));
      return param_2;
    }
  }
  else if (cVar1 == '\x04') {
    puVar3 = (undefined1 *)
             ((ulonglong)*(uint *)(param_3 + 0x14) * 0x230 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    FUN_14036fca0(param_1 + 0xc,puVar3,uVar2);
    puVar4 = (undefined2 *)(puVar3 + 0x30);
    if (puVar4 != (undefined2 *)(puVar3 + 0x230)) {
      do {
        *puVar4 = 0xffff;
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined2 *)(puVar3 + 0x230));
      return param_2;
    }
  }
  else if (cVar1 == '\x05') {
    puVar3 = (undefined1 *)
             ((ulonglong)*(uint *)(param_3 + 0x14) * 0x230 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    FUN_140370e60(param_1 + 0xc,puVar3,uVar2,param_1 + 0xc);
    puVar4 = (undefined2 *)(puVar3 + 0x30);
    if (puVar4 != (undefined2 *)(puVar3 + 0x230)) {
      do {
        *puVar4 = 0xffff;
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined2 *)(puVar3 + 0x230));
      return param_2;
    }
  }
  return param_2;
}

