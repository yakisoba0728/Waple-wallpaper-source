// Function: FUN_1404bf9cc
// Addr: 1404bf9cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bf9ff) overlaps instruction at (ram,0x0001404bf9fe)
    */

void FUN_1404bf9cc(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 in_RAX;
  char cVar4;
  longlong unaff_RSI;
  int *unaff_RDI;
  char *pcVar3;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + cVar4;
  cVar2 = (char)in_RAX + cVar4;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  if (cVar2 == '\0' || SCARRY1((char)in_RAX,cVar4) != cVar2 < '\0') {
    *param_1 = *param_1 ^ cVar2 + 0x60U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *pcVar3;
  *pcVar3 = *pcVar3 + (char)param_1;
  if (*pcVar3 == '\0' || SCARRY1(cVar1,(char)param_1) != *pcVar3 < '\0') {
    *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI +
               (int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11(cVar4 + *pcVar3,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

