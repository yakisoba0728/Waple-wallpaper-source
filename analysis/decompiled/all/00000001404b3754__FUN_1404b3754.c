// Function: FUN_1404b3754
// Addr: 1404b3754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3754(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  char unaff_SPL;
  byte *unaff_RDI;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar2 = (char)in_RAX + (char)*in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  pcVar4[param_1] = pcVar4[param_1] + (char)((ulonglong)param_2 >> 8);
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)param_2;
  *pcVar4 = (*pcVar4 - cVar2) - CARRY1(bVar1,(byte)param_2);
  uVar3 = (int)pcVar4 + 0x2c001817;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

