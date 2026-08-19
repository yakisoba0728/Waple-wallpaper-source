// Function: FUN_1404c2e34
// Addr: 1404c2e34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2e34(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong unaff_RDI;
  char *pcVar4;
  
  uVar3 = in(0x24);
  cVar1 = (char)uVar3 + -2;
  cVar2 = cVar1 + *(char *)(unaff_RDI * 4 + 0x37550212);
  pcVar4 = (char *)(ulonglong)
                   CONCAT31((int3)(CONCAT22((short)((uint)uVar3 >> 0x10),
                                            CONCAT11((char)((uint)uVar3 >> 8) + *param_1,cVar1)) >>
                                  8),cVar2);
  *pcVar4 = *pcVar4 + cVar2;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

