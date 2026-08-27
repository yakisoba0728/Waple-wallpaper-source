// Function: FUN_140060f20
// Addr: 140060f20
// Size: 217 bytes


undefined8 FUN_140060f20(undefined8 param_1)

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
    if ((local_18 >> 10 & 1) == 0) {
LAB_140060f88:
      cVar1 = ((local_18 & 0x10) != 0) + '\x02';
      goto LAB_140060fc6;
    }
    if (local_14 == -0x5ffffff4) {
      cVar1 = '\x04';
    }
    else {
      if (local_14 != -0x5ffffffd) goto LAB_140060f88;
      cVar1 = '\n';
    }
  }
  else {
    if (uVar2 < 0x41) {
      if (((uVar2 != 0x40) && (uVar2 != 2)) && (uVar2 != 3)) {
        bVar4 = uVar2 == 0x35;
LAB_140060fbb:
        if (!bVar4) {
          cVar1 = '\0';
          goto LAB_140060fc6;
        }
      }
    }
    else if ((uVar2 != 0x7b) && (uVar2 != 0xa1)) {
      bVar4 = uVar2 == 0x10b;
      goto LAB_140060fbb;
    }
    cVar1 = '\x01';
LAB_140060fc6:
    if (cVar1 == '\0') goto LAB_140060fe4;
  }
  if (cVar1 != '\x01') {
    FUN_140016770(local_48);
    return 1;
  }
LAB_140060fe4:
  FUN_140016770(local_48);
  return 0;
}

