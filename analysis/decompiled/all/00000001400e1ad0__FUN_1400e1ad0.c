// Function: FUN_1400e1ad0
// Addr: 1400e1ad0
// Size: 304 bytes


longlong * FUN_1400e1ad0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 local_res8 [32];
  
  bVar2 = *param_4;
  if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
    bVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0x20))();
  }
  if (*(longlong *)(param_3 + 0x20) == 0) {
LAB_1400e1b58:
    lVar1 = *(longlong *)(param_3 + 0x38);
    pbVar7 = param_4 + 1;
    if (lVar1 != 0) {
      if ((*(uint *)(param_1 + 0xe0) & 0x800) == 0) {
        if (*(uint *)(lVar1 + 4) != 0) {
          uVar6 = 0;
          do {
            if ((*(byte *)(*(longlong *)(lVar1 + 8) + uVar6) <= bVar2) &&
               (bVar2 <= *(byte *)(*(longlong *)(lVar1 + 8) + (ulonglong)((int)uVar6 + 1)))) {
              cVar3 = '\x01';
              goto LAB_1400e1bae;
            }
            uVar5 = (int)uVar6 + 2;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar1 + 4));
        }
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_1400e4f10(bVar2,lVar1,*(undefined8 *)(param_1 + 200));
      }
LAB_1400e1bae:
      if (cVar3 != '\0') goto LAB_1400e1bb2;
    }
    if ((*(longlong *)(param_3 + 0x28) == 0) ||
       ((*(byte *)((ulonglong)(bVar2 >> 3) + *(longlong *)(param_3 + 0x28)) &
        (byte)(1 << (bVar2 & 7))) == 0)) {
      bVar2 = 0;
      goto LAB_1400e1be1;
    }
  }
  else {
    puVar4 = (undefined8 *)
             FUN_1400e4bb0(local_res8,bVar2,param_4,*(undefined8 *)(param_1 + 0xd8),
                           *(longlong *)(param_3 + 0x20),*(undefined8 *)(param_1 + 200),
                           *(undefined4 *)(param_1 + 0xe0));
    pbVar7 = (byte *)*puVar4;
    if (pbVar7 == param_4) goto LAB_1400e1b58;
  }
LAB_1400e1bb2:
  bVar2 = 1;
LAB_1400e1be1:
  if (bVar2 == (*(byte *)(param_3 + 0xc) & 1)) {
    pbVar7 = param_4;
  }
  *param_2 = (longlong)pbVar7;
  return param_2;
}

