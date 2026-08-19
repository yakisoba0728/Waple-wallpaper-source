// Function: FUN_1400e2f20
// Addr: 1400e2f20
// Size: 229 bytes


byte * FUN_1400e2f20(longlong param_1,longlong param_2,byte *param_3)

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
LAB_1400e2f94:
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
              goto LAB_1400e2fe9;
            }
            uVar5 = (int)uVar6 + 2;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar1 + 4));
        }
        cVar3 = '\0';
      }
      else {
        cVar3 = func_0x0001400e4fe0(bVar2,lVar1,*(undefined8 *)(param_1 + 200));
      }
LAB_1400e2fe9:
      if (cVar3 != '\0') goto LAB_1400e2fed;
    }
    if ((*(longlong *)(param_2 + 0x28) == 0) ||
       ((*(byte *)((ulonglong)(bVar2 >> 3) + *(longlong *)(param_2 + 0x28)) &
        (byte)(1 << (bVar2 & 7))) == 0)) {
      bVar2 = 0;
      goto LAB_1400e301a;
    }
  }
  else {
    pbVar4 = (byte *)FUN_1400e5480(bVar2,param_3,*(undefined8 *)(param_1 + 0xd8),
                                   *(longlong *)(param_2 + 0x20),*(undefined8 *)(param_1 + 200),
                                   *(undefined4 *)(param_1 + 0xe0));
    if (pbVar4 == param_3) goto LAB_1400e2f94;
  }
LAB_1400e2fed:
  bVar2 = 1;
LAB_1400e301a:
  if (bVar2 == (*(byte *)(param_2 + 0xc) & 1)) {
    pbVar4 = param_3;
  }
  return pbVar4;
}

