// Function: FUN_140394a60
// Addr: 140394a60
// Size: 487 bytes


undefined8 *
FUN_140394a60(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 == 0x47504f53) {
    puVar2 = (undefined8 *)FUN_1403c4ed0(param_2 + 0x148);
  }
  else {
    if (param_3 != 0x47535542) {
      puVar1 = &DAT_14045dd10;
      goto LAB_140394ac3;
    }
    puVar2 = (undefined8 *)FUN_1403c4f70(param_2 + 0x140);
  }
  puVar1 = &DAT_14045dd10;
  puVar3 = &DAT_14045dd10;
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
  }
  if (3 < *(uint *)(puVar3 + 3)) {
    puVar1 = (undefined8 *)puVar3[2];
  }
LAB_140394ac3:
  *param_1 = puVar1;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1403b6d70(param_1,param_5);
  return param_1;
}

