// Function: FUN_1400e2e50
// Addr: 1400e2e50
// Size: 277 bytes


byte * FUN_1400e2e50(longlong param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar2 = *param_3;
  if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
    bVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0x20))();
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
LAB_1400e2ec4:
    lVar1 = *(longlong *)(param_2 + 0x38);
    pbVar4 = param_3 + 1;
    if (lVar1 != 0) {
      if ((*(uint *)(param_1 + 0xe0) & 0x800) == 0) {
        if (*(uint *)(lVar1 + 4) != 0) {
          uVar6 = 0;
          do {
            if ((*(byte *)(*(longlong *)(lVar1 + 8) + uVar6) <= bVar2) &&
               (bVar2 <= *(byte *)(*(longlong *)(lVar1 + 8) + (ulonglong)((int)uVar6 + 1)))) {
              cVar3 = '\x01';
              goto LAB_1400e2f19;
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
LAB_1400e2f19:
      if (cVar3 != '\0') goto LAB_1400e2f1d;
    }
    if ((*(longlong *)(param_2 + 0x28) == 0) ||
       ((*(byte *)((ulonglong)(bVar2 >> 3) + *(longlong *)(param_2 + 0x28)) &
        (byte)(1 << (bVar2 & 7))) == 0)) {
      bVar2 = 0;
      goto LAB_1400e2f4a;
    }
  }
  else {
    pbVar4 = (byte *)FUN_1400e53b0(bVar2,param_3,*(undefined8 *)(param_1 + 0xd8),
                                   *(longlong *)(param_2 + 0x20),*(undefined8 *)(param_1 + 200),
                                   *(undefined4 *)(param_1 + 0xe0));
    if (pbVar4 == param_3) goto LAB_1400e2ec4;
  }
LAB_1400e2f1d:
  bVar2 = 1;
LAB_1400e2f4a:
  if (bVar2 == (*(byte *)(param_2 + 0xc) & 1)) {
    pbVar4 = param_3;
  }
  return pbVar4;
}

