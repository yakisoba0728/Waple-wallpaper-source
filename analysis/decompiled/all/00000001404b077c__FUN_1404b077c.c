// Function: FUN_1404b077c
// Addr: 1404b077c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b077c(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  longlong in_RAX;
  byte bVar4;
  longlong unaff_RBP;
  
  bVar4 = (byte)param_2;
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(in_RAX + -0x7e);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  pcVar2 = (char *)(unaff_RBP + 0x1a21004b +
                   (ulonglong)((int)in_RAX + 0x15825800 + (uint)CARRY1(bVar3,bVar4)));
  *pcVar2 = *pcVar2 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

