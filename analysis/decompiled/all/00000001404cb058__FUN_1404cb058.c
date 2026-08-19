// Function: FUN_1404cb058
// Addr: 1404cb058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb058(char *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar3;
  
  bVar2 = (byte)in_RAX | *(byte *)(unaff_RBP + 0x33);
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *pcVar3 = *pcVar3 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

