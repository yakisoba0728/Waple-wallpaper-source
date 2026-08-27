// Function: FUN_14028eda0
// Addr: 14028eda0
// Size: 360 bytes


longlong FUN_14028eda0(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char local_140 [280];
  
  if ((DAT_1404dc00c & 4) == 0) {
    FUN_1404217a0(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    if (param_2 == 0) {
LAB_14028eed4:
      param_2 = -1;
    }
    else {
      while (pbVar1 = (byte *)(param_1 + -1 + param_2), param_2 = param_2 + -1,
            local_140[*pbVar1] != '\0') {
        if (param_2 == 0) {
          return -1;
        }
      }
    }
  }
  else {
    iVar2 = FUN_14028e350(param_2,param_4,DAT_1404dc00c >> 5 & 0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_14028dc20(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 != 1) {
      lVar3 = FUN_14028d580(param_1,param_2,param_3);
      return lVar3;
    }
    FUN_1404217a0(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) goto LAB_14028eed4;
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] != '\0');
  }
  return param_2;
}

