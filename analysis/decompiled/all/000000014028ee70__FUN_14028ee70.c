// Function: FUN_14028ee70
// Addr: 14028ee70
// Size: 65 bytes


longlong FUN_14028ee70(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char local_140 [280];
  
  if ((DAT_1404dc0dc & 4) == 0) {
    lVar3 = func_0x000140421870(local_140,0,0x100);
    return lVar3;
  }
  iVar2 = func_0x00014028e420(param_2,param_4,DAT_1404dc0dc >> 5 & 0xffffff01);
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      lVar3 = func_0x00014028d650(param_1,param_2,param_3);
      return lVar3;
    }
    func_0x000140421870(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) {
        return -1;
      }
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] != '\0');
    return param_2;
  }
  lVar3 = func_0x00014028dcf0(param_1,param_2,param_3);
  return lVar3;
}

