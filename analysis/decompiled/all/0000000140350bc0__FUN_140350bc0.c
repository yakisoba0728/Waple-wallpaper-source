// Function: FUN_140350bc0
// Addr: 140350bc0
// Size: 326 bytes


undefined8 FUN_140350bc0(longlong param_1,undefined8 *param_2)

{
  ushort *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_e8 [120];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  longlong local_38;
  
  if (param_1 == 0) {
    return 0x60;
  }
  puVar1 = (ushort *)param_2[1];
  if (puVar1 != (ushort *)0x0) {
    if ((puVar1[1] == 0) || (*puVar1 == 0)) {
      return 0;
    }
    if (((*(longlong *)(puVar1 + 0xc) != 0) && (*(longlong *)(puVar1 + 4) != 0)) &&
       ((uint)puVar1[1] ==
        *(ushort *)(*(longlong *)(puVar1 + 0xc) + -2 + (ulonglong)*puVar1 * 2) + 1)) {
      if ((*(byte *)(param_2 + 2) & 3) != 0) {
        return 0x13;
      }
      piVar2 = (int *)*param_2;
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] == 0) {
          return 0;
        }
        if (*piVar2 == 0) {
          return 0;
        }
        if (*(longlong *)(piVar2 + 4) != 0) {
          local_70 = *(undefined8 *)puVar1;
          uStack_68 = *(undefined8 *)(puVar1 + 4);
          local_60 = *(undefined4 *)(puVar1 + 8);
          uStack_5c = *(undefined4 *)(puVar1 + 10);
          uStack_58 = *(undefined4 *)(puVar1 + 0xc);
          uStack_54 = *(undefined4 *)(puVar1 + 0xe);
          local_50 = *(undefined8 *)(puVar1 + 0x10);
          local_48 = *piVar2 + -1;
          local_44 = piVar2[1] + -1;
          local_40 = piVar2[2];
          local_38 = *(longlong *)(piVar2 + 4);
          if (0 < local_40) {
            local_38 = local_40 * local_48 + local_38;
          }
          uVar3 = FUN_140352220(local_e8);
          return uVar3;
        }
      }
      return 6;
    }
  }
  return 0x14;
}

