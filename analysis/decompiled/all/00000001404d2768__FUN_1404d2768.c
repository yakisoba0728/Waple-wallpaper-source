// Function: FUN_1404d2768
// Addr: 1404d2768
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2768(char *param_1,undefined8 param_2,char param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char cVar4;
  int unaff_EBX;
  int *unaff_RSI;
  byte *pbVar3;
  
  uVar2 = in_EAX ^ 0x35fb8200;
  pbVar3 = (byte *)(ulonglong)uVar2;
  pbVar3[0x26] = pbVar3[0x26] + (byte)in_EAX;
  *param_4 = *param_4 + param_3;
  *pbVar3 = *pbVar3 | (byte)in_EAX;
  bVar1 = in(0xe);
  cVar4 = (char)((int)uVar2 >> 0x1f);
  *param_1 = *param_1 + cVar4;
  *param_1 = *param_1 + cVar4;
  *(int *)(param_1 + (ulonglong)((int)uVar2 >> 0x1f | 0xb600c70) + 0xee49c00) =
       *(int *)(param_1 + (ulonglong)((int)uVar2 >> 0x1f | 0xb600c70) + 0xee49c00) + unaff_EBX;
  *param_1 = *param_1 + (bVar1 ^ 0xf);
  *param_1 = *param_1 + (bVar1 ^ 0xf);
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

