// Function: FUN_1404b56a4
// Addr: 1404b56a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b56a4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  longlong unaff_RSI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(in_RAX + param_2) = *(char *)(in_RAX + param_2) + (char)param_2;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + bVar3;
  pbVar1 = (byte *)(in_RAX + -0x14ffe568);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *param_4 = *param_4 +
             (((char)in_RAX - *(char *)(ulonglong)(uint)(int)(short)in_RAX) - CARRY1(bVar2,bVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

