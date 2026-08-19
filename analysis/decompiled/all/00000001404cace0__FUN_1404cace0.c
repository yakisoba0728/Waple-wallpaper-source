// Function: FUN_1404cace0
// Addr: 1404cace0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cace0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SIL;
  undefined7 unaff_00000031;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)((longlong)in_RAX + param_1) =
       *(char *)((longlong)in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + (longlong)in_RAX) =
       *(char *)(unaff_RDI + (longlong)in_RAX) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000031,unaff_SIL - *(char *)CONCAT71(unaff_00000019,unaff_BL))
                   + 0x2a);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

