// Function: FUN_1403ef340
// Addr: 1403ef340
// Size: 393 bytes


void FUN_1403ef340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x70);
  }
  (**(code **)(lVar1 + 0x80))(lVar1,*(undefined8 *)(param_2 + 0x18),3,uVar5);
  puVar4 = &DAT_14045dd10;
  uVar3 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 5) * 0x10000 +
          (uint)*(byte *)(param_1 + 7);
  if (uVar3 == 0) {
    puVar2 = &DAT_14045dd10;
  }
  else {
    puVar2 = (undefined8 *)((ulonglong)uVar3 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar2,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x70);
  }
  (**(code **)(lVar1 + 0x80))
            (lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined1 *)(param_1 + 4),uVar5);
  uVar3 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)((ulonglong)uVar3 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar4,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
  }
  (**(code **)(lVar1 + 0x88))
            (lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined1 *)(param_1 + 4),uVar5);
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar5 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403ef4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x88))(lVar1,*(undefined8 *)(param_2 + 0x18),3,uVar5);
  return;
}

