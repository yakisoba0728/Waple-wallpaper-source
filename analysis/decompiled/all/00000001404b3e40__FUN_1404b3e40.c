// Function: FUN_1404b3e40
// Addr: 1404b3e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3e40(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar5;
  undefined8 in_RAX;
  char *pcVar4;
  char *unaff_RSI;
  
  cVar3 = cRamac001891b7001891;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRamac001891b7001891);
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar5;
  *pcVar4 = *pcVar4 + cVar3;
  pbVar1 = (byte *)(pcVar4 + -0x48ffe76f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  param_1 = (char *)((ulonglong)param_1 & 0xffffffff);
  *param_1 = (*param_1 - (char)param_1) - CARRY1(bVar2,bVar5);
  *(char *)((ulonglong)pcVar4 & 0xffffffff) = *(char *)((ulonglong)pcVar4 & 0xffffffff) + *unaff_RSI
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

