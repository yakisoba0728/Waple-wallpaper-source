// Function: FUN_1404b5e34
// Addr: 1404b5e34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5e34(byte param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char acStackX_8 [32];
  
  *(byte *)(unaff_RBX * 2) = *(byte *)(unaff_RBX * 2) ^ (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(unaff_RBX + 0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  uVar3 = *in_RAX;
  *param_4 = *param_4 + (char)acStackX_8;
  acStackX_8[unaff_RSI * 8] =
       acStackX_8[unaff_RSI * 8] + (((char)in_RAX - (char)uVar3) - CARRY1(bVar2,param_1)) + '\x02';
  *(char *)(param_2 + 0x34) = *(char *)(param_2 + 0x34) + (char)param_2;
  *param_4 = *param_4 + acStackX_8[0] + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

