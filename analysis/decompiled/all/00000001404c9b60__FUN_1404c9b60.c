// Function: FUN_1404c9b60
// Addr: 1404c9b60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9b60(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  undefined2 in_DS;
  byte *pbVar3;
  
  cRam00000000f04ca1bd = cRam00000000f04ca1bd + (char)in_EAX;
  *param_4 = *param_4 + '\b';
  uVar2 = in_EAX + 0x74050002;
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  *pbVar3 = *pbVar3 | bVar1;
  *(undefined2 *)(param_2 + 0x21004c) = in_DS;
  *pbVar3 = *pbVar3 + bVar1;
  *(undefined2 *)(param_2 + 0x21004c) = in_DS;
  *pbVar3 = *pbVar3 + bVar1;
  *param_4 = *param_4 + (*(byte *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0x44) ^ 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

