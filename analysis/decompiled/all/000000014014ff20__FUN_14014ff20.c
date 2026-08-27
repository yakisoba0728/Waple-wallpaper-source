// Function: FUN_14014ff20
// Addr: 14014ff20
// Size: 74 bytes


ulonglong FUN_14014ff20(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  sVar2 = strlen(param_2);
  uVar4 = 0;
  uVar3 = 0xcbf29ce484222325;
  if (sVar2 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
      uVar3 = (uVar3 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < sVar2);
  }
  return uVar3;
}

