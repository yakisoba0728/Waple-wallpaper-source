// Function: FUN_1403ef4d0
// Addr: 1403ef4d0
// Size: 305 bytes


void FUN_1403ef4d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  FUN_1403f58e0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x18);
  }
  (**(code **)(lVar1 + 0x28))
            (lVar1,*(undefined8 *)(param_2 + 0x18),
             (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100,
             *(undefined8 *)(param_2 + 0x20),uVar2);
  FUN_1403f5800(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    puVar3 = &DAT_14045dd10;
  }
  else {
    puVar3 = (undefined8 *)((ulonglong)uVar4 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar3,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
  }
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_2 + 0x18),uVar2);
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x38);
  }
  (**(code **)(lVar1 + 0x48))(lVar1,*(undefined8 *)(param_2 + 0x18),uVar2);
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403ef5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_2 + 0x18),uVar2);
  return;
}

