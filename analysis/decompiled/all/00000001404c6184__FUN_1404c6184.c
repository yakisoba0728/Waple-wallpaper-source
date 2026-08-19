// Function: FUN_1404c6184
// Addr: 1404c6184
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6184(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint *in_RAX;
  char cVar3;
  longlong unaff_RDI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  pcVar1 = &stack0x00000000 + CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar3;
  if (!SCARRY1(cVar2,cVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x4002ef8) = *(char *)(unaff_RDI + 0x4002ef8) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

