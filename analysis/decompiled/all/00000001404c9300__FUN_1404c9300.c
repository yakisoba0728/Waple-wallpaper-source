// Function: FUN_1404c9300
// Addr: 1404c9300
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9300(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_2);
  *pcVar1 = (*pcVar1 - (char)((ulonglong)param_2 >> 8)) - in_CF;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + unaff_BL;
  if (!CARRY1(bVar2,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

