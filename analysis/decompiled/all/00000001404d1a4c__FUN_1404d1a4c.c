// Function: FUN_1404d1a4c
// Addr: 1404d1a4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1a4c(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *in_RAX;
  char *pcVar4;
  byte unaff_BL;
  longlong unaff_RDI;
  
  *(int *)param_2 = *(int *)param_2 + (int)&stack0x00000000;
  bVar1 = *param_2;
  *param_2 = *param_2 + unaff_BL;
  bVar2 = *in_RAX;
  bVar3 = *in_RAX + (byte)in_RAX;
  *in_RAX = bVar3 + CARRY1(bVar1,unaff_BL);
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) +
                                     *(char *)(unaff_RDI + param_1) +
                                     (CARRY1(bVar2,(byte)in_RAX) ||
                                     CARRY1(bVar3,CARRY1(bVar1,unaff_BL))),(char)param_2));
  *pcVar4 = *pcVar4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

