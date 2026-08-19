// Function: FUN_1404afc80
// Addr: 1404afc80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afc80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char unaff_BL;
  char in_CF;
  
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),in_CF + -0x1b);
  pcVar2[0x21004afb] = pcVar2[0x21004afb] + unaff_BL;
  *pcVar2 = *pcVar2 + in_CF + -0x1b;
  pcVar2[-0x3fffeb1b] = pcVar2[-0x3fffeb1b] + (char)((ulonglong)param_2 >> 8);
  uVar1 = in(0x14);
  *(char *)((ulonglong)uVar1 + 0x21004afb) = *(char *)((ulonglong)uVar1 + 0x21004afb) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

