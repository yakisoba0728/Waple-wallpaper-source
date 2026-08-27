// Function: FUN_14038baf0
// Addr: 14038baf0
// Size: 179 bytes


undefined1 FUN_14038baf0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_140409750();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      puVar1 = (undefined1 *)(param_1 + uVar4 * 4);
      cVar2 = FUN_140409580(puVar1,param_2,param_1);
      if ((cVar2 == '\0') ||
         (cVar2 = FUN_1403fea20((ulonglong)(byte)puVar1[3] +
                                ((ulonglong)(byte)puVar1[2] +
                                (ulonglong)CONCAT11(*puVar1,puVar1[1]) * 0x100) * 0x100 + param_1,
                                param_2), cVar2 == '\0')) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < param_3);
  }
  return 1;
}

