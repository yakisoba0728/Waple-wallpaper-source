// Function: FUN_1403ef170
// Addr: 1403ef170
// Size: 449 bytes


void FUN_1403ef170(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *local_48;
  longlong *local_40;
  char *local_38;
  
  lVar2 = *(longlong *)(param_2 + 8);
  uVar3 = (uint)*(byte *)(lVar2 + 0x13) * 0x10000 + (uint)*(byte *)(lVar2 + 0x14) * 0x100 +
          (uint)*(byte *)(lVar2 + 0x12) * 0x1000000 + (uint)*(byte *)(lVar2 + 0x15);
  if (uVar3 == 0) {
    pbVar6 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar6 = (byte *)((ulonglong)uVar3 + lVar2);
  }
  local_48 = (char *)(param_2 + 0x68);
  local_40 = (longlong *)0x0;
  cVar1 = *local_48;
  *local_48 = cVar1 == '\0';
  if (*(undefined8 **)(param_2 + 0x70) == (undefined8 *)0x0) {
    *(char ***)(param_2 + 0x70) = &local_48;
  }
  else {
    if (cVar1 == '\0') {
      *(undefined8 *)(param_2 + 0x70) = **(undefined8 **)(param_2 + 0x70);
    }
    local_40 = *(longlong **)(param_2 + 0x78);
    *local_40 = (longlong)&local_48;
  }
  *(char ***)(param_2 + 0x78) = &local_48;
  uVar3 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 3) * 0x10000 +
          (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 5);
  if (uVar3 < *(byte *)(param_1 + 1) + uVar3) {
    do {
      local_38 = (char *)(ulonglong)uVar3;
      if ((*(char ***)(local_48 + 8) != &local_48) && ((*(char ***)(local_48 + 8))[2] == local_38))
      break;
      if (uVar3 < (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
                  (uint)pbVar6[3]) {
        pbVar5 = pbVar6 + (longlong)(local_38 + 1) * 4;
      }
      else {
        pbVar5 = (byte *)&DAT_14045dd10;
      }
      uVar4 = (uint)pbVar5[3] +
              (uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100 + (uint)*pbVar5 * 0x1000000;
      if (uVar4 == 0) {
        pbVar5 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar5 = pbVar6 + uVar4;
      }
      FUN_1403f6f20(param_2,pbVar5);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 4) * 0x100
                     + (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 1) +
                     (uint)*(byte *)(param_1 + 5));
  }
  *(longlong **)(local_48 + 0x10) = local_40;
  if (local_40 != (longlong *)0x0) {
    *local_40 = (longlong)local_48;
  }
  if (*local_48 != '\0') {
    *(undefined8 *)(local_48 + 8) = *(undefined8 *)(*(longlong *)(local_48 + 8) + 8);
  }
  *local_48 = *local_48 == '\0';
  return;
}

