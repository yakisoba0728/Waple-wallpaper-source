// Function: FUN_140018e60
// Addr: 140018e60
// Size: 205 bytes


undefined8 FUN_140018e60(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  bool bVar4;
  undefined8 **local_48 [3];
  ulonglong local_30;
  undefined1 local_28 [16];
  uint local_18;
  int local_14;
  
  FUN_140016600(local_48,param_1);
  pppuVar3 = local_48;
  if (7 < local_30) {
    pppuVar3 = (undefined8 ***)local_48[0];
  }
  uVar2 = FUN_140290230(pppuVar3,local_28,3,0xffffffff);
  if (uVar2 == 0) {
    if (((local_18 >> 10 & 1) != 0) && ((local_14 == -0x5ffffff4 || (local_14 == -0x5ffffffd))))
    goto LAB_140018f18;
    cVar1 = ((local_18 & 0x10) != 0) + '\x02';
  }
  else {
    if (uVar2 < 0x41) {
      if (((uVar2 != 0x40) && (uVar2 != 2)) && (uVar2 != 3)) {
        bVar4 = uVar2 == 0x35;
LAB_140018eef:
        if (!bVar4) {
          cVar1 = '\0';
          goto LAB_140018efa;
        }
      }
    }
    else if ((uVar2 != 0x7b) && (uVar2 != 0xa1)) {
      bVar4 = uVar2 == 0x10b;
      goto LAB_140018eef;
    }
    cVar1 = '\x01';
  }
LAB_140018efa:
  if ((cVar1 == '\x03') && (uVar2 == 0)) {
    FUN_140016770(local_48);
    return 1;
  }
LAB_140018f18:
  FUN_140016770(local_48);
  return 0;
}

