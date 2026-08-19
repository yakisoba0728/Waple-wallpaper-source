// Function: FUN_1404bd91c
// Addr: 1404bd91c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd91c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 in_RAX;
  char unaff_SPL;
  char *pcVar2;
  
  cVar1 = (char)in_RAX + -0x28;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[0x16002546] = pcVar2[0x16002546] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

