// Function: FUN_140034210
// Addr: 140034210
// Size: 292 bytes


undefined4 *
FUN_140034210(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22 [2];
  byte abStackX_24 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [72];
  
  uVar1 = *(uint *)(param_4 + 0x18);
  local_res20 = 0x25;
  puVar4 = (undefined2 *)&local_res21;
  if ((uVar1 & 0x20) != 0) {
    local_res21 = 0x2b;
    puVar4 = (undefined2 *)local_res22;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar4 = 0x23;
    puVar4 = (undefined2 *)local_res22;
    if ((uVar1 & 0x20) != 0) {
      puVar4 = (undefined2 *)(local_res22 + 1);
    }
  }
  *puVar4 = 0x3649;
  *(undefined1 *)(puVar4 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  *(byte *)((longlong)puVar4 + 3) = bVar2;
  *(undefined1 *)(puVar4 + 2) = 0;
  iVar3 = FUN_1400162a0(local_68,0x40,&local_res20,param_6);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  if (-1 < iVar3) {
    FUN_1400378a0(param_1,param_2,&local_78,param_4,param_5,local_68,(longlong)iVar3);
    return param_2;
  }
  *param_2 = local_78;
  param_2[1] = uStack_74;
  param_2[2] = uStack_70;
  param_2[3] = uStack_6c;
  return param_2;
}

