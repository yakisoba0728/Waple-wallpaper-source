// Function: FUN_1404d7c18
// Addr: 1404d7c18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7c18(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  char *in_RAX;
  uint *puVar2;
  char cVar3;
  char unaff_BL;
  
  cVar3 = (char)((ulonglong)param_2 >> 8) + (char)((ulonglong)param_1 >> 8);
  out(CONCAT11(cVar3,(char)param_2),(int)in_RAX);
  *in_RAX = *in_RAX + unaff_BL;
  *param_1 = *param_1 + param_3;
  pcVar1 = (char *)(((ulonglong)in_RAX | 0x4d44d00) + 100);
  *pcVar1 = *pcVar1 + (char)param_1;
  puVar2 = (uint *)CONCAT71((int7)(((ulonglong)in_RAX | 0x4d44d00) >> 8),(char)in_RAX);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar3,(char)param_2)) +
                   (ulonglong)((uint)puVar2 | *puVar2) * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

