// Function: FUN_14003b820
// Addr: 14003b820
// Size: 183 bytes


undefined8 FUN_14003b820(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 local_28 [4];
  uint local_24;
  uint local_18;
  int local_14;
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar1 = FUN_140290230(param_1,local_28,3,0xffffffff);
  if (uVar1 == 0) {
    if ((local_18 >> 10 & 1) != 0) {
      if (local_14 == -0x5ffffff4) {
        cVar2 = '\x04';
        goto LAB_14003b8b7;
      }
      if (local_14 == -0x5ffffffd) {
        cVar2 = '\n';
        goto LAB_14003b8b7;
      }
    }
    cVar2 = ((local_18 & 0x10) != 0) + '\x02';
    goto LAB_14003b8b7;
  }
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar3 = uVar1 == 0x35;
LAB_14003b8ac:
      if (!bVar3) {
        cVar2 = '\0';
        goto LAB_14003b8b7;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar3 = uVar1 == 0x10b;
    goto LAB_14003b8ac;
  }
  cVar2 = '\x01';
LAB_14003b8b7:
  param_2[1] = local_24;
  *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
  *param_2 = uVar1;
  return CONCAT71(0x1404df5,cVar2 == '\x03');
}

