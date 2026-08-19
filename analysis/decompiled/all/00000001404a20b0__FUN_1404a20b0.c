// Function: FUN_1404a20b0
// Addr: 1404a20b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a20b0(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  char unaff_SPL;
  
  cVar2 = in(param_2);
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1[0x790004b8] = pcVar1[0x790004b8] + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

