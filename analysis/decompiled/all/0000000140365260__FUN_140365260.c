// Function: FUN_140365260
// Addr: 140365260
// Size: 111 bytes


void FUN_140365260(ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*param_2 < *param_1) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)param_1 = uVar1;
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (*param_3 < *param_2) {
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined4 *)(param_3 + 4);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)param_2 = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar2;
    if (*param_2 < *param_1) {
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined8 *)param_1 = uVar1;
      *(undefined4 *)(param_1 + 4) = uVar2;
    }
  }
  return;
}

