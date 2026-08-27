// Function: FUN_140413830
// Addr: 140413830
// Size: 165 bytes


undefined8 FUN_140413830(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar1 = param_1;
  while( true ) {
    if (iVar5 == 0) {
      return 0;
    }
    uVar4 = (uint)pbVar1[2] * 0x100 + (uint)pbVar1[3];
    if (uVar4 == 0) {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar3 = param_1 + uVar4;
    }
    cVar2 = FUN_14038e560(param_2,(uint)*pbVar3 * 0x100 + (uint)pbVar3[1],pbVar3 + 4,*param_3,
                          param_3[1]);
    if (cVar2 != '\0') break;
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = iVar5 + -1;
    pbVar1 = pbVar1 + 2;
  }
  return 1;
}

